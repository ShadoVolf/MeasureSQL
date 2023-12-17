//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GraphOptions.h"
#include "Graph.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "RzRadChk"
#pragma link "RzRadGrp"
#pragma link "RzSpnEdt"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TOptionsGraphForm *OptionsGraphForm;
//---------------------------------------------------------------------------
__fastcall TOptionsGraphForm::TOptionsGraphForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOptionsGraphForm::btnCloseClick(TObject *Sender)
{
OptionsGraphForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TOptionsGraphForm::edtAChange(TObject *Sender)
{
 GpForm->Chart1->BottomAxis->AutomaticMinimum=false;
 GpForm->Chart1->BottomAxis->Minimum=StrToFloat(edtA->Text);

 GpForm->Chart1->Refresh();
 GpForm->Chart1->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TOptionsGraphForm::edtBChange(TObject *Sender)
{
GpForm->Chart1->BottomAxis->AutomaticMaximum=false;
GpForm->Chart1->BottomAxis->Maximum=StrToFloat(edtB->Text);
 GpForm->Chart1->Refresh();
 GpForm->Chart1->Repaint();
}
//---------------------------------------------------------------------------


