//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SpcMore.h"
#include "Spcdetail.h"
#include "Data.h"
#include "Spc_PhazeNoise.h"
#include "SpcMore_1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzDBChk"
#pragma link "RzDBEdit"
#pragma link "RzEdit"
#pragma link "RzLine"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "RzDBCmbo"
#pragma link "AdvGlassButton"
#pragma link "DBAdvNavigator"
#pragma resource "*.dfm"
TFormMore *FormMore;
//---------------------------------------------------------------------------
__fastcall TFormMore::TFormMore(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMore::btnCloseClick(TObject *Sender)
{
SpcDetailForm->Show();
FormMore->Hide();
}
//---------------------------------------------------------------------------









void __fastcall TFormMore::FormCreate(TObject *Sender)
{
DataModule1->tch_measure_type->Active=true;
RzDBComboBox1->Items->Clear();
DataModule1->tch_measure_type->First();
for (int i=0; i<=DataModule1->tch_measure_type->RecordCount-1; i++){
  RzDBComboBox1->Items->Add(DataModule1->tch_measure_type->FieldByName("Name")->AsString);
  DataModule1->tch_measure_type->Next();
}
DataModule1->tch_measure_type->Active=false;

DataModule1->TCH_Approx_Type->Active=true;
RzDBComboBox2->Items->Clear();
for (int i=0; i<=DataModule1->TCH_Approx_Type->RecordCount-1; i++){
  RzDBComboBox2->Items->Add(DataModule1->TCH_Approx_Type->FieldByName("Name")->AsString);
  DataModule1->TCH_Approx_Type->Next();
}
DataModule1->TCH_Approx_Type->Active=false;

DataModule1->TCH_Interval_Type->Active=true;
RzDBComboBox3->Items->Clear();
for (int i=0; i<=DataModule1->TCH_Interval_Type->RecordCount-1; i++){
  RzDBComboBox3->Items->Add(DataModule1->TCH_Interval_Type->FieldByName("Name")->AsString);
  DataModule1->TCH_Interval_Type->Next();
}
DataModule1->TCH_Interval_Type->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TFormMore::AdvGlassButton1Click(TObject *Sender)
{
this->Hide();
Spc_PhazeNoise_Form->Show();
}
//---------------------------------------------------------------------------


void __fastcall TFormMore::AdvGlassButton2Click(TObject *Sender)
{
 this->Hide();
 SpcMore1->Show();
}
//---------------------------------------------------------------------------


