//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Spc_PhazeNoise.h"
#include "SpcMore.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "DBAdvNavigator"
#pragma link "RzButton"
#pragma link "RzDBChk"
#pragma link "RzDBEdit"
#pragma link "RzEdit"
#pragma link "RzRadChk"
#pragma resource "*.dfm"
TSpc_PhazeNoise_Form *Spc_PhazeNoise_Form;
//---------------------------------------------------------------------------
__fastcall TSpc_PhazeNoise_Form::TSpc_PhazeNoise_Form(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TSpc_PhazeNoise_Form::btnCloseClick(TObject *Sender)
{
this->Hide();
FormMore->Show();
}
//---------------------------------------------------------------------------
