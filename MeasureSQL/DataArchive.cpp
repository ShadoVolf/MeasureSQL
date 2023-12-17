//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DataArchive.h"
#include "Data.h"
#include "archive.h"
#include "options.h"
#include "archiveTable.h"
#include "seacrh.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzChkLst"
#pragma link "RzLstBox"
#pragma link "RzButton"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TArchiveForm *ArchiveForm;
int key;
//---------------------------------------------------------------------------
__fastcall TArchiveForm::TArchiveForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TArchiveForm::btnCloseClick(TObject *Sender)
{
ArchiveForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::FormShow(TObject *Sender)
{
ArchiveForm->Color=OptionsForm->ColorBox1->Selected;
ArchiveForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
ArchiveForm->Font->Color=OptionsForm->ColorBox2->Selected;
ArchiveForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
ArchiveForm->btnTable->Brush->Color=OptionsForm->colorBTN->Selected;
ArchiveForm->btnDelete->Brush->Color=OptionsForm->colorBTN->Selected;
ArchiveForm->btnSearch->Brush->Color=OptionsForm->colorBTN->Selected;
ArchiveForm->Repaint();
   }
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::menuDateClick(TObject *Sender)
{
if (!menuDate->Checked) {
     menuMSK->Checked=false;
     menuFile->Checked=false;
     menuType->Checked=false;
     menuDate->Checked=true;
   archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select date,dater from psidata order by dater");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2,Sd,Sm,Sy,S1d,S1m,S1y;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("dateR")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("dateR")->AsString;


                         if (S!=S1){
                                   viewDate->Items->Add(S1);
                                   S=S1;
                                    }
                                     ProgressBar->StepIt();


   }
 }

}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::menuMSKClick(TObject *Sender)
{

if (!menuMSK->Checked) {
     menuMSK->Checked=true;
     menuFile->Checked=false;
     menuType->Checked=false;
     menuDate->Checked=false;
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
   for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("MSK")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   viewMSK->Items->Add(S);
                                    S=S1;
                                    }
       }
}
}
//---------------------------------------------------------------------------


void __fastcall TArchiveForm::menuTypeClick(TObject *Sender)
{
if (!menuType->Checked) {
     menuMSK->Checked=false;
     menuFile->Checked=false;
     menuType->Checked=true;
     menuDate->Checked=false;
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
   for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("spc")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("spc")->AsString;
                         if (S1!=S){
                                   viewType->Items->Add(S);
                                    S=S1;
                                    }
       }
}
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::menuFileClick(TObject *Sender)
{
if (!menuFile->Checked) {
     menuMSK->Checked=false;
     menuFile->Checked=true;
     menuType->Checked=false;
     menuDate->Checked=false;
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
   for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("File")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("File")->AsString;
                         if (S1!=S){
                                   viewFile->Items->Add(S);
                                    S=S1;
                                    }
       }
}
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnMSKClick(TObject *Sender)
{
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select msk from psidata order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;

viewMSK->Items->Add(archivedata->PSIData->FieldByName("MSK")->AsString);
for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("MSK")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   viewMSK->Items->Add(S);
                                    S=S1;
                                    }
                  ProgressBar->StepIt();
   }
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnTypeClick(TObject *Sender)
{
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select SPC from psidata order by SPC");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("SPC")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("SPC")->AsString;
                         if (S1!=S){
                                   viewType->Items->Add(S);
                                    S=S1;
                                    }
                    ProgressBar->StepIt();
   }
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnSortByDateClick(TObject *Sender)
{
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select date,dater from psidata order by dater");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2,Sd,Sm,Sy,S1d,S1m,S1y;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("dateR")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("dateR")->AsString;


                         if (S!=S1){
                                   viewDate->Items->Add(S1);
                                   S=S1;
                                    }
                                     ProgressBar->StepIt();


   }

}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::RzButton3Click(TObject *Sender)
{
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select File from psidata order by File");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();

int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("file")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("file")->AsString;
                         if (S1!=S){
                                   viewFile->Items->Add(S);
                                    S=S1;
                                    }
                      ProgressBar->StepIt();              
   }
}
//---------------------------------------------------------------------------



void __fastcall TArchiveForm::viewMSKClick(TObject *Sender)
{
AnsiString S,S1,S2,S3,S4,S5,S6,S7,s2,s4,s5,s6,S8;
viewDate->Visible=true;
cmb_ID->Items->Clear();
S3=viewMSK->Items->Strings[viewMSK->ItemIndex];
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where msk='"+S3+"' order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;
key=1;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
 edtM->Items->Clear();
for (int i=0;i<k;i++){
                     S2=archivedata->PSIData->FieldByName("FILE")->AsString;
                     S4=archivedata->PSIData->FieldByName("SPC")->AsString;
                     S5=archivedata->PSIData->FieldByName("N")->AsString;
                     S6=archivedata->PSIData->FieldByName("dater")->AsString;
                     S7=archivedata->PSIData->FieldByName("MSK-M")->AsString;
                     S8=archivedata->PSIData->FieldByName("Measure_ID")->AsString;
                         if (s2!=S2){
                                   viewFile->Items->Add(S2);
                                    s2=S2;
                                    }
                          if (s4!=S4){
                                   viewType->Items->Add(S4);
                                    s4=S4;
                                    }
                          if (s6!=S6){
                                   viewDate->Items->Add(S6);
                                    s6=S6;
                                    }
                        int p=1;
                        for (int j=0;j<edtM->Items->Count; j++){
                             if (edtM->Items->Strings[j]==S7){
                                 p=0;
                                 break;
                                 }
                              p=1;

                        }
                        if (p==1){
                         edtM->Items->Add(S7);
                        }
                        int p1=1;
                      for (int j=0;j<cmb_ID->Items->Count; j++){
                             if (cmb_ID->Items->Strings[j]==S8){
                                 p1=0;
                                 break;
                                 }
                              p1=1;

                        }
                        if (p1==1){
                         cmb_ID->Items->Add(S8);
                        }
                      archivedata->PSIData->Next();
                       viewNumbers->Items->Add(S5);
                       ProgressBar->StepIt();


   }
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::viewTypeClick(TObject *Sender)
{
/*AnsiString S,S1,S2,S3,S4,S5,S6,s2,s4,s5,s6;
viewDate->Visible=true;
S3=viewType->Items->Strings[viewType->ItemIndex];
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where spc='"+S3+"' order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;

k=archivedata->PSIData->RecordCount;
for (int i=0;i<k;i++){
                     S4=archivedata->PSIData->FieldByName("msk")->AsString;
                     S5=archivedata->PSIData->FieldByName("N")->AsString;
                              if (s4!=S4){
                                   viewMSK->Items->Add(S4);
                                    s4=S4;
                                    }
                       archivedata->PSIData->Next();
                       viewNumbers->Items->Add(S5);
                       }

archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where spc='"+S3+"' order by file");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
k=archivedata->PSIData->RecordCount;
for (int i=0;i<k;i++){
                     S4=archivedata->PSIData->FieldByName("File")->AsString;
                              if (s4!=S4){
                                   viewFile->Items->Add(S4);
                                    s4=S4;
                                    }
                       archivedata->PSIData->Next();
                       }

archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where spc='"+S3+"' order by dater");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
k=archivedata->PSIData->RecordCount;
for (int i=0;i<k;i++){
                     S4=archivedata->PSIData->FieldByName("Dater")->AsString;
                              if (s4!=S4){
                                   viewDate->Items->Add(S4);
                                    s4=S4;
                                    }
                       archivedata->PSIData->Next();
                       }

  */
  AnsiString S,S1,S2,S3,S4,S5,S6,S7,s2,s4,s5,s6;
  if (key!=1){
viewDate->Visible=true;
S3=viewType->Items->Strings[viewType->ItemIndex];
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where Spc='"+S3+"' order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;

k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
 edtM->Items->Clear();
for (int i=0;i<k;i++){
ProgressBar->StepIt();
                     S2=archivedata->PSIData->FieldByName("FILE")->AsString;
                     S4=archivedata->PSIData->FieldByName("MSK")->AsString;
                     S5=archivedata->PSIData->FieldByName("N")->AsString;
                     S6=archivedata->PSIData->FieldByName("dater")->AsString;
                     S7=archivedata->PSIData->FieldByName("MSK-M")->AsString;
                         if (s2!=S2){
                                   viewFile->Items->Add(S2);
                                    s2=S2;
                                    }
                             if (s4!=S4){
                                   viewMSK->Items->Add(S4);
                                    s4=S4;
                                    }
                            if (s6!=S6){
                                   viewDate->Items->Add(S6);
                                    s6=S6;
                                    }
                        int p=1;
                        for (int j=0;j<edtM->Items->Count; j++){
                             if (edtM->Items->Strings[j]==S7){
                                 p=0;
                                 break;
                                 }
                              p=1;

                        }
                        if (p==1){
                         edtM->Items->Add(S7);
                        }
                      archivedata->PSIData->Next();
                       viewNumbers->Items->Add(S5);


   }
   }
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnTableClick(TObject *Sender)
{
ArchiveTableForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnSearchClick(TObject *Sender)
{
SearchForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnDeleteClick(TObject *Sender)
{
AnsiString S;
int h;
S=viewMSK->Items->Strings[viewMSK->ItemIndex];
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
if (edtM->ItemIndex==-1){
archivedata->PSIData->SQL->Add("Select * from psidata where msk='"+S+"' order by msk");
}
else {
archivedata->PSIData->SQL->Add("Select * from psidata where msk='"+S+"' and MSK-M='"+edtM->Text+"' order by msk");

}
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
h=archivedata->PSIData->RecordCount;
for (int i=0; i<h;i++){
               archivedata->PSIData->Delete();
               }
archivedata->PSIDataTemp->Active=false;
archivedata->PSIDataTemp->SQL->Clear();
if (edtM->ItemIndex==-1){
archivedata->PSIDataTemp->SQL->Add("Select * from psidatatemp where msk='"+S+"' order by msk");
}
else {
archivedata->PSIDataTemp->SQL->Add("Select * from psidatatemp where msk='"+S+"' and MSK-M='"+edtM->Text+"' order by msk");

}
archivedata->PSIDataTemp->Active=true;
archivedata->PSIDataTemp->First();
h=archivedata->PSIDataTemp->RecordCount;
for (int i=0; i<h;i++){
               archivedata->PSIDataTemp->Delete();
               }

     ShowMessage("MSK   "+S+"   удалена");

 /*archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select msk from psidata order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();  */
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
/*
int k;
AnsiString S1,S2;
k=archivedata->PSIData->RecordCount;
for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("MSK")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   viewMSK->Items->Add(S);
                                    S=S1;
                                    }
   }
   */

}
//---------------------------------------------------------------------------


void __fastcall TArchiveForm::btnDelete2Click(TObject *Sender)
{
AnsiString S1;
int k=viewNumbers->Count;
for (int i=0; i<k; i++){
     S1=viewNumbers->Items->Strings[i];

     if (viewNumbers->ItemState[i]==1){
           AnsiString S;
           int h;
           S=viewMSK->Items->Strings[viewMSK->ItemIndex];
           archivedata->PSIData->Active=false;
           archivedata->PSIData->SQL->Clear();
              if (edtM->ItemIndex==-1){
                               archivedata->PSIData->SQL->Add("Select * from psidata where msk='"+S+"' and N='"+S1+"' order by msk");
                                    }
                 else {
                              archivedata->PSIData->SQL->Add("Select * from psidata where msk='"+S+"' and MSK-M='"+edtM->Text+"' and  N='"+S1+"' order by msk");

                      }
              archivedata->PSIData->Active=true;
              archivedata->PSIData->First();
              while (archivedata->PSIData->RecordCount>0){
                     archivedata->PSIData->Delete();
                     
              }

     }







}

AnsiString S2,S3,S4,S5,S6,S7,s2,s4,s5,s6;
viewDate->Visible=true;
S3=viewMSK->Items->Strings[viewMSK->ItemIndex];
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where msk='"+S3+"' order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
k=archivedata->PSIData->RecordCount;
 edtM->Items->Clear();
for (int i=0;i<k;i++){
                     S2=archivedata->PSIData->FieldByName("FILE")->AsString;
                     S4=archivedata->PSIData->FieldByName("SPC")->AsString;
                     S5=archivedata->PSIData->FieldByName("N")->AsString;
                     S6=archivedata->PSIData->FieldByName("dater")->AsString;
                     S7=archivedata->PSIData->FieldByName("MSK-M")->AsString;
                         if (s2!=S2){
                                   viewFile->Items->Add(S2);
                                    s2=S2;
                                    }
                          if (s4!=S4){
                                   viewType->Items->Add(S4);
                                    s4=S4;
                                    }
                          if (s6!=S6){
                                   viewDate->Items->Add(S6);
                                    s6=S6;
                                    }
                        int p=1;
                        for (int j=0;j<edtM->Items->Count; j++){
                             if (edtM->Items->Strings[j]==S7){
                                 p=0;
                                 break;
                                 }
                              p=1;

                        }
                        if (p==1){
                         edtM->Items->Add(S7);
                        }
                      archivedata->PSIData->Next();
                       viewNumbers->Items->Add(S5);


   }


}
//---------------------------------------------------------------------------



void __fastcall TArchiveForm::btnSeacrhClick(TObject *Sender)
{
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearch->Text+"',msk)>0) order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
if (k>0){
S=archivedata->PSIData->FieldByName("MSK")->AsString;
viewMSK->Items->Add(S);
}
for (int i=0;i<k;i++){



                     S1=archivedata->PSIData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   viewMSK->Items->Add(S);
                                    S=S1;
                                    }
                        archivedata->PSIData->Next();
                  ProgressBar->StepIt();
   }
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnSearchTypeClick(TObject *Sender)
{
 archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearchType->Text+"',Spc)>0) order by Spc");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
  viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
if (k>0){
S=archivedata->PSIData->FieldByName("Spc")->AsString;
viewType->Items->Add(S);
}

for (int i=0;i<k;i++){



                     S1=archivedata->PSIData->FieldByName("Spc")->AsString;
                         if (S1!=S){
                                   viewType->Items->Add(S);
                                    S=S1;
                                    }
                                    archivedata->PSIData->Next();
                  ProgressBar->StepIt();
   }
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnSearchDataClick(TObject *Sender)
{
  archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearchData->Text+"',DateR)>0) order by DateR");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
if (k>0){
S=archivedata->PSIData->FieldByName("DateR")->AsString;
 viewDate->Items->Add(S);
}

for (int i=0;i<k;i++){


                     S1=archivedata->PSIData->FieldByName("DateR")->AsString;
                         if (S1!=S){
                                   viewDate->Items->Add(S);
                                    S=S1;
                                    }
                                    archivedata->PSIData->Next();
                  ProgressBar->StepIt();
   }
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnSearchFileClick(TObject *Sender)
{
    archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearchFile->Text+"',File)>0) order by File");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
if (k>0){
S=archivedata->PSIData->FieldByName("File")->AsString;
viewFile->Items->Add(S);
}

for (int i=0;i<k;i++){



                     S1=archivedata->PSIData->FieldByName("File")->AsString;
                         if (S1!=S){
                                   viewFile->Items->Add(S);
                                    S=S1;
                                    }
                  ProgressBar->StepIt();
                  archivedata->PSIData->Next();
   }

}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::btnSearchNumberClick(TObject *Sender)
{
 archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearchNumber->Text+"',N)>0) order by N");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
key=1;
if (k>0){
S=archivedata->PSIData->FieldByName("N")->AsString;
 viewNumbers->Items->Add(S);
 }
for (int i=0;i<k;i++){



                     S1=archivedata->PSIData->FieldByName("N")->AsString;
                         if (S1!=S){
                                   viewNumbers->Items->Add(S);
                                    S=S1;
                                    }
                   archivedata->PSIData->Next();
                  ProgressBar->StepIt();
   }
  key=0;
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::viewNumbersClick(TObject *Sender)
{
if (key!=1){
if (!chkDeleteNumbers->Checked){
AnsiString S,S1,S2,S3,S4,S5,S6,S7,S8,s2,s4,s5,s6,s8;

viewDate->Visible=true;
S3=viewNumbers->Items->Strings[viewNumbers->ItemIndex];
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where N='"+S3+"' order by DateR");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;

k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
 edtM->Items->Clear();
for (int i=0;i<k;i++){
                     ProgressBar->StepIt();
                     S2=archivedata->PSIData->FieldByName("FILE")->AsString;
                     S4=archivedata->PSIData->FieldByName("SPC")->AsString;
                     S5=archivedata->PSIData->FieldByName("N")->AsString;
                     S8=archivedata->PSIData->FieldByName("MSK")->AsString;
                     S6=archivedata->PSIData->FieldByName("dater")->AsString;
                     S7=archivedata->PSIData->FieldByName("MSK-M")->AsString;
                         if (s2!=S2){
                                   viewFile->Items->Add(S2);
                                    s2=S2;
                                    }
                          if (s4!=S4){
                                   viewType->Items->Add(S4);
                                    s4=S4;
                                    }
                           if (s8!=S8){
                                   viewMSK->Items->Add(S8);
                                    s8=S8;
                                    }
                          if (s6!=S6){
                                   viewDate->Items->Add(S6);
                                    s6=S6;
                                    }
                        int p=1;
                        for (int j=0;j<edtM->Items->Count; j++){
                             if (edtM->Items->Strings[j]==S7){
                                 p=0;
                                 break;
                                 }
                              p=1;

                        }
                        if (p==1){
                         edtM->Items->Add(S7);
                        }
                      archivedata->PSIData->Next();



   }
   }
   }
}
//---------------------------------------------------------------------------



void __fastcall TArchiveForm::viewFileClick(TObject *Sender)
{
if (key!=1){
AnsiString S,S1,S2,S3,S4,S5,S6,S7,s2,s4,s5,s6;
viewDate->Visible=true;
S3=viewFile->Items->Strings[viewFile->ItemIndex];
archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("Select * from psidata where File='"+S3+"' order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewNumbers->Clear();
viewMSK->Clear();
 viewDate->Clear();
int k;

k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
 edtM->Items->Clear();
for (int i=0;i<k;i++){
                    ProgressBar->StepIt();
                     S2=archivedata->PSIData->FieldByName("MSK")->AsString;
                     S4=archivedata->PSIData->FieldByName("SPC")->AsString;
                     S5=archivedata->PSIData->FieldByName("N")->AsString;
                     S6=archivedata->PSIData->FieldByName("dater")->AsString;
                     S7=archivedata->PSIData->FieldByName("MSK-M")->AsString;
                         if (s2!=S2){
                                   viewMSK->Items->Add(S2);
                                    s2=S2;
                                    }
                          if (s4!=S4){
                                   viewType->Items->Add(S4);
                                    s4=S4;
                                    }
                          if (s6!=S6){
                                   viewDate->Items->Add(S6);
                                    s6=S6;
                                    }
                        int p=1;
                        for (int j=0;j<edtM->Items->Count; j++){
                             if (edtM->Items->Strings[j]==S7){
                                 p=0;
                                 break;
                                 }
                              p=1;

                        }
                        if (p==1){
                         edtM->Items->Add(S7);
                        }
                      archivedata->PSIData->Next();
                       viewNumbers->Items->Add(S5);



   }
   }
}
//---------------------------------------------------------------------------








void __fastcall TArchiveForm::edtSearchNumberKeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
  archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearchNumber->Text+"',N)>0) order by N");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
key=1;
if (k>0){
S=archivedata->PSIData->FieldByName("N")->AsString;
 viewNumbers->Items->Add(S);
 }
for (int i=0;i<k;i++){



                     S1=archivedata->PSIData->FieldByName("N")->AsString;
                         if (S1!=S){
                                   viewNumbers->Items->Add(S);
                                    S=S1;
                                    }
                   archivedata->PSIData->Next();
                  ProgressBar->StepIt();
   }
  key=0;



}
}
//---------------------------------------------------------------------------



void __fastcall TArchiveForm::edtSearchFileKeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
    archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearchFile->Text+"',File)>0) order by File");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
if (k>0){
S=archivedata->PSIData->FieldByName("File")->AsString;
viewFile->Items->Add(S);
}

for (int i=0;i<k;i++){



                     S1=archivedata->PSIData->FieldByName("File")->AsString;
                         if (S1!=S){
                                   viewFile->Items->Add(S);
                                    S=S1;
                                    }
                  ProgressBar->StepIt();
                  archivedata->PSIData->Next();
   }




}        
}
//---------------------------------------------------------------------------


void __fastcall TArchiveForm::edtSearchDataKeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){

   archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearchType->Text+"',Spc)>0) order by Spc");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
  viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;


for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("Spc")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("Spc")->AsString;
                         if (S1!=S){
                                   viewType->Items->Add(S);
                                    S=S1;
                                    }
                  ProgressBar->StepIt();
   }




}
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::edtSearchTypeKeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
 archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearch->Text+"',msk)>0) order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;


for (int i=0;i<k;i++){
                     S=archivedata->PSIData->FieldByName("MSK")->AsString;

                     archivedata->PSIData->Next();
                     S1=archivedata->PSIData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   viewMSK->Items->Add(S);
                                    S=S1;
                                    }
                  ProgressBar->StepIt();
   }






}
}
//---------------------------------------------------------------------------

void __fastcall TArchiveForm::edtSearchKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
 archivedata->PSIData->Active=false;
archivedata->PSIData->SQL->Clear();
archivedata->PSIData->SQL->Add("select * from psidata where (locate('"+edtSearch->Text+"',msk)>0) order by msk");
archivedata->PSIData->Active=true;
archivedata->PSIData->First();
viewType->Clear();
viewMSK->Clear();
viewNumbers->Clear();
viewFile->Clear();
 viewDate->Clear();
int k;
AnsiString S,S1,S2;
k=archivedata->PSIData->RecordCount;
ProgressBar->Position=0;
ProgressBar->Max=k-1;
if (k>0){
S=archivedata->PSIData->FieldByName("MSK")->AsString;
viewMSK->Items->Add(S);
}
for (int i=0;i<k;i++){



                     S1=archivedata->PSIData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   viewMSK->Items->Add(S);
                                    S=S1;
                                    }
                        archivedata->PSIData->Next();
                  ProgressBar->StepIt();
   }




}
}
//---------------------------------------------------------------------------


