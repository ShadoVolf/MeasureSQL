//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PM.h"
#include "Main.h"
#include "data1.h"
#include "PMN.h"
#include "Data.h"
#include "ProtokolData.h"
#include "Modif.h"
#include "PMDetail.h"
#include "protokol.h"
#include "PassportNumbers.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzRadChk"
#pragma link "VrControls"
#pragma link "VrProgressBar"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "AdvGlassButton"
#pragma link "RzCmboBx"
#pragma link "frxBarcode"
#pragma link "frxDCtrl"
#pragma link "frxExportXLS"
#pragma link "DBAccess"
#pragma link "MyAccess"
#pragma resource "*.dfm"
TPMForm *PMForm;
//---------------------------------------------------------------------------
__fastcall TPMForm::TPMForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPMForm::btnCloseClick(TObject *Sender)
{
PMForm->Close();
MainForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::FormShow(TObject *Sender)
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
for (int i=0;i<DataModule2->ResonatorType->RecordCount;i++){
                    edtType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    DataModule2->ResonatorType->Next();
                    }
edtOperator->Items->Clear();
DataModule2->OperatorLogin->Active=true;
DataModule2->OperatorLogin->First();
for (int i=0; i<DataModule2->OperatorLogin->RecordCount; i++){
    edtOperator->Items->Add(DataModule2->OperatorLogin->FieldByName("Name")->AsString);
    DataModule2->OperatorLogin->Next();

   }
    DataModule2->OperatorLogin->Active=false;
     edtSpc->Enabled=false;
     edtType->Enabled=true;
     edtMsk->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification where NameR='"+edtType->Text+"' ORDER BY Name");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::edtSpcChange(TObject *Sender)
{
edtMsk->Items->Clear();
AnsiString S,S1,S2;
VrProgressBar1->Position=0;

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where Spc='"+edtSpc->Text+"' ORDER BY msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("Msk")->AsString;

              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;
           if (S!=DataModule2->psiData->FieldByName("Msk")->AsString){

                      edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
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
      }
 edtMsk->Enabled=true;
 
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::RzButton1Click(TObject *Sender)
{
//PMNameForm->Show();
PNForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TPMForm::btnRecClick(TObject *Sender)
{
SYSTEMTIME st;
GetLocalTime(&st);
AnsiString S,S1;
VrProgressBar1->Position=0;
VrProgressBar1->MaxValue=PNForm->viewNumber->Count-1;
DataModule2->Protokol_Measure_ID->Active=true;
                     DataModule2->Protokol_Measure_ID->Append();
                     DataModule2->Protokol_Measure_ID->FieldByName("MSK")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Measure_ID->Post();
                     DataModule2->Protokol_Measure_ID->Last();
                     AnsiString Measure_Protokol_ID=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsString;
       DataModule2->Protokol_Measure_ID->Active=false;
        DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
                     DataModule2->Protokol_Archive->Active=true;
                        DataModule1->MeasureID->Active=true;
 DataModule1->MeasureID->Append();
 DataModule1->MeasureID->FieldByName("MSK")->AsString=edtNewMsk->Text;
 DataModule1->MeasureID->FieldByName("File")->AsString=edtNewFile->Text;
 DataModule1->MeasureID->Post();
 DataModule1->MeasureID->Last();
 AnsiString Measure_ID=DataModule1->MeasureID->FieldByName("MeasureID")->AsString;
     S="Select * from psidata where ";
     S1="Select * from psidatatemp where ";
       if (edtMsk->ItemIndex!=-1){
       S=S+"msk='"+edtMsk->Text+"' ";
       S1=S1+"msk='"+edtMsk->Text+"' ";
       }
       if (edtAn->Checked){
        S=S+"and Status2='Good' ";
        S1=S1+"and Status='Pass' ";
       }
       if (edt->Checked){
       S=S+"and Status='Годен' ";
       S1=S1+"and Status1='Годен' ";
       }
       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";
        S1=S1+"and `MSK-M`='"+edtM->Text+"' ";
       }
      if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){

        S="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ";
        S1="Select * from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";


       }
       S=S+"ORDER BY N";
       S1=S1+"ORDER BY Temp";

DataModule2->psiData->Active=false;
        DataModule2->psiData->SQL->Clear();
        DataModule2->psiData->SQL->Add(S);
        DataModule2->psiData->Active=true;
        DataModule2->psiData->First();
        DataModule2->psiDataTemp->SQL->Clear();
        DataModule2->psiDataTemp->SQL->Add(S1);
        DataModule2->psiDataTemp->Active=true;
        DataModule2->psiDataTemp->First();
         cmb_ID->Items->Add(Measure_ID);
          cmb_ID->Text=Measure_ID;
        DataModule2->psiData2->SQL->Clear();
        DataModule2->psiData2->SQL->Add("Select * from psidata where msk='"+edtNewMsk->Text+"' ORDER BY N");
        DataModule2->psiData2->Active=true;
        DataModule2->psiData2->First();
        DataModule2->psiDataTemp2->SQL->Clear();
        DataModule2->psiDataTemp2->SQL->Add("Select * from psidatatemp where msk='"+edtNewMsk->Text+"' ORDER BY Temp");
        DataModule2->psiDataTemp2->Active=true;
        DataModule2->psiDataTemp2->First();
    //удаляем повтор
        if (DataModule2->psiData2->RecordCount>0){
          int k=DataModule2->psiData2->RecordCount;
            for (int i=0;i<k;i++){
              DataModule2->psiData2->Delete();
              }
         }
          if (DataModule2->psiDataTemp2->RecordCount>0){
          int k=DataModule2->psiDataTemp2->RecordCount;
            for (int i=0;i<k;i++){
              DataModule2->psiDataTemp2->Delete();
              }
         }
   //******************************************************
   int pos_count=2;

for (int i=0; i<DataModule2->psiData->RecordCount; i++){

           for(int j=0; j<PNForm->viewNumber->Count; j++){
                 if (PNForm->viewNumber->ItemState[j]!=0 & PNForm->viewNumber->Items->Strings[j]==DataModule2->psiData->FieldByName("N")->AsString){
                    DataModule2->psiData2->Append();
                    DataModule2->psiData2->FieldByName("Msk")->AsString=edtNewMsk->Text;
                    DataModule2->psiData2->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                    AnsiString Pos;
                    if (pos_count<=124){
                    Pos="L"+FloatToStr(pos_count);
                    }
                    else {
                     Pos="U"+(FloatToStr(pos_count)-124);
                    }
                    pos_count++;
                    DataModule2->psiData2->FieldByName("Position")->AsString=Pos;
                    DataModule2->psiData2->FieldByName("Date")->AsString=FloatToStr(st.wDay)+"."+FloatToStr(st.wMonth)+"."+FloatToStr(st.wYear);
                    DataModule2->psiData2->FieldByName("A0")->AsString=DataModule2->psiData->FieldByName("A0")->AsString;
                    DataModule2->psiData2->FieldByName("A1")->AsString=DataModule2->psiData->FieldByName("A1")->AsString;
                    DataModule2->psiData2->FieldByName("A2")->AsString=DataModule2->psiData->FieldByName("A2")->AsString;
                    DataModule2->psiData2->FieldByName("A3")->AsString=DataModule2->psiData->FieldByName("A3")->AsString;
                    DataModule2->psiData2->FieldByName("A4")->AsString=DataModule2->psiData->FieldByName("A4")->AsString;
                    DataModule2->psiData2->FieldByName("Fn")->AsFloat=DataModule2->psiData->FieldByName("Fn")->AsFloat;
                    DataModule2->psiData2->FieldByName("Measure_ID")->AsString=Measure_ID;
                    DataModule2->psiData2->FieldByName("PrintSelect")->AsString=DataModule2->psiData->FieldByName("PrintSelect")->AsString;


                    DataModule2->psiData2->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                    DataModule2->psiData2->FieldByName("Operator")->AsString=edtOperator->Text;
                    DataModule2->psiData2->FieldByName("Nominal")->AsString=DataModule2->psiData->FieldByName("Nominal")->AsString;
                    DataModule2->psiData2->FieldByName("Time")->AsString=DataModule2->psiData->FieldByName("Time")->AsString;
                    DataModule2->psiData2->FieldByName("File")->AsString=edtNewFile->Text;
                    DataModule2->psiData2->FieldByName("M_Type")->AsString=DataModule2->psiData->FieldByName("M_Type")->AsString;
                    DataModule2->psiData2->FieldByName("MachineType")->AsString=MType->Text ;
                     DataModule2->psiData2->FieldByName("Machine_Serial")->AsString=SN->Text;
                     DataModule2->psiData2->FieldByName("PoverKa")->AsString="True";
                     DataModule2->psiData2->FieldByName("variant")->AsString=DataModule2->psiData->FieldByName("variant")->AsString;


                      DataModule2->psiData2->FieldByName("Machine_Call_Date")->AsString="08.08.2024";
                       DataModule2->psiData2->FieldByName("Version")->AsString=DataModule2->psiData->FieldByName("Version")->AsString;
                    if (DataModule2->psiData->FieldByName("Status")->AsString=="Аномал." || DataModule2->psiData->FieldByName("Status")->AsString=="Незамер."){
                     DataModule2->psiData2->FieldByName("Status")->AsString=DataModule2->psiData->FieldByName("Status")->AsString;
                    }
                    else {
                     DataModule2->psiData2->FieldByName("Status")->AsString="Годен";
                    }
                    if (DataModule2->psiData->FieldByName("Status2")->AsString=="BAD"){
                      DataModule2->psiData2->FieldByName("Status2")->AsString="BAD";
                    }
                    else {
                    DataModule2->psiData2->FieldByName("Status2")->AsString="Good";
                    }
                    if (DataModule2->psiData->FieldByName("PMI")->AsString=="True"){
                    DataModule2->psiData2->FieldByName("PMI")->AsString="True";
                    }
                    else {
                        if (ModifForm->chkPmi->Checked){
                           DataModule2->psiData2->FieldByName("PMI")->AsString="True";

                        }
                        else {

                           DataModule2->psiData2->FieldByName("PMI")->AsString="False";
                        }

                    }
                    
                    DataModule2->psiData2->FieldByName("intervalgf")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                   double temp;

                   randomize();
                   float kk=random(100);

                   double rr=kk/5000;
                   int hhh=0;
                   if (kk-50>0){
                      hhh=1;
                   }
                   if (kk-50<0){
                      hhh=-1;
                   }
                   if (kk-50==0){
                      hhh=0;
                   }
                   temp=DataModule2->psiData->FieldByName("F")->AsFloat+(DataModule2->psiData->FieldByName("F")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("F")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;
                   temp=DataModule2->psiData->FieldByName("Ftgk")->AsFloat+(DataModule2->psiData->FieldByName("Ftgk")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Ftgk")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;
                   temp=DataModule2->psiData->FieldByName("Rtgk")->AsFloat+(DataModule2->psiData->FieldByName("Rtgk")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Rtgk")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/10000;

                   temp=DataModule2->psiData->FieldByName("Tmax")->AsFloat+(DataModule2->psiData->FieldByName("Tmax")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Tmax")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/10000;
                   temp=DataModule2->psiData->FieldByName("Tmin")->AsFloat+(DataModule2->psiData->FieldByName("Tmin")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Tmin")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/10000;
                   temp=DataModule2->psiData->FieldByName("TurnOver")->AsFloat+(DataModule2->psiData->FieldByName("TurnOver")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("TurnOver")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;
                   temp=DataModule2->psiData->FieldByName("Slope")->AsFloat+(DataModule2->psiData->FieldByName("Slope")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Slope")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;

                   /*temp=DataModule2->psiData->FieldByName("Mono")->AsFloat+(DataModule2->psiData->FieldByName("Mono")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Mono")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;
                    */
                   temp=DataModule2->psiData->FieldByName("RCRB")->AsFloat+(DataModule2->psiData->FieldByName("RCRB")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("RCRB")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;

                   temp=DataModule2->psiData->FieldByName("R1R2")->AsFloat+(DataModule2->psiData->FieldByName("R1R2")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("R1R2")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;

                   temp=DataModule2->psiData->FieldByName("Spur")->AsFloat+(DataModule2->psiData->FieldByName("Spur")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Spur")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;

                   temp=DataModule2->psiData->FieldByName("C1_2C0")->AsFloat+(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("C1_2C0")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;

                   temp=DataModule2->psiData->FieldByName("Shum")->AsFloat+(DataModule2->psiData->FieldByName("Shum")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("Shum")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/30000;
                   temp=DataModule2->psiData->FieldByName("RR1")->AsFloat+(DataModule2->psiData->FieldByName("RR1")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("RR1")->AsFloat=temp;
                   randomize();
                   kk=random(100);
                   rr=kk/5000;
                   temp=DataModule2->psiData->FieldByName("C0_C1")->AsFloat+(DataModule2->psiData->FieldByName("C0_C1")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("C0_C1")->AsFloat=temp;
                   randomize();
                  kk=random(100);
                   rr=kk/30000;
                   temp=DataModule2->psiData->FieldByName("RR4")->AsFloat+(DataModule2->psiData->FieldByName("RR4")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("RR4")->AsFloat=temp;
                   temp=DataModule2->psiData->FieldByName("RR5")->AsFloat+(DataModule2->psiData->FieldByName("RR5")->AsFloat*rr*hhh);
                   DataModule2->psiData2->FieldByName("RR5")->AsFloat=temp;


                   DataModule2->psiDataTemp->First();

                      for (int l=0;l<DataModule2->psiDataTemp->RecordCount; l++){
                           DataModule2->psiDataTemp2->Append();
                           DataModule2->psiDataTemp2->FieldByName("Temp")->AsString=DataModule2->psiDataTemp->FieldByName("Temp")->AsString;
                           DataModule2->psiDataTemp2->FieldByName("Status")->AsString=DataModule2->psiDataTemp->FieldByName("Status")->AsString;
                           DataModule2->psiDataTemp2->FieldByName("Status1")->AsString=DataModule2->psiDataTemp->FieldByName("Status1")->AsString;
                           DataModule2->psiDataTemp2->FieldByName("pos")->AsString=DataModule2->psiDataTemp->FieldByName("pos")->AsString;
                           DataModule2->psiDataTemp2->FieldByName("N")->AsString=DataModule2->psiDataTemp->FieldByName("N")->AsString;
                           DataModule2->psiDataTemp2->FieldByName("MSK")->AsString=edtNewMsk->Text;
                           DataModule2->psiDataTemp2->FieldByName("Measure_ID")->AsString=Measure_ID;
                           DataModule2->psiDataTemp2->FieldByName("File")->AsString=edtNewFile->Text;
                           randomize();
                           kk=random(100);
                           rr=kk/5000;
                           while (fabs(DataModule2->psiDataTemp->FieldByName("F")->AsFloat*rr)>0.58 ){
                            rr=rr/2;
                           }
                           temp=DataModule2->psiDataTemp->FieldByName("F")->AsFloat+(DataModule2->psiDataTemp->FieldByName("F")->AsFloat*rr*hhh);
                           if (DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat==DataModule2->SqlSpec->FieldByName("Tnastr")->AsFloat){
                            temp=DataModule2->psiData2->FieldByName("Fn")->AsFloat;
                           }
                           DataModule2->psiDataTemp2->FieldByName("F")->AsFloat=temp;
                           randomize();
                           kk=random(100);
                   rr=kk/5000;

                           temp=DataModule2->psiDataTemp->FieldByName("R")->AsFloat+(DataModule2->psiDataTemp->FieldByName("R")->AsFloat*rr*hhh);
                           DataModule2->psiDataTemp2->FieldByName("R")->AsFloat=temp;
                            randomize();
                           kk=random(100);
                   rr=kk/5000;
                            if (DataModule2->psiDataTemp->FieldByName("Rb")->AsString!=""){
                           temp=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat+(DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat*rr*hhh);
                           DataModule2->psiDataTemp2->FieldByName("Rb")->AsFloat=temp;
                            randomize();
                           kk=random(100);
                           }
                   rr=kk/5000;

                           temp=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat+(DataModule2->psiDataTemp->FieldByName("FL")->AsFloat*rr*hhh);
                           if (DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat==DataModule2->SqlSpec->FieldByName("Tnastr")->AsFloat){
                            temp=DataModule2->psiData2->FieldByName("Fn")->AsFloat;
                           }
                           DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat=temp;
                           randomize();
                          kk=random(100);
                   rr=kk/5000;
                           if (DataModule2->psiDataTemp->FieldByName("Mono")->AsString!=""){
                           if (DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat>=DataModule2->SqlSpec->FieldByName("TmBegin")->AsFloat & DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat<=DataModule2->SqlSpec->FieldByName("TmEnd")->AsFloat){
                           temp=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat+(DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat*rr*hhh);
                           DataModule2->psiDataTemp2->FieldByName("Mono")->AsFloat=temp;
                           }
                           }
                           randomize();
                         kk=random(100);
                   rr=kk/5000;
                           temp=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat+(DataModule2->psiDataTemp->FieldByName("C0")->AsFloat*rr*hhh);
                           DataModule2->psiDataTemp2->FieldByName("C0")->AsFloat=temp;
                           randomize();
                         kk=random(100);
                   rr=kk/5000;
                           temp=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat+(DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat*rr*hhh);
                           DataModule2->psiDataTemp2->FieldByName("Cq")->AsFloat=temp;
                           randomize();
                           kk=random(100);
                   rr=kk/5000;
                           temp=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat+(DataModule2->psiDataTemp->FieldByName("Q")->AsFloat*rr*hhh);
                           DataModule2->psiDataTemp2->FieldByName("Q")->AsFloat=temp;
                           randomize();
                           kk=random(100);
                   rr=kk/5000;
                           temp=DataModule2->psiDataTemp->FieldByName("L")->AsFloat+(DataModule2->psiDataTemp->FieldByName("L")->AsFloat*rr*hhh);
                           DataModule2->psiDataTemp2->FieldByName("L")->AsFloat=temp;
                           DataModule2->psiDataTemp2->Post();
                           DataModule2->psiDataTemp->Next();

                          } //for
                            DataModule2->psiDataTemp2->Active=false;
                            DataModule2->psiDataTemp2->SQL->Clear();
                            DataModule2->psiDataTemp2->SQL->Add("Select * from psidatatemp where Measure_ID='"+Measure_ID+"' and N='"+DataModule2->psiData->FieldByName("N")->AsString+"' ORDER BY Temp");
                            DataModule2->psiDataTemp2->Active=true;
                            DataModule2->psiDataTemp2->First();
                            double FF,Rx,FFmax,FFmin,FFptp,FFptp_2,R,Rmax,Rmin,FT,FT1,FT2,FT3,FT4,Mono,RcRbmax;

                            Rmax=0;
                            Rmin=10000;
                            Mono=0;
                            RcRbmax=0;
                            double nom;
                            for (int u=0; u<DataModule2->psiDataTemp2->RecordCount;u++){
                            Mono=0;
                             if (DataModule2->SqlSpec->FieldByName("Tnastr")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                   if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="по замеру"){
                                        if (DataModule2->SqlSpec->FieldByName("LoadType")->AsString=="Series" || DataModule2->SqlSpec->FieldByName("LoadType")->AsString=="Saunders(FR)"){
                                            nom=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat;

                                          }
                                          else {
                                              nom=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat;

                                          }
                                     }
                                 if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="Fs(Fr)"){
                                    nom=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat;

                                 }
                                  else if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="FL"){
                                     nom=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat;

                                 }
                                  else if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="FL0"){
                                      nom=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat;

                                 }
                                 break;
                               }
                             DataModule2->psiDataTemp2->Next();
                            }
                            DataModule2->psiDataTemp2->First();
                             if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="по замеру"){
                                        if (DataModule2->SqlSpec->FieldByName("LoadType")->AsString=="Series" || DataModule2->SqlSpec->FieldByName("LoadType")->AsString=="Saunders(FR)"){
                                            FFmax=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat-nom;
                                            FFmin=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat-nom;
                                          }
                                          else {
                                              FFmax=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;
                                            FFmin=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;
                                          }
                                     }
                                 if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="Fs(Fr)"){
                                    FFmax=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat-nom;
                                            FFmin=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat-nom;
                                 }
                                  else if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="FL"){
                                      FFmax=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;
                                      FFmin=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;
                                 }
                                  else if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="FL0"){
                                      FFmax=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;
                                      FFmin=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;
                                 }
                          for (int y=0; y<DataModule2->psiDataTemp2->RecordCount;y++){

                                    if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="по замеру"){
                                        if (DataModule2->SqlSpec->FieldByName("LoadType")->AsString=="Series" || DataModule2->SqlSpec->FieldByName("LoadType")->AsString=="Saunders(FR)"){
                                            FF=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat-nom;

                                          }
                                          else {
                                              FF=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;

                                          }
                                     }
                                 if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="Fs(Fr)"){
                                    FF=DataModule2->psiDataTemp2->FieldByName("F")->AsFloat-nom;

                                 }
                                 else if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="FL"){
                                      FF=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;

                                 }
                                 else if (DataModule2->SqlSpec->FieldByName("TCHType")->AsString=="FL0") {
                                    FF=DataModule2->psiDataTemp2->FieldByName("FL")->AsFloat-nom;
                                 }
                                 Rx=DataModule2->psiDataTemp2->FieldByName("R")->AsFloat;
                                if (DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat>=DataModule2->SqlSpec->FieldByName("TmBegin")->AsFloat & DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat<=DataModule2->SqlSpec->FieldByName("TmEnd")->AsFloat){
                                  if (DataModule2->psiDataTemp2->FieldByName("Mono")->AsString!=""){

                                 if (fabs(DataModule2->psiDataTemp2->FieldByName("Mono")->AsFloat)>Mono){
                                   if (y>0){
                                     Mono=fabs(DataModule2->psiDataTemp2->FieldByName("Mono")->AsFloat);
                                     }
                                 }
                                 
                                 }

                                 else {
                                  Mono=0;
                                  DataModule2->psiData2->FieldByName("Status")->AsString="Незамер." ;
                                 }
                                 }
                                  if (DataModule2->psiDataTemp2->FieldByName("Rb")->AsString!=""){
                                       double RcRb =DataModule2->psiDataTemp2->FieldByName("R")->AsFloat/DataModule2->psiDataTemp2->FieldByName("Rb")->AsFloat;

                                 if (RcRb>RcRbmax){
                                     RcRbmax=RcRb;
                                 }
                                 }
                                if (FF>FFmax){
                                 FFmax=FF;

                                }
                                if (FF<FFmin){
                                FFmin=FF;
                                }
                                if (Rx>Rmax){
                                 Rmax=Rx;

                                }
                                if (Rx<Rmin){
                                Rmin=Rx;
                                }
                               
                              if (DataModule2->SqlSpec->FieldByName("Tpar")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  DataModule2->psiData2->FieldByName("R")->AsFloat=DataModule2->psiDataTemp2->FieldByName("R")->AsFloat;
                                  R=DataModule2->psiDataTemp2->FieldByName("R")->AsFloat;
                               }
                              if (DataModule2->SqlSpec->FieldByName("Tc0")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  if (DataModule2->psiDataTemp2->FieldByName("C0")->AsFloat<0.0001){
                                  DataModule2->psiData2->FieldByName("C0")->AsFloat=DataModule2->psiDataTemp2->FieldByName("C0")->AsFloat*1E12;
                                  }
                                  else {
                                   DataModule2->psiData2->FieldByName("C0")->AsFloat=DataModule2->psiDataTemp2->FieldByName("C0")->AsFloat;

                                  }
                               }
                               if (DataModule2->SqlSpec->FieldByName("Tq")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){

                                  DataModule2->psiData2->FieldByName("Q")->AsFloat=DataModule2->psiDataTemp2->FieldByName("Q")->AsFloat;
                               }
                               if (DataModule2->SqlSpec->FieldByName("Tcq")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                               if (DataModule2->psiDataTemp2->FieldByName("Cq")->AsFloat<0.0001){
                                  DataModule2->psiData2->FieldByName("Cq")->AsFloat=DataModule2->psiDataTemp2->FieldByName("Cq")->AsFloat*1E15;
                                  }
                                  else {

                                  DataModule2->psiData2->FieldByName("Cq")->AsFloat=DataModule2->psiDataTemp2->FieldByName("Cq")->AsFloat;
                                  }
                               }
                                if (DataModule2->SqlSpec->FieldByName("Lt")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  DataModule2->psiData2->FieldByName("L")->AsFloat=DataModule2->psiDataTemp2->FieldByName("L")->AsFloat;
                               }
                                if (DataModule2->SqlSpec->FieldByName("FTxt")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  DataModule2->psiData2->FieldByName("FT")->AsFloat=FF;
                               }
                                if (DataModule2->SqlSpec->FieldByName("Ft1t")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  DataModule2->psiData2->FieldByName("Ft1")->AsFloat=FF;
                               }
                                 if (DataModule2->SqlSpec->FieldByName("Ft2t")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  DataModule2->psiData2->FieldByName("Ft2")->AsFloat=FF;
                               }
                                 if (DataModule2->SqlSpec->FieldByName("Ft3t")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  DataModule2->psiData2->FieldByName("Ft3")->AsFloat=FF;
                               }
                                 if (DataModule2->SqlSpec->FieldByName("Ft4t")->AsFloat==DataModule2->psiDataTemp2->FieldByName("Temp")->AsFloat){
                                  DataModule2->psiData2->FieldByName("Ft4")->AsFloat=FF;
                               }
                             DataModule2->psiDataTemp2->Next();
                          }
                         DataModule2->psiData2->FieldByName("Mono")->AsFloat=Mono;
                          DataModule2->psiData2->FieldByName("Fn")->AsFloat=nom;
                        DataModule2->psiData2->FieldByName("Fmax")->AsFloat=FFmax;
                        DataModule2->psiData2->FieldByName("Fmin")->AsFloat=FFmin;
                         DataModule2->psiData2->FieldByName("Fptp")->AsFloat=FFmax-FFmin;
                        DataModule2->psiData2->FieldByName("Fptp_2")->AsFloat=(FFmax-FFmin)/2;
                         DataModule2->psiData2->FieldByName("Rmax")->AsFloat=Rmax;
                          DataModule2->psiData2->FieldByName("Rmin")->AsFloat=Rmin;
                           DataModule2->psiData2->FieldByName("RcRb")->AsFloat=RcRbmax;
                          if (R==0){

                          DataModule2->psiData2->FieldByName("Status")->AsString="Незамер." ;
                          }
                          if (R!=0){
                            DataModule2->psiData2->FieldByName("RR2")->AsFloat=Rmax/R;
                          }
                          if (Rmin!=0){
                             DataModule2->psiData2->FieldByName("RR3")->AsFloat=R/Rmin;

                          }
                        DataModule2->psiData2->FieldByName("Rmax-Rmin")->AsFloat=Rmax-Rmin;
                        if (fabs(FFmax)>=fabs(FFmin)){

                         DataModule2->psiData2->FieldByName("Fmaxm")->AsFloat=FFmax;
                        }
                        else {
                          DataModule2->psiData2->FieldByName("Fmaxm")->AsFloat=FFmin;
                        }
                         DataModule2->psiData2->Post();
                         Command1->SQL->Clear();
                         Command1->SQL->Add("Update psidatatemp set Fn='"+FloatToStr(nom)+"' where Measure_ID='"+Measure_ID+"' and N='"+DataModule2->psiData->FieldByName("N")->AsString+"'");
                         Command1->Execute();
                 break;
                 }

           }
           VrProgressBar1->Position=i+1;
              DataModule2->psiData->Next();
       }
 DataModule2->psiData->Active=false;
 DataModule2->psiDataTemp->Active=false;
 DataModule2->psiData2->Active=false;
 DataModule2->psiDataTemp2->Active=false;
 ActionList1->Actions[0]->Execute();
}
//---------------------------------------------------------------------------



void __fastcall TPMForm::btnDetailClick(TObject *Sender)
{
PMForm->Hide();
PMDetailForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::btnPrintClick(TObject *Sender)
{
/*   AnsiString S,S1,WD;
    AnsiString FieldName;
      bool kl=false;
char WindowsDirectory[MAX_PATH];
GetWindowsDirectory(WindowsDirectory, MAX_PATH);
WD=WindowsDirectory;

        double Fmax,Fmin,Rmax,Rmin,RRmax,RRmin,Qmax,Qmin,C0max,C0min,Cqmax,Cqmin,FTmax,FTmin,SRmax,SRmin,Fmaxmax,Fminmin,Smax,Smin,Mmax,Mmin,Rmaxmax,Rmaxmin;
      double ShMax,ShMin,RR1max,RR1min,Rc_Rbmax,Tminmax,Tminmin,Tmaxmax,Tmaxmin,Fptpmax,Fptpmin,C0_C1max,C0_C1min,Fptp2max,Fptp2min;
      double old1min,old1max,RR2max,RR2min,RR3max,RR3min,FnastrHz,RR4max,RR4min,RR5max,RR5min,Ft1max,Ft1min,Ft2max,Ft2min,old2max,old2min;
      double old3max,old3min,C1_2C0max,C1_2C0min;
      DataModule2->Protokol_Measure_ID->Active=true;
      DataModule2->psiData->Active=true;
                     DataModule2->Protokol_Measure_ID->Append();
                     DataModule2->Protokol_Measure_ID->FieldByName("MSK")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Measure_ID->Post();
                     DataModule2->Protokol_Measure_ID->Last();
                     AnsiString Measure_Protokol_ID=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsString;
       DataModule2->Protokol_Measure_ID->Active=false;
        DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
                     DataModule2->Protokol_Archive->Active=true;
     S="Select SQL_NO_CACHE * from psidata where ";
     S1="Select SQL_NO_CACHE * from psidatatemp where ";
       if (edtNewMsk->Text!=""){
       S=S+"msk='"+edtNewMsk->Text+"' ";
       S1=S1+"msk='"+edtNewMsk->Text+"' ";
       }

       if (edtAn->Checked){
        S=S+"and Status2='Good' and Status!='Аномал.'";
        S1=S1+"and Status='Pass' and Status1!='Аномал.'";
       }
       if (edt->Checked){
       S=S+"and Status='Годен' ";
       S1=S1+"and Status1='Годен' ";
       }
       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";
        S1=S1+"and `MSK-M`='"+edtM->Text+"' ";
       }
     
       S=S+"ORDER BY N";
       S1=S1+"ORDER BY Temp";
//***************************************************************************************************************
    if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){
             Fmax=DataModule2->SqlSpec->FieldByName("Fmax")->AsFloat;
          }
          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
               Fmin=DataModule2->SqlSpec->FieldByName("Fmin")->AsFloat;
             }
           if (DataModule2->SqlSpec->FieldByName("FnastrHZ")->AsFloat>0){
               FnastrHz=DataModule2->SqlSpec->FieldByName("FnastrHz")->AsFloat;
             }

           if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
               Rmax=DataModule2->SqlSpec->FieldByName("Rmax")->AsFloat;
             }
             if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                    Rmin=DataModule2->SqlSpec->FieldByName("Rmin")->AsFloat;
                    }
            if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                  Qmax=DataModule2->SqlSpec->FieldByName("Qmax")->AsFloat;
               }
        if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
             Qmin=DataModule2->SqlSpec->FieldByName("Qmin")->AsFloat;
             }
          if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
              RRmax=DataModule2->SqlSpec->FieldByName("RRmax")->AsFloat;
             }
           if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
               RRmin=DataModule2->SqlSpec->FieldByName("RRmin")->AsFloat;
              }
           if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
              Rmaxmax=DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsFloat;
             }
           if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
               Rmaxmin=DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsFloat;
              }
              if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                   C0max=DataModule2->SqlSpec->FieldByName("C0max")->AsFloat;
                  }
               if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                      C0min=DataModule2->SqlSpec->FieldByName("C0min")->AsFloat;
                     }
              if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                  Cqmax=DataModule2->SqlSpec->FieldByName("Cqmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                   Cqmin=DataModule2->SqlSpec->FieldByName("Cqmin")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                  FTmax=DataModule2->SqlSpec->FieldByName("FTmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                   FTmin=DataModule2->SqlSpec->FieldByName("FTmin")->AsFloat;
                   }

                if (DataModule2->SqlSpec->FieldByName("Rsp2max")->AsString!="no"){
                  SRmax=DataModule2->SqlSpec->FieldByName("Rsp2max")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Rsp2min")->AsString!="no"){
                   SRmin=DataModule2->SqlSpec->FieldByName("Rsp2min")->AsFloat;
                   }

                  if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                  Fmaxmax=DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                   Fminmin=DataModule2->SqlSpec->FieldByName("Fminmin")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                  Smax=DataModule2->SqlSpec->FieldByName("Smax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                   Smin=DataModule2->SqlSpec->FieldByName("Smin")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                  Mmax=DataModule2->SqlSpec->FieldByName("Mmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                   Mmin=DataModule2->SqlSpec->FieldByName("Mmin")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                  ShMax=DataModule2->SqlSpec->FieldByName("ShMax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                   ShMin=DataModule2->SqlSpec->FieldByName("ShMin")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                  RR1max=DataModule2->SqlSpec->FieldByName("RR1max")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                   RR1min=DataModule2->SqlSpec->FieldByName("RR1min")->AsFloat;
                   }

               if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                   Rc_Rbmax=DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                   Tminmax=DataModule2->SqlSpec->FieldByName("Tminmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                   Tminmin=DataModule2->SqlSpec->FieldByName("Tminmin")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                   Tmaxmax=DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                   Tmaxmin=DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                   Fptpmax=DataModule2->SqlSpec->FieldByName("Fptpmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                   Fptpmin=DataModule2->SqlSpec->FieldByName("Fptpmin")->AsFloat;
                   }
                    if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                   Fptp2max=DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                   Fptp2min=DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                   C0_C1max=DataModule2->SqlSpec->FieldByName("C0_C1max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                   C0_C1min=DataModule2->SqlSpec->FieldByName("C0_C1min")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                   RR2max=DataModule2->SqlSpec->FieldByName("RR2max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                   RR2min=DataModule2->SqlSpec->FieldByName("RR2min")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                   RR3max=DataModule2->SqlSpec->FieldByName("RR3max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                   RR3min=DataModule2->SqlSpec->FieldByName("RR3min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                   RR4max=DataModule2->SqlSpec->FieldByName("RR4max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                   RR4min=DataModule2->SqlSpec->FieldByName("RR4min")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                   RR5max=DataModule2->SqlSpec->FieldByName("RR5max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                   RR5min=DataModule2->SqlSpec->FieldByName("RR5min")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                   Ft1min=DataModule2->SqlSpec->FieldByName("Ft1min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                   Ft1max=DataModule2->SqlSpec->FieldByName("Ft1max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                   Ft2min=DataModule2->SqlSpec->FieldByName("Ft2min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                   Ft2max=DataModule2->SqlSpec->FieldByName("Ft2max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                   old1max=DataModule2->SqlSpec->FieldByName("old1max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                   old1min=DataModule2->SqlSpec->FieldByName("old1min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old2max")->AsString!="no"){
                   old2max=DataModule2->SqlSpec->FieldByName("old2max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old2min")->AsString!="no"){
                   old2min=DataModule2->SqlSpec->FieldByName("old2min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old3max")->AsString!="no"){
                   old3max=DataModule2->SqlSpec->FieldByName("old3max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old3min")->AsString!="no"){
                   old3min=DataModule2->SqlSpec->FieldByName("old3min")->AsFloat;
                   }
                     if (DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsString!="no"){
                   C1_2C0max=DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsString!="no"){
                   C1_2C0min=DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsFloat;
                   }
                    DataModule1->DropLianozTable->Execute();
  DataModule1->CreateLianozTable->Execute();
  Lianoz->Open();
//*********************************************************************************************************************

 if (edtProtokol->Text=="Протокол ВП" || edtProtokol->Text=="Протокол ВП(ПСИ)"|| edtProtokol->Text=="Протокол(Этикетка)"){





        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
        DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select SQL_NO_CACHE * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select SQL_NO_CACHE * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;
        int h=DataModule2->Lianoz->RecordCount;

       DataModule2->psiData->Active=false;
       DataModule2->psiData->SQL->Clear();
       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
          if (edtProtokol->Text=="Протокол ВП" || edtProtokol->Text=="Протокол(Этикетка)"){
                               if (DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True" || DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="True"){
                  if (DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="False"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                       kl=true;
                                  }
                            }
                     }
                     else {
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat>FnastrHz-FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat<-FnastrHz+FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                       kl=true;
                                  }
                            }



                     }
                 }
                  if (DataModule2->SqlSpec->FieldByName("FtVP")->AsString=="True"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-fabs(Fmax)*DataModule2->SqlSpec->FieldByName("DopuskF_P")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+fabs(Fmin)*DataModule2->SqlSpec->FieldByName("DopuskF_P")->AsFloat/100){
                                       kl=true;
                                  }
                            }
                     }
            if (DataModule2->SqlSpec->FieldByName("R")->AsString=="True" & DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="True"){
                  if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="False"){
             if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }

               }
               else if(DataModule2->SqlSpec->FieldByName("Rtgk")->AsString=="True") {
                    if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }


               }
           }
               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                    kl=true;
                              }
                      }
                    }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                              if (DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                              kl=true;
                                            }
                                }
                               if (DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                                  if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                              kl=true;
                                            }
                               }

                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                       if (DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                    kl=true;
                              }
                           }
                        if (DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                    kl=true;
                              }
                           }

                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Shum")->AsFloat>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Shum")->AsFloat<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat<old1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat>old1max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=true;
                              }
                      }

                         if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR5max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat<C1_2C0min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat>C1_2C0max){
                                    kl=true;
                              }
                      }

           }
           else {
                     if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no" & DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax){
                                                      kl=true;
                                                  }

                                             }
                if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no" & DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin){
                                       kl=true;
                                  }
                   }
             if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin){
                                    kl=true;
                              }
                  }
               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>Cqmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<Cqmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>FTmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<FTmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>SRmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<SRmin){
                                    kl=true;
                              }
                      }
                  }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>Fmaxmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<Fminmin){
                                    kl=true;
                              }
                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>RRmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<RRmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>Rmaxmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<Rmaxmin){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Shum")->AsFloat>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Shum")->AsFloat<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<Fptpmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>Fptpmax){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<Fptp2min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>Fptp2max){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat<old1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat>old1max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=true;
                              }
                      }

                           if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR5max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    kl=true;
                              }
                      }
                        if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat<C1_2C0min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat>C1_2C0max){
                                    kl=true;
                              }
                      }


           }
            if (kl==false){
                     for (int l=0; l<PMNameForm->viewNumber->Count; l++){
                            if (PMNameForm->viewNumber->Items->Strings[l]==DataModule2->psiData->FieldByName("N")->AsString){
                                if (PMNameForm->viewNumber->ItemState[l]!=0){
                                    kl=false;
                                    break;
                             }
                            }
                            else {
                             kl=true;
                            }
                     }
                 }

            if (!kl){

                     DataModule2->Protokol_Archive->Append();
                      DataModule2->Protokol_Archive->FieldByName("ProtokolType_ID")->AsString="1";
                     DataModule2->Protokol_Archive->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C1_2C0")->AsFloat=DataModule2->psiData->FieldByName("C1_2C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Protokol_Archive->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ftgk")->AsFloat=DataModule2->psiData->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Rtgk")->AsFloat=DataModule2->psiData->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                      DataModule2->Protokol_Archive->FieldByName("RR2")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR3")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR4")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR5")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                     DataModule2->Protokol_Archive->Post();




                     DataModule2->Lianoz->Append();
                     DataModule2->Lianoz->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Lianoz->FieldByName("PMI")->AsString=DataModule2->psiData->FieldByName("PMI")->AsString;
                     DataModule2->Lianoz->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Lianoz->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ftgk")->AsFloat=DataModule2->psiData->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rtgk")->AsFloat=DataModule2->psiData->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C1_2C0")->AsFloat=DataModule2->psiData->FieldByName("C1_2C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Lianoz->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Lianoz->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Lianoz->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                     DataModule2->Lianoz->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                     DataModule2->Lianoz->Post();
                    }
             DataModule2->psiData->Next();
         }


        DataModule2->Print->Active=true;
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;

          Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
           if (DataModule2->Lianoz->FieldByName("PMI")->AsString=="True" & edtProtokol->Text=="Протокол(Этикетка)"){
                    FieldName="VP-RK(ETK)PMI";
                    }
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
          DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
 }

 if (edtProtokol->Text=="Протокол ОТК"){



           DataModule2->psiData->Active=false;
           DataModule2->psiData->SQL->Clear();
           DataModule2->psiData->SQL->Add(S);
           DataModule2->psiData->Active=true;
           DataModule2->psiData->First();
           DataModule2->psiData->RecordCount;
           DataModule2->Print->Active=true;
             DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop Table IF EXISTS  `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();

DataModule2->Parameters->Active=true;
DataModule2->Parameters->First();
DataModule1->CreateStatTable->SQL->Clear();
DataModule1->CreateStatTable->SQL->Add("CREATE TABLE `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CreateStatTable->SQL->Add("(`ID` int(11) NOT NULL auto_increment,`Measure_ID` int(11) default NULL,");
                for (int i=0; i<DataModule2->Parameters->RecordCount; i++){
                        if (DataModule2->SqlSpec->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
                          AnsiString P_Name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_AVG_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Max_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Min_A` double(15,3) default NULL,");
                           DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_ST_DEV_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_CPK` double(15,3) default NULL,");
                           }
                        DataModule2->Parameters->Next();
                     }
DataModule1->CreateStatTable->SQL->Add("   PRIMARY KEY  (`ID`),  UNIQUE KEY `ID` USING BTREE (`ID`)) ENGINE=MEMORY DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;");
DataModule1->CreateStatTable->Execute();

DataModule1->psi_stat_1->Active=false;
DataModule1->psi_stat_1->SQL->Clear();
DataModule1->psi_stat_1->SQL->Add("Select * from `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->psi_stat_1->Active=true;
DataModule1->psi_stat_1->Append();
DataModule1->psi_stat_1->FieldByName("Measure_ID")->AsString=DataModule2->psiData->FieldByName("Measure_ID")->AsString;

        DataModule2->Statistika->Active=false;
        DataModule2->Statistika->SQL->Clear();
        DataModule2->Statistika->SQL->Add("Select * from psi_statistika where Measure_ID='"+DataModule2->psiData->FieldByName("Measure_ID")->AsString+"'");
        DataModule2->Statistika->Active=true;
        DataModule2->Statistika->First();
 for (int i=0; i<DataModule2->Statistika->RecordCount; i++){
            DataModule2->Parameters->First();
          for (int j=0; j<DataModule2->Parameters->RecordCount; j++){
              if (DataModule2->Parameters->FieldByName("ID")->AsString==DataModule2->Statistika->FieldByName("Parametr_ID")->AsString){
               AnsiString PP_name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
               if (DataModule2->SqlSpec->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
               DataModule1->psi_stat_1->FieldByName(PP_name+"_AVG_A")->AsString=DataModule2->Statistika->FieldByName("AVG_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_Max_A")->AsString=DataModule2->Statistika->FieldByName("Max_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_Min_A")->AsString=DataModule2->Statistika->FieldByName("Min_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_ST_DEV_A")->AsString=DataModule2->Statistika->FieldByName("STDEV_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_CPK")->AsString=DataModule2->Statistika->FieldByName("CPK")->AsString;
               }
               break;
              }
              DataModule2->Parameters->Next();
          }

       DataModule2->Statistika->Next();
 }
DataModule1->psi_stat_1->Post();
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
           Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
          DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
                }
  if (edtProtokol->Text=="Протокол измерений"){



           DataModule2->psiData->Active=false;
           DataModule2->psiData->SQL->Clear();
           DataModule2->psiData->SQL->Add(S);
           DataModule2->psiData->Active=true;
           DataModule2->psiData->First();
           DataModule2->psiData->RecordCount;
           DataModule2->Print->Active=true;
             DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop Table IF EXISTS  `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();

DataModule2->Parameters->Active=true;
DataModule2->Parameters->First();
DataModule1->CreateStatTable->SQL->Clear();
DataModule1->CreateStatTable->SQL->Add("CREATE TABLE `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CreateStatTable->SQL->Add("(`ID` int(11) NOT NULL auto_increment,`Measure_ID` int(11) default NULL,");
                for (int i=0; i<DataModule2->Parameters->RecordCount; i++){
                        if (DataModule2->SqlSpec->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
                          AnsiString P_Name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_AVG_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Max_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Min_A` double(15,3) default NULL,");
                           DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_ST_DEV_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_CPK` double(15,3) default NULL,");
                           }
                        DataModule2->Parameters->Next();
                     }
DataModule1->CreateStatTable->SQL->Add("   PRIMARY KEY  (`ID`),  UNIQUE KEY `ID` USING BTREE (`ID`)) ENGINE=MEMORY DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;");
DataModule1->CreateStatTable->Execute();

DataModule1->psi_stat_1->Active=false;
DataModule1->psi_stat_1->SQL->Clear();
DataModule1->psi_stat_1->SQL->Add("Select * from `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->psi_stat_1->Active=true;
DataModule1->psi_stat_1->Append();
DataModule1->psi_stat_1->FieldByName("Measure_ID")->AsString=DataModule2->psiData->FieldByName("Measure_ID")->AsString;

        DataModule2->Statistika->Active=false;
        DataModule2->Statistika->SQL->Clear();
        DataModule2->Statistika->SQL->Add("Select * from psi_statistika where Measure_ID='"+DataModule2->psiData->FieldByName("Measure_ID")->AsString+"'");
        DataModule2->Statistika->Active=true;
        DataModule2->Statistika->First();
 for (int i=0; i<DataModule2->Statistika->RecordCount; i++){
            DataModule2->Parameters->First();
          for (int j=0; j<DataModule2->Parameters->RecordCount; j++){
              if (DataModule2->Parameters->FieldByName("ID")->AsString==DataModule2->Statistika->FieldByName("Parametr_ID")->AsString){
               AnsiString PP_name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
               if (DataModule2->SqlSpec->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
               DataModule1->psi_stat_1->FieldByName(PP_name+"_AVG_A")->AsString=DataModule2->Statistika->FieldByName("AVG_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_Max_A")->AsString=DataModule2->Statistika->FieldByName("Max_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_Min_A")->AsString=DataModule2->Statistika->FieldByName("Min_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_ST_DEV_A")->AsString=DataModule2->Statistika->FieldByName("STDEV_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_CPK")->AsString=DataModule2->Statistika->FieldByName("CPK")->AsString;
               }
               break;
              }
              DataModule2->Parameters->Next();
          }

       DataModule2->Statistika->Next();
 }
DataModule1->psi_stat_1->Post();
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
           Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
          DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
                }
 if (edtProtokol->Text=="Протокол ВП без запаса"){

      DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();
        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
                    DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select SQL_NO_CACHE * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select SQL_NO_CACHE * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;

       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                kl=false;

              if (DataModule2->psiData->FieldByName("F")->AsFloat*DataModule2->psiData->FieldByName("R")->AsFloat*DataModule2->psiData->FieldByName("C0")->AsFloat>0)
                         {
                            if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){
                                           if(DataModule2->psiData->FieldByName("F")->AsFloat>(Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat) & DataModule2->psiData->FieldByName("F")->AsFloat<Fmax){
                                                    kl=true;
                                          }
                             }

                           if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                           if(DataModule2->psiData->FieldByName("F")->AsFloat<(Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat) & DataModule2->psiData->FieldByName("F")->AsFloat>Fmin ){
                                                 kl=true;
                                           }
                             }


                          if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                                         if(DataModule2->psiData->FieldByName("R")->AsFloat>(Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)) & DataModule2->psiData->FieldByName("R")->AsFloat<Rmax){
                                                kl=true;
                                              }
                           }
                            if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                                         if(DataModule2->psiData->FieldByName("R")->AsFloat>(Rmin-Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)) & DataModule2->psiData->FieldByName("R")->AsFloat>Rmin){
                                                kl=true;
                                              }
                            }

                           if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<(Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)) &DataModule2->psiData->FieldByName("Q")->AsFloat>Qmin){
                                             kl=true;
                                          }
                              }

                             if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<(Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)) &DataModule2->psiData->FieldByName("Q")->AsFloat<Qmax){
                                             kl=true;
                                          }
                               }


                              if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                                                if(DataModule2->psiData->FieldByName("C0")->AsFloat>(C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)) & DataModule2->psiData->FieldByName("C0")->AsFloat<C0max){
                                                      kl=true;
                                                 }
                                  }
                                if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                                if(DataModule2->psiData->FieldByName("C0")->AsFloat<(C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)) & DataModule2->psiData->FieldByName("C0")->AsFloat>C0min){
                                                      kl=true;
                                                 }
                                  }





                               if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100)) & DataModule2->psiData->FieldByName("Cq")->AsFloat<Cqmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100)) & DataModule2->psiData->FieldByName("Cq")->AsFloat>Cqmin){
                                                            kl=true;
                                                     }
                                 }

                                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat) & DataModule2->psiData->FieldByName("FT")->AsFloat<FTmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat) & DataModule2->psiData->FieldByName("FT")->AsFloat>FTmin){
                                                            kl=true;
                                                     }
                                 }
                                   if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                                   if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat) & DataModule2->psiData->FieldByName("Spur")->AsFloat<SRmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat) & DataModule2->psiData->FieldByName("Spur")->AsFloat>SRmin){
                                                            kl=true;
                                                     }
                                 }
                                }
                                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fmaxm")->AsFloat<Fmaxmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat<(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fmaxm")->AsFloat>Fminmin){
                                                            kl=true;
                                                     }
                                 }
                                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp")->AsFloat<Fptpmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp")->AsFloat>Fptpmin){
                                                            kl=true;
                                                     }
                                 }
                                  if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<Fptp2max){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min-Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>Fptp2min){
                                                            kl=true;
                                                     }
                                 }
                                  if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Slope")->AsFloat>(Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat) & DataModule2->psiData->FieldByName("Slope")->AsFloat<Smax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Slope")->AsFloat<(Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat) & DataModule2->psiData->FieldByName("Slope")->AsFloat>Smin){
                                                            kl=true;
                                                     }
                                 }




             if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax){
                     kl=false;
                   }
                 }
            if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
               if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin){
                 kl=false;
                }
                }
                  if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>Rmaxmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<Rmaxmin){
                 kl=false;
                }
                }
                  if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                 kl=false;
                }
                }



                if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Cq")->AsFloat>Cqmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Cq")->AsFloat<Cqmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("FT")->AsFloat<FTmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("FT")->AsFloat>FTmax){
                 kl=false;
                }
                }
                  if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Spur")->AsFloat>SRmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Spur")->AsFloat<SRmin){
                 kl=false;
                }
                }
                }
                  if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat>Fmaxmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat<Fminmin){
                 kl=false;
                }
                }
                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>RRmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<RRmin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>Fptpmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<Fptpmin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>Fptp2max){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<Fptp2min){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                 kl=false;
                }
                }

                 if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old")->AsFloat<old1min){
                                    kl=false;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old")->AsFloat>old1max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=false;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=false;
                              }
                      }

                           if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    kl=false;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR5max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    kl=false;
                              }
                      }
                            if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }


               }
               else {kl=false;}


            if (kl){
                   DataModule2->Protokol_Archive->Append();
                     DataModule2->Protokol_Archive->FieldByName("ProtokolType_ID")->AsString="3";
                     DataModule2->Protokol_Archive->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Protokol_Archive->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                      DataModule2->Protokol_Archive->FieldByName("RR2")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR3")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR4")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR5")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                     DataModule2->Protokol_Archive->Post();



                     DataModule2->Lianoz->Append();
                     DataModule2->Lianoz->FieldByName("PMI")->AsString=DataModule2->psiData->FieldByName("PMI")->AsString;
                     DataModule2->Lianoz->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Lianoz->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Lianoz->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Lianoz->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Lianoz->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Lianoz->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     DataModule2->Lianoz->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                        if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Lianoz->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                     DataModule2->Lianoz->Post();
                    }
             DataModule2->psiData->Next();
         }


        DataModule2->Print->Active=true;
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
        Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
          DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
 }

  if (edtProtokol->Text=="Распечатка" || edtProtokol->Text=="Распечатка(ПСИ)"){


           DataModule2->psiData->Active=false;
           DataModule2->psiData->SQL->Clear();
           DataModule2->psiData->SQL->Add(S);
           DataModule2->psiData->Active=true;
           DataModule2->psiData->First();
           DataModule2->psiDataTemp->Active=false;
           DataModule2->psiDataTemp->SQL->Clear();
           DataModule2->psiDataTemp->SQL->Add(S1);
           DataModule2->psiDataTemp->Active=true;
           DataModule2->psiDataTemp->First();
           DataModule2->psiDataTemp->RecordCount;
           DataModule2->psiData->RecordCount;
           DataModule2->Print->Active=true;

           DataModule2->SqlSpec->Active=false;
           DataModule2->SqlSpec->SQL->Clear();
           DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE * from  specification where Name='"+edtSpc->Text+"'");
           DataModule2->SqlSpec->Active=true;
          DataModule2->SqlSpec->First();
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
             Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
        Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
          DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;




  }

  if (edtProtokol->Text=="Паспорт"){
        DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();


        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
        DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;

       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
                       if (DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True" || DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="True"){
                  if (DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="False"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                       kl=true;
                                  }
                            }
                     }
                     else {
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat>FnastrHz-FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat<-FnastrHz+FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                       kl=true;
                                  }
                            }



                     }
                 }
            if (DataModule2->SqlSpec->FieldByName("R")->AsString=="True" & DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="True"){
                  if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="False"){
             if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }

               }
               else if(DataModule2->SqlSpec->FieldByName("Rtgk")->AsString=="True") {
                    if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }


               }
           }
               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                    kl=true;
                              }
                      }
                  }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                          if(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                              kl=true;
                                            }
                             }
                          if(DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                              kl=true;
                                            }
                             }
                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                             if(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                                 if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                    kl=true;
                                 }
                              }
                              if(DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                                 if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                    kl=true;
                                 }
                              }

                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Shum")->AsFloat>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Shum")->AsFloat<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                              kl=true;
                                            }
                   }
                    if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                              kl=true;
                                            }
                   }
                    if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                              kl=true;
                                            }
                   }
                      if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR5")->AsFloat>RR5max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                            if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
               if (kl==false){
                     for (int l=0; l<PMNameForm->viewNumber->Count; l++){
                            if (PMNameForm->viewNumber->Items->Strings[l]==DataModule2->psiData->FieldByName("N")->AsString){
                                if (PMNameForm->viewNumber->ItemState[l]!=0){
                                    kl=false;
                                    break;
                             }
                            }
                            else {
                             kl=true;
                            }
                     }
                 }

            if (!kl){

                     DataModule2->Protokol_Archive->Append();
                     DataModule2->Protokol_Archive->FieldByName("ProtokolType_ID")->AsString="5";
                     DataModule2->Protokol_Archive->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Protokol_Archive->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                      DataModule2->Protokol_Archive->FieldByName("RR2")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR3")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR4")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR5")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                     DataModule2->Protokol_Archive->Post();

                     DataModule2->Lianoz->Append();
                     int m=StrToIntDef(DataModule2->psiData->FieldByName("N")->AsString,0);
                     if (m!=0){
                     DataModule2->Lianoz->FieldByName("NN")->AsFloat=m;
                     }
                     DataModule2->Lianoz->FieldByName("PMI")->AsString=DataModule2->psiData->FieldByName("PMI")->AsString;
                     DataModule2->Lianoz->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rtgk")->AsFloat=DataModule2->psiData->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ftgk")->AsFloat=DataModule2->psiData->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                      DataModule2->Lianoz->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                        if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Lianoz->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Lianoz->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Lianoz->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Lianoz->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                     DataModule2->Lianoz->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Date")->AsString=DataModule2->psiData->FieldByName("MakeDate")->AsString;
                     DataModule2->Lianoz->FieldByName("Date1")->AsString=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
                     DataModule2->Lianoz->Post();
                    }
             DataModule2->psiData->Next();
         }


        DataModule2->Print->Active=true;
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
        Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
         DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;

    }
  if (edtProtokol->Text=="Протокол ВП-РК"){
        DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();


        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
            DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;

       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
               if (DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True" || DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="True"){
                  if (DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="False"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                       kl=true;
                                  }
                            }
                     }
                     else {
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat>FnastrHz-FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat<-FnastrHz+FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                       kl=true;
                                  }
                            }



                     }
                 }
              if (DataModule2->SqlSpec->FieldByName("R")->AsString=="True" & DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="True"){
                  if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="False"){
             if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }

               }
               else if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString=="True"){
                    if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }


               }
           }
               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                    kl=true;
                              }
                      }
                   }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                       if(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                              kl=true;
                                            }
                                         }
                        if(DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                              kl=true;
                                            }
                                         }

                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                           if(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                    kl=true;
                              }
                            }
                           if(DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                    kl=true;
                              }
                            }
                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Shum")->AsFloat>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Shum")->AsFloat<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                        if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=true;
                              }
                      }
                            if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }

               if (kl==false){
                     for (int l=0; l<PMNameForm->viewNumber->Count; l++){
                            if (PMNameForm->viewNumber->Items->Strings[l]==DataModule2->psiData->FieldByName("N")->AsString){
                                if (PMNameForm->viewNumber->ItemState[l]!=0){
                                    kl=false;
                                    break;
                             }
                            }
                            else {
                             kl=true;
                            }
                     }
                 }

            if (!kl){

                     DataModule2->Protokol_Archive->Append();
                     DataModule2->Protokol_Archive->FieldByName("ProtokolType_ID")->AsString="6";
                     DataModule2->Protokol_Archive->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Protokol_Archive->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                      DataModule2->Protokol_Archive->FieldByName("RR2")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR3")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR4")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR5")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                     DataModule2->Protokol_Archive->Post();

                     DataModule2->Lianoz->Append();
                     int m=StrToIntDef(DataModule2->psiData->FieldByName("N")->AsString,0);
                     if (m!=0){
                     DataModule2->Lianoz->FieldByName("NN")->AsFloat=m;
                     }
                     DataModule2->Lianoz->FieldByName("PMI")->AsString=DataModule2->psiData->FieldByName("PMI")->AsString;
                     DataModule2->Lianoz->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rtgk")->AsFloat=DataModule2->psiData->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ftgk")->AsFloat=DataModule2->psiData->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                        if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Lianoz->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Lianoz->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Lianoz->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Lianoz->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Lianoz->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;

                    if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                     DataModule2->Lianoz->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Date")->AsString=DataModule2->psiData->FieldByName("MakeDate")->AsString;
                     DataModule2->Lianoz->FieldByName("Date1")->AsString=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
                     DataModule2->Lianoz->Post();
                    }
             DataModule2->psiData->Next();
         }


        DataModule2->Print->Active=true;
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
        Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
          DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;

    }
    if (edtProtokol->Text=="Паспорт (Приложение)"){
        DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();


        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
            DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;

       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
               if (DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True" || DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="True"){
                  if (DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="False"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                       kl=true;
                                  }
                            }
                     }
                     else {
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat>FnastrHz-FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat<-FnastrHz+FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                       kl=true;
                                  }
                            }



                     }
                 }
        if (DataModule2->SqlSpec->FieldByName("R")->AsString=="True" & DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="True"){
                  if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="False"){
             if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }

               }
               else if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString=="True"){
                    if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }


               }
           }
               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                    kl=true;
                              }
                      }
                   }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Shum")->AsFloat>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Shum")->AsFloat<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                            if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
               if (kl==false){
                     for (int l=0; l<PMNameForm->viewNumber->Count; l++){
                            if (PMNameForm->viewNumber->Items->Strings[l]==DataModule2->psiData->FieldByName("N")->AsString){
                                if (PMNameForm->viewNumber->ItemState[l]!=0){
                                    kl=false;
                                    break;
                             }
                            }
                            else {
                             kl=true;
                            }
                     }
                 }

            if (!kl){
                      DataModule2->Protokol_Archive->Append();
                     DataModule2->Protokol_Archive->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Protokol_Archive->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                      DataModule2->Protokol_Archive->FieldByName("RR2")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR3")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR4")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR5")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                     DataModule2->Protokol_Archive->Post();


                     DataModule2->Lianoz->Append();
                     int m=StrToIntDef(DataModule2->psiData->FieldByName("N")->AsString,0);
                     if (m!=0){
                     DataModule2->Lianoz->FieldByName("NN")->AsFloat=m;
                     }
                     DataModule2->Lianoz->FieldByName("PMI")->AsString=DataModule2->psiData->FieldByName("PMI")->AsString;
                     DataModule2->Lianoz->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ftgk")->AsFloat=DataModule2->psiData->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rtgk")->AsFloat=DataModule2->psiData->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                        if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Lianoz->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Lianoz->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Lianoz->FieldByName("Operator")->AsString=DataModule2->psiData->FieldByName("Operator")->AsString;
                     DataModule2->Lianoz->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Lianoz->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;
                     //DataModule2->Lianoz->FieldByName("RR1")->AsString=DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Date")->AsString=DataModule2->psiData->FieldByName("MakeDate")->AsString;
                     DataModule2->Lianoz->FieldByName("Date1")->AsString=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
                     DataModule2->Lianoz->Post();
                    }
             DataModule2->psiData->Next();
         }


        DataModule2->Print->Active=true;
        DataModule2->Print->First();
        for (int i=0;i<DataModule2->Print->RecordCount;i++){
                if (DataModule2->Print->FieldByName("ID")->AsString==DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString){
                      break;
                    }
               DataModule2->Print->Next();
           }
           WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
        Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          for (int hh=0; hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
                  if (Protokol_Data->Protokol_Types->FieldByName("Name")->AsString==edtProtokol->Text){
                    FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
                   break;
                  }
             Protokol_Data->Protokol_Types->Next();
          }
          Protokol_Data->Protokol_Types->Active=false;
          DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName(FieldName)->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;

    }


       frxReport1->PrepareReport(true);
       frxReport1->ShowPreparedReport();
       Lianoz->Close();
       DataModule1->DropLianozTable->Execute();
       DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop table IF EXISTS `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();
*/
        if (edtProtokol->ItemIndex!=-1){
                ProtokolForm->edtProtokol->ItemIndex=edtProtokol->ItemIndex;
        }

ProtokolForm->ActionList1->Actions[17]->Execute();
}
//---------------------------------------------------------------------------


void __fastcall TPMForm::cmb_Protokol_IDChange(TObject *Sender)
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
 PNForm->viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  k++;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }

                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  k++;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }

                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;

      }

   edtProtokol->ItemIndex=DataModule2->psiData->FieldByName("ProtokolType_ID")->AsFloat;
  PNForm->lCount->Caption=FloatToStr(k);
  edtProtokol->Enabled=true;
  edtSpc->Enabled=true;
  btnNum->Enabled=true;



  }
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::Action1Execute(TObject *Sender)
{
 edtProtokol->Enabled=true;
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

 btnPrint->Enabled=true;
 PNForm->viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[i]=cbUnchecked;
                                  }
                             k++;
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }


  PNForm->lCount->Caption=FloatToStr(k);
  edtProtokol->Enabled=true;
  edtSpc->Enabled=true;
  btnNum->Enabled=true;

  }       
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::cmb_IDKeyPress(TObject *Sender, char &Key)
{
        if (Key==13){
          ActionList1->Actions[0]->Execute();
        }
}
//---------------------------------------------------------------------------

void __fastcall TPMForm::edtMskKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
ProtokolForm->edtMsk->Text=edtMsk->Text;
ProtokolForm->ActionList1->Actions[2]->Execute();
   SYSTEMTIME st;
GetLocalTime(&st);
AnsiString S,S1,S2,S3;
btnPrint->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
VrProgressBar1->Position=0;
 S3="Select * from psidata where ";
       if (edtMsk->Text!="" || !edtMsk->Text.IsEmpty()){
       S3=S3+"msk='"+edtMsk->Text+"' ";

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
        S3="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
       S3=S3+"ORDER BY N";

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
edtMsk->Items->Add(DataModule2->psiData->FieldByName("ProtokolN")->AsString);
 edtM->Items->Clear();
 cmb_ID->Items->Clear();
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;


         int p=1;

          S1=DataModule2->psiData->FieldByName("MSK-M")->AsString;
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
      }
int k=0;
  cmb_ID->ItemIndex=0;
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){
           k=1;
           break;
            }
        DataModule2->SqlSpec->Next();
      }
  edtSpc->Text=DataModule2->SqlSpec->FieldByName("Name")->AsString;
 VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where msk='"+edtMsk->Text+"' ORDER BY N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;

PNForm->viewNumber->Items->Clear();
k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  k++;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }

                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  k++;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }

                        }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }


  PNForm->lCount->Caption=FloatToStr(k);
    edtNewMsk->Text=edtMsk->Text+"ВП";
    edtNewFile->Text=FloatToStr(st.wDay)+FloatToStr(st.wMonth)+FloatToStr(st.wYear)+"VP.mdt";
    edtProtokol->Enabled=true;
    PNForm->Show();

}        
}
//---------------------------------------------------------------------------









void __fastcall TPMForm::edtProtokolChange(TObject *Sender)
{
 if (edtProtokol->ItemIndex!=-1){
  ProtokolForm->edtProtokol->ItemIndex=edtProtokol->ItemIndex;
  }        
}
//---------------------------------------------------------------------------


void __fastcall TPMForm::ID_ChangeExecute(TObject *Sender)
{
ProtokolForm->cmb_ID->Text=cmb_ID->Text;
  ProtokolForm->ActionList1->Actions[19]->Execute();
 edtProtokol->Enabled=true;
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

 btnPrint->Enabled=true;
 PNForm->viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[i]=cbUnchecked;
                                  }
                             k++;
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }
edtOperator->Text=DataModule2->psiData->FieldByName("Operator")->AsString;
MType->Text=DataModule2->psiData->FieldByName("MachineType")->AsString;
SN->Text=DataModule2->psiData->FieldByName("Machine_Serial")->AsString;
//DataModule2->psiData->Active=false;
  PNForm->lCount->Caption=FloatToStr(k);
  edtProtokol->Enabled=true;
  edtSpc->Enabled=true;
  btnNum->Enabled=true;

  }
}
//---------------------------------------------------------------------------

