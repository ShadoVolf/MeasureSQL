//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "temperature.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzDBGrid"
#pragma link "RzDBEdit"
#pragma link "RzEdit"
#pragma link "RzDBNav"
#pragma resource "*.dfm"
TTemperatureForm *TemperatureForm;
//---------------------------------------------------------------------------
__fastcall TTemperatureForm::TTemperatureForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTemperatureForm::btnCloseClick(TObject *Sender)
{
TemperatureForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TTemperatureForm::FormShow(TObject *Sender)
{
AnsiString S;
S="Select * from profiledata where Name ='"+DataModule1->SqlSpecification->FieldByName("Profile")->AsString+"' order by N";
DataModule1->ProfileData->Active=false;
DataModule1->ProfileData->SQL->Clear();
DataModule1->ProfileData->SQL->Add(S);
DataModule1->ProfileData->Active=true;
if (DataModule1->Dostup->FieldByName("Допуск")->AsString=="Администратор"){
    RzDBNavigator1->Visible=true;
    RzDBGrid1->ReadOnly=false;
    btnNew->Visible=true;
    RzMemo1->Visible=true;
    btnClear->Visible=true;

   }
 else {
      RzDBNavigator1->Visible=false;
      RzDBGrid1->ReadOnly=true;
      btnNew->Visible=false;
      RzMemo1->Visible=false;
      }
}
//---------------------------------------------------------------------------
void __fastcall TTemperatureForm::btnNewClick(TObject *Sender)
{
DataModule1->Profile->Active=true;
DataModule1->Profile->Append();
DataModule1->Profile->FieldByName("Name")->AsString=RzDBEdit1->Text;
DataModule1->Profile->FieldByName("Temperatures")->AsString=RzMemo1->Text;
DataModule1->Profile->Post();
}
//---------------------------------------------------------------------------
void __fastcall TTemperatureForm::btnClearClick(TObject *Sender)
{
 AnsiString S;
S="Select * from profiledata where Name ='HT' order by N";
DataModule1->ProfileData->Active=false;
DataModule1->ProfileData->SQL->Clear();
DataModule1->ProfileData->SQL->Add(S);
DataModule1->ProfileData->Active=true;
}
//---------------------------------------------------------------------------
