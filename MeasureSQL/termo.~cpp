//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "termo.h"
#include "Main.h"
#include "Data.h"
#include "MathLib.h"
#include "ap.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "TeeComma"
#pragma link "TeeEdit"
#pragma resource "*.dfm"
TTermoForm *TermoForm;
//---------------------------------------------------------------------------
__fastcall TTermoForm::TTermoForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTermoForm::FormShow(TObject *Sender)
{
DataModule1->Termo->Active=false;
DataModule1->Termo->SQL->Clear();
DataModule1->Termo->SQL->Add("Select * from termo order by name");
DataModule1->Termo->Active=true;
AnsiString S;
edtName->Items->Clear();
DataModule1->Termo->First();
S=0;
       for(int i=0;i<DataModule1->Termo->RecordCount; i++){
           if (S!=DataModule1->Termo->FieldByName("Name")->AsString){
               edtName->Items->Add(DataModule1->Termo->FieldByName("Name")->AsString);
               S=DataModule1->Termo->FieldByName("Name")->AsString;
              }
           DataModule1->Termo->Next();

       }
   Series1->Clear();
 Series1->Visible=false;
 Series2->Clear();
 Series2->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TTermoForm::btnCloseClick(TObject *Sender)
{
TermoForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TTermoForm::edtNameChange(TObject *Sender)
{
AnsiString S;
   Series1->Clear();
 Series1->Visible=false;
 Series2->Clear();
 Series2->Visible=false;
DataModule1->Termo->Active=false;
DataModule1->Termo->SQL->Clear();
DataModule1->Termo->SQL->Add("Select * from termo where name='"+edtName->Text+"' order by T");
DataModule1->Termo->Active=true;
Chart1->Title->Text->Clear();
Chart1->Title->Text->Append(edtName->Text);
ap::real_1d_array X,Y,Kp;             //инициализация переменых
ap::real_1d_array W;
int TempCount=DataModule1->Termo->RecordCount;
X.setbounds(0,TempCount);
Y.setbounds(0,TempCount);
W.setbounds(0,TempCount);
Kp.setbounds(0,TempCount);
double A,B;   //температурные пределы
int M=StrToFloat(edtM->Text);//порядок полинома
DataModule1->Termo->First();
A=DataModule1->Termo->FieldByName("T")->AsFloat;
      for( int j=0;j<TempCount;j++){
           X(j)=DataModule1->Termo->FieldByName("T")->AsFloat;
           Y(j)=(DataModule1->Termo->FieldByName("F")->AsFloat-10)*1000000;
           W(j)=1;
           Series2->AddXY(X(j),Y(j)," ",clTeeColor);
           DataModule1->Termo->Next();
          }//for
DataModule1->Termo->Last();
B=DataModule1->Termo->FieldByName("T")->AsFloat;
buildchebyshevleastsquares(X,Y,W,A,B,TempCount,M,Kp);//апроксимация
double xi;
  for (int i=0;i<180;i++){

            xi=calculatechebyshevleastsquares(M,Kp,A+i);
            Series1->AddXY(A+i,xi," ",clTeeColor);
       }

 Series2->Visible=true;
 Series1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TTermoForm::btnResultClick(TObject *Sender)
{
ap::real_1d_array X,Y,Kp;             //инициализация переменых
ap::real_1d_array W;
int TempCount=DataModule1->Termo->RecordCount;
X.setbounds(0,TempCount);
Y.setbounds(0,TempCount);
W.setbounds(0,TempCount);
Kp.setbounds(0,TempCount);
double A,B;   //температурные пределы
double Precision=StrToFloat(edtP->Text);  //точность
int M=StrToFloat(edtM->Text);//порядок полинома
DataModule1->Termo->First();
A=DataModule1->Termo->FieldByName("T")->AsFloat;
      for( int j=0;j<TempCount;j++){
           X(j)=DataModule1->Termo->FieldByName("T")->AsFloat;
           Y(j)=(DataModule1->Termo->FieldByName("F")->AsFloat-10)*1000000;
           W(j)=1;
           DataModule1->Termo->Next();
          }//for
DataModule1->Termo->Last();
B=DataModule1->Termo->FieldByName("T")->AsFloat;
buildchebyshevleastsquares(X,Y,W,A,B,TempCount,M,Kp);//апроксимация
double x,xi,Ti,Ta,Tb;
Ta=A;Tb=B;
x=(StrToFloat(edtF->Text)-10)*1000000;
//x=StrToFloat(edtF->Text);
Ti=(A+B)/2;
xi=calculatechebyshevleastsquares(M,Kp,A);
double dx;
dx=x-xi;
if (dx<0){
  dx=-1*dx;
  }
while  (dx>Precision){
                        xi=calculatechebyshevleastsquares(M,Kp,Ti);
                        if (xi>x){
                                 Tb=Ti;
                                 }
                         if (xi<x){
                                  Ta=Ti;
                                  }
                         Ti=(Ta+Tb)/2;
                        dx=x-xi;
            if (dx<0){
                  dx=-1*dx;
                    }
                       }

edtT->Text=FloatToStr(Ti);

}
//---------------------------------------------------------------------------
