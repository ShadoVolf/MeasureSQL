//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "data1.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MyAccess"
#pragma resource "*.dfm"
TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
__fastcall TDataModule2::TDataModule2(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TDataModule2::oldBeforePost(TDataSet *DataSet)
{
if (old->FieldByName("M1")->AsString=="True" & old->FieldByName("M2")->AsString=="True"){
  // old->Edit();
  // old->FieldByName("Old1B")->AsString="True";
  // double F1,F2,F;
  // F2=old->FieldByName("Measure2")->AsFloat;
  // F1=old->FieldByName("Measure1")->AsFloat;
  // F=F2-F1;
  // old->FieldByName("Old1")->AsFloat=F;
  // old->Post();
   PsiData1->Active=false;
   PsiData1->SQL->Clear();
   PsiData1->SQL->Add("Select * from psidata where N='"+old->FieldByName("N")->AsString+"'");
   PsiData1->Active=true;
   if (PsiData1->RecordCount>0){
        PsiData1->Edit();
        PsiData1->FieldByName("Old1")->AsFloat=old->FieldByName("Old1")->AsFloat;
        PsiData1->Post();

       }
   }
   
}
//---------------------------------------------------------------------------

void __fastcall TDataModule2::psiData3BeforeDelete(TDataSet *DataSet)
{
psiDataTemp3->Active=false;
psiDataTemp3->SQL->Clear();
AnsiString psitemp,msk,N,File,Status1,MSK_M;
msk=psiData3->FieldByName("Msk")->AsString;
N=psiData3->FieldByName("N")->AsString;
File=psiData3->FieldByName("File")->AsString;
Status1=psiData3->FieldByName("Status")->AsString;
MSK_M=psiData3->FieldByName("MSK-M")->AsString;
psitemp="Select * from psidatatemp where Msk='"+msk+"' and N='"+N+"' and File='"+File+"' and Status1='"+Status1+"' and MSK-M='"+MSK_M+"'";
psiDataTemp->SQL->Add(psitemp);
psiDataTemp3->Active=true;
psiDataTemp->First();
int k=psiDataTemp3->RecordCount;
if (psiDataTemp3->RecordCount>0){
   for (int i=0; i<k; i++){
     psiDataTemp3->Delete();

   }

}
}
//---------------------------------------------------------------------------



