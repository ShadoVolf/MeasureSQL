//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "protokolbuild.h"
#include "data1.h"
#include "protokol.h"
#include "ManualRec.h"
#include "PM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzChkLst"
#pragma link "RzLstBox"
#pragma link "VrProgressBar"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TPrBuildForm *PrBuildForm;
//---------------------------------------------------------------------------
__fastcall TPrBuildForm::TPrBuildForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPrBuildForm::btnCloseClick(TObject *Sender)
{
PrBuildForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TPrBuildForm::FormShow(TObject *Sender)
{
DataModule2->ResonatorType->Active=true;
DataModule2->ResonatorType->First();
DataModule2->psi->Active=true;
edtType->Items->Clear();
for (int i=0;i<DataModule2->ResonatorType->RecordCount;i++){
                    edtType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    DataModule2->ResonatorType->Next();
                    }
                            
}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification where NameR='"+edtType->Text+"' Order by Name");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }        
}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::edtSpcChange(TObject *Sender)
{
edtMsk->Items->Clear();
viewNumber->Items->Clear();
edtProtokolN->Items->Clear();
AnsiString S,S1;
VrProgressBar1->Position=0;

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where Spc='"+edtSpc->Text+"' ORDER BY msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
edtProtokolN->Items->Add(DataModule2->psiData->FieldByName("ProtokolN")->AsString);
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("Msk")->AsString;
             S1=DataModule2->psiData->FieldByName("ProtokolN")->AsString;
              DataModule2->psiData->Next();
             /*if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 }
                  }
                 else{

                     viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                    }
                    */
              VrProgressBar1->Position=i+1;
           if (S!=DataModule2->psiData->FieldByName("Msk")->AsString){

                      edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
             }
             int l=1;
           for (int j=0; j<edtProtokolN->Items->Count;j++){
                 if (DataModule2->psiData->FieldByName("ProtokolN")->AsString==edtProtokolN->Items->Strings[j]){

                      l=0;
                      break;
                 }
             l=1;
           }
           if (l==1){
             edtProtokolN->Items->Add(DataModule2->psiData->FieldByName("ProtokolN")->AsString);
           }

      }
}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::edtMskChange(TObject *Sender)
{
AnsiString S,S2;
VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();

DataModule2->psiData->SQL->Add("Select * from psidata where msk='"+edtMsk->Text+"' ORDER BY N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtProtokolN->Items->Clear();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
edtProtokolN->Items->Add(DataModule2->psiData->FieldByName("ProtokolN")->AsString);
viewNumber->Items->Clear();
cmb_ID->Items->Clear();
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("ProtokolN")->AsString;
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 }
                  }
                 else{

                     viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                    }

           int l=1;
           for (int j=0; j<edtProtokolN->Items->Count;j++){
                 if (DataModule2->psiData->FieldByName("ProtokolN")->AsString==edtProtokolN->Items->Strings[j]){

                      l=0;
                      break;
                 }
             l=1;
           }
           if (l==1){
             edtProtokolN->Items->Add(DataModule2->psiData->FieldByName("ProtokolN")->AsString);
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
          VrProgressBar1->Position=i+1;
      }

}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::btnCreateClick(TObject *Sender)
{
AnsiString S,S1;
 if (edtProtokolN->Text!=""){


        VrProgressBar1->Position=0;
        VrProgressBar1->MaxValue=viewNumber->Count-1;
        DataModule2->psiData->Active=false;
        DataModule2->psiData->SQL->Clear();
         S="Select * from psidata where ";
         S1="Select * from psidatatemp where ";
       if (edtMsk->ItemIndex!=-1){
       S=S+"msk='"+edtMsk->Text+"' ";
        S1=S1+"msk='"+edtMsk->Text+"' ";
       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtMsk->ItemIndex!=-1){
             S=S+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S=S+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }
          S1=S1+"and ProtokolN='"+edtProtokolN->Text+"' ";
       }

      if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){

        S="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ";
       S1="Select * from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";
       }

       if (edt->Checked){
       S=S+"and Status='Годен' ";
       S1=S1+"and Status1='Годен' ";
       }
       S=S+"ORDER BY N";

        DataModule2->psiData->SQL->Add(S);
        DataModule2->psiData->Active=true;
        DataModule2->psiData->First();


        DataModule2->psiDataTemp->Active=false;
        DataModule2->psiDataTemp->SQL->Clear();
        DataModule2->psiDataTemp->SQL->Add(S1);
        DataModule2->psiDataTemp->Active=true;
         DataModule2->MeasureID->Active=true;
 DataModule2->MeasureID->Append();
 if (edtMsk->ItemIndex==-1){
 DataModule2->MeasureID->FieldByName("Msk")->AsString="Выборка";
 }
 else{
    DataModule2->MeasureID->FieldByName("Msk")->AsString=edtMsk->Text;
    }

 DataModule2->MeasureID->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
 DataModule2->MeasureID->Post();
 DataModule2->MeasureID->Last();
 AnsiString Measure_ID=DataModule2->MeasureID->FieldByName("MeasureID")->AsString;
       DataModule2->Protokol_Measure_ID->Active=false;
          DataModule2->Temp_psiData5->Active=false;
        DataModule2->Temp_psiData5->SQL->Clear();
        DataModule2->Temp_psiData5->SQL->Add("Select * from psidata where Measure_ID='"+Measure_ID+"' ORDER BY N");
        DataModule2->Temp_psiData5->Active=true;

          DataModule2->psiDataTemp2->Active=false;
        DataModule2->psiDataTemp2->SQL->Clear();
        DataModule2->psiDataTemp2->SQL->Add("Select * from psidatatemp where Measure_ID='"+Measure_ID+"' ORDER BY N");
        DataModule2->psiDataTemp2->Active=true;


        DataModule2->Temp_psiData_Fields->Active=true;
        DataModule2->Temp_psiDataTemp_FIelds->Active=true;

                 for (int i=0; i<viewNumber->Count; i++){
                           if(viewNumber->ItemState[i]!=0){
                                DataModule2->psiData->First();
                                        for (int j=0; j<DataModule2->psiData->RecordCount; j++){

                                                if (viewNumber->Items->Strings[i]==DataModule2->psiData->FieldByName("N")->AsString){
                                                     DataModule2->Temp_psiData5->Append();
                                                     DataModule2->Temp_psiData_Fields->First();
                                                     DataModule2->Temp_psiData_Fields->Next();
                                                      for (int j1=1;j1<DataModule2->Temp_psiData_Fields->RecordCount;j1++){
                                                      if (DataModule2->Temp_psiData_Fields->FieldByName("Field")->AsString!="ID"){
                                                      DataModule2->Temp_psiData5->FieldByName(DataModule2->Temp_psiData_Fields->FieldByName("Field")->AsString)->AsString=DataModule2->psiData->FieldByName(DataModule2->Temp_psiData_Fields->FieldByName("Field")->AsString)->AsString;
                                                      }

                                                      DataModule2->Temp_psiData_Fields->Next();
                                                      }
                                                      DataModule2->Temp_psiData5->FieldByName("Measure_ID")->AsString=Measure_ID;
                                                      DataModule2->Temp_psiData5->Post();
                                                     DataModule2->psiData->Edit();
                                                     DataModule2->psiData->FieldByName("ProtokolN")->AsString=edtProtokolN->Text;
                                                     DataModule2->psiData->Post();
                                                     break;
                                                  }

                                                DataModule2->psiData->Next();
                                           }//for
                                      DataModule2->psiDataTemp->First();
                                        for (int j=0; j<DataModule2->psiDataTemp->RecordCount; j++){

                                                if (viewNumber->Items->Strings[i]==DataModule2->psiDataTemp->FieldByName("N")->AsString){
                                                     DataModule2->psiDataTemp2->Append();
                                                     DataModule2->Temp_psiDataTemp_FIelds->First();
                                                     DataModule2->Temp_psiDataTemp_FIelds->Next();
                                                      for (int j1=1;j1<DataModule2->Temp_psiData_Fields->RecordCount;j1++){
                                                      if (DataModule2->Temp_psiData_Fields->FieldByName("Field")->AsString!="Recordid"){
                                                      DataModule2->psiDataTemp2->FieldByName(DataModule2->Temp_psiDataTemp_FIelds->FieldByName("Field")->AsString)->AsString=DataModule2->psiDataTemp->FieldByName(DataModule2->Temp_psiDataTemp_FIelds->FieldByName("Field")->AsString)->AsString;
                                                      }

                                                      DataModule2->Temp_psiDataTemp_FIelds->Next();
                                                      }
                                                      DataModule2->psiDataTemp2->FieldByName("Measure_ID")->AsString=Measure_ID;
                                                      DataModule2->psiDataTemp2->Post();

                                                     
                                                  }

                                                DataModule2->psiDataTemp->Next();
                                           }//for
                            } //if
                       VrProgressBar1->Position=i+1;     
                }//for
  DataModule2->Temp_psiData_Fields->Active=false;
  DataModule2->Temp_psiData5->Active=false;
  DataModule2->Temp_psiDataTemp_FIelds->Active=false;
  DataModule2->psiDataTemp2->Active=false;
  DataModule2->psiDataTemp->Active=false;
  ProtokolID->Visible=true;
  ProtokolID->Caption=Measure_ID;
  }//if
  else {
  ShowMessage("Введите номер протокола");
  }

}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::edtProtokolNChange(TObject *Sender)
{
AnsiString S;
VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where ProtokolN='"+edtProtokolN->Text+"' ORDER BY N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
viewNumber->Items->Clear();
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("ProtokolN")->AsString;
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("N")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 }
                  }
                 else{

                     viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                    }
              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;

          
      }
}
//---------------------------------------------------------------------------


void __fastcall TPrBuildForm::viewNumberChange(TObject *Sender, int Index,
      TCheckBoxState NewState)
{
int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  if (viewNumber->ItemState[i]!=0){
                                k++;
                      }


   }
  lCount->Caption=FloatToStr(k);
  lCount->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::ProtokolIDClick(TObject *Sender)
{
 PrBuildForm->Hide();
 if(RadioGroup1->ItemIndex==0){
      ProtokolForm->Show();
      ProtokolForm->cmb_ID->Text=ProtokolID->Caption;
      ProtokolForm->Action1->Execute();
 }
 else if (RadioGroup1->ItemIndex==2){
       RecForm->Show();
        RecForm->cmb_ID->Text=ProtokolID->Caption;
        RecForm->Action1->Execute();
 }
else if (RadioGroup1->ItemIndex==1){
    PMForm->Show();
    PMForm->cmb_ID->Text=ProtokolID->Caption;
    PMForm->Action1->Execute();
 }
}
//---------------------------------------------------------------------------


void __fastcall TPrBuildForm::AdvGlassButton1Click(TObject *Sender)
{
for (int i=0;i<viewNumber->Count;i++){
 viewNumber->ItemState[i]=0;


}
}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::AdvGlassButton2Click(TObject *Sender)
{
 for (int i=0;i<viewNumber->Count;i++){
 viewNumber->ItemState[i]=1;


}
}
//---------------------------------------------------------------------------


void __fastcall TPrBuildForm::AdvGlassButton8Click(TObject *Sender)
{
viewNumber->Items->Clear();
viewNumber1->Items->Clear();
viewMeasureID->Items->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::AdvGlassButton7Click(TObject *Sender)
{
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where Spc='"+edtSpc->Text+"' ORDER BY Measure_ID");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

              DataModule2->psiData->Next();
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString+"  MSK "+DataModule2->psiData->FieldByName("N")->AsString+" ID "+DataModule2->psiData->FieldByName("Measure_ID")->AsString);
                                 viewNumber1->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 viewMeasureID->Items->Add(DataModule2->psiData->FieldByName("Measure_ID")->AsString);
                                 }
                  }
                 else{

                      viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString+"  MSK "+DataModule2->psiData->FieldByName("N")->AsString+" ID "+DataModule2->psiData->FieldByName("Measure_ID")->AsString);
                      viewNumber1->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      viewMeasureID->Items->Add(DataModule2->psiData->FieldByName("Measure_ID")->AsString);
                    }


      }
}
//---------------------------------------------------------------------------

void __fastcall TPrBuildForm::cmb_IDKeyPress(TObject *Sender, char &Key)
{
if (Key==13){

AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select * from psidata where Measure_ID='"+cmb_ID->Text+"'";
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


viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  }
                                  else {
                                   viewNumber->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }
                  }
                 else{

                     viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[i]=cbUnchecked;
                                  }
                                  k++;
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }

  }


}
}
//---------------------------------------------------------------------------


void __fastcall TPrBuildForm::Action1Execute(TObject *Sender)
{

AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select * from psidata where Measure_ID='"+cmb_ID->Text+"'";
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


viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[k]=cbChecked;
                                  }
                                  else {
                                   viewNumber->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }
                  }
                 else{

                     viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  viewNumber->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    viewNumber->ItemState[i]=cbUnchecked;
                                  }
                                  k++;
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }

  }
        
}
//---------------------------------------------------------------------------

