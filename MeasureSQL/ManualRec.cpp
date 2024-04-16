//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ManualRec.h"
#include "data1.h"
#include "Rec.h"
#include "data2.h"
#include "ProtokolData.h"
#include "Data.h"
#include "protokol.h"
#include "PassportNumbers.h"
#include "Data_RQ.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "VrControls"
#pragma link "VrProgressBar"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma link "RzChkLst"
#pragma link "RzLstBox"
#pragma link "ToolPanels"
#pragma link "AdvNavBar"
#pragma link "VrButtons"
#pragma link "AdvGlassButton"
#pragma link "frxBarcode"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "frxExportXLS"
#pragma link "frxGradient"
#pragma resource "*.dfm"
TRecForm *RecForm;
//---------------------------------------------------------------------------
__fastcall TRecForm::TRecForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRecForm::btnCloseClick(TObject *Sender)
{
RecForm->Hide();

}
//---------------------------------------------------------------------------
void __fastcall TRecForm::FormShow(TObject *Sender)
{
ProtokolForm->ActionList1->Actions[18]->Execute();
Protokol_Data->Protokol_Types->Active=false;
Protokol_Data->Protokol_Types->SQL->Clear();
Protokol_Data->Protokol_Types->SQL->Add("select distinct `Name` from print_protokol_types order by Name");
Protokol_Data->Protokol_Types->Active=true;
 edtProtokol->Items->Clear();
Protokol_Data->Protokol_Types->First();
for (int hh=0;hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
    edtProtokol->Items->Add(Protokol_Data->Protokol_Types->FieldByName("Name")->AsString);
    Protokol_Data->Protokol_Types->Next();
}
Protokol_Data->Protokol_Types->Active=false;
DataModule2->ResonatorType->Active=true;
DataModule2->ResonatorType->First();
DataModule2->psi->Active=true;
edtType->Items->Clear();
cmbType->Items->Clear();

for (int i=0;i<DataModule2->ResonatorType->RecordCount;i++){
                    edtType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    cmbType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    DataModule2->ResonatorType->Next();
                    }
  DataModule3->psi_measure_parameters->Active=true;
  DataModule3->psi_measure_parameters->First();
  listParameters->Clear();
  
  for (int i=0;i<DataModule3->psi_measure_parameters->RecordCount;i++){
                    listParameters->Items->Add(DataModule3->psi_measure_parameters->FieldByName("Name")->AsString);

                    DataModule3->psi_measure_parameters->Next();
                    }
  RQ_Data->LotNumbers->Active=false;
 RQ_Data->LotNumbers->SQL->Clear();
 RQ_Data->LotNumbers->SQL->Add("Select distinct `Name` from `Извещение`");
 RQ_Data->LotNumbers->Active=true;
 RQ_Data->LotNumbers->First();
 LotNumber->Items->Clear();
 for (int i=0; i<RQ_Data->LotNumbers->RecordCount; i++){
      LotNumber->Items->Add(RQ_Data->LotNumbers->FieldByName("Name")->AsString);
      RQ_Data->LotNumbers->Next();
 }                  

     edtSpc->Enabled=false;
     edtType->Enabled=true;
     
     


}
//---------------------------------------------------------------------------

void __fastcall TRecForm::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Name` from  specification where NameR='"+edtType->Text+"' Order by Name");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }
}
//---------------------------------------------------------------------------


void __fastcall TRecForm::edtSpcChange(TObject *Sender)
{
edtMsk->Items->Clear();
AnsiString S;
VrProgressBar1->Position=0;


DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select distinct `msk` from psidata where Spc='"+edtSpc->Text+"' ORDER BY msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;

edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
           edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;
      }
 edtMsk->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::btnRecClick(TObject *Sender)
{

      AnsiString S;
      int ColCount=1;
       for (int j=0;j<MRecForm->RzStringGrid1->ColCount;j++){
           for (int i=0;i<MRecForm->RzStringGrid1->RowCount;i++){
               MRecForm->RzStringGrid1->Cells[j][i]="";
             }
          }
      MRecForm->RzStringGrid1->Cells[0][0]="Номер";
      for(int j=0;j<listParameters->Count;j++){
        if (listParameters->ItemState[j]!=0){
        ColCount++;
        MRecForm->RzStringGrid1->ColCount=ColCount;
      AnsiString type=listParameters->ItemCaption(j);
      AnsiString typeField;
      DataModule3->psi_measure_parameters->First();
      for (int i=0;i<DataModule3->psi_measure_parameters->RecordCount;i++){
          if (DataModule3->psi_measure_parameters->FieldByName("Name")->AsString==type){
           typeField=DataModule3->psi_measure_parameters->FieldByName("Field")->AsString;
           break;
          }
         DataModule3->psi_measure_parameters->Next();
      }
      MRecForm->RzStringGrid1->Cells[ColCount-1][0]=type;

    MRecForm->RzStringGrid1->Cells[j+1][0]=type;
    if (cmb_ID->Text.IsEmpty()){
    if (edtM->ItemIndex==-1){
      S="Select * from psidata where msk='"+edtMsk->Text+"' ORDER BY N";
    }
    else {
    S="Select * from psidata where msk='"+edtMsk->Text+"' and `MSK-M`='"+edtM->Text+"' ORDER BY N";
    }
    }
    else {

      S="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ORDER BY N";
    }
    if (!cmb_Protokol_ID->Text.IsEmpty()){

     S="Select * from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"' ORDER BY N";
    }
           DataModule2->psiData->Active=false;
           DataModule2->psiData->SQL->Clear();
           DataModule2->psiData->SQL->Add(S);
           DataModule2->psiData->Active=true;
           DataModule2->psiData->First();
           MRecForm->RzStringGrid1->RowCount=DataModule2->psiData->RecordCount+1;
           if (!btnGood->Checked){
                 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                           MRecForm->RzStringGrid1->Cells[0][i+1]=DataModule2->psiData->FieldByName("N")->AsString;
                           if (DataModule2->psiData->FieldByName(typeField)->AsString!="100000"){
                                 MRecForm->RzStringGrid1->Cells[ColCount-1][i+1]=DataModule2->psiData->FieldByName(typeField)->AsString;
                               }
                             else {
                               MRecForm->RzStringGrid1->Cells[ColCount-1][i+1]="";

                             }
                           DataModule2->psiData->Next();
                  }
          }
          if (btnGood->Checked){
                  int k=0;
                          for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                              if (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                     MRecForm->RzStringGrid1->Cells[0][k+1]=DataModule2->psiData->FieldByName("N")->AsString;
                                if (DataModule2->psiData->FieldByName(typeField)->AsString!="100000"){
                                     MRecForm->RzStringGrid1->Cells[ColCount-1][k+1]=DataModule2->psiData->FieldByName(typeField)->AsString;
                                }
                                else {
                                    MRecForm->RzStringGrid1->Cells[ColCount-1][k+1]="";
                                }
                                k++;
                             }
                 DataModule2->psiData->Next();
               }
            MRecForm->RzStringGrid1->RowCount=k+1;

          }
      }
      }
    MRecForm->Show();


}
//---------------------------------------------------------------------------


void __fastcall TRecForm::btnGoodClick(TObject *Sender)
{
if (btnGood->Checked){
     btnGood->Checked=false;


    }
if (btnGood->Checked){
     btnGood->Checked=false;


    }
}
//---------------------------------------------------------------------------




void __fastcall TRecForm::VrShadowButton1Click(TObject *Sender)
{
RecForm->Hide();        
}
//---------------------------------------------------------------------------


void __fastcall TRecForm::AdvGlassButton1Click(TObject *Sender)
{
/*
if (viewNumber->Visible){
         viewNumber->Visible=false;
         btnAll->Visible=false;
         btnClear->Visible=false;
        lCount->Visible=false;
}
else {
        viewNumber->Visible=true;
        btnAll->Visible=true;
        btnClear->Visible=true;
        lCount->Visible=true;
}
*/
 PNForm->Show();
}
//---------------------------------------------------------------------------





void __fastcall TRecForm::btnPrintClick(TObject *Sender)
{

       
        if (edtProtokol->ItemIndex!=-1){
                  ProtokolForm->edtProtokol->ItemIndex=edtProtokol->ItemIndex;
        }

     ProtokolForm->ActionList1->Actions[17]->Execute();
   AdvToolPanel1->Hide();

}
//---------------------------------------------------------------------------

void __fastcall TRecForm::btnAllClick(TObject *Sender)
{
 int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  viewNumber->ItemState[i]=cbChecked;
                  k++;
   }
  lCount->Caption=FloatToStr(k);
  lCount->Repaint();        
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::btnClearClick(TObject *Sender)
{

for(int i=0;i<viewNumber->Count;i++){
                  viewNumber->ItemState[i]=cbUnchecked;
   }
  lCount->Caption="Не выбрано";
  lCount->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::viewNumberChange(TObject *Sender, int Index,
      TCheckBoxState NewState)
{
int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  if (viewNumber->ItemState[i]!=cbUnchecked){
                                k++;
                      }


   }
  lCount->Caption=FloatToStr(k);
  lCount->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::btnSetDateClick(TObject *Sender)
{
DataModule2->SetSqlDate->SQL->Clear();
DataModule2->SetSqlDate->SQL->Add("Update psidata set `MakeDate`='"+edtDate->Text+"' WHERE `msk`='"+edtMsk->Text+"'");
DataModule2->SetSqlDate->Execute();
ShowMessage("Дата установлена");        
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::btnSetDate1Click(TObject *Sender)
{
DataModule2->SetSqlDate->SQL->Clear();
DataModule2->SetSqlDate->SQL->Add("Update psidata set `MakeDate1`='"+edtDate1->Text+"' WHERE `msk`='"+edtMsk->Text+"'");
DataModule2->SetSqlDate->Execute();
ShowMessage("Дата установлена");
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::edtProtokolChange(TObject *Sender)
{
if (edtProtokol->Text=="Паспорт" || edtProtokol->Text=="Протокол ВП-РК" || edtProtokol->Text=="Паспорт (Приложение)"){

   edtDate->Visible=true;
   btnSetDate->Visible=true;
   Label10->Visible=true;
   edtDate1->Visible=true;
   btnSetDate1->Visible=true;
   Label12->Visible=true;

}
else {

 edtDate->Visible=false;
   btnSetDate->Visible=false;
   Label10->Visible=false;
    edtDate1->Visible=false;
   btnSetDate1->Visible=false;
   Label12->Visible=false;
}
  if (edtProtokol->ItemIndex!=-1){
  ProtokolForm->edtProtokol->ItemIndex=edtProtokol->ItemIndex;
  }
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::cmbTypeChange(TObject *Sender)
{
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Name` from  specification where NameR='"+cmbType->Text+"' Order by Name");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
cmbSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             cmbSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }
   edtSpc->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TRecForm::btnNumbers2Click(TObject *Sender)
{
if (viewNumber2->Visible){
 viewNumber2->Visible=false;
btnAll2->Visible=false;
btnClear2->Visible=false;
lCount2->Visible=false;
}
else {
viewNumber2->Visible=true;
btnAll2->Visible=true;
btnClear2->Visible=true;
lCount2->Visible=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::edtAn2Click(TObject *Sender)
{
  edtAn->Checked=edtAn2->Checked;
    DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString S;
        S="Select `N`,`MakeDate`,`MakeDate1`,`MSK-M`,`Status`,`Status2`,`Spc`,`PrintSelect` from psidata where ";

       if (edtMsk->ItemIndex!=-1){
       S=S+"msk='"+edtMsk->Text+"' ";

       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtM->ItemIndex!=-1){
             S=S+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S=S+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }

       }

       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";

       }
       if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){
        S="Select `N`,`MakeDate`,`MakeDate1`,`MSK-M`,`Status`,`Status2`,`Spc`,`PrintSelect` from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
        if (!cmb_Protokol_ID->Text.IsEmpty()){

      S="Select `N`,`MakeDate`,`MakeDate1`,`MSK-M`,`Status`,`Status2`,`Spc`,`PrintSelect` from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"' ";
     }
      if (edtAn->Checked){
       S=S+"and Status2='Good' and Status!='Аномал.'";

       }
       if (edt->Checked){
       S=S+"and Status='Годен' ";

       }
       S=S+"ORDER BY N";

DataModule2->psiData->SQL->Add(S);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtDate->Text=DataModule2->psiData->FieldByName("MakeDate")->AsString;
edtDate1->Text=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
edtM->Items->Clear();
viewNumber->Items->Clear();
viewNumber2->Items->Clear();
int k=0;

AnsiString S1;
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
          S1=DataModule2->psiData->FieldByName("MSK-M")->AsString;
          int p=1;
          if (edt->Checked & edtAn->Checked){
           if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }
           }
           else if (edt->Checked & !edtAn->Checked){
              if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else if (edtAn->Checked & !edt->Checked){
              if  (DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else {
                viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;

           }

          for (int j=0;j<edtM->Items->Count; j++){
               if (S1==edtM->Items->Strings[j]){
               p=0;
               break;
               }
             p=1;
          }
          if (p==1){
           edtM->Items->Add(S1);

          }
         DataModule2->psiData->Next();
    }
    lCount->Caption=k;
    lCount2->Caption=k;



}
//---------------------------------------------------------------------------

void __fastcall TRecForm::edtGoodClick(TObject *Sender)
{
edt->Checked=edtGood->Checked;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString S;
        S="Select * from psidata where ";

       if (edtMsk->ItemIndex!=-1){
       S=S+"msk='"+edtMsk->Text+"' ";

       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtM->ItemIndex!=-1){
             S=S+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S=S+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }

       }

       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";

       }
       if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){
        S="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
        if (!cmb_Protokol_ID->Text.IsEmpty()){

      S="Select * from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"' ";
     }
      if (edtAn->Checked){
       S=S+"and Status2='Good' and Status!='Аномал.'";

       }
       if (edt->Checked){
       S=S+"and Status='Годен' ";

       }
       S=S+"ORDER BY N";

DataModule2->psiData->SQL->Add(S);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtDate->Text=DataModule2->psiData->FieldByName("MakeDate")->AsString;
edtDate1->Text=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
edtM->Items->Clear();
viewNumber->Items->Clear();
viewNumber2->Items->Clear();
int k=0;

AnsiString S1;
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
          S1=DataModule2->psiData->FieldByName("MSK-M")->AsString;
          int p=1;
          if (edt->Checked & edtAn->Checked){
           if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }
           }
           else if (edt->Checked & !edtAn->Checked){
              if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else if (edtAn->Checked & !edt->Checked){
              if  (DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else {
                viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;

           }

          for (int j=0;j<edtM->Items->Count; j++){
               if (S1==edtM->Items->Strings[j]){
               p=0;
               break;
               }
             p=1;
          }
          if (p==1){
           edtM->Items->Add(S1);

          }
         DataModule2->psiData->Next();
    }
    lCount->Caption=k;
    lCount2->Caption=k;
}
//---------------------------------------------------------------------------


void __fastcall TRecForm::edtAnClick(TObject *Sender)
{
edtAn2->Checked=edtAn->Checked;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString S;
        S="Select * from psidata where ";

       if (edtMsk->ItemIndex!=-1){
       S=S+"msk='"+edtMsk->Text+"' ";

       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtM->ItemIndex!=-1){
             S=S+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S=S+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }

       }

       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";

       }
       if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){
        S="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
        if (!cmb_Protokol_ID->Text.IsEmpty()){

      S="Select * from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"' ";
     }
      if (edtAn->Checked){
       S=S+"and Status2='Good' and Status!='Аномал.'";

       }
       if (edt->Checked){
       S=S+"and Status='Годен' ";

       }
       S=S+"ORDER BY N";

DataModule2->psiData->SQL->Add(S);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtDate->Text=DataModule2->psiData->FieldByName("MakeDate")->AsString;
edtDate1->Text=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
edtM->Items->Clear();
viewNumber->Items->Clear();
viewNumber2->Items->Clear();
int k=0;

AnsiString S1;
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
          S1=DataModule2->psiData->FieldByName("MSK-M")->AsString;
          int p=1;
          if (edt->Checked & edtAn->Checked){
           if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }
           }
           else if (edt->Checked & !edtAn->Checked){
              if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else if (edtAn->Checked & !edt->Checked){
              if  (DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else {
                viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;

           }

          for (int j=0;j<edtM->Items->Count; j++){
               if (S1==edtM->Items->Strings[j]){
               p=0;
               break;
               }
             p=1;
          }
          if (p==1){
           edtM->Items->Add(S1);

          }
         DataModule2->psiData->Next();
    }
    lCount->Caption=k;
    lCount2->Caption=k;
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::edtClick(TObject *Sender)
{
edtGood->Checked=edt->Checked;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString S;
        S="Select * from psidata where ";

       if (edtMsk->ItemIndex!=-1){
       S=S+"msk='"+edtMsk->Text+"' ";

       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtM->ItemIndex!=-1){
             S=S+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S=S+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }

       }

       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";

       }
       if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){
        S="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
        if (!cmb_Protokol_ID->Text.IsEmpty()){

      S="Select * from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"' ";
     }
      if (edtAn->Checked){
       S=S+"and Status2='Good' and Status!='Аномал.'";

       }
       if (edt->Checked){
       S=S+"and Status='Годен' ";

       }
       S=S+"ORDER BY N";

DataModule2->psiData->SQL->Add(S);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtDate->Text=DataModule2->psiData->FieldByName("MakeDate")->AsString;
edtDate1->Text=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
edtM->Items->Clear();
viewNumber->Items->Clear();
viewNumber2->Items->Clear();
int k=0;

AnsiString S1;
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
          S1=DataModule2->psiData->FieldByName("MSK-M")->AsString;
          int p=1;
          if (edt->Checked & edtAn->Checked){
           if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }
           }
           else if (edt->Checked & !edtAn->Checked){
              if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else if (edtAn->Checked & !edt->Checked){
              if  (DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else {
                viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;

           }

          for (int j=0;j<edtM->Items->Count; j++){
               if (S1==edtM->Items->Strings[j]){
               p=0;
               break;
               }
             p=1;
          }
          if (p==1){
           edtM->Items->Add(S1);

          }
         DataModule2->psiData->Next();
    }
    lCount->Caption=k;
    lCount2->Caption=k;
}
//---------------------------------------------------------------------------


void __fastcall TRecForm::btnSetSpcClick(TObject *Sender)
{
//***************************************************************************************************************************
AnsiString Sql;
boolean k=true;
boolean k1;
AnsiString SqlSpc;
double Fmax,Fmin,Rmax,Rmin,RRmax,RRmin,Qmax,Qmin,C0max,C0min,Cqmax,Cqmin,FTmax,FTmin,SRmax,SRmin,Fmaxmax,Fminmin,Smax,Smin,Mmax,Mmin,Rmaxmax,Rmaxmin;
double ShMax,ShMin,RR1max,RR1min,Rc_Rbmax,Tminmax,Tminmin,Tmaxmax,Tmaxmin,Fptpmax,Fptpmin,C0_C1max,C0_C1min,Fptp2max,Fptp2min;
double old1min,old1max,RR2max,RR2min,RR3max,RR3min,FnastrHz,RR4max,RR5max,RR4min,RR5min;

//***************************************************************************************************************************
      if (edtMsk->ItemIndex!=-1){

            if (cmb_ID->Text!="" & !cmb_ID->Text.IsEmpty()){
              Sql="Select SQL_NO_CACHE* from psidata where Measure_ID='"+cmb_ID->Text+"'";
             }
             else {
               Sql="Select SQL_NO_CACHE * from psidata where MSK='"+edtMsk->Text+"'";

             }
                 if (edtAn2->Checked){
                  Sql=Sql+" and Status2='Good'";

                 }
                 if (edtGood->Checked){
                  Sql=Sql+" and Status='Годен'";

                 }
                 if (edtM->ItemIndex!=-1){
                  Sql=Sql+" and MSK-M='"+edtM->Text+"'";

                 }

            Protokol_Data->psiData->Active=false;
            Protokol_Data->psiData->SQL->Clear();
            Protokol_Data->psiData->SQL->Add(Sql);
            Protokol_Data->psiData->Active=true;
            Protokol_Data->psiData->First();


//***********************************************************************************************************************
  Protokol_Data->Spc->Active=false;
                Protokol_Data->Spc->SQL->Clear();
                //SqlSpc="Select * from specification where Name='"+cmbSpc->Text+"'";
                Protokol_Data->Spc->SQL->Add("Select SQL_NO_CACHE * from specification");
                Protokol_Data->Spc->Active=true;
                Protokol_Data->Spc->First();
      for (int i=0;i<Protokol_Data->Spc->RecordCount;i++){

        if (Protokol_Data->Spc->FieldByName("Name")->AsString==cmbSpc->Text){

           break;
            }
        Protokol_Data->Spc->Next();
      }
               if (Protokol_Data->Spc->FieldByName("Fmax")->AsString!="no"){
             Fmax=Protokol_Data->Spc->FieldByName("Fmax")->AsFloat;
          }
          if (Protokol_Data->Spc->FieldByName("Fmin")->AsString!="no"){
               Fmin=Protokol_Data->Spc->FieldByName("Fmin")->AsFloat;
             }
           if (Protokol_Data->Spc->FieldByName("FnastrHZ")->AsFloat>0){
               FnastrHz=Protokol_Data->Spc->FieldByName("FnastrHz")->AsFloat;
             }

           if (Protokol_Data->Spc->FieldByName("Rmax")->AsString!="no"){
               Rmax=Protokol_Data->Spc->FieldByName("Rmax")->AsFloat;
             }
             if (Protokol_Data->Spc->FieldByName("Rmin")->AsString!="no"){
                    Rmin=Protokol_Data->Spc->FieldByName("Rmin")->AsFloat;
                    }
            if (Protokol_Data->Spc->FieldByName("Qmax")->AsString!="no"){
                  Qmax=Protokol_Data->Spc->FieldByName("Qmax")->AsFloat;
               }
        if (Protokol_Data->Spc->FieldByName("Qmin")->AsString!="no"){
             Qmin=Protokol_Data->Spc->FieldByName("Qmin")->AsFloat;
             }
          if (Protokol_Data->Spc->FieldByName("RRmax")->AsString!="no"){
              RRmax=Protokol_Data->Spc->FieldByName("RRmax")->AsFloat;
             }
           if (Protokol_Data->Spc->FieldByName("RRmin")->AsString!="no"){
               RRmin=Protokol_Data->Spc->FieldByName("RRmin")->AsFloat;
              }
           if (Protokol_Data->Spc->FieldByName("Rmaxmax")->AsString!="no"){
              Rmaxmax=Protokol_Data->Spc->FieldByName("Rmaxmax")->AsFloat;
             }
           if (Protokol_Data->Spc->FieldByName("Rmaxmin")->AsString!="no"){
               Rmaxmin=Protokol_Data->Spc->FieldByName("Rmaxmin")->AsFloat;
              }
              if (Protokol_Data->Spc->FieldByName("C0max")->AsString!="no"){
                   C0max=Protokol_Data->Spc->FieldByName("C0max")->AsFloat;
                  }
               if (Protokol_Data->Spc->FieldByName("C0min")->AsString!="no"){
                      C0min=Protokol_Data->Spc->FieldByName("C0min")->AsFloat;
                     }
              if (Protokol_Data->Spc->FieldByName("Cqmax")->AsString!="no"){
                  Cqmax=Protokol_Data->Spc->FieldByName("Cqmax")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("Cqmin")->AsString!="no"){
                   Cqmin=Protokol_Data->Spc->FieldByName("Cqmin")->AsFloat;
                   }
                if (Protokol_Data->Spc->FieldByName("FTmax")->AsString!="no"){
                  FTmax=Protokol_Data->Spc->FieldByName("FTmax")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("FTmin")->AsString!="no"){
                   FTmin=Protokol_Data->Spc->FieldByName("FTmin")->AsFloat;
                   }

                if (Protokol_Data->Spc->FieldByName("Rsp2max")->AsString!="no"){
                  SRmax=Protokol_Data->Spc->FieldByName("Rsp2max")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("Rsp2min")->AsString!="no"){
                   SRmin=Protokol_Data->Spc->FieldByName("Rsp2min")->AsFloat;
                   }

                  if (Protokol_Data->Spc->FieldByName("Fmaxmax")->AsString!="no"){
                  Fmaxmax=Protokol_Data->Spc->FieldByName("Fmaxmax")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("Fminmin")->AsString!="no"){
                   Fminmin=Protokol_Data->Spc->FieldByName("Fminmin")->AsFloat;
                   }
                  if (Protokol_Data->Spc->FieldByName("Smax")->AsString!="no"){
                  Smax=Protokol_Data->Spc->FieldByName("Smax")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("Smin")->AsString!="no"){
                   Smin=Protokol_Data->Spc->FieldByName("Smin")->AsFloat;
                   }
                  if (Protokol_Data->Spc->FieldByName("Mmax")->AsString!="no"){
                  Mmax=Protokol_Data->Spc->FieldByName("Mmax")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("Mmin")->AsString!="no"){
                   Mmin=Protokol_Data->Spc->FieldByName("Mmin")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("ShMax")->AsString!="no"){
                  ShMax=Protokol_Data->Spc->FieldByName("ShMax")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("ShMin")->AsString!="no"){
                   ShMin=Protokol_Data->Spc->FieldByName("ShMin")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("RR1max")->AsString!="no"){
                  RR1max=Protokol_Data->Spc->FieldByName("RR1max")->AsFloat;
                 }
               if (Protokol_Data->Spc->FieldByName("RR1min")->AsString!="no"){
                   RR1min=Protokol_Data->Spc->FieldByName("RR1min")->AsFloat;
                   }

               if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                   Rc_Rbmax=Protokol_Data->Spc->FieldByName("Rc_Rbmax")->AsFloat;
                   }
                if (Protokol_Data->Spc->FieldByName("Tminmax")->AsString!="no"){
                   Tminmax=Protokol_Data->Spc->FieldByName("Tminmax")->AsFloat;
                   }
                if (Protokol_Data->Spc->FieldByName("Tminmin")->AsString!="no"){
                   Tminmin=Protokol_Data->Spc->FieldByName("Tminmin")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("Tmaxmax")->AsString!="no"){
                   Tmaxmax=Protokol_Data->Spc->FieldByName("Tmaxmax")->AsFloat;
                   }
                if (Protokol_Data->Spc->FieldByName("Tmaxmin")->AsString!="no"){
                   Tmaxmin=Protokol_Data->Spc->FieldByName("Tmaxmin")->AsFloat;
                   }
                   if (Protokol_Data->Spc->FieldByName("Fptpmax")->AsString!="no"){
                   Fptpmax=Protokol_Data->Spc->FieldByName("Fptpmax")->AsFloat;
                   }
                if (Protokol_Data->Spc->FieldByName("Fptpmin")->AsString!="no"){
                   Fptpmin=Protokol_Data->Spc->FieldByName("Fptpmin")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("C0_C1max")->AsString!="no"){
                   C0_C1max=Protokol_Data->Spc->FieldByName("C0_C1max")->AsFloat;
                   }
                if (Protokol_Data->Spc->FieldByName("C0_C1min")->AsString!="no"){
                   C0_C1min=Protokol_Data->Spc->FieldByName("C0_C1min")->AsFloat;
                   }
                if (Protokol_Data->Spc->FieldByName("RR3min")->AsString!="no"){
                   RR3min=Protokol_Data->Spc->FieldByName("RR3min")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("RR3max")->AsString!="no"){
                   RR3max=Protokol_Data->Spc->FieldByName("RR3max")->AsFloat;
                   }
                   if (Protokol_Data->Spc->FieldByName("RR2min")->AsString!="no"){
                   RR2min=Protokol_Data->Spc->FieldByName("RR2min")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("RR2max")->AsString!="no"){
                   RR2max=Protokol_Data->Spc->FieldByName("RR2max")->AsFloat;
                   }
                     if (Protokol_Data->Spc->FieldByName("RR4min")->AsString!="no"){
                   RR4min=Protokol_Data->Spc->FieldByName("RR4min")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("RR4max")->AsString!="no"){
                   RR4max=Protokol_Data->Spc->FieldByName("RR4max")->AsFloat;
                   }
                     if (Protokol_Data->Spc->FieldByName("RR5min")->AsString!="no"){
                   RR5min=Protokol_Data->Spc->FieldByName("RR5min")->AsFloat;
                   }
                 if (Protokol_Data->Spc->FieldByName("RR5max")->AsString!="no"){
                   RR5max=Protokol_Data->Spc->FieldByName("RR5max")->AsFloat;
                   }



//****************************************************************************************************************************

            for (int i=0;i<Protokol_Data->psiData->RecordCount;i++){
              k=true;
              k1=true;
                   for (int l=0; l<viewNumber2->Count; l++){
                            if (viewNumber2->Items->Strings[l]==Protokol_Data->psiData->FieldByName("N")->AsString){
                                  if (viewNumber2->ItemState[i]==0){
                                      k1=false;

                                     break;
                                  }
                            }
                 }
                      if (Protokol_Data->Spc->FieldByName("Fmax")->AsString!="no" & Protokol_Data->Spc->FieldByName("Ft")->AsString=="True"){

                                                  if(Protokol_Data->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                                      k=false;
                                                  }

                                             }
                if (Protokol_Data->Spc->FieldByName("Fmin")->AsString!="no" & Protokol_Data->Spc->FieldByName("Ft")->AsString=="True"){
                                 if(Protokol_Data->psiData->FieldByName("F")->AsFloat<Fmin+Protokol_Data->Spc->FieldByName("DopuskF")->AsFloat){
                                       k=false;
                                  }
                   }
             if (Protokol_Data->Spc->FieldByName("Rmax")->AsString!="no"){
                           if(Protokol_Data->psiData->FieldByName("R")->AsFloat>Rmax-Rmax*(Protokol_Data->Spc->FieldByName("DopuskR")->AsFloat/100)){
                                    k=false;
                              }
                  }
                if (Protokol_Data->Spc->FieldByName("Rmin")->AsString!="no"){
                           if(Protokol_Data->psiData->FieldByName("R")->AsFloat<Rmin+Rmin*(Protokol_Data->Spc->FieldByName("DopuskR")->AsFloat/100)){
                                    k=false;
                              }
                  }
               if (Protokol_Data->Spc->FieldByName("Smax")->AsString!="no"){
                           if(Protokol_Data->psiData->FieldByName("Slope")->AsFloat>Smax-Protokol_Data->Spc->FieldByName("DopuskSlope")->AsFloat){
                                    k=false;
                              }
                  }
                if (Protokol_Data->Spc->FieldByName("Smin")->AsString!="no"){
                           if(Protokol_Data->psiData->FieldByName("Slope")->AsFloat<Smin+Protokol_Data->Spc->FieldByName("DopuskSlope")->AsFloat){
                                    k=false;
                              }
                  }


              if (Protokol_Data->Spc->FieldByName("Qmin")->AsString!="no"){
                          if(Protokol_Data->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(Protokol_Data->Spc->FieldByName("DopuskQ")->AsFloat/100)){
                               k=false;
                              }
                }
               if (Protokol_Data->Spc->FieldByName("Qmax")->AsString!="no"){
                          if(Protokol_Data->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(Protokol_Data->Spc->FieldByName("DopuskQ")->AsFloat/100)){
                               k=false;
                              }
                }
                if (Protokol_Data->Spc->FieldByName("C0max")->AsString!="no"){
                            if(Protokol_Data->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(Protokol_Data->Spc->FieldByName("DopuskC0")->AsFloat/100)){
                                k=false;
                               }
                   }

                  if (Protokol_Data->Spc->FieldByName("C0min")->AsString!="no"){
                                      if(Protokol_Data->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(Protokol_Data->Spc->FieldByName("DopuskC0")->AsFloat/100)){
                                             k=false;
                                         }
                     }
                if (Protokol_Data->Spc->FieldByName("Cqmax")->AsString!="no"){
                                          if(Protokol_Data->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(Protokol_Data->Spc->FieldByName("DopuskCq")->AsFloat/100))){
                                              k=false;
                                            }
                   }
               if (Protokol_Data->Spc->FieldByName("Cqmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(Protokol_Data->Spc->FieldByName("DopuskCq")->AsFloat/100))){
                                    k=false;
                              }
                      }

                 if (Protokol_Data->Spc->FieldByName("FTmax")->AsString!="no"){
                                          if(Protokol_Data->psiData->FieldByName("FT")->AsFloat>(FTmax-Protokol_Data->Spc->FieldByName("DopuskFT")->AsFloat)){
                                              k=false;
                                            }
                   }
               if (Protokol_Data->Spc->FieldByName("FTmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("FT")->AsFloat<(FTmin+Protokol_Data->Spc->FieldByName("DopuskFT")->AsFloat)){
                                    k=false;
                              }
                      }

                 if (Protokol_Data->Spc->FieldByName("Rsp2max")->AsString!="no"){
                                          if(Protokol_Data->psiData->FieldByName("Spur")->AsFloat>(SRmax-SRmax*(Protokol_Data->Spc->FieldByName("DopuskSR")->AsFloat/100))){
                                              k=false;
                                            }
                   }
               if (Protokol_Data->Spc->FieldByName("Rsp2min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Spur")->AsFloat<(SRmin+SRmin*(Protokol_Data->Spc->FieldByName("DopuskSR")->AsFloat/100))){
                                    k=false;
                              }
                      }

                    if (Protokol_Data->Spc->FieldByName("Fmaxmax")->AsString!="no"){
                              if (Protokol_Data->Spc->FieldByName("DopuskFi")->AsFloat>0){
                                          if(fabs(Protokol_Data->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(Protokol_Data->Spc->FieldByName("DopuskFi")->AsFloat/100))){
                                              k=false;
                                            }
                                }
                               if (Protokol_Data->Spc->FieldByName("DopuskFi_Real")->AsFloat>0){
                                  if(fabs(Protokol_Data->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Protokol_Data->Spc->FieldByName("DopuskFi_Real")->AsFloat)){
                                              k=false;
                                            }
                               }

                   }
               if (Protokol_Data->Spc->FieldByName("Fminmin")->AsString!="no"){
                       if (Protokol_Data->Spc->FieldByName("DopuskFi")->AsFloat>0){
                              if(fabs(Protokol_Data->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Fminmin*(Protokol_Data->Spc->FieldByName("DopuskFi")->AsFloat/100))){
                                    k=false;
                              }
                           }
                        if (Protokol_Data->Spc->FieldByName("DopuskFi_Real")->AsFloat>0){
                              if(fabs(Protokol_Data->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Protokol_Data->Spc->FieldByName("DopuskFi_Real")->AsFloat)){
                                    k=false;
                              }
                           }

                      }

                   if (Protokol_Data->Spc->FieldByName("RRmax")->AsString!="no"){
                                          if(Protokol_Data->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(Protokol_Data->Spc->FieldByName("DopuskRR")->AsFloat/100))){
                                              k=false;
                                            }
                   }
               if (Protokol_Data->Spc->FieldByName("RRmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(Protokol_Data->Spc->FieldByName("DopuskRR")->AsFloat/100))){
                                    k=false;
                              }
                      }
                   if (Protokol_Data->Spc->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(Protokol_Data->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(Protokol_Data->Spc->FieldByName("DopuskR")->AsFloat/100))){
                                              k=false;
                                            }
                   }
               if (Protokol_Data->Spc->FieldByName("Rmaxmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(Protokol_Data->Spc->FieldByName("DopuskR")->AsFloat/100))){
                                    k=false;
                              }
                      }
                 if (Protokol_Data->Spc->FieldByName("Mmax")->AsString!="no"){
                                          if(Protokol_Data->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              k=false;
                                            }
                   }
               if (Protokol_Data->Spc->FieldByName("Mmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    k=false;
                              }
                      }

                 if (Protokol_Data->Spc->FieldByName("ShMax")->AsString!="no"){
                                          if(Protokol_Data->psiData->FieldByName("Shum")->AsFloat>ShMax){
                                              k=false;
                                            }
                   }
               if (Protokol_Data->Spc->FieldByName("ShMin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Shum")->AsFloat<ShMin){
                                    k=false;
                              }
                      }
                  if (Protokol_Data->Spc->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(Protokol_Data->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              k=false;
                                            }
                   }
                if (Protokol_Data->Spc->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(Protokol_Data->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              k=false;
                                            }
                   }
                  if (Protokol_Data->Spc->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    k=false;
                              }
                      }
                  if (Protokol_Data->Spc->FieldByName("Tminmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Tmin")->AsFloat<Tminmin){
                                    k=false;
                              }
                      }
                   if (Protokol_Data->Spc->FieldByName("Tminmax")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Tmin")->AsFloat>Tminmax){
                                    k=false;
                              }
                      }
                    if (Protokol_Data->Spc->FieldByName("Tmaxmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin){
                                    k=false;
                              }
                      }
                   if (Protokol_Data->Spc->FieldByName("Tmaxmax")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax){
                                    k=false;
                              }
                      }
                     if (Protokol_Data->Spc->FieldByName("Fptpmin")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Protokol_Data->Spc->FieldByName("DopuskFptp")->AsFloat)){
                                    k=false;
                              }
                      }
                   if (Protokol_Data->Spc->FieldByName("Fptpmax")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Protokol_Data->Spc->FieldByName("DopuskFptp")->AsFloat)){
                                    k=false;
                              }
                      }
                     if (Protokol_Data->Spc->FieldByName("Fptp_2min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Protokol_Data->Spc->FieldByName("DopuskFptp")->AsFloat)){
                                    k=false;
                              }
                      }
                   if (Protokol_Data->Spc->FieldByName("Fptp_2max")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Protokol_Data->Spc->FieldByName("DopuskFptp")->AsFloat)){
                                    k=false;
                              }
                      }
                    if (Protokol_Data->Spc->FieldByName("C0_C1min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    k=false;
                              }
                      }
                   if (Protokol_Data->Spc->FieldByName("C0_C1max")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    k=false;
                              }
                      }
                      if (Protokol_Data->Spc->FieldByName("old1min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Old")->AsFloat<old1min){
                                    k=false;
                              }
                      }
                   if (Protokol_Data->Spc->FieldByName("old1max")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("Old")->AsFloat>old1max){
                                    k=false;
                              }
                      }
                     if (Protokol_Data->Spc->FieldByName("RR2max")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    k=false;
                              }
                      }
                     if (Protokol_Data->Spc->FieldByName("RR2min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    k=false;
                              }
                      }
                       if (Protokol_Data->Spc->FieldByName("RR3max")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    k=false;
                              }
                      }
                     if (Protokol_Data->Spc->FieldByName("RR3min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    k=false;
                              }
                      }
                       if (Protokol_Data->Spc->FieldByName("RR4max")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    k=false;
                              }
                      }
                     if (Protokol_Data->Spc->FieldByName("RR4min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    k=false;
                              }
                      }
                      if (Protokol_Data->Spc->FieldByName("RR5max")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR5")->AsFloat>RR5max){
                                    k=false;
                              }
                      }
                     if (Protokol_Data->Spc->FieldByName("RR5min")->AsString!="no"){
                              if(Protokol_Data->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    k=false;
                              }
                      }


                      if (k1){
                        Protokol_Data->psiData->Edit();
                        Protokol_Data->Command->SQL->Clear();
                        AnsiString SqlUpdate="Update psidatatemp set Status1='";
                        Protokol_Data->psiData->FieldByName("Spc")->AsString=cmbSpc->Text;
                        Protokol_Data->psiData->FieldByName("ProtokolN")->AsString=cmbSpc->Text;
                          if (k){
                           Protokol_Data->psiData->FieldByName("Status")->AsString="Годен";
                           SqlUpdate=SqlUpdate+"Годен'";

                          }
                          else {
                            SqlUpdate=SqlUpdate+"Брак'";
                            Protokol_Data->psiData->FieldByName("Status")->AsString="Брак";
                          }

                       SqlUpdate=SqlUpdate+", ProtokolN='"+cmbSpc->Text+"' WHERE msk='"+edtMsk->Text+"' and N='"+Protokol_Data->psiData->FieldByName("N")->AsString+"'";
                        Protokol_Data->Command->SQL->Add(SqlUpdate);
                        Protokol_Data->Command->Execute();
                      }
              Protokol_Data->psiData->Next();
            }

      }
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::btnAll2Click(TObject *Sender)
{
 int k=0;
for(int i=0;i<viewNumber2->Count;i++){
                  viewNumber2->ItemState[i]=cbChecked;
                  k++;
   }
  lCount2->Caption=FloatToStr(k);
  lCount2->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::btnClear2Click(TObject *Sender)
{
        for(int i=0;i<viewNumber2->Count;i++){
                  viewNumber2->ItemState[i]=cbUnchecked;
   }
  lCount2->Caption="Не выбрано";
  lCount2->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::RzButton2Click(TObject *Sender)
{
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString search=edtMsk->Text.SubString(0,edtMsk->Text.Length());
DataModule2->psiData->SQL->Add("select * from psidata where (locate('"+search+"',msk)>0) order by msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtMsk->Clear();
int k;
AnsiString S,S1,S2;
k=DataModule2->psiData->RecordCount;
VrProgressBar1->Position=0;
VrProgressBar1->MaxValue=k-1;

//edtMsk->Items->Add(DataModule2->psiData->FieldByName("MSK")->AsString);
for (int i=0;i<k;i++){
                     S=DataModule2->psiData->FieldByName("MSK")->AsString;

                     DataModule2->psiData->Next();
                     S1=DataModule2->psiData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   edtMsk->Items->Add(S);
                                    S=S1;
                                    }
                  VrProgressBar1->StepIt();
   }
}
//---------------------------------------------------------------------------


void __fastcall TRecForm::cmb_Protokol_IDChange(TObject *Sender)
{
edtProtokol->Enabled=true;
AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select * from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk->Clear();
 edtMsk->Items->Add(MSK);
 edtMsk->ItemIndex=0;
 edtSpc->Clear();
 edtSpc->Items->Add(Spc);
 edtSpc->ItemIndex=0;
 DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==Spc){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 btnPrint->Enabled=true;
 viewNumber->Items->Clear();
 viewNumber2->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }
                  }
                 else{

                     viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                     viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[i]=cbChecked;
                                  viewNumber2->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[i]=cbUnchecked;
                                    viewNumber2->ItemState[i]=cbUnchecked;
                                  }
                                  k++;
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;

      }

   edtProtokol->ItemIndex=DataModule2->psiData->FieldByName("ProtokolType_ID")->AsFloat;
  lCount->Caption=FloatToStr(k);
  lCount2->Caption=FloatToStr(k);
  edtSpc->Enabled=true;



  }
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::Action1Execute(TObject *Sender)
{
  AnsiString MSK,Spc;
AnsiString Measure_ID=cmb_ID->Text;

 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select SQL_NO_CACHE * from psidata where Measure_ID='"+cmb_ID->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk->Clear();
 edtMsk->Items->Add(MSK);
 edtMsk->ItemIndex=0;
 edtSpc->Clear();
 edtSpc->Items->Add(Spc);
 edtSpc->ItemIndex=0;
 DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==Spc){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 btnPrint->Enabled=true;
 viewNumber->Items->Clear();
viewNumber2->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

          int p=1;
          if (edt->Checked & edtAn->Checked){
           if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }
           }
           else if (edt->Checked & !edtAn->Checked){
              if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else if (edtAn->Checked & !edt->Checked){
              if  (DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked ;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else {
                viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked ;
                                  viewNumber2->ItemState[k]=cbChecked ;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;

           }


         DataModule2->psiData->Next();
    }
    lCount->Caption=k;
    lCount2->Caption=k;

  }      
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::cmb_IDKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
                 ProtokolForm->cmb_ID->Text=cmb_ID->Text;
                 ProtokolForm->ActionList1->Actions[19]->Execute();
AnsiString MSK,Spc;
AnsiString Measure_ID=cmb_ID->Text;

 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select SQL_NO_CACHE `N`,`Msk`,`File`,`Status`,`PrintSelect`,`Spc`,`Measure_ID`,`Status2` from psidata where Measure_ID='"+cmb_ID->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk->Clear();
 edtMsk->Items->Add(MSK);
 edtMsk->ItemIndex=0;
 edtSpc->Clear();
 edtSpc->Items->Add(Spc);
 edtSpc->ItemIndex=0;
 DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==Spc){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 btnPrint->Enabled=true;
 viewNumber->Items->Clear();
viewNumber2->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

          int p=1;
          if (edt->Checked & edtAn->Checked){
           if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }
           }
           else if (edt->Checked & !edtAn->Checked){
              if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else if (edtAn->Checked & !edt->Checked){
              if  (DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked ;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else {
                viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked ;
                                  viewNumber2->ItemState[k]=cbChecked ;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;

           }


         DataModule2->psiData->Next();
    }
    lCount->Caption=k;
    lCount2->Caption=k;

  }

LotNumber->ItemIndex=-1;
 LotSpc->ItemIndex=-1;
}        
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::edtMskKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
  AnsiString S3;
  cmb_ID->Items->Clear();
  cmb_ID->ItemIndex=-1;
  cmb_ID->Text="";
ProtokolForm->cmb_ID->Items->Clear();
ProtokolForm->cmb_ID->ItemIndex=-1;
ProtokolForm->cmb_ID->Text="";
ProtokolForm->edtMsk->Text=edtMsk->Text;
ProtokolForm->ActionList1->Actions[2]->Execute();

DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
 S3="Select SQL_NO_CACHE * from psidata where ";
       if (edtMsk->Text!="" || !edtMsk->Text.IsEmpty()){
       S3=S3+"msk='"+edtMsk->Text+"' ";

       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtM->ItemIndex!=-1){
             S3=S3+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S3=S3+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }

       }
       if (edtAn->Checked){
        S3=S3+"and Status2='Good' ";

       }
       if (edt->Checked){
       S3=S3+"and Status='Годен' ";

       }
       if (edtM->ItemIndex!=-1){

        S3=S3+"and `MSK-M`='"+edtM->Text+"' ";

       }
      if (cmb_ID->Text!=""){
        S3="Select `N`,`MakeDate`,`MakeDate1`,`ProtokolN`,`Spc`,`MSK-M`,`Status`,`Status2`,`PrintSelect`,`Measure_ID` from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
       S3=S3+"ORDER BY N";

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtDate->Text=DataModule2->psiData->FieldByName("MakeDate")->AsString;
edtDate1->Text=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
edtM->Items->Clear();
cmb_ID->Items->Clear();
edtProtokolN->Items->Clear();
viewNumber->Items->Clear();
viewNumber2->Items->Clear();
int k=0;
AnsiString S,S2;
  for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("ProtokolN")->AsString;
              DataModule2->psiData->Next();
              
           int u=1;
           for (int j=0;j<edtProtokolN->Items->Count;j++){
                     if (S==edtProtokolN->Items->Strings[j] || S==NULL){
                      u=0;
                      break;
                     }
                u=1;

           }
          if (u==1){
           edtProtokolN->Items->Add(S);
          }
   }
AnsiString S1;
DataModule2->SqlSpec->First();
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){
            edtSpc->Text=DataModule2->psiData->FieldByName("Spc")->AsString;
           break;
            }
        DataModule2->SqlSpec->Next();
      }
   DataModule2->psiData->First();
 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
          S1=DataModule2->psiData->FieldByName("MSK-M")->AsString;
          int p=1;
          if (edt->Checked & edtAn->Checked){
           if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked ;
                                  }
                                  k++;
           }
           }
           else if (edt->Checked & !edtAn->Checked){
              if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else if (edtAn->Checked & !edt->Checked){
              if  (DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
           }

           }
           else {
                viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                viewNumber2->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  viewNumber2->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[k]=cbUnchecked;
                                    viewNumber2->ItemState[k]=cbUnchecked;
                                  }
                                  k++;

           }

          for (int j=0;j<edtM->Items->Count; j++){
               if (S1==edtM->Items->Strings[j]){
               p=0;
               break;
               }
             p=1;
          }
          if (p==1){
           edtM->Items->Add(S1);

          }
          int p1=1;

         S2=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S2==cmb_ID->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID->Items->Add(S2);

          }
         DataModule2->psiData->Next();
    }
    lCount->Caption=k;
    lCount2->Caption=k;

 LotNumber->ItemIndex=-1;
 LotSpc->ItemIndex=-1;
}        
}
//---------------------------------------------------------------------------








void __fastcall TRecForm::LotNumberKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
  ProtokolForm->ActionList1->Actions[20]->Execute();
  RQ_Data->LotNumbers->Active=false;
  RQ_Data->LotNumbers->SQL->Clear();
 RQ_Data->LotNumbers->SQL->Add("Select `Spc` from `Извещение` where `Name`='"+LotNumber->Text+"'");
 RQ_Data->LotNumbers->Active=true;
 RQ_Data->LotNumbers->First();
 LotSpc->Items->Clear();
 for (int i=0; i<RQ_Data->LotNumbers->RecordCount; i++){
      LotSpc->Items->Add(RQ_Data->LotNumbers->FieldByName("Spc")->AsString);
      RQ_Data->LotNumbers->Next();
 }
 RQ_Data->LotNumbers->Active=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::LotClick(TObject *Sender)
{
ProtokolForm->Lot->Checked=Lot->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::LotSpcChange(TObject *Sender)
{
ProtokolForm->LotSpc->ItemIndex=LotSpc->ItemIndex;
ProtokolForm->ActionList1->Actions[21]->Execute();
 RQ_Data->Spc_RQ->Active=false;
   RQ_Data->Spc_RQ->SQL->Clear();
   RQ_Data->Spc_RQ->SQL->Add("Select `номенклатура` from nomeklatura_rk where `наименование`='"+LotSpc->Text+"'");
   RQ_Data->Spc_RQ->Active=true;
   RQ_Data->Spc_RQ->First();

RQ_Data->MSK_JOIN->Active=false;
 RQ_Data->MSK_JOIN->SQL->Clear();
 RQ_Data->MSK_JOIN->SQL->Add("Select `Msk_Name` from `MSK_Join` where `MSK_NOM_ID`='"+RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString+"'");
 RQ_Data->MSK_JOIN->Active=true;
 RQ_Data->MSK_JOIN->First();
 LotMSK->Items->Clear();
 for (int i=0; i<RQ_Data->MSK_JOIN->RecordCount; i++){
      LotMSK->Items->Add(RQ_Data->MSK_JOIN->FieldByName("Msk_Name")->AsString);
      RQ_Data->MSK_JOIN->Next();
 }
 RQ_Data->Spc_RQ->Active=false;
 RQ_Data->MSK_JOIN->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TRecForm::LotNumberChange(TObject *Sender)
{
 ProtokolForm->LotNumber->Text=LotNumber->Text;
 ProtokolForm->ActionList1->Actions[20]->Execute();
  RQ_Data->LotNumbers->Active=false;
  RQ_Data->LotNumbers->SQL->Clear();
 RQ_Data->LotNumbers->SQL->Add("Select `Spc` from `Извещение` where `Name`='"+LotNumber->Text+"'");
 RQ_Data->LotNumbers->Active=true;
 RQ_Data->LotNumbers->First();
 LotSpc->Items->Clear();
 for (int i=0; i<RQ_Data->LotNumbers->RecordCount; i++){
      LotSpc->Items->Add(RQ_Data->LotNumbers->FieldByName("Spc")->AsString);
      RQ_Data->LotNumbers->Next();
 }
 RQ_Data->LotNumbers->Active=false;
}
//---------------------------------------------------------------------------



