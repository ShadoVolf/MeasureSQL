//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SortResult.h"
#include "data1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzCmboBx"
#pragma link "VrProgressBar"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TSortResultForm *SortResultForm;
//---------------------------------------------------------------------------
__fastcall TSortResultForm::TSortResultForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSortResultForm::btnCloseClick(TObject *Sender)
{
SortResultForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TSortResultForm::FormShow(TObject *Sender)
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
void __fastcall TSortResultForm::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification where NameR='"+edtType->Text+"'");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             edtSpc1->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }
   edtSpc->Enabled=true;
   edtSpc1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TSortResultForm::edtSpcChange(TObject *Sender)
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
 DataModule2->old->Active=false;
DataModule2->old->SQL->Clear();
DataModule2->old->SQL->Add("Select * from old where Spc='"+edtSpc->Text+"' ORDER BY msk");
DataModule2->old->Active=true;
DataModule2->old->First();
VrProgressBar1->MaxValue=DataModule2->old->RecordCount;
VrProgressBar1->Position=0;
cmb_ID2->Clear();
cmb_id3->Clear();
edtMsk2->Clear();
edtMsk2->Items->Add(DataModule2->old->FieldByName("Msk")->AsString);
for (int i=0;i<DataModule2->old->RecordCount;i++){
             S=DataModule2->old->FieldByName("Msk")->AsString;
               DataModule2->old->Next();
              VrProgressBar1->Position=i+1;
           if (S!=DataModule2->old->FieldByName("Msk")->AsString){

                      edtMsk2->Items->Add(DataModule2->old->FieldByName("Msk")->AsString);
             } //if
            int p1=1;
         S2=DataModule2->old->FieldByName("Old_ID")->AsString;
         for (int j1=0;j1<cmb_ID2->Items->Count; j1++){
               if (S2==cmb_ID2->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID2->Items->Add(S2);

          }
           int p2=1;
         S2=DataModule2->old->FieldByName("MeasureID")->AsString;
         for (int j1=0;j1<cmb_id3->Items->Count; j1++){
               if (S2==cmb_id3->Items->Strings[j1]){
               p2=0;
               break;
               }
             p2=1;
          }
          if (p2==1){
           cmb_id3->Items->Add(S2);

          }

      } //for

 edtMsk->Enabled=true;
 edtMsk2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TSortResultForm::edtSpc1Change(TObject *Sender)
{
edtMsk1->Items->Clear();

AnsiString S,S1;
VrProgressBar1->Position=0;

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where Spc='"+edtSpc1->Text+"' ORDER BY msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
cmb_ID1->Clear() ;
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
S=DataModule2->psiData->FieldByName("Msk")->AsString;
edtMsk1->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
for (int i=0;i<DataModule2->psiData->RecordCount;i++){


              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;
           if (S!=DataModule2->psiData->FieldByName("Msk")->AsString){

                      edtMsk1->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
                      S=DataModule2->psiData->FieldByName("Msk")->AsString;
             }
         

      }
 edtMsk1->Enabled=true;
 chkUse1->Checked=true;
}
//---------------------------------------------------------------------------
void __fastcall TSortResultForm::btnSetClick(TObject *Sender)
{
VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString S3;
AnsiString S;
 S3="Select SQL_NO_CACHE * from psidata where ";
       if (edtMsk->Text!="" || edtMsk->Text.IsEmpty()){
       S3=S3+"msk='"+edtMsk->Text+"' ";

       }
      if (cmb_ID->Text!=""){
        S3="Select SQL_NO_CACHE * from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
       S3=S3+"ORDER BY N";
 DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;

if (chkUse1->Checked){
          DataModule2->psiData4->Active=false;
          DataModule2->psiData4->SQL->Clear();
          S3="Select SQL_NO_CACHE * from psidata where ";
       if (edtMsk1->Text!="" || edtMsk1->Text.IsEmpty()){
       S3=S3+"msk='"+edtMsk1->Text+"' ";

       }
      if (cmb_ID1->Text!=""){
        S3="Select SQL_NO_CACHE * from psidata where Measure_ID='"+cmb_ID1->Text+"' ";

       }
       S3=S3+"ORDER BY N";
           DataModule2->psiData4->SQL->Add(S3);
          DataModule2->psiData4->Active=true;
          DataModule2->psiData4->First();
}//if chkUse1


if (chkUse2->Checked){
DataModule2->old->Active=false;
DataModule2->old->SQL->Clear();
  S="Select SQL_NO_CACHE * from old where ";
  if (edtMsk2->Text!="" || !edtMsk2->Text.IsEmpty() ){

   S=S+"MSK='"+edtMsk2->Text+"'";
  }
if (!cmb_ID2->Text.IsEmpty() || cmb_ID2->Text!=""){
S=S+" and MeasureID='"+cmb_ID2->Text+"'";
}
if (!cmb_id3->Text.IsEmpty() || cmb_id3->Text!=""){
S=S+" and Old_ID='"+cmb_id3->Text+"'";
}
S=S+ " ORDER BY N";

 DataModule2->old->SQL->Add(S);
DataModule2->old->Active=true;
DataModule2->old->First();
}//if chkUse2
for (int i=0;i<DataModule2->psiData->RecordCount; i++){
    if (chkUse1->Checked){
            DataModule2->psiData4->First();
           for (int j=0;j<DataModule2->psiData4->RecordCount; j++){
                      if (DataModule2->psiData->FieldByName("N")->AsString==DataModule2->psiData4->FieldByName("N")->AsString){
                          DataModule2->psiData->Edit();
                           if (!chk_spur_only->Checked) {
                                  DataModule2->psiData->FieldByName("F")->AsFloat=DataModule2->psiData4->FieldByName("F")->AsFloat;
                                  DataModule2->psiData->FieldByName("R")->AsFloat=DataModule2->psiData4->FieldByName("R")->AsFloat;
                                  DataModule2->psiData->FieldByName("C0")->AsFloat=DataModule2->psiData4->FieldByName("C0")->AsFloat;
                                  DataModule2->psiData->FieldByName("Cq")->AsFloat=DataModule2->psiData4->FieldByName("Cq")->AsFloat;
                                  DataModule2->psiData->FieldByName("L")->AsFloat=DataModule2->psiData4->FieldByName("L")->AsFloat;
                                  DataModule2->psiData->FieldByName("Q")->AsFloat=DataModule2->psiData4->FieldByName("Q")->AsFloat;
                           }

                          if (chk_add_spur->Checked) {

                                  DataModule2->psiData->FieldByName("Spur")->AsFloat   = DataModule2->psiData4->FieldByName("Spur")->AsFloat;
                                  DataModule2->psiData->FieldByName("Rsp1")->AsFloat   = DataModule2->psiData4->FieldByName("Rsp1")->AsFloat;
                                  DataModule2->psiData->FieldByName("Rsp2")->AsFloat   = DataModule2->psiData4->FieldByName("Rsp2")->AsFloat;
                                  DataModule2->psiData->FieldByName("Rsp3")->AsFloat   = DataModule2->psiData4->FieldByName("Rsp3")->AsFloat;
                                  DataModule2->psiData->FieldByName("FSpur1")->AsFloat = DataModule2->psiData4->FieldByName("FSpur1")->AsFloat;
                                  DataModule2->psiData->FieldByName("FSpur2")->AsFloat = DataModule2->psiData4->FieldByName("FSpur2")->AsFloat;
                                  DataModule2->psiData->FieldByName("FSpur3")->AsFloat = DataModule2->psiData4->FieldByName("FSpur3")->AsFloat;
                            }

                          DataModule2->psiData->Post();
                          break;
                      }



                 DataModule2->psiData4->Next();
           }//for temp 25

    }
    if (chkUse2->Checked){
         DataModule2->old->First();
         for (int k=0;k<DataModule2->old->RecordCount;k++){
                if (DataModule2->psiData->FieldByName("N")->AsString==DataModule2->old->FieldByName("N")->AsString){
                          DataModule2->psiData->Edit();
                          if (edtS1->Checked){
                          DataModule2->psiData->FieldByName("Old")->AsFloat=DataModule2->old->FieldByName("old1")->AsFloat;
                          }
                          if (edtS2->Checked){
                          DataModule2->psiData->FieldByName("Old")->AsFloat=DataModule2->old->FieldByName("old2")->AsFloat;
                          }
                          if (edtS3->Checked){
                          DataModule2->psiData->FieldByName("Old")->AsFloat=DataModule2->old->FieldByName("old3")->AsFloat;
                          }

                          DataModule2->psiData->Post();

                          break;
                      }

               DataModule2->old->Next();

         }//for Old
    }


  DataModule2->psiData->Next();
  VrProgressBar1->Position=i+1;
}//for Main

}
//---------------------------------------------------------------------------
void __fastcall TSortResultForm::edtMsk2Change(TObject *Sender)
{
chkUse2->Checked=true;
}
//---------------------------------------------------------------------------
void __fastcall TSortResultForm::cmb_IDKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
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


 }
}
}
//---------------------------------------------------------------------------

void __fastcall TSortResultForm::edtMskKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
  AnsiString S,S1,S2;
VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where msk='"+edtMsk->Text+"' ORDER BY N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
cmb_ID->Clear();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;

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

}
}
//---------------------------------------------------------------------------



void __fastcall TSortResultForm::edtMsk2KeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
  AnsiString S,S1,S2,S3;
VrProgressBar1->Position=0;
DataModule2->old->Active=false;
DataModule2->old->SQL->Clear();
DataModule2->old->SQL->Add("Select * from old where msk='"+edtMsk2->Text+"' ORDER BY N");
DataModule2->old->Active=true;
DataModule2->old->First();
cmb_ID2->Clear();
cmb_id3->Clear();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;

         int p1=1;
          S2=DataModule2->old->FieldByName("MeasureID")->AsString;
         for (int j1=0;j1<cmb_ID2->Items->Count; j1++){
               if (S2==cmb_ID2->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID2->Items->Add(S2);

          }
           int p2=1;
          S3=DataModule2->old->FieldByName("Old_ID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S3==cmb_id3->Items->Strings[j1]){
               p2=0;
               break;
               }
             p2=1;
          }
          if (p2==1){
           cmb_id3->Items->Add(S3);

          }
      }

}
}
//---------------------------------------------------------------------------

void __fastcall TSortResultForm::edtMsk1KeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
AnsiString S,S2;
VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where msk='"+edtMsk1->Text+"' ORDER BY N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;

for (int i=0;i<DataModule2->psiData->RecordCount;i++){

              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;

         int p1=1;
          S2=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
         for (int j1=0;j1<cmb_ID1->Items->Count; j1++){
               if (S2==cmb_ID1->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID1->Items->Add(S2);

          }

      }
}
}
//---------------------------------------------------------------------------

void __fastcall TSortResultForm::cmb_ID1KeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
   AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select SQL_NO_CACHE * from psidata where Measure_ID='"+cmb_ID1->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk1->Clear();
 edtMsk1->Items->Add(MSK);
 edtMsk1->ItemIndex=0;
 edtSpc1->Clear();
 edtSpc1->Items->Add(Spc);
 edtSpc1->ItemIndex=0;
  }
}
}
//---------------------------------------------------------------------------

void __fastcall TSortResultForm::cmb_ID2KeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
   AnsiString MSK;
 AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select SQL_NO_CACHE * from old where MeasureID='"+cmb_ID2->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk2->Clear();
 edtMsk2->Items->Add(MSK);
 edtMsk2->ItemIndex=0;
 cmb_id3->Clear() ;
 cmb_id3->Items->Add(DataModule2->psiData->FieldByName("Old_ID")->AsString);
 cmb_id3->ItemIndex=0;

   }

}
}
//---------------------------------------------------------------------------

void __fastcall TSortResultForm::cmb_id3KeyPress(TObject *Sender,
      char &Key)
{
  if (Key==13){
   AnsiString MSK;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select SQL_NO_CACHE * from old where Old_ID='"+cmb_id3->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk2->Clear();
 edtMsk2->Items->Add(MSK);
 edtMsk2->ItemIndex=0;
 cmb_ID2->Clear() ;
 cmb_ID2->Items->Add(DataModule2->psiData->FieldByName("MeasureID")->AsString);
 cmb_ID2->ItemIndex=0;
    }
}
}
//---------------------------------------------------------------------------

void __fastcall TSortResultForm::edtMsk1Change(TObject *Sender)
{

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select distinct `Measure_ID` from psidata where Msk='"+edtMsk1->Text+"' ORDER BY Measure_ID");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();


for (int i=0;i<DataModule2->psiData->RecordCount;i++){
         cmb_ID1->Items->Add(DataModule2->psiData->FieldByName("Measure_ID")->AsString);
         DataModule2->psiData->Next();
          }

 edtMsk1->Enabled=true;
 chkUse1->Checked=true;
 
}
//---------------------------------------------------------------------------

