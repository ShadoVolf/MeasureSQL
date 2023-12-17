//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "oldview.h"
#include "data1.h"
#include "Data.h"
#include "old.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzDBGrid"
#pragma link "RzPanel"
#pragma link "RzGrids"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TOldViewForm *OldViewForm;
//---------------------------------------------------------------------------
__fastcall TOldViewForm::TOldViewForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOldViewForm::btnCloseClick(TObject *Sender)
{
OldViewForm->Hide();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TOldViewForm::RSGridDrawCell(TObject *Sender, int ACol,
      int ARow, TRect &Rect, TGridDrawState State)
{
if (OldViewForm->RSGrid->Cells[ACol][ARow]=="Брак"){
  OldViewForm->RSGrid->Canvas->Brush->Color=clRed;
  OldViewForm->RSGrid->Canvas->Font->Color=clWhite;
  OldViewForm->RSGrid->Canvas->FillRect(OldViewForm->RSGrid->CellRect(ACol,ARow));
  OldViewForm->RSGrid->Canvas->TextOut(OldViewForm->RSGrid->CellRect(ACol,ARow).Left+1,OldViewForm->RSGrid->CellRect(ACol,ARow).Top+1,"Брак");
  for (int i=0;i<OldViewForm->RSGrid->ColCount-1;i++){
            OldViewForm->RSGrid->Canvas->Brush->Color=clRed;
             OldViewForm->RSGrid->Canvas->Font->Color=clWhite;
             OldViewForm->RSGrid->Canvas->FillRect(OldViewForm->RSGrid->CellRect(ACol-(i+1),ARow));
             OldViewForm->RSGrid->Canvas->TextOut(OldViewForm->RSGrid->CellRect(ACol-(i+1),ARow).Left+1,OldViewForm->RSGrid->CellRect(ACol-(i+1),ARow).Top+1,OldViewForm->RSGrid->Cells[ACol-(i+1)][ARow]);
  }

  }

/* AnsiString edText;
    int NN=OldForm->edtEdMes->ItemIndex;
                   double ed;

                   switch (NN) {
                    case  0 :

                        edText="1E-6";
                        break;
                    case 1  :

                        edText="1E-7";
                        break;
                    case 2  :

                        edText="1E-8";
                        break;
                     case 3  :

                        edText="1E-9";
                        break;

                   }

if (OldViewForm->RSGrid->Cells[ACol][ARow]=="F2-F1,"+edText){
  for (int i=1;i<DataModule2->old->RecordCount;i++){
                      if(OldViewForm->RSGrid->Cells[ACol][ARow+i]!=""){
                        if (DataModule2->SqlSpec->FieldByName("Old1Max")->AsString!="no"){
                         if (StrToFloat(OldViewForm->RSGrid->Cells[ACol][ARow+i])>DataModule2->SqlSpec->FieldByName("Old1Max")->AsFloat){
                                    OldViewForm->RSGrid->Canvas->Brush->Color=clRed;
                                    OldViewForm->RSGrid->Canvas->Font->Color=clWhite;
                                    OldViewForm->RSGrid->Canvas->FillRect(OldViewForm->RSGrid->CellRect(ACol,ARow+i));
                                    OldViewForm->RSGrid->Canvas->TextOut(OldViewForm->RSGrid->CellRect(ACol,ARow+i).Left+1,OldViewForm->RSGrid->CellRect(ACol,ARow+i).Top+1,OldViewForm->RSGrid->Cells[ACol][ARow+i]);
                         }
                         }

                        if (DataModule2->SqlSpec->FieldByName("Old1min")->AsString!="no" ){
                         if (StrToFloat(OldViewForm->RSGrid->Cells[ACol][ARow+i])<DataModule2->SqlSpec->FieldByName("Old1min")->AsFloat ){
                                    OldViewForm->RSGrid->Canvas->Brush->Color=clRed;
                                    OldViewForm->RSGrid->Canvas->Font->Color=clWhite;
                                    OldViewForm->RSGrid->Canvas->FillRect(OldViewForm->RSGrid->CellRect(ACol,ARow+i));
                                    OldViewForm->RSGrid->Canvas->TextOut(OldViewForm->RSGrid->CellRect(ACol,ARow+i).Left+1,OldViewForm->RSGrid->CellRect(ACol,ARow+i).Top+1,OldViewForm->RSGrid->Cells[ACol][ARow+i]);
                         }
                         }
                        }
      }  //for


  } //if
if (OldViewForm->RSGrid->Cells[ACol][ARow]=="F3-F1,"+edText){
  for (int i=1;i<DataModule2->old->RecordCount;i++){
                      if(OldViewForm->RSGrid->Cells[ACol][ARow+i]!=""){
                         if (OldViewForm->RSGrid->Cells[ACol][ARow+i]>DataModule2->SqlSpec->FieldByName("Old2Max")->AsFloat || OldViewForm->RSGrid->Cells[ACol][ARow+i]<DataModule2->SqlSpec->FieldByName("Old2min")->AsFloat ){
                                    OldViewForm->RSGrid->Canvas->Brush->Color=clRed;
                                    OldViewForm->RSGrid->Canvas->Font->Color=clWhite;
                                    OldViewForm->RSGrid->Canvas->FillRect(OldViewForm->RSGrid->CellRect(ACol,ARow+i));
                                    OldViewForm->RSGrid->Canvas->TextOut(OldViewForm->RSGrid->CellRect(ACol,ARow+i).Left+1,OldViewForm->RSGrid->CellRect(ACol,ARow+i).Top+1,OldViewForm->RSGrid->Cells[ACol][ARow+i]);
                         }
                        }
      }  //for


  } //if


if (OldViewForm->RSGrid->Cells[ACol][ARow]=="F3-F2,"+edText){
  for (int i=1;i<DataModule2->old->RecordCount;i++){
                      if(OldViewForm->RSGrid->Cells[ACol][ARow+i]!=""){
                         if (OldViewForm->RSGrid->Cells[ACol][ARow+i]>DataModule2->SqlSpec->FieldByName("Old2Max")->AsFloat || OldViewForm->RSGrid->Cells[ACol][ARow+i]<DataModule2->SqlSpec->FieldByName("Old2min")->AsFloat ){
                                    OldViewForm->RSGrid->Canvas->Brush->Color=clRed;
                                    OldViewForm->RSGrid->Canvas->Font->Color=clWhite;
                                    OldViewForm->RSGrid->Canvas->FillRect(OldViewForm->RSGrid->CellRect(ACol,ARow+i));
                                    OldViewForm->RSGrid->Canvas->TextOut(OldViewForm->RSGrid->CellRect(ACol,ARow+i).Left+1,OldViewForm->RSGrid->CellRect(ACol,ARow+i).Top+1,OldViewForm->RSGrid->Cells[ACol][ARow+i]);
                         }
                        }
      }  //for


  } //if
if (OldViewForm->RSGrid->Cells[ACol][ARow]=="F4-F1,"+edText){
  for (int i=1;i<DataModule2->old->RecordCount;i++){
                      if(OldViewForm->RSGrid->Cells[ACol][ARow+i]!=""){
                         if (OldViewForm->RSGrid->Cells[ACol][ARow+i]>DataModule2->SqlSpec->FieldByName("Old3Max")->AsFloat || OldViewForm->RSGrid->Cells[ACol][ARow+i]<DataModule2->SqlSpec->FieldByName("Old3min")->AsFloat ){
                                    OldViewForm->RSGrid->Canvas->Brush->Color=clRed;
                                    OldViewForm->RSGrid->Canvas->Font->Color=clWhite;
                                    OldViewForm->RSGrid->Canvas->FillRect(OldViewForm->RSGrid->CellRect(ACol,ARow+i));
                                    OldViewForm->RSGrid->Canvas->TextOut(OldViewForm->RSGrid->CellRect(ACol,ARow+i).Left+1,OldViewForm->RSGrid->CellRect(ACol,ARow+i).Top+1,OldViewForm->RSGrid->Cells[ACol][ARow+i]);
                         }
                        }
      }  //for


  } //if  */
}
//---------------------------------------------------------------------------

void __fastcall TOldViewForm::btnPrintClick(TObject *Sender)
{
DataModule2->Print->Active=false;
DataModule2->Print->SQL->Clear();
DataModule2->Print->SQL->Add("Select * from print_data where ID='"+DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString+"'");
DataModule2->Print->Active=true;

  DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName("Old")->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;

frxReport1->PrepareReport(true);
frxReport1->ShowPreparedReport();
}
//---------------------------------------------------------------------------


