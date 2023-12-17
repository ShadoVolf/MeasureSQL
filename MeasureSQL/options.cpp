//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "options.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzCmboBx"
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzButton"
#pragma link "RzRadChk"
#pragma resource "*.dfm"
TOptionsForm *OptionsForm;
//---------------------------------------------------------------------------
__fastcall TOptionsForm::TOptionsForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOptionsForm::btnCloseClick(TObject *Sender)
{
OptionsForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TOptionsForm::FormShow(TObject *Sender)
{
AnsiString S;
S="Select *  from `programs_options` where ID ='"+DataModule1->Dostup->FieldByName("SaundersID")->AsString+"'";
DataModule1->Options->Active=false;
DataModule1->Options->SQL->Clear();;
DataModule1->Options->SQL->Add(S);
DataModule1->Options->Active=true;
ColorBox1->ItemIndex=DataModule1->Options->FieldByName("Color")->AsFloat;
ColorBox2->ItemIndex=DataModule1->Options->FieldByName("FontColor")->AsFloat;
RzFontComboBox1->FontName=DataModule1->Options->FieldByName("Font")->AsString;
colorBTN->ItemIndex=DataModule1->Options->FieldByName("btnColor")->AsFloat;
colorBtnFont->ItemIndex=DataModule1->Options->FieldByName("btnFont")->AsFloat;
colorFixGrid->ItemIndex=DataModule1->Options->FieldByName("FixedColor")->AsFloat;
OptionsForm->Color=OptionsForm->ColorBox1->Selected;
OptionsForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
OptionsForm->Font->Color=OptionsForm->ColorBox2->Selected;
OptionsForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
OptionsForm->btnSet->Brush->Color=OptionsForm->colorBTN->Selected;
edtReport->Text=DataModule1->Options->FieldByName("ReportDir")->AsString;
edtExport->Text=DataModule1->Options->FieldByName("ExportDir")->AsString;
edtImport->Text=DataModule1->Options->FieldByName("ImportDir")->AsString;
edtGraph->Text=DataModule1->Options->FieldByName("GraphDir")->AsString;
edtSend->Checked=DataModule1->Options->FieldByName("Send_data_to_ftp")->AsBoolean;
OptionsForm->Repaint();
}
//---------------------------------------------------------------------------
void __fastcall TOptionsForm::btnSetClick(TObject *Sender)
{
DataModule1->Options->Edit();
DataModule1->Options->FieldByName("Color")->AsString=ColorBox1->ItemIndex;
DataModule1->Options->FieldByName("FontColor")->AsString=ColorBox2->ItemIndex;
DataModule1->Options->FieldByName("Font")->AsString=RzFontComboBox1->FontName;
DataModule1->Options->FieldByName("btnColor")->AsString=colorBTN->ItemIndex;
DataModule1->Options->FieldByName("btnFont")->AsString=colorBtnFont->ItemIndex;
DataModule1->Options->FieldByName("FixedColor")->AsString=colorFixGrid->ItemIndex;
DataModule1->Options->FieldByName("Send_data_to_ftp")->AsBoolean=edtSend->Checked;
DataModule1->Options->Post();
}
//---------------------------------------------------------------------------

