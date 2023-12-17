//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PMDetail.h"
#include "data1.h"
#include "PMN.h"
#include "PM.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzTabs"
#pragma link "RzDBGrid"
#pragma link "RzDBNav"
#pragma link "AdvGlassButton"
#pragma link "DBAdvNavigator"
#pragma resource "*.dfm"
TPMDetailForm *PMDetailForm;
//---------------------------------------------------------------------------
__fastcall TPMDetailForm::TPMDetailForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPMDetailForm::btnCloseClick(TObject *Sender)
{
PMDetailForm->Hide();
PMForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TPMDetailForm::FormShow(TObject *Sender)
{
   AnsiString S;
   AnsiString S1;
   S="Select * from psidata where ";
     S1="Select * from psidatatemp where ";
       if (PMForm->edtMsk->ItemIndex!=-1){
       S=S+"msk='"+PMForm->edtMsk->Text+"' ";
       S1=S1+"msk='"+PMForm->edtMsk->Text+"' ";
       }
       if (PMForm->edtAn->Checked){
        S=S+"and Status2='Good' ";
        S1=S1+"and Status='Pass' ";
       }
       if (PMForm->edt->Checked){
       S=S+"and Status='Годен' ";
       S1=S1+"and Status1='Годен' ";
       }
       if (PMForm->edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+PMForm->edtM->Text+"' ";
        S1=S1+"and `MSK-M`='"+PMForm->edtM->Text+"' ";
       }
      if (!PMForm->cmb_ID->Text.IsEmpty() || PMForm->cmb_ID->Text!=""){
         if (PMForm->edtMsk->ItemIndex==-1){
        S="Select * from psidata where Measure_ID='"+PMForm->cmb_ID->Text+"' ";
        S1="Select * from psidatatemp where Measure_ID='"+PMForm->cmb_ID->Text+"' ";
        }

       else {
         S=S+" and Measure_ID='"+PMForm->cmb_ID->Text+"' ";
         S1=S1+" and Measure_ID='"+PMForm->cmb_ID->Text+"' ";
       }
       }
       S=S+"ORDER BY N";
       S1=S1+"ORDER BY Temp";
  DataModule2->psiData3->Active=false;
  DataModule2->psiData3->SQL->Clear();
  DataModule2->psiData3->SQL->Add(S);
  DataModule2->psiData3->Active=true;

  DataModule2->psiDataTemp3->Active=false;
  DataModule2->psiDataTemp3->SQL->Clear();
  DataModule2->psiDataTemp3->SQL->Add(S1);
  DataModule2->psiDataTemp3->Active=true;

}
//---------------------------------------------------------------------------
void __fastcall TPMDetailForm::gridParDblClick(TObject *Sender)
{

   AnsiString S1;

     S1="Select * from psidatatemp where ";
       if (PMForm->edtMsk->ItemIndex!=-1){

       S1=S1+"msk='"+PMForm->edtMsk->Text+"' ";
       }
       if (PMForm->edtAn->Checked){

        S1=S1+"and Status='Pass' ";
       }
       if (PMForm->edt->Checked){

       S1=S1+"and Status1='Годен' ";
       }
       if (PMForm->edtM->ItemIndex!=-1){


        S1=S1+"and `MSK-M`='"+PMForm->edtM->Text+"' ";
       }
      if (!PMForm->cmb_ID->Text.IsEmpty() || PMForm->cmb_ID->Text!=""){
         if (PMForm->edtMsk->ItemIndex==-1){

        S1="Select * from psidatatemp where Measure_ID='"+PMForm->cmb_ID->Text+"' ";
        }

       else {

         S1=S1+" and Measure_ID='"+PMForm->cmb_ID->Text+"' ";
       }
       }


       S1=S1+" and N='"+DataModule2->psiData3->FieldByName("N")->AsString+"' ORDER BY Temp";


  DataModule2->psiDataTemp3->Active=false;
  DataModule2->psiDataTemp3->SQL->Clear();
  DataModule2->psiDataTemp3->SQL->Add(S1);
  DataModule2->psiDataTemp3->Active=true;
   RzPageControl1->ActivePageIndex=1;
}
//---------------------------------------------------------------------------

