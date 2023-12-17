//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BarCodeEnter.h"
#include "old.h"
#include "Data.h"
#include "data1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TBarCodeEnterForm *BarCodeEnterForm;
//---------------------------------------------------------------------------
__fastcall TBarCodeEnterForm::TBarCodeEnterForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBarCodeEnterForm::btnCloseClick(TObject *Sender)
{
this->Hide();
DataModule1->Old_ID->Active=true;
DataModule1->Old_ID->First();
 if (!edtBar->Text.IsEmpty() & edtBar->Text!=""){
  for (int i=0; i<DataModule1->Old_ID->RecordCount; i++){
        if (DataModule1->Old_ID->FieldByName("Measure_ID")->AsString==OldForm->cmb_ID->Text){
         DataModule1->Old_ID->Edit();
         DataModule1->Old_ID->FieldByName("Psi_Measure_ID")->AsString=edtBar->Text;
         DataModule1->Old_ID->Post();
         break;
        }
     DataModule1->Old_ID->Next();
  }

                      DataModule2->psiData->Active=false;
                      DataModule2->psiData->SQL->Clear();
                      DataModule2->psiData->SQL->Add("Select * from psidata where Measure_ID='"+edtBar->Text+"'");
                      DataModule2->psiData->Active=true;
                      DataModule2->old->Active=false;
                      DataModule2->old->SQL->Clear();
                      DataModule2->old->SQL->Add("Select * from old where MeasureID='"+OldForm->cmb_ID->Text+"'");
                      DataModule2->old->Active=true;
                        if (DataModule2->psiData->RecordCount>0){
                          DataModule2->psiData->First();
                          DataModule2->old->First();
                                for (int j=0; j<DataModule2->old->RecordCount; j++){
                                       DataModule2->psiData->First();
                                        for (int k=0; k<DataModule2->psiData->RecordCount; k++){
                                                if (DataModule2->psiData->FieldByName("N")->AsString==DataModule2->old->FieldByName("N")->AsString){
                                                   DataModule2->psiData->Edit();
                                                    DataModule2->psiData->FieldByName("Old1")->AsString=DataModule2->old->FieldByName("old1")->AsString;
                                                    DataModule2->psiData->FieldByName("Old2")->AsString=DataModule2->old->FieldByName("old2")->AsString;
                                                    DataModule2->psiData->FieldByName("Old3")->AsString=DataModule2->old->FieldByName("old3")->AsString;
                                                    DataModule2->psiData->Post();
                                                }
                                         DataModule2->psiData->Next();
                                        }

                                   DataModule2->old->Next();
                                }
                        }
                        else {
                           ShowMessage("Отсутствуют данные о замере ПСИ повторите ввод");


                        }
                      }


}
//---------------------------------------------------------------------------
