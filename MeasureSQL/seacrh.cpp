//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "seacrh.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma resource "*.dfm"
TSearchForm *SearchForm;
//---------------------------------------------------------------------------
__fastcall TSearchForm::TSearchForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSearchForm::btnCloseClick(TObject *Sender)
{
SearchForm->Hide();
}
//---------------------------------------------------------------------------
