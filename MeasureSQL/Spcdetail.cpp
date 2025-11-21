//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Spcdetail.h"
#include "Data.h"
#include "SpcOptions.h"
#include "options.h"
#include "text.h"
#include "Zapac.h"
#include "temperature.h"
#include "SpcMore.h"
#include "spc.h"
#include "spc_spur_.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzButton"
#pragma link "RzDBChk"
#pragma link "RzDBEdit"
#pragma link "RzEdit"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "RzDBCmbo"
#pragma link "RzLine"
#pragma link "RzDBNav"
#pragma link "AdvGlassButton"
#pragma link "DBAdvNavigator"
#pragma resource "*.dfm"
TSpcDetailForm *SpcDetailForm;
//---------------------------------------------------------------------------
__fastcall TSpcDetailForm::TSpcDetailForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSpcDetailForm::btnCloseClick(TObject *Sender)
{
SpcDetailForm->Hide();
 SpcForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TSpcDetailForm::btnOptionsClick(TObject *Sender)
{
SpcOptionsForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TSpcDetailForm::FormShow(TObject *Sender)
{
SpcDetailForm->Color=OptionsForm->ColorBox1->Selected;
SpcDetailForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
SpcDetailForm->Font->Color=OptionsForm->ColorBox2->Selected;
SpcDetailForm->btnOptions->Brush->Color=OptionsForm->colorBTN->Selected;
SpcDetailForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
SpcDetailForm->RzDBNavigator1->Color=OptionsForm->ColorBox1->Selected;

SpcDetailForm->Repaint();

DataModule1->MarkerText->Active=true;
cbName->Items->Clear();
DataModule1->MarkerText->First();

  for (int i=0; i<DataModule1->MarkerText->RecordCount; i++){
          cbName->Items->Add(DataModule1->MarkerText->FieldByName("íàèìåíîâàíèå")->AsString);
          DataModule1->MarkerText->Next();
          }

 DataModule1->Profile->Active=true;
 DataModule1->Profile->First();
 edtProfile->Items->Clear();
 for( int i=0;i<DataModule1->Profile->RecordCount;i++){
     edtProfile->Items->Add(DataModule1->Profile->FieldByName("Name")->AsString);
     DataModule1->Profile->Next();
    }

  DataModule1->MeasureType->Active=true;
  DataModule1->MeasureType->First();
  edtMode->Items->Clear();
     for( int i=0;i<DataModule1->MeasureType->RecordCount;i++){
     edtMode->Items->Add(DataModule1->MeasureType->FieldByName("ModeName")->AsString);
     DataModule1->MeasureType->Next();
    }
   DataModule1->MeasureType->Active=false;
   DataModule1->ResonatorType->Active=true;
  DataModule1->ResonatorType->First();
  edtType->Items->Clear();
     for( int i=0;i<DataModule1->ResonatorType->RecordCount;i++){
     edtType->Items->Add(DataModule1->ResonatorType->FieldByName("Type")->AsString);
     DataModule1->ResonatorType->Next();
    }
   DataModule1->ResonatorType->Active=false;
   DataModule1->Korpus->Active=true;
  DataModule1->Korpus->First();
  edtKorpus->Items->Clear();
     for( int i=0;i<DataModule1->Korpus->RecordCount;i++){
     edtKorpus->Items->Add(DataModule1->Korpus->FieldByName("Korpus")->AsString);
     DataModule1->Korpus->Next();
    }
  DataModule1->Korpus->Active=false;
   if (DataModule1->SqlSpecification->FieldByName("NameR")->AsString=="ÎÑÌ ÐÊ386Ì" || DataModule1->SqlSpecification->FieldByName("NameR")->AsString=="ÎÑÌ ÐÊ386ÌÌ"){
             Solve_Date_edt->Visible=true;
             Label46->Visible=true;
              Solve_Date_edt->Items->Clear();
             DataModule1->OSM_Solve->Active=true;
             DataModule1->OSM_Solve->First();
             for (int i=0;i<DataModule1->OSM_Solve->RecordCount;i++){
               Solve_Date_edt->Items->Add(DataModule1->OSM_Solve->FieldByName("Solve_Date")->AsString);
              DataModule1->OSM_Solve->Next();
             }
        }
        else {
          Solve_Date_edt->Visible=false;
          Label46->Visible=false;
   }

}
//---------------------------------------------------------------------------


void __fastcall TSpcDetailForm::btnTextClick(TObject *Sender)
{
TextForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TSpcDetailForm::btnDopuskClick(TObject *Sender)
{
ZapacForm->Show();
this->Hide();

}
//---------------------------------------------------------------------------

void __fastcall TSpcDetailForm::btnTemperatureClick(TObject *Sender)
{
TemperatureForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TSpcDetailForm::btnMoreClick(TObject *Sender)
{
this->Hide();
FormMore->Show();
}
//---------------------------------------------------------------------------


void __fastcall TSpcDetailForm::edtTypeSelect(TObject *Sender)
{
DataModule1->TU->Active=false;
DataModule1->TU->SQL->Clear();
DataModule1->TU->SQL->Add("Select * from tu where ResonatorName='"+edtType->Text+"'");
DataModule1->TU->Active=true;
edtTu->Items->Clear();
edtTu->Items->Add(DataModule1->TU->FieldByName("TUNAME")->AsString);
edtTu->ItemIndex=0;
DataModule1->Dopuski->Active=false;
DataModule1->Dopuski->SQL->Clear();
DataModule1->Dopuski->SQL->Add("Select * from dopuski where TUID='"+DataModule1->TU->FieldByName("TUINDEX")->AsString+"'");
DataModule1->Dopuski->Active=true;
DataModule1->SqlSpecification->Edit();
DataModule1->SqlSpecification->FieldByName("DopuskC0")->AsString=DataModule1->Dopuski->FieldByName("C0")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskCq")->AsString=DataModule1->Dopuski->FieldByName("Cq")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskR")->AsString=DataModule1->Dopuski->FieldByName("R")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskRR")->AsString=DataModule1->Dopuski->FieldByName("dR")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskSlope")->AsString=DataModule1->Dopuski->FieldByName("S")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskSR")->AsString=DataModule1->Dopuski->FieldByName("Rsp")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskFT")->AsString=DataModule1->Dopuski->FieldByName("FT")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskC0")->AsString=DataModule1->Dopuski->FieldByName("Q")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskF")->AsString=DataModule1->Dopuski->FieldByName("F")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskFi")->AsString=DataModule1->Dopuski->FieldByName("Fm")->AsString;
DataModule1->SqlSpecification->FieldByName("DopuskFptp")->AsString=DataModule1->Dopuski->FieldByName("Fptp")->AsString;
DataModule1->SqlSpecification->Post();
DataModule1->Dopuski->Active=false;
DataModule1->TU->Active=false;
}
//---------------------------------------------------------------------------



void __fastcall TSpcDetailForm::edtTypeChange(TObject *Sender)
{
        if (edtType->Text=="ÎÑÌ ÐÊ386Ì" || edtType->Text=="ÎÑÌ ÐÊ386ÌÌ"){
             Solve_Date_edt->Visible=true;
             Label46->Visible=true;
             Solve_Date_edt->Items->Clear();
             DataModule1->OSM_Solve->Active=true;
             for (int i=0;i<DataModule1->OSM_Solve->RecordCount;i++){
               Solve_Date_edt->Items->Add(DataModule1->OSM_Solve->FieldByName("Solve_Date")->AsString);
             }
        }
        else {
          Solve_Date_edt->Visible=false;
          Label46->Visible=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TSpcDetailForm::RzDBNavigator1Click(TObject *Sender,
      TAdvNavigateBtn Button)
{
   if (DataModule1->SqlSpecification->FieldByName("NameR")->AsString=="ÎÑÌ ÐÊ386Ì" || DataModule1->SqlSpecification->FieldByName("NameR")->AsString=="ÎÑÌ ÐÊ386ÌÌ"){
             Solve_Date_edt->Visible=true;
             Label46->Visible=true;
              Solve_Date_edt->Items->Clear();
             DataModule1->OSM_Solve->Active=true;
             DataModule1->OSM_Solve->First();
             for (int i=0;i<DataModule1->OSM_Solve->RecordCount;i++){
               Solve_Date_edt->Items->Add(DataModule1->OSM_Solve->FieldByName("Solve_Date")->AsString);
              DataModule1->OSM_Solve->Next();
             }
        }
        else {
          Solve_Date_edt->Visible=false;
          Label46->Visible=false;
   }        
}
//---------------------------------------------------------------------------

void __fastcall TSpcDetailForm::AdvGlassButton1Click(TObject *Sender)
{
Spc_Spur_Form->Show();
}
//---------------------------------------------------------------------------

