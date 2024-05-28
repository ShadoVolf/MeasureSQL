//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dataview.h"
#include "Data.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzDBGrid"
#pragma link "RzPanel"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TDataForm *DataForm;
//---------------------------------------------------------------------------
__fastcall TDataForm::TDataForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDataForm::AdvGlassButton3Click(TObject *Sender)
{
DataForm->Hide();        
}
//---------------------------------------------------------------------------



void __fastcall TDataForm::AdvGlassButton1Click(TObject *Sender)
{
RzDBGrid1->Visible=true;
DataGrid->Visible=false;
RzDBGrid2->Visible=false;
RzDBGrid3->Visible=false;
RzDBGrid4->Visible=false;
AdvGlassButton1->Font->Color=clGreen;
AdvGlassButton2->Font->Color=clRed;
AdvGlassButton4->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TDataForm::AdvGlassButton5Click(TObject *Sender)
{
 RzDBGrid1->Visible=false;
DataGrid->Visible=true;
RzDBGrid3->Visible=false;
RzDBGrid2->Visible=false;
RzDBGrid4->Visible=false;
AdvGlassButton5->Font->Color=clGreen;
AdvGlassButton6->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TDataForm::AdvGlassButton2Click(TObject *Sender)
{
RzDBGrid1->Visible=false;
RzDBGrid2->Visible=true;
RzDBGrid3->Visible=false;
DataGrid->Visible=false;
RzDBGrid4->Visible=false;
AdvGlassButton2->Font->Color=clGreen;
AdvGlassButton1->Font->Color=clRed;
AdvGlassButton4->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TDataForm::FormShow(TObject *Sender)
{
if(MainForm->edtMachine->Text=="Saunders" || MainForm->edtMachine->Text=="Saunders1" || MainForm->edtMachine->Text=="Saunders2" || MainForm->edtMachine->Text=="Saunders3"){
 AdvGlassButton1->Visible=true;
 AdvGlassButton2->Visible=true;
 AdvGlassButton4->Visible=true;

 AdvGlassButton5->Visible=false;
 AdvGlassButton6->Visible=false;
 AdvGlassButton7->Visible=false;
 AdvGlassButton8->Visible=false;
 RzDBGrid1->Visible=true;
 RzDBGrid2->Visible=false;
 RzDBGrid3->Visible=false;
 RzDBGrid4->Visible=false;
 RzDBGrid5->Visible=false;
 RzDBGrid6->Visible=false;
DataGrid->Visible=false;



}
else if (MainForm->edtMachine->Text=="Transat1" || MainForm->edtMachine->Text=="Transat2" || MainForm->edtMachine->Text=="Transat3"){

  AdvGlassButton1->Visible=false;
 AdvGlassButton2->Visible=false;
 AdvGlassButton4->Visible=false;

 AdvGlassButton5->Visible=true;
 AdvGlassButton6->Visible=true;
 AdvGlassButton7->Visible=false;
 AdvGlassButton8->Visible=false;
 RzDBGrid1->Visible=false;
 RzDBGrid2->Visible=false;
 RzDBGrid3->Visible=false;
 RzDBGrid4->Visible=false;
 RzDBGrid5->Visible=false;
 RzDBGrid6->Visible=false;
 DataModule1->Transat_Temp->Filtered=false;
DataGrid->Visible=true;

}
else if (MainForm->edtMachine->Text=="KH7700_TS0271" || MainForm->edtMachine->Text=="KH7700_TS0272"){

  AdvGlassButton1->Visible=false;
 AdvGlassButton2->Visible=false;
 AdvGlassButton4->Visible=false;

 AdvGlassButton5->Visible=false;
 AdvGlassButton6->Visible=false;
 AdvGlassButton7->Visible=true;
 AdvGlassButton8->Visible=true;
 RzDBGrid1->Visible=false;
 RzDBGrid2->Visible=false;
 RzDBGrid3->Visible=false;
 RzDBGrid4->Visible=false;
 DataModule1->KH7700_Temp->Filtered=false;
 RzDBGrid5->Visible=true;
 RzDBGrid6->Visible=false;
DataGrid->Visible=false;

}
}
//---------------------------------------------------------------------------


void __fastcall TDataForm::AdvGlassButton4Click(TObject *Sender)
{
RzDBGrid1->Visible=false;
RzDBGrid2->Visible=false;
RzDBGrid4->Visible=false;
RzDBGrid3->Visible=true;
DataGrid->Visible=false;
RzDBGrid5->Visible=false;
RzDBGrid6->Visible=false;
AdvGlassButton4->Font->Color=clGreen;
AdvGlassButton1->Font->Color=clRed;
AdvGlassButton2->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TDataForm::AdvGlassButton6Click(TObject *Sender)
{
RzDBGrid1->Visible=false;
RzDBGrid2->Visible=false;
RzDBGrid3->Visible=false;
RzDBGrid4->Visible=true;
DataGrid->Visible=false;
RzDBGrid5->Visible=false;
RzDBGrid6->Visible=false;
AdvGlassButton6->Font->Color=clGreen;
AdvGlassButton5->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TDataForm::AdvGlassButton7Click(TObject *Sender)
{
 RzDBGrid1->Visible=false;
RzDBGrid2->Visible=false;
RzDBGrid3->Visible=false;
RzDBGrid4->Visible=false;
DataGrid->Visible=false;
DataModule1->KH7700_Temp->Filtered=false;
RzDBGrid5->Visible=true;
RzDBGrid6->Visible=false;
AdvGlassButton7->Font->Color=clGreen;
AdvGlassButton8->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TDataForm::AdvGlassButton8Click(TObject *Sender)
{
 RzDBGrid1->Visible=false;
RzDBGrid2->Visible=false;
RzDBGrid3->Visible=false;
RzDBGrid4->Visible=false;
DataGrid->Visible=false;
RzDBGrid5->Visible=false;
RzDBGrid6->Visible=true;
AdvGlassButton8->Font->Color=clGreen;
AdvGlassButton7->Font->Color=clRed;
}
//---------------------------------------------------------------------------


