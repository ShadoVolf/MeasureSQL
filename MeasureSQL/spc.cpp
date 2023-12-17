//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "spc.h"
#include "Data.h"
#include "Main.h"
#include "Spcdetail.h"
#include "options.h"
#include "temperature.h"
#include "Search.h"
#include "NewSpc.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzDBGrid"
#pragma link "RzPanel"
#pragma link "RzDBNav"
#pragma link "AdvGlassButton"
#pragma link "DBAdvNavigator"
#pragma resource "*.dfm"
TSpcForm *SpcForm;
//---------------------------------------------------------------------------
__fastcall TSpcForm::TSpcForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSpcForm::btnCloseClick(TObject *Sender)
{
SpcForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TSpcForm::btnSetClick(TObject *Sender)
{if (MainForm->ledFile->Active){
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
    else {
         ShowMessage("Файл данных не открыт");}
                
}
//---------------------------------------------------------------------------

void __fastcall TSpcForm::btnDetailClick(TObject *Sender)
{
  if (DataModule1->Dostup->FieldByName("Допуск")->AsString=="Администратор"){
SpcDetailForm->Show();
this->Hide();
     }
     
}
//---------------------------------------------------------------------------

void __fastcall TSpcForm::btnRefreshClick(TObject *Sender)
{
DataModule1->SqlSpecification->Active=false;
DataModule1->SqlSpecification->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TSpcForm::FormShow(TObject *Sender)
{
gridSpc->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
gridSpc->Font->Color=OptionsForm->ColorBox2->Selected;
}
//---------------------------------------------------------------------------

void __fastcall TSpcForm::btnTemperatureClick(TObject *Sender)
{
TemperatureForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TSpcForm::btnSearchClick(TObject *Sender)
{
 FastSearchForm->Show();       
}
//---------------------------------------------------------------------------

void __fastcall TSpcForm::btnNewClick(TObject *Sender)
{
NewSpcForm->Show();
}
//---------------------------------------------------------------------------

