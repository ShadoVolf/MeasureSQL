//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PHN.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzChkLst"
#pragma link "RzLstBox"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TPHNForm *PHNForm;
//---------------------------------------------------------------------------
__fastcall TPHNForm::TPHNForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPHNForm::viewNumberChange(TObject *Sender, int Index,
      TCheckBoxState NewState)
{
int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  if (viewNumber->ItemState[i]!=0){
                                k++;
                      }


   }
  lCount->Caption=FloatToStr(k);
  lCount->Repaint();
}
//---------------------------------------------------------------------------
void __fastcall TPHNForm::RzButton1Click(TObject *Sender)
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
void __fastcall TPHNForm::RzButton2Click(TObject *Sender)
{
 int k=0;
for(int i=0;i<viewNumber->Count;i++){
                  viewNumber->ItemState[i]=0;
   }
  lCount->Caption="Не выбрано";
  lCount->Repaint();        
}
//---------------------------------------------------------------------------
void __fastcall TPHNForm::btnCloseClick(TObject *Sender)
{
this->Hide();
}
//---------------------------------------------------------------------------
