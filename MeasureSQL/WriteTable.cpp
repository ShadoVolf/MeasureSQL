//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "WriteTable.h"
#include "data1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma resource "*.dfm"
TWriteTableForm *WriteTableForm;
//---------------------------------------------------------------------------
__fastcall TWriteTableForm::TWriteTableForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWriteTableForm::btnCloseClick(TObject *Sender)
{
WriteTableForm->Hide();
}
//---------------------------------------------------------------------------
