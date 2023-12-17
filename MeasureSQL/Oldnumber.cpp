//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Oldnumber.h"
#include "Data.h"
#include "OldNM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzDBGrid"
#pragma link "RzDBNav"
#pragma link "RzPanel"
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "VrProgressBar"
#pragma resource "*.dfm"
TOldNForm *OldNForm;
//---------------------------------------------------------------------------
__fastcall TOldNForm::TOldNForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOldNForm::btnCloseClick(TObject *Sender)
{
OldNForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TOldNForm::FormShow(TObject *Sender)
{
 DataModule1->Numbers->Active=true;
 
}
//---------------------------------------------------------------------------
void __fastcall TOldNForm::btnRefreshClick(TObject *Sender)
{
  DataModule1->Numbers->Active=false;
  DataModule1->Numbers->Active=true;
}
//---------------------------------------------------------------------------
void __fastcall TOldNForm::btnF3Click(TObject *Sender)
{
DataModule1->Numbers->Active=false;
DataModule1->Numbers->SQL->Clear();
DataModule1->Numbers->SQL->Add("SELECT * FROM  psi ORDER BY psi.`msk`");
DataModule1->Numbers->Active=true;
btnF1->Active=false;
btnF2->Active=false;        
}
//---------------------------------------------------------------------------
void __fastcall TOldNForm::btnF1Click(TObject *Sender)
{
DataModule1->Numbers->Active=false;
DataModule1->Numbers->SQL->Clear();
DataModule1->Numbers->SQL->Add("SELECT * FROM  psi WHERE  psi.`Status` = 'Сдано' ORDER BY psi.`msk`");
DataModule1->Numbers->Active=true;
btnF2->Active=false;
btnF3->Active=false;
}
//---------------------------------------------------------------------------
void __fastcall TOldNForm::btnF2Click(TObject *Sender)
{
DataModule1->Numbers->Active=false;
DataModule1->Numbers->SQL->Clear();
DataModule1->Numbers->SQL->Add("SELECT * FROM  psi WHERE  `Status` = 'Передано' ORDER BY `MSK`");
DataModule1->Numbers->Active=true;
btnF1->Active=false;
btnF3->Active=false;        
}
//---------------------------------------------------------------------------
void __fastcall TOldNForm::btnNewClick(TObject *Sender)
{
 OldNMForm->Show();
}
//---------------------------------------------------------------------------

