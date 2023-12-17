                 //---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "OldNM.h"
#include "Data.h"
#include "Main.h"
#include "old.h"
#include "dialog2.h"
#include "Oldnumber.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma link "RzGrids"
#pragma link "RzPanel"
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "VrProgressBar"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TOldNMForm *OldNMForm;
//---------------------------------------------------------------------------
__fastcall TOldNMForm::TOldNMForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::btnCloseClick(TObject *Sender)
{
OldNMForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::btnClearClick(TObject *Sender)
{
for(int i=0; i<gridNumbers->RowCount-1;i++){
    gridNumbers->Cells[2][i+1]="";
    }        
}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::btnCurrentClick(TObject *Sender)
{
int k;
DataModule1->NumberCurrent->Active=true;
k=DataModule1->NumberCurrent->RecordCount;
gridNumbers->RowCount=k+1;
gridNumbers->ColCount=3;
gridNumbers->Cells[0][0]="#";
gridNumbers->Cells[1][0]="Позиция";
gridNumbers->Cells[2][0]="Номер";
DataModule1->NumberCurrent->First();
for (int i=0;i<k;i++){
    gridNumbers->Cells[0][i+1]=DataModule1->NumberCurrent->FieldByName("N")->AsString;
    gridNumbers->Cells[1][i+1]=DataModule1->NumberCurrent->FieldByName("Position")->AsString;
    gridNumbers->Cells[2][i+1]=DataModule1->NumberCurrent->FieldByName("SNumber")->AsString;
    DataModule1->NumberCurrent->Next();
    }        
}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::btnSerialClick(TObject *Sender)
{
int k,n;
k=gridNumbers->RowCount;
AnsiString S,S1;
S=gridNumbers->Cells[2][2];
n=S.Length();
    if (n==4){
          for (int i=0;i<k;i++){
                     gridNumbers->Cells[2][i+1]=edtSerial->Text+gridNumbers->Cells[2][i+1];
                              }
            }
    if (n==6){
              for (int i=0;i<k;i++){
                    S1=gridNumbers->Cells[2][i+1];
                    gridNumbers->Cells[2][i+1]=edtSerial->Text+S1.SubString(3,4);
               }
     }        
}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::btnNumberClick(TObject *Sender)
{
int b,e,n;
b=edtFirstPosition->ItemIndex+1;
e=edtEndPosition->ItemIndex+2;
n=StrToFloat(edtBegin->Text);
for (int i=0;i<e-b;i++){

            if (n+i>=100&n+i<1000){

             gridNumbers->Cells[2][b+i]=edtSerial->Text+"0"+(n+i);

              }
               if (n+i>=10&n+i<100){

             gridNumbers->Cells[2][b+i]=edtSerial->Text+"00"+(n+i);

              }
               if (n+i<10){

             gridNumbers->Cells[2][b+i]=edtSerial->Text+"000"+(n+i);

              }

            if (n+i>=1000){
           gridNumbers->Cells[2][b+i]=edtSerial->Text+(n+i);
            }
    }        
}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::FormShow(TObject *Sender)
{
int l;
                                    for(int i=0; i<MainForm->RzCheckList1->Count;i++){
                                              if(MainForm->RzCheckList1->ItemState[i]!=0){
                                                        l=i+1;
                                                        break;
                                                }
                                      }
if (MainForm->edtMachine->Text!="Saunders"){

        if (l>0){
                    DataModule1->Config->First();
                                        for (int i=0;i<DataModule1->Config->RecordCount;i++){
                                                     if (DataModule1->Config->FieldByName("SetupN")->AsFloat==l){
                                                                break;
                                                       }
                                            DataModule1->Config->Next();
                                           }

                  DataModule1->Transat_Temp->Filtered=false;
                  DataModule1->Transat_Temp->Filter="SETUPNUM='"+IntToStr(l)+"' and SETPOINT='"+DataModule1->Config->FieldByName("FirstTemp")->AsString+"'";
                  DataModule1->Transat_Temp->Filtered=true;
                  DataModule1->Transat_Temp->First();
                  gridNumbers->RowCount=DataModule1->Config->FieldByName("Number")->AsFloat+1;
                  edtAll->Text=gridNumbers->RowCount-1;
                  int N=DataModule1->Transat_Temp->RecordCount;
                  edtFile->Text=DataModule1->FileSelect->FieldByName("FileName")->AsString;
                  gridNumbers->Cells[0][0]="#";
                  gridNumbers->Cells[1][0]="Позиция";
                  gridNumbers->ColCount=3;
                  gridNumbers->Cells[2][0]="Номер";
                  edtFirstPosition->Items->Clear();
                  edtEndPosition->Items->Clear();
                           for (int i=0;i<N;i++){
                                                      if (DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat==0){
                                                                    gridNumbers->Cells[1][1+i]="L"+DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsString;
                                                                    edtFirstPosition->Items->Add("L"+DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsString);
                                                                    edtEndPosition->Items->Add("L"+DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsString);
                                                                                                                       }
                                                      if (DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat==1){
                                                                    gridNumbers->Cells[1][1+i]="U"+DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsString;
                                                                    edtFirstPosition->Items->Add("U"+DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsString);
                                                                    edtEndPosition->Items->Add("U"+DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsString);
                                                                    }
                                                   gridNumbers->Cells[0][1+i]=i+1;
                                               if(OldForm->edTemp->ItemIndex==0){
                                                  DataModule1->Transat_Temp->Next();
                                               }
                                               if(OldForm->edTemp->ItemIndex==1){
                                                  DataModule1->Transat_Temp->Next();
                                                   DataModule1->Transat_Temp->Next();
                                                   DataModule1->Transat_Temp->Next();
                                               }

                                    }
    edtFirstPosition->ItemIndex=0;
    edtEndPosition->ItemIndex=N-1;
    edtFirstPosition->Repaint();
    edtEndPosition->Repaint();


    }
          else {
               ShowMessage("Резонаторы не выбраны");
               edtMSK->Text="None";
                }


      }


}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::btnSaveClick(TObject *Sender)
{
int k;
AnsiString m;
if (edtMSK->Text!="None" & edtMSK->Text!=""){
DataModule1->NumberCurrent->Active=true;
DataModule1->NumberCurrent->EmptyTable();
DataModule1->Numberall->Active=false;
DataModule1->Numberall->SQL->Clear();
DataModule1->Numberall->SQL->Add("Select * from numberall where Msk ='"+edtMSK->Text+"`'");
DataModule1->Numberall->Active=true;
DataModule1->NumberCurrent->First();

   k=gridNumbers->RowCount-1;
   for (int i=0;i<k;i++){
   DataModule1->NumberCurrent->Append();
   DataModule1->NumberCurrent->FieldByName("N")->AsString=gridNumbers->Cells[0][i+1];
   DataModule1->NumberCurrent->FieldByName("Position")->AsString=gridNumbers->Cells[1][i+1];
   DataModule1->NumberCurrent->FieldByName("SNumber")->AsString=gridNumbers->Cells[2][i+1];
   DataModule1->NumberCurrent->Post();
     if (DataModule1->Numberall->RecordCount>0){
                      int j;
                        j=DataModule1->Numberall->RecordCount;
                        DataModule1->Numberall->First();
                            for ( int n=0; n<j; n++) {
                                 DataModule1->Numberall->Delete();
                                 }
                       DataModule1->Numberall->Append();
                      DataModule1->Numberall->FieldByName("Position")->AsString=gridNumbers->Cells[1][i+1];
                      DataModule1->Numberall->FieldByName("SNumber")->AsString=gridNumbers->Cells[2][i+1];
                      DataModule1->Numberall->FieldByName("MSK")->AsString=edtMSK->Text+"`";
                      DataModule1->Numberall->FieldByName("File")->AsString=edtFile->Text;
                      DataModule1->Numberall->FieldByName("Size")->AsString=DataModule1->FileSelect->FieldByName("Size")->AsString;
                      DataModule1->Numberall->Post();
        }
        else {
                      DataModule1->Numberall->Append();
                      DataModule1->Numberall->FieldByName("Position")->AsString=gridNumbers->Cells[1][i+1];
                      DataModule1->Numberall->FieldByName("SNumber")->AsString=gridNumbers->Cells[2][i+1];
                      DataModule1->Numberall->FieldByName("MSK")->AsString=edtMSK->Text+"`";
                      DataModule1->Numberall->FieldByName("File")->AsString=edtFile->Text;
                      DataModule1->Numberall->FieldByName("Size")->AsString=DataModule1->FileSelect->FieldByName("Size")->AsString;
                      DataModule1->Numberall->Post();
              }


   }
 DataModule1->NumberCurrent->Active=false;
 DataModule1->Numberall->Active=false;
 ShowMessage("Сохранено");
 }
 else {
       ShowMessage("Сохранение не выполнено");
      }        
}
//---------------------------------------------------------------------------
void __fastcall TOldNMForm::btnSetClick(TObject *Sender)
{
//определения типа установки
AnsiString MachineType;
AnsiString sql="Select `Type` from  `machines` where `IP`='"+MainForm->edtMachine->Text+"'";
        New_Data->MachineType->Active=false;
        New_Data->MachineType->SQL->Clear();
        New_Data->MachineType->SQL->Add(sql);
        New_Data->MachineType->Active=true;
        MachineType=New_Data->MachineType->FieldByName("Type")->AsString;
        New_Data->MachineType->Active=false;
 //***********************************************

int l;
AnsiString s6;
          if (MainForm->ledFile->Active & MainForm->RzCheckList1->ItemsChecked()>0){
                               for(int i=0; i<MainForm->RzCheckList1->Count;i++){
                                              if(MainForm->RzCheckList1->ItemState[i]!=0){
                                                        l=i+1;
                                                        break;
                                                }
                                      }

                   DataModule1->Config->First();
                                        for (int i=0;i<DataModule1->Config->RecordCount;i++){
                                                     if (DataModule1->Config->FieldByName("SetupN")->AsFloat==l){
                                                                break;
                                                       }
                                            DataModule1->Config->Next();
                                           }
                  DataModule1->Transat_Temp->Filtered=false;
                  DataModule1->Transat_Temp->Filter="SETUPNUM='"+IntToStr(l)+"' and SETPOINT='"+DataModule1->Config->FieldByName("FirstTemp")->AsString+"'";
                  DataModule1->Transat_Temp->Filtered=true;
                  DataModule1->Transat_Temp->First();
                  s6="SELECT * FROM  numberall WHERE  Msk = '"+edtMSK->Text+ "' and File = '"+edtFile->Text+"' and Size ='"+DataModule1->FileSelect->FieldByName("Size")->AsString+ "' ORDER BY   numberall.`Position`";
                  DataModule1->Numberall->Active=false;
                  DataModule1->Numberall->SQL->Clear();
                  DataModule1->Numberall->SQL->Add(s6);
                  DataModule1->Numberall->Active=true;
                  DataModule1->NumberCurrent->Active=true;

//------ установка спецификации-----------------------------------------------------------------------------
               int g=0;
AnsiString H,S;
S="SELECT DISTINCT   psi.MSK, psi.Nominal, psi.Name, psi.Begin, psi.`End`, psi.Number, psi.`Type` FROM psi WHERE  psi.`msk` ='"+edtMSK->Text+"'";
DataModule1->NumbersTemp->Active=false;
DataModule1->NumbersTemp->SQL->Clear();
DataModule1->NumbersTemp->SQL->Add(S);
DataModule1->NumbersTemp->Active=true;
H=DataModule1->NumbersTemp->FieldByName("Name")->AsString;
DataModule1->SqlSpecification->First();
if(DataModule1->NumbersTemp->RecordCount>0){
   for (int i=0; i<DataModule1->SqlSpecification->RecordCount;i++){
          if (H==DataModule1->SqlSpecification->FieldByName("Name")->AsString){
                g=1;
                
                MainForm->ledSpc->Active=true;
                break;
          }
            DataModule1->SqlSpecification->Next();
     }
           if (g==0){
                 ShowMessage("Спецификация не найдена");
           }
 }
 else {
        if (MessageDlg("МСК отсутствует в базе данных записать?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes){
                     D2Form->Show();

                  }


      }
//***********************************************************************************************************
                 DataModule1->NumberCurrent->EmptyTable();
                 OldNMForm->edtFile->Text=DataModule1->FileSelect->FieldByName("FileName")->AsString;

VrProgressBar1->MaxValue=DataModule1->Transat_Temp->RecordCount;
VrProgressBar1->Position=0;

  if (g==1){
              DataModule1->NumberCurrent->EmptyTable();
              OldForm->edtSpc->Text=DataModule1->SqlSpecification->FieldByName("Name")->AsString;
              OldForm->edtType->Text=DataModule1->SqlSpecification->FieldByName("NameR")->AsString;
               VrProgressBar1->MaxValue=gridNumbers->RowCount-1;
               VrProgressBar1->Position=0;
                      for (int i=0; i<gridNumbers->RowCount-1;i++){
                                                DataModule1->NumberCurrent->Append();
                                                DataModule1->NumberCurrent->FieldByName("Position")->AsString=gridNumbers->Cells[1][i+1];
                                                DataModule1->NumberCurrent->FieldByName("SNumber")->AsString=gridNumbers->Cells[2][i+1];
                                                DataModule1->NumberCurrent->FieldByName("N")->AsString=gridNumbers->Cells[0][i+1];
                                                              if (DataModule1->Numberall->RecordCount>0){
                                                                       int j;
                                                                               j=DataModule1->Numberall->RecordCount;
                                                                               DataModule1->Numberall->First();
                                                                                                    for ( int n=0; n<j; n++) {
                                                                                                                      DataModule1->Numberall->Delete();
                                                                                                         }

                                                DataModule1->Numberall->Append();
                                                DataModule1->Numberall->FieldByName("Position")->AsString=gridNumbers->Cells[1][i+1];
                                                DataModule1->Numberall->FieldByName("SNumber")->AsString=gridNumbers->Cells[2][i+1];
                                                DataModule1->Numberall->FieldByName("MSK")->AsString=edtMSK->Text+"`";
                                                DataModule1->Numberall->FieldByName("File")->AsString=edtFile->Text;
                                                DataModule1->Numberall->FieldByName("Size")->AsString=DataModule1->FileSelect->FieldByName("Size")->AsString;
                                                DataModule1->Numberall->Post();
                    }
        else {
                      DataModule1->Numberall->Append();
                      DataModule1->Numberall->FieldByName("Position")->AsString=gridNumbers->Cells[1][i+1];
                      DataModule1->Numberall->FieldByName("SNumber")->AsString=gridNumbers->Cells[2][i+1];
                      DataModule1->Numberall->FieldByName("MSK")->AsString=edtMSK->Text+"`";
                      DataModule1->Numberall->FieldByName("File")->AsString=edtFile->Text;
                      DataModule1->Numberall->FieldByName("Size")->AsString=DataModule1->FileSelect->FieldByName("Size")->AsString;
                      DataModule1->Numberall->Post();
              }
     DataModule1->NumberCurrent->Post();
     VrProgressBar1->Position=i+1;

     }
//edtMSK->Text=edtMSK->Text;
DataModule1->NumberCurrent->Active=false;
DataModule1->Numberall->Active=false;
MainForm->ledNumbers->Active=true;
        if (MessageDlg("Номера установлены, Закрыть форму?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
        {
          OldNMForm->Hide();
          OldNForm->Hide();
          OldForm->btnRec->Enabled=true;

        }
       VrProgressBar1->Position=0;
       }
   }
 else {
       ShowMessage("Не выбран файл с данными");
       }
}
//---------------------------------------------------------------------------
