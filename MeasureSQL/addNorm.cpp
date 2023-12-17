//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "addNorm.h"
#include "NewSpc.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzEdit"
#pragma link "DBAccess"
#pragma link "MyAccess"
#pragma resource "*.dfm"
TAddNormForm *AddNormForm;
//---------------------------------------------------------------------------
__fastcall TAddNormForm::TAddNormForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAddNormForm::btnCloseClick(TObject *Sender)
{
DataModule1->SpcTemp->Active=false;
DataModule1->SpcTemp->SQL->Clear();
DataModule1->SpcTemp->SQL->Add("Select * from specification where ID='"+SpcID->Text+"'");
DataModule1->SpcTemp->Active=true;
//DataModule1->SpcTemp->First();
AnsiString Fmaxmax;
AnsiString Fminmin;
double Fmx;
double Fmn;
AnsiString Fmax;
AnsiString Rmax;
double F;
double R;
double dFmx,dFmn,dF,dR;

        if (!edtF->Text.IsEmpty() & edtF->Text!=""){


              Fmax=DataModule1->SpcTemp->FieldByName("Fmax")->AsString;

                  if (Fmax!="no"){
                        F=StrToFloat(Fmax);

                        dF=((F-StrToFloat(edtF->Text))/F)*100;

                        MyCommand1->SQL->Clear();
                        MyCommand1->SQL->Add("Update specification set DopuskF='"+FloatToStr(dF)+"' where ID='"+SpcID->Text+"'");
                        MyCommand1->Execute();

                        }


        }
        if (!edtR->Text.IsEmpty() & edtR->Text!=""){
              Rmax=DataModule1->SpcTemp->FieldByName("Rmax")->AsString;

                  if (Rmax!="no"){
                        R=StrToFloat(Rmax);

                        dR=((R-StrToFloat(edtR->Text))/R)*100;

                        MyCommand1->SQL->Clear();
                        MyCommand1->SQL->Add("Update specification set DopuskR='"+FloatToStr(dR)+"' where ID='"+SpcID->Text+"'");
                        MyCommand1->Execute();

                    }




        }
       if (!edtFmax->Text.IsEmpty() & edtFmax->Text!=""){
        Fmaxmax=DataModule1->SpcTemp->FieldByName("Fmaxmax")->AsString;

                  if (Fmaxmax!="no"){

                        Fmx=StrToFloat(Fmaxmax);
                        dFmx=((Fmx-StrToFloat(edtFmax->Text))/Fmx)*100;
                        

                         MyCommand1->SQL->Clear();
                        MyCommand1->SQL->Add("Update specification set DopuskFi='"+FloatToStr(dFmx)+"' where ID='"+SpcID->Text+"'");
                        MyCommand1->Execute();
                  }



       }

     DataModule1->SpcTemp->Active=false;
    this->Hide();
}
//---------------------------------------------------------------------------
