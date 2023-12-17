//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dialog2.h"
#include "OldNM.h"
#include "data1.h"
#include "Main.h"
#include "options.h"
#include "Data.h"
#include "old.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma resource "*.dfm"
TD2Form *D2Form;
//---------------------------------------------------------------------------
__fastcall TD2Form::TD2Form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TD2Form::FormShow(TObject *Sender)
{
D2Form->Color=OptionsForm->ColorBox1->Selected;
D2Form->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
D2Form->Font->Color=OptionsForm->ColorBox2->Selected;
D2Form->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
D2Form->Repaint();

 DataModule1->MarkerText->Active=true;
 DataModule1->MarkerText->First();
 edtName->Clear();
 for (int i=0; i<DataModule1->MarkerText->RecordCount; i++){
edtName->Items->Add(DataModule1->MarkerText->FieldByName("ResonatorName")->AsString);
DataModule1->MarkerText->Next();
}
DataModule1->MarkerText->Active=false;
btnClose->Enabled=false;        
}
//---------------------------------------------------------------------------
void __fastcall TD2Form::edtNameChange(TObject *Sender)
{
AnsiString S;

 S="Select * from markertext where markertext.ResonatorName='"+edtName->Text+"'";
  DataModule1->MarkerTextTemp->Active=false;
  DataModule1->MarkerTextTemp->SQL->Clear();
  DataModule1->MarkerTextTemp->SQL->Add(S);
  DataModule1->MarkerTextTemp->Active=true;
 edtNominal->Text=DataModule1->MarkerTextTemp->FieldByName("Text")->AsString;
 edtType->Text=DataModule1->MarkerTextTemp->FieldByName("Type")->AsString;
 btnClose->Enabled=true;        
}
//---------------------------------------------------------------------------
void __fastcall TD2Form::btnCloseClick(TObject *Sender)
{
int g=0;
AnsiString H;

                     DataModule1->NumberCurrent->EmptyTable();


OldNMForm->VrProgressBar1->MaxValue=OldNMForm->gridNumbers->RowCount-1;
OldNMForm->VrProgressBar1->Position=0;
if (DataModule1->Numberall->RecordCount>0){
                                           int j;
                                            j=DataModule1->Numberall->RecordCount;
                                            DataModule1->Numberall->First();
                                                     for ( int n=0; n<j; n++) {
                                                                       DataModule1->Numberall->Delete();
                                                        }
                                          }
for (int i=0; i<OldNMForm->gridNumbers->RowCount-1;i++){
     DataModule1->NumberCurrent->Append();
     DataModule1->NumberCurrent->FieldByName("Position")->AsString=OldNMForm->gridNumbers->Cells[1][i+1];
     DataModule1->NumberCurrent->FieldByName("SNumber")->AsString=OldNMForm->gridNumbers->Cells[2][i+1];
     DataModule1->NumberCurrent->FieldByName("N")->AsString=OldNMForm->gridNumbers->Cells[0][i+1];

                       DataModule1->Numberall->Append();
                      DataModule1->Numberall->FieldByName("Position")->AsString=OldNMForm->gridNumbers->Cells[1][i+1];
                      DataModule1->Numberall->FieldByName("SNumber")->AsString=OldNMForm->gridNumbers->Cells[2][i+1];
                      DataModule1->Numberall->FieldByName("MSK")->AsString=OldNMForm->edtMSK->Text+"`";
                      DataModule1->Numberall->FieldByName("File")->AsString=OldNMForm->edtFile->Text;
                      DataModule1->Numberall->FieldByName("Size")->AsString=DataModule1->FileSelect->FieldByName("Size")->AsString;
                      DataModule1->Numberall->Post();
                         

     DataModule1->NumberCurrent->Post();
     OldNMForm->VrProgressBar1->Position=i+1;

     }
///OldNMForm->edtMSK->Text=OldNMForm->edtMSK->Text+"`";
DataModule1->NumberCurrent->Active=false;
DataModule1->Numberall->Active=false;
MainForm->ledNumbers->Active=true;
DataModule1->Numbers->Active=true;
DataModule1->Numbers->Append();
                     DataModule1->Numbers->FieldByName("MSK")->AsString=OldNMForm->edtMSK->Text;
                     DataModule1->Numbers->FieldByName("Nominal")->AsString=D2Form->edtNominal->Text;
                     DataModule1->Numbers->FieldByName("Type")->AsString=D2Form->edtType->Text;
                     DataModule1->Numbers->FieldByName("Name")->AsString=D2Form->edtName->Text;
                     DataModule1->Numbers->FieldByName("Status")->AsString="Передано";
                     DataModule1->Numbers->FieldByName("Begin")->AsString="Table";
                     DataModule1->Numbers->FieldByName("End")->AsString="Table";
                     DataModule1->Numbers->FieldByName("Number")->AsString=OldNMForm->edtAll->Text;
                     DataModule1->Numbers->Post();
               OldForm->edtMsk->Text=OldNMForm->edtMSK->Text;

       H=edtName->Text;
     for (int i=0; i<DataModule1->SqlSpecification->RecordCount;i++){
          if (H==DataModule1->SqlSpecification->FieldByName("Name")->AsString){
                g=1;
                
                MainForm->ledSpc->Active=true;
                OldForm->edtSpc->Text=DataModule1->SqlSpecification->FieldByName("Name")->AsString;
               OldForm->edtType->Text=DataModule1->SqlSpecification->FieldByName("NameR")->AsString;
               OldForm->btnRec->Enabled=true;
                break;
          }
            DataModule1->SqlSpecification->Next();
     }
           if (g==0){
                 ShowMessage("Спецификация не найдена");
           }
        if (MessageDlg("Номера установлены, Закрыть форму?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes){
          OldNMForm->Hide();
          D2Form->Hide();
        }
       OldNMForm->VrProgressBar1->Position=0;
   





}
//---------------------------------------------------------------------------
