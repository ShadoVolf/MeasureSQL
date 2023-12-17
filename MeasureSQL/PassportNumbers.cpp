//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PassportNumbers.h"
#include "data1.h"
#include "protokol.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzChkLst"
#pragma link "RzLstBox"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TPNForm *PNForm;
//---------------------------------------------------------------------------
__fastcall TPNForm::TPNForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPNForm::RzButton1Click(TObject *Sender)
{
 int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  viewNumber->ItemState[i]=1;
                  k++;
   }
  lCount->Caption=FloatToStr(k);
  lCount->Repaint();
}
//---------------------------------------------------------------------------
void __fastcall TPNForm::RzButton2Click(TObject *Sender)
{
 int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  viewNumber->ItemState[i]=0;
   }
  lCount->Caption="Не выбрано";
  lCount->Repaint();        
}
//---------------------------------------------------------------------------
void __fastcall TPNForm::btnCloseClick(TObject *Sender)
{
ProtokolForm->ActionList1->Actions[1]->Execute();
PNForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TPNForm::viewNumberChange(TObject *Sender, int Index,
      TCheckBoxState NewState)
{
int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  if (viewNumber->ItemState[i]!=0){
                                k++;
                         // DataModule2->Comand->SQL->Clear();
                         // DataModule2->Comand->SQL->Add("Update psidata set PrintSelect='1' where Msk='"+ProtokolForm->edtMsk->Text+"' and N='"+viewNumber->Items->Strings[i]+"'");
                         // DataModule2->Comand->Execute();
                      }
                   else {
                      //DataModule2->Comand->SQL->Clear();
                        //  DataModule2->Comand->SQL->Add("Update psidata set PrintSelect='0' where Msk='"+ProtokolForm->edtMsk->Text+"' and N='"+viewNumber->Items->Strings[i]+"'");
                        //  DataModule2->Comand->Execute();

                   }

   }

  lCount->Caption=FloatToStr(k);
  lCount->Repaint();
}
//---------------------------------------------------------------------------
