//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Search.h"
#include "Data.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TFastSearchForm *FastSearchForm;
//---------------------------------------------------------------------------
__fastcall TFastSearchForm::TFastSearchForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFastSearchForm::btnCloseClick(TObject *Sender)
{
FastSearchForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFastSearchForm::btnSetClick(TObject *Sender)
{
 DataModule1->SqlSpecification->First();

 for (int i=0;i<DataModule1->SqlSpecification->RecordCount; i++){
          if (DataModule1->SqlSpecification->FieldByName("Name")->AsString==edtSpc->Text){
            break;
           }
  DataModule1->SqlSpecification->Next();
 }
if (MainForm->ledFile->Active){
    MainForm->ledSpc->Active=true;
    DataModule1->Transat_Temp->Active=true;
    DataModule1->Transat_Temp->Filtered=false;
    DataModule1->Transat_Temp->First();
                     for (int i=0;i<DataModule1->Transat_Temp->RecordCount;i++){
                           DataModule1->Transat_Temp->Edit();
                           DataModule1->Transat_Temp->FieldByName("Profile")->AsString=DataModule1->SqlSpecification->FieldByName("Profile")->AsString;
                           DataModule1->Transat_Temp->Post();
                           DataModule1->Transat_Temp->Next();
                            }




    }

}
//---------------------------------------------------------------------------
void __fastcall TFastSearchForm::FormShow(TObject *Sender)
{
edtType->Items->Clear();
DataModule1->ResonatorType->Active=true;
 DataModule1->ResonatorType->First();
  for (int i=0;i<DataModule1->ResonatorType->RecordCount; i++){
        edtType->Items->Add(DataModule1->ResonatorType->FieldByName("Type")->AsString);

   DataModule1->ResonatorType->Next();

  }
DataModule1->ResonatorType->Active=false;
}
//---------------------------------------------------------------------------
void __fastcall TFastSearchForm::edtTypeSelect(TObject *Sender)
{
 DataModule1->SqlSpecification->Active=true;
 DataModule1->SqlSpecification->First();
 edtSpc->Items->Clear();
 for (int i=0;i<DataModule1->SqlSpecification->RecordCount; i++){
          if (DataModule1->SqlSpecification->FieldByName("NameR")->AsString==edtType->Text){
            edtSpc->Items->Add(DataModule1->SqlSpecification->FieldByName("Name")->AsString);

           }
  DataModule1->SqlSpecification->Next();
 }
}
//---------------------------------------------------------------------------
