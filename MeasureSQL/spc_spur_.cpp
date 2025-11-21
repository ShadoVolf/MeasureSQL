//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "spc_spur_.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzButton"
#pragma link "RzDBChk"
#pragma link "RzDBEdit"
#pragma link "RzEdit"
#pragma link "RzLine"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "RzDBCmbo"
#pragma resource "*.dfm"
TSpc_Spur_Form *Spc_Spur_Form;
//---------------------------------------------------------------------------
__fastcall TSpc_Spur_Form::TSpc_Spur_Form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSpc_Spur_Form::btnCloseClick(TObject *Sender)
{
this->Hide();
}
//---------------------------------------------------------------------------
