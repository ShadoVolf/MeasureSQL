 //---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SpcOptions.h"
#include "Data.h"
#include "options.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzButton"
#pragma link "RzDBChk"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "RzDBCmbo"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TSpcOptionsForm *SpcOptionsForm;
//---------------------------------------------------------------------------
__fastcall TSpcOptionsForm::TSpcOptionsForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSpcOptionsForm::btnCloseClick(TObject *Sender)
{
SpcOptionsForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TSpcOptionsForm::FormShow(TObject *Sender)
{
SpcOptionsForm->Color=OptionsForm->ColorBox1->Selected;
SpcOptionsForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
SpcOptionsForm->Font->Color=OptionsForm->ColorBox2->Selected;
SpcOptionsForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
int k;
DataModule1->Print->Active=true;
DataModule1->Print->First();
k=DataModule1->Print->RecordCount;
edtPrint->Items->Clear();

for (int i=0;i<k;i++){
                      edtPrint->Items->Add(DataModule1->Print->FieldByName("Name")->AsString);
                      DataModule1->Print->Next();
                      }
 DataModule1->Print->First();
 for (int i=0;i<k;i++){
                       if (DataModule1->SqlSpecification->FieldByName("Print")->AsFloat==DataModule1->Print->FieldByName("ID")->AsFloat){
                                        edtPrint->Text=DataModule1->Print->FieldByName("Name")->AsString;
                                        DataModule1->Print->Next();
                           }
                      }

 edtPrint->ItemIndex=DataModule1->SqlSpecification->FieldByName("Print")->AsFloat-1;
DataModule1->Print->Active=false;
SpcOptionsForm->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TSpcOptionsForm::edtPrintChange(TObject *Sender)
{
DataModule1->SqlSpecification->Edit();
DataModule1->SqlSpecification->FieldByName("PrintProfile")->AsString=edtPrint->ItemIndex+1;
DataModule1->SqlSpecification->Post();
}
//---------------------------------------------------------------------------



