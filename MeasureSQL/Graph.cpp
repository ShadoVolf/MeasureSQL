//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Graph.h"
#include "Data.h"
#include "data1.h"
#include "MathLib.h"
#include "ap.h"
#include "GraphOptions.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "TeeComma"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TGpForm *GpForm;
//---------------------------------------------------------------------------
__fastcall TGpForm::TGpForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGpForm::btnCloseClick(TObject *Sender)
{
GpForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::FormShow(TObject *Sender)
{
DataModule2->ResonatorType->Active=true;
DataModule2->ResonatorType->First();
DataModule2->psi->Active=true;
edtType->Items->Clear();
for (int i=0;i<DataModule2->ResonatorType->RecordCount;i++){
                    edtType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    DataModule2->ResonatorType->Next();
                    }

  edtMsk->Enabled=false;
  edtSpc->Enabled=false;
  edtNumber->Enabled=false;

 
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Name` from  specification where NameR='"+edtType->Text+"' order by Name");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::edtSpcChange(TObject *Sender)
{
edtMsk->Items->Clear();
AnsiString S,S1;


DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select distinct `Msk` from psidata where Spc='"+edtSpc->Text+"' ORDER BY Msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
/*for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("Msk")->AsString;
              DataModule2->psiData->Next();
              
           if (S!=DataModule2->psiData->FieldByName("Msk")->AsString){

                      edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
             }
             
      }
*/
 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
       edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
       DataModule2->psiData->Next();
 }
 edtMsk->Enabled=true;





}
//---------------------------------------------------------------------------

void __fastcall TGpForm::edtMskChange(TObject *Sender)
{
AnsiString S,S1,S2,S4;
//DataModule2->SqlSpec->Active=false;
//DataModule2->SqlSpec->SQL->Clear();
//DataModule2->SqlSpec->SQL->Add("Select * from  specification");
//DataModule2->SqlSpec->Active=true;
//DataModule2->SqlSpec->First();
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString S3;
 S3="Select distinct `N` from psidata where ";
       if (edtMsk->ItemIndex!=-1){
       S3=S3+"msk='"+edtMsk->Text+"' ";

       }
       if (edtM->ItemIndex!=-1){

        S3=S3+"and `MSK-M`='"+edtM->Text+"' ";

       }
      if (cmb_ID->Text!=""){
        S3="Select distinct `N` from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
       S3=S3+"ORDER BY N";



DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
 edtM->Items->Clear();
 edtNumber->Items->Clear();

/*for (int i=0;i<DataModule2->psiData->RecordCount;i++){

          int u=1;
          S2=DataModule2->psiData->FieldByName("N")->AsString;
          for (int j=0;j<edtNumber->Items->Count; j++){
               if (S2==edtNumber->Items->Strings[j]){
               u=0;
               break;
               }
             u=1;
          }
          if (u==1){
           edtNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);

          }

         int p=1;
          S1=DataModule2->psiData->FieldByName("MSK-M")->AsString;
          for (int j=0;j<edtM->Items->Count; j++){
               if (S1==edtM->Items->Strings[j]){
               p=0;
               break;
               }
             p=1;
          }
          if (p==1){
           edtM->Items->Add(S1);

          }
          int p1=1;
         S4=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S4==cmb_ID->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID->Items->Add(S4);

          }
    DataModule2->psiData->Next();
      }
 */
 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
    edtNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
     DataModule2->psiData->Next();
 }
  S3="Select distinct `N` from psidata where ";
       if (edtMsk->ItemIndex!=-1){
       S3=S3+"msk='"+edtMsk->Text+"' ";

       }
  S3=S3+"ORDER BY N";

if (cmb_ID->Text!=""){
 cmb_ID->Items->Clear();
DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
 for (int i=0;i<DataModule2->psiData->RecordCount;i++){
    cmb_ID->Items->Add(DataModule2->psiData->FieldByName("Measure_ID")->AsString);
     DataModule2->psiData->Next();
 }


}

  edtNumber->Enabled=true;
  edtTypeF->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::btnOptionsClick(TObject *Sender)
{
 OptionsGraphForm->Show();       
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::btnMakeClick(TObject *Sender)
{
double X,Y;
 while (Chart1->SeriesCount()>0) {
     Chart1->Series[0]->Free();
   }

  TPointSeries *Series2 = new TPointSeries(Chart1);
  Series2->Pointer->Style=psCircle;
  Series2->Pointer->Size=4;
  Chart1->AddSeries(Series2);
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
  if (edtM->ItemIndex==-1){
            DataModule2->psiData->SQL->Add("Select `N`,`F` from psidata where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"'");
    }
   else {
       DataModule2->psiData->SQL->Add("Select `N`,`F` from psidata where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"' and `MSK-M`='"+edtM->Text+"'");

   }
DataModule2->psiData->Active=true;
DataModule2->psiData->First();

DataModule2->psiDataTemp->Active=false;
DataModule2->psiDataTemp->SQL->Clear();
  if (edtM->ItemIndex==-1){
            DataModule2->psiDataTemp->SQL->Add("Select `N`,`F`,`FL`,`R`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`L`,`Temp` from psidatatemp where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"' ORDER BY Temp");
    }
   else {
       DataModule2->psiDataTemp->SQL->Add("Select `N`,`F`,`FL`,`R`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`L`,`Temp` from psidatatemp where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"' and `MSK-M`='"+edtM->Text+"' ORDER BY Temp");

   }
DataModule2->psiDataTemp->Active=true;
DataModule2->psiDataTemp->First();
int k=DataModule2->psiDataTemp->RecordCount;
   if (k>0){
      double F=DataModule2->psiData->FieldByName("F")->AsFloat;
      double Fns,Fnl;
     for (int i=0;i<k;i++){
                 if (DataModule2->psiDataTemp->FieldByName("Temp")->AsString==OptionsGraphForm->edtT->Text){

                  Fns=DataModule2->psiDataTemp->FieldByName("F")->AsFloat;
                  Fnl=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat;
                 }
       DataModule2->psiDataTemp->Next();
     }
     DataModule2->psiDataTemp->First();
  for (int i=0;i<k;i++){
             X=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
            if (edtTypeF->Text=="F (без нагрузки)"){
             Y=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Y=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }

              if (edtTypeF->Text=="R (Сопротивление)"){
             Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
             Chart1->LeftAxis->Title->Caption="R, Ом";
             }
              if (edtTypeF->Text=="Монотонность"){
             Y=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
             Chart1->LeftAxis->Title->Caption="ppm";
             }
              if (edtTypeF->Text=="Добротность"){
             Y=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Q,x1000";
             }
              if (edtTypeF->Text=="С0,pF"){
             Y=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
             Chart1->LeftAxis->Title->Caption="C0,пФ";
             }
              if (edtTypeF->Text=="Сq,fF"){
             Y=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Cq,фФ";
             }
              if (edtTypeF->Text=="L,mh"){
             Y=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
             Chart1->LeftAxis->Title->Caption="L,мГн";
             }
              if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Y=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Rb,Ом";
             }
              if (edtTypeF->Text=="Rc/Rb"){
              if (DataModule2->psiDataTemp->FieldByName("Rb")->AsString!=NULL){
                     Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
                     }
                 else {
                  Y=1;
                 }
             Chart1->LeftAxis->Title->Caption="Rc/Rb";
             }


            Series2->AddXY(X,Y,"",clRed);

         DataModule2->psiDataTemp->Next();
  }
  Chart1->Title->Clear();

  Chart1->Title->Text->Add("№"+edtNumber->Text);
  if (OptionsGraphForm->edtMSK->Checked){
   Chart1->Title->Text->Add("МСК  "+edtMsk->Text);

  }


  }
  else {
   ShowMessage("Нет данных");
  }
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::edtNumberChange(TObject *Sender)
{
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString S3,S4;

if (edtNumber->ItemIndex!=-1){
S3="Select `N` from psidata where ";
S4="Select `Temp`,`N`,`Measure_ID` from psidatatemp where ";
       if (edtMsk->ItemIndex!=-1){
       S3=S3+"msk='"+edtMsk->Text+"' ";
       S4=S4+"msk='"+edtMsk->Text+"' ";
       }
       if (edtM->ItemIndex!=-1){

        S3=S3+"and `MSK-M`='"+edtM->Text+"' ";
        S4=S4+"and `MSK-M`='"+edtM->Text+"' ";
       }
      if (cmb_ID->Text!=""){
        S3="Select `N` from psidata where Measure_ID='"+cmb_ID->Text+"' ";
        S4="Select `Temp`,`N`,`Measure_ID` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";
       }

       S3=S3+" and N='"+edtNumber->Text+"'"+" ORDER BY N";
       S4=S4+" and N='"+edtNumber->Text+"'"+" ORDER BY Temp";
       DataModule2->psiData->SQL->Add(S3);


DataModule2->psiData->Active=true;
DataModule2->psiData->First();

        DataModule2->psiDataTemp->Active=false;
        DataModule2->psiDataTemp->SQL->Clear();
        DataModule2->psiDataTemp->SQL->Add(S4);
        DataModule2->psiDataTemp->Active=true;
        DataModule2->psiDataTemp->First();
//DataModule2->psiData->RecordCount;
int k=DataModule2->psiDataTemp->RecordCount;

DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Tnastr` from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;

OptionsGraphForm->edtT->Text=DataModule2->SqlSpec->FieldByName("Tnastr")->AsString;

btnMake->Enabled=true;
btnApp->Enabled=true;
 if (DataModule2->psiDataTemp->RecordCount>0){
        Action1->Execute();

  if (DataModule2->psiDataTemp->RecordCount>=OptionsGraphForm->RzSpinEdit1->Value){
        Action2->Execute();
     }
    else {
     ShowMessage("Недостаточно данных для аппроксимации");

    }
   }
   else {

    ShowMessage("Данные отсутствуют");
   }
  }
}
//---------------------------------------------------------------------------


void __fastcall TGpForm::btnAppClick(TObject *Sender)
{
  while (Chart1->SeriesCount()>0) {
     Chart1->Series[0]->Free();
   }


if (OptionsGraphForm->Polinom->Checked){
           double A,B;
           double X,Y;
           ap::real_1d_array X1,Y1,Kp1,mono1,jump;
           ap::real_1d_array W;
           int l=0;
           double M;
           double Mono;
TLineSeries *Series1 = new TLineSeries(Chart1);
  Chart1->AddSeries(Series1);


 DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
  if (edtM->ItemIndex==-1){
            DataModule2->psiData->SQL->Add("Select `F`,`N` from psidata where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"'");
    }
   else {
       DataModule2->psiData->SQL->Add("Select `F`,`N` from psidata where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"' and `MSK-M`='"+edtM->Text+"'");

   }
DataModule2->psiData->Active=true;
DataModule2->psiData->First();

DataModule2->psiDataTemp->Active=false;
DataModule2->psiDataTemp->SQL->Clear();
  if (edtM->ItemIndex==-1){
            DataModule2->psiDataTemp->SQL->Add("Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"' ORDER BY Temp");
    }
   else {
       DataModule2->psiDataTemp->SQL->Add("Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where msk='"+edtMsk->Text+"' and N='"+edtNumber->Text+"' and `MSK-M`='"+edtM->Text+"' ORDER BY Temp");

   }
DataModule2->psiDataTemp->Active=true;
DataModule2->psiDataTemp->First();
int k=DataModule2->psiDataTemp->RecordCount;
 X1.setbounds(0,k);
 Y1.setbounds(0,k);
 Kp1.setbounds(0,k);
 W.setbounds(0,k);
 mono1.setbounds(0,k);
 jump.setbounds(0,k);
 M=OptionsGraphForm->RzSpinEdit1->Value;
  if  (k>=M+1){
      double F=DataModule2->psiData->FieldByName("F")->AsFloat;
      double Fns,Fnl;
     for (int i=0;i<k;i++){
                 if (DataModule2->psiDataTemp->FieldByName("Temp")->AsString==OptionsGraphForm->edtT->Text){

                  Fns=DataModule2->psiDataTemp->FieldByName("F")->AsFloat;
                  Fnl=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat;
                 }
       DataModule2->psiDataTemp->Next();
     }
     DataModule2->psiDataTemp->First();


                                for (int j=0;j<k;j++){
                                                       if (edtTypeF->Text=="F (без нагрузки)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
             }
              if (edtTypeF->Text=="R (Сопротивление)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
             }
              if (edtTypeF->Text=="Монотонность"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
             }
              if (edtTypeF->Text=="Добротность"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
             }
              if (edtTypeF->Text=="С0,pF"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
             }
              if (edtTypeF->Text=="Сq,fF"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
             }
              if (edtTypeF->Text=="L,mh"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
             }
               if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             }
               if (edtTypeF->Text=="Rc/Rb"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             }




                                                      X1(j)=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
                                                      W(j)=1;
                                                      DataModule2->psiDataTemp->Next();
                                }


//температурные пределы
         A=StrToFloat(OptionsGraphForm->edtA->Text);
         B=StrToFloat(OptionsGraphForm->edtB->Text);

         buildchebyshevleastsquares(X1,Y1,W,A,B,k,M,Kp1);//апроксимация
         double C=(abs(A)+abs(B))/0.1;
         X=A;
         while (X<=B){
                   X=A+l*0.1;
                   Y=calculatechebyshevleastsquares(M,Kp1,X);
                   Series1->AddXY(X,Y,"",clBlack);
                    l++;
           }

                     
                     if (edtTypeF->Text=="F (без нагрузки)"){
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
              if (edtTypeF->Text=="R (Сопротивление)"){
             Chart1->LeftAxis->Title->Caption="R, Ом";
             }
              if (edtTypeF->Text=="Монотонность"){
             Chart1->LeftAxis->Title->Caption="ppm";
             }
              if (edtTypeF->Text=="Добротность"){
             Chart1->LeftAxis->Title->Caption="Q,x1000";
             }
              if (edtTypeF->Text=="С0,pF"){
             Chart1->LeftAxis->Title->Caption="C0,пФ";
             }
              if (edtTypeF->Text=="Сq,fF"){
             Chart1->LeftAxis->Title->Caption="Cq,фФ";
             }
              if (edtTypeF->Text=="L,mh"){
             Chart1->LeftAxis->Title->Caption="L,мГн";
             }

                 if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Chart1->LeftAxis->Title->Caption="Rb,Ohm";
             }
               if (edtTypeF->Text=="Rc/Rb"){
             Chart1->LeftAxis->Title->Caption="Rc/Rb";
             }
                     GpForm->Chart1->Title->Clear();
                     Chart1->Title->Text->Add("№"+edtNumber->Text);
                    if (OptionsGraphForm->edtMSK->Checked){
                          Chart1->Title->Text->Add("МСК  "+edtMsk->Text);

                     }
                     if (OptionsGraphForm->edtP->Checked){
                          Chart1->Title->Text->Add("Полином  "+FloatToStr(M)+" порядка");

                     }
                     if (OptionsGraphForm->Mono->Checked){
                          double MonoT1;
                          MonotonP(X1,Y1,A,B,Mono,k,W,M,mono1,MonoT1);
                         Chart1->Title->Text->Add("Монотонность  "+FloatToStrF(Mono,ffFixed,4,2)+" ppm");
                           if (OptionsGraphForm->addMono->Checked){
                                    for (int i=0;i<k;i++){
                                       TLineSeries *Series3 = new TLineSeries(Chart1);
                                      Chart1->AddSeries(Series3);
                                      Series3->AddXY(X1(i),mono1(i),"",clNavy);
                                   }

                           }

                     }
                     if (OptionsGraphForm->Jump->Checked){
                      double Jump1,Tmax;
                      double Jump2, Tmin;
                               Jump(X1,Y1,A,B,Jump1,Jump2,k,W,M,jump,Tmax,Tmin);
                      Chart1->Title->Text->Add("Скачок  +  "+FloatToStrF(Jump1,ffFixed,4,2)+" ppm   T="+ FloatToStrF(Tmax,ffFixed,4,2) );
                      Chart1->Title->Text->Add("Скачок  -  "+FloatToStrF(Jump2,ffFixed,4,2)+" ppm   T="+ FloatToStrF(Tmin,ffFixed,4,2) );
                         if (OptionsGraphForm->addJump->Checked){
                               TLineSeries *Series4 = new TLineSeries(Chart1);
                                      Chart1->AddSeries(Series4);
                                    for (int i=0;i<k;i++){

                                      Series4->AddXY(X1(i),jump(i),"",clLime);
                                   }

                           }



                    }
        }
   else {
    ShowMessage("Недостаточно данных для аппроксимации");


   }
     }

}
//---------------------------------------------------------------------------


void __fastcall TGpForm::Action1Execute(TObject *Sender)
{
double X,Y;
 while (Chart1->SeriesCount()>0) {
     Chart1->Series[0]->Free();
   }
DataModule2->psiData->Active=false;

  TPointSeries *Series2 = new TPointSeries(Chart1);
  Series2->Pointer->Style=psCircle;
  Series2->Pointer->Size=4;
                  Chart1->AddSeries(Series2);

DataModule2->psiData->SQL->Clear();
AnsiString S3,S4;
int M=OptionsGraphForm->RzSpinEdit1->Value;
S3="Select `F`,`N` from psidata where ";
S4="Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where ";
       if (edtMsk->ItemIndex!=-1){
       S3=S3+"msk='"+edtMsk->Text+"' ";
       S4=S4+"msk='"+edtMsk->Text+"' ";
       }
       if (edtM->ItemIndex!=-1){

        S3=S3+"and `MSK-M`='"+edtM->Text+"' ";
        S4=S4+"and `MSK-M`='"+edtM->Text+"' ";
       }
      if (cmb_ID->Text!=""){
        S3="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' ";
        S4="Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";
       }

       S3=S3+" and N='"+edtNumber->Text+"'"+" ORDER BY N";
       S4=S4+" and N='"+edtNumber->Text+"'"+" ORDER BY Temp";
       DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();

DataModule2->psiDataTemp->Active=false;
DataModule2->psiDataTemp->SQL->Clear();

DataModule2->psiDataTemp->SQL->Add(S4);

DataModule2->psiDataTemp->Active=true;
DataModule2->psiDataTemp->First();
int k=DataModule2->psiDataTemp->RecordCount;

      double F=DataModule2->psiData->FieldByName("F")->AsFloat;
      double Fns,Fnl;
     for (int i=0;i<k;i++){
                 if (DataModule2->psiDataTemp->FieldByName("Temp")->AsString==OptionsGraphForm->edtT->Text){

                  Fns=DataModule2->psiDataTemp->FieldByName("F")->AsFloat;
                  Fnl=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat;
                 }
       DataModule2->psiDataTemp->Next();
     }
     DataModule2->psiDataTemp->First();
  for (int i=0;i<k;i++){
             X=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
            if (edtTypeF->Text=="F (без нагрузки)"){
             Y=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Y=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
              if (edtTypeF->Text=="R (Сопротивление)"){
             Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
             Chart1->LeftAxis->Title->Caption="R, Ом";
             }
              if (edtTypeF->Text=="Монотонность"){
             Y=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
             Chart1->LeftAxis->Title->Caption="ppm";
             }
              if (edtTypeF->Text=="Добротность"){
             Y=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Q,x1000";
             }
              if (edtTypeF->Text=="С0,pF"){
             Y=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
             Chart1->LeftAxis->Title->Caption="C0,пФ";
             }
              if (edtTypeF->Text=="Сq,fF"){
             Y=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Cq,фФ";
             }
              if (edtTypeF->Text=="L,mh"){
             Y=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
             Chart1->LeftAxis->Title->Caption="L,мГн";
             }
              if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Y=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Rb,Ohm";
             }
              if (edtTypeF->Text=="Rc/Rb"){
             Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Rc/Rb";
             }

            Series2->AddXY(X,Y,"",clRed);
         DataModule2->psiDataTemp->Next();
  }
  Chart1->Title->Clear();

  Chart1->Title->Text->Add("№"+edtNumber->Text);
  if (OptionsGraphForm->edtMSK->Checked){
                          Chart1->Title->Text->Add("МСК  "+edtMsk->Text);

                     }
            if (OptionsGraphForm->edtP->Checked){
             Chart1->Title->Text->Add("Полином  "+FloatToStr(M)+" порядка");




                     }
  if (!OptionsGraphForm->ShowMeasure->Checked){
    Series2->Visible=false;
  }
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::Action2Execute(TObject *Sender)
{
TLineSeries *Series1 = new TLineSeries(Chart1);
           Series1->Pointer->Visible=false;
           TLineSeries *Series2 = new TLineSeries(Chart1);
           Series2->Pointer->Visible=false;
           TLineSeries *Series3 = new TLineSeries(Chart1);
           Series3->Pointer->Visible=false;
           Chart1->AddSeries(Series1);
           Chart1->AddSeries(Series2);
           Chart1->AddSeries(Series3);
if (OptionsGraphForm->Polinom->Checked){
           double A,B;
           double X,Y;
           ap::real_1d_array X1,Y1,Kp1,Kp2,mono1,jump;
           ap::real_1d_array W;
           int l=0;

           double M;
           double Mono;
   Integer Count=0;
 DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
 AnsiString S3,S4;
S3="Select `F`,`N` from psidata where ";
S4="Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where ";
       if (edtMsk->ItemIndex!=-1){
       S3=S3+"msk='"+edtMsk->Text+"' ";
       S4=S4+"msk='"+edtMsk->Text+"' ";
       }
       if (edtM->ItemIndex!=-1){

        S3=S3+"and `MSK-M`='"+edtM->Text+"' ";
        S4=S4+"and `MSK-M`='"+edtM->Text+"' ";
       }
      if (cmb_ID->Text!=""){
        S3="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' ";
        S4="Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";
       }

       S3=S3+" and N='"+edtNumber->Text+"'"+" ORDER BY N";
       S4=S4+" and N='"+edtNumber->Text+"'"+" ORDER BY Temp";
       DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();

DataModule2->psiDataTemp->Active=false;
DataModule2->psiDataTemp->SQL->Clear();
DataModule2->psiDataTemp->SQL->Add(S4);
DataModule2->psiDataTemp->Active=true;
DataModule2->psiDataTemp->First();

Integer N=DataModule2->psiDataTemp->RecordCount;
OptionsGraphForm->edtA->Text=DataModule2->psiDataTemp->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp->Last();
OptionsGraphForm->edtB->Text=DataModule2->psiDataTemp->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp->First();
  OptionsGraphForm->edtA->Items->Clear();
      OptionsGraphForm->edtB->Items->Clear();
      OptionsGraphForm->edtT->Items->Clear();
 for (int i=0; i<N; i++){

      OptionsGraphForm->edtA->Items->Add(DataModule2->psiDataTemp->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtB->Items->Add(DataModule2->psiDataTemp->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtT->Items->Add(DataModule2->psiDataTemp->FieldByName("Temp")->AsString);
      DataModule2->psiDataTemp->Next();
 }

 DataModule2->psiDataTemp->First();

int k=DataModule2->psiDataTemp->RecordCount;
 X1.setbounds(0,k);
 Y1.setbounds(0,k);
 Kp1.setbounds(0,k);
 Kp2.setbounds(0,k);
 W.setbounds(0,k);
 mono1.setbounds(0,k);
 jump.setbounds(0,k);
      double F=DataModule2->psiData->FieldByName("F")->AsFloat;
      double Fns,Fnl;
     for (int i=0;i<k;i++){
                 if (DataModule2->psiDataTemp->FieldByName("Temp")->AsString==OptionsGraphForm->edtT->Text){

                  Fns=DataModule2->psiDataTemp->FieldByName("F")->AsFloat;
                  Fnl=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat;
                 }
       DataModule2->psiDataTemp->Next();
     }
     DataModule2->psiDataTemp->First();

     A=StrToFloat(OptionsGraphForm->edtA->Text);
     B=StrToFloat(OptionsGraphForm->edtB->Text);
        Count=0;
                                for (int j=0;j<k;j++){
      if (DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat>=A & DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat<=B){

              if (edtTypeF->Text=="F (без нагрузки)"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
             }
              if (edtTypeF->Text=="R (Сопротивление)"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
             }
              if (edtTypeF->Text=="Монотонность"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
             }
              if (edtTypeF->Text=="Добротность"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
             }
              if (edtTypeF->Text=="С0,pF"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
             }
              if (edtTypeF->Text=="Сq,fF"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
             }
              if (edtTypeF->Text=="L,mh"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
             }
              if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             }
              if (edtTypeF->Text=="Rc/Rb"){
             Y1(Count)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             }



                                                      X1(Count)=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
                                                      W(Count)=1;
                         Count++;

                         }
                          DataModule2->psiDataTemp->Next();
                                }


//температурные пределы

         M=OptionsGraphForm->RzSpinEdit1->Value;
         buildchebyshevleastsquares(X1,Y1,W,A,B,Count,M,Kp1);//апроксимация
         buildpolynomialleastsquaresNew(X1,Y1,Count,M,Kp2);
          double f1,f2,kk,kk1,IT;
         if (M==5){

               for (int i=A; i<B; i++){

               f1=20*Kp2(5)*i*i*i+12*Kp2(4)*i*i+6*Kp2(3)*i+2*Kp2(2);
               f2=20*Kp2(5)*pow((i+1),3)+12*Kp2(4)*pow(i+1,2)+6*Kp2(3)*(i+1)+2*Kp2(2);
                     if (f1>=0 & f2<=0){
                         for (int j=0;j<100;j++){
                          kk=i+j*0.01;
                          kk1=i+(j+1)*0.01;
                          f1=20*Kp2(5)*kk*kk*kk+12*Kp2(4)*kk*kk+6*Kp2(3)*kk+2*Kp2(2);
                          f2=20*Kp2(5)*pow(kk1,3)+12*Kp2(4)*pow(kk1,2)+6*Kp2(3)*kk1+2*Kp2(2);
                          if (f1>=0 & f2<=0){
                            IT=i+j*0.01;
                          break;
                          }
                         }
                     }
                     else if (f1<=0 & f2>=0){
                          for (int j=0;j<100;j++){
                          kk=i+j*0.01;
                          kk1=i+(j+1)*0.01;
                          f1=20*Kp2(5)*kk*kk*kk+12*Kp2(4)*kk*kk+6*Kp2(3)*kk+2*Kp2(2);
                          f2=20*Kp2(5)*pow(kk1,3)+12*Kp2(4)*pow(kk1,2)+6*Kp2(3)*kk1+2*Kp2(2);
                          if (f1<=0 & f2>=0){
                            IT=i+j*0.01;
                          break;
                          }
                         }
                     }

                }
            }
         double C=(abs(A)+abs(B))/0.1;
         X=A;
         double X_S;
         while (X<=B){
                   X=A+l*0.1;
                   Y=calculatechebyshevleastsquares(M,Kp1,X);
                   Series1->AddXY(X,Y,"",clBlack);
                   if (M==5){
                   double A5=Kp2(5);
                   double A4=Kp2(4);
                   double A3=Kp2(3);
                   double A2=Kp2(2);
                   double A1=Kp2(1);
                   double A0=Kp2(0);
                   //Y=Kp2(5)*pow(X,5)+Kp2(4)*pow(X,4)+Kp2(3)*pow(X,3)+Kp2(2)*pow(X,2)+Kp2(1)*X+Kp2(0);
                    Y=A5*pow(X,5)+A4*pow(X,4)+A3*pow(X,3)+A2*pow(X,2)+A1*X+A0;
                   Series2->AddXY(X,Y,"",clGreen);
                   double B5=Kp2(5);
                    double B4=5*B5*IT+Kp2(4);
                    double B3_1= 4*B4*IT+Kp2(3)-10*B5*pow(IT,2);
                    double B3= (6*B4*pow(IT,2)-10*B5*pow(IT,3)-Kp2(2))/(3*IT);
                    double B1=4*B4*pow(IT,3)-5*B5*pow(IT,4)-3*B3*pow(IT,2)+A1;
                    double B0=B1*IT+Kp2(0)+B3*pow(IT,3)+B5*pow(IT,5)-B4*pow(IT,4);
                     X_S=X-IT;
                     Y=B5*pow(X_S,5)+B4*pow(X_S,4)+B3*pow(X_S,3)+B1*X_S+B0;
                     Series3->AddXY(X,Y,"",clRed);

                   }
                    l++;
           }


                     if (edtTypeF->Text=="F (без нагрузки)"){
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
              if (edtTypeF->Text=="R (Сопротивление)"){
             Chart1->LeftAxis->Title->Caption="R, Ом";
             }
              if (edtTypeF->Text=="Монотонность"){
             Chart1->LeftAxis->Title->Caption="ppm";
             }
              if (edtTypeF->Text=="Добротность"){
             Chart1->LeftAxis->Title->Caption="Q,x1000";
             }
              if (edtTypeF->Text=="С0,pF"){
             Chart1->LeftAxis->Title->Caption="C0,пФ";
             }
              if (edtTypeF->Text=="Сq,fF"){
             Chart1->LeftAxis->Title->Caption="Cq,фФ";
             }
              if (edtTypeF->Text=="L,mh"){
             Chart1->LeftAxis->Title->Caption="L,мГн";
             }
              if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Chart1->LeftAxis->Title->Caption="R,Ohm";
             }
              if (edtTypeF->Text=="Rc/Rb"){
             Chart1->LeftAxis->Title->Caption="Rc/Rb";
             }


                     GpForm->Chart1->Title->Clear();
                     Chart1->Title->Text->Add("№"+edtNumber->Text);
                    if (OptionsGraphForm->edtMSK->Checked){
                          Chart1->Title->Text->Add("МСК  "+edtMsk->Text);

                     }
                     if (OptionsGraphForm->edtP->Checked){
                          Chart1->Title->Text->Add("Полином  "+FloatToStr(M)+" порядка");

                     }
                     if (OptionsGraphForm->chk_coef->Checked){
                        for (int ii=0;ii<=M;ii++){
                          Chart1->Title->Text->Add("A"+FloatToStr(ii)+" = "+Kp1(ii));

                          }

                     }
                     if (OptionsGraphForm->Mono->Checked){
                           double MonoT2;
                          MonotonP(X1,Y1,A,B,Mono,Count,W,M,mono1,MonoT2);
                         Chart1->Title->Text->Add("Монотонность  "+FloatToStrF(Mono,ffFixed,4,2)+" ppm");
                           if (OptionsGraphForm->addMono->Checked){
                               TLineSeries *Series3 = new TLineSeries(Chart1);
                               Series3->Pointer->Visible=false;
                              Chart1->AddSeries(Series3);
                                    for (int i=0;i<k;i++){

                                      Series3->AddXY(X1(i),mono1(i),"",clNavy);
                                   }

                           }

                     }


                     if (OptionsGraphForm->TmaxCh->Checked || OptionsGraphForm->TminCh->Checked){

                     double Tmax,Tmin;
                      Tmax=5000;
                       Tmin =-5000;
                     TurnOverNew(X1,Y1,A,B,0.01,Tmax,Tmin,Count,W,M);
                       if (OptionsGraphForm->TmaxCh->Checked){
                              if (Tmax>=-60 & Tmax<=150){
                                   Chart1->Title->Text->Add("Tmax  "+FloatToStrF(Tmax,ffFixed,4,2)+" C");
                                  }
                                  else {
                                    Chart1->Title->Text->Add("Tmax  NONE");
                                  }
                        }
                       if (OptionsGraphForm->TminCh->Checked){
                          if (Tmin>=-60 & Tmin<=150){
                                Chart1->Title->Text->Add("Tmin  "+FloatToStrF(Tmin,ffFixed,4,2)+" C");
                                }
                                else {
                                 Chart1->Title->Text->Add("Tmin  NONE");
                                }
                        }

                     }

                    if (OptionsGraphForm->Jump->Checked){
                      double Jump1,Tmax;
                      double Jump2, Tmin;
                               Jump(X1,Y1,A,B,Jump1,Jump2,k,W,M,jump,Tmax,Tmin);
                      Chart1->Title->Text->Add("Скачок  +  "+FloatToStrF(Jump1,ffFixed,4,2)+" ppm   T="+ FloatToStrF(Tmax,ffFixed,4,2) );
                      Chart1->Title->Text->Add("Скачок  -  "+FloatToStrF(Jump2,ffFixed,4,2)+" ppm   T="+ FloatToStrF(Tmin,ffFixed,4,2) );
                         if (OptionsGraphForm->addJump->Checked){
                               TLineSeries *Series4 = new TLineSeries(Chart1);
                               Series4->Pointer->Visible=false;
                              Chart1->AddSeries(Series4);
                                    for (int i=0;i<k;i++){

                                      Series4->AddXY(X1(i),jump(i),"",clTeeColor);
                                   }

                               
                           }



                    }


     }

  if (!OptionsGraphForm->ShowApp->Checked){
    Series1->Visible=false;
  }
  Series1->Visible=true;
  Series2->Visible=true;
  Series3->Visible=true;

}
//---------------------------------------------------------------------------




void __fastcall TGpForm::RzButton1Click(TObject *Sender)
{
if (!OptionsGraphForm->AllInOne->Checked){

 OptionsGraphForm->edtA->Items->Clear();
      OptionsGraphForm->edtB->Items->Clear();
      OptionsGraphForm->edtT->Items->Clear();

 DataModule2->psiData2->Active=false;
DataModule2->psiData2->SQL->Clear();
AnsiString S;
 //S="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' LIMIT 1";
 S="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"'";
DataModule2->psiData2->SQL->Add(S);
DataModule2->psiData2->Active=true;
DataModule2->psiData2->First();

DataModule2->psiDataTemp3->Active=false;
DataModule2->psiDataTemp3->SQL->Clear();
DataModule2->psiDataTemp3->SQL->Add("Select `Temp` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' ORDER BY Temp");
DataModule2->psiDataTemp3->Active=true;
DataModule2->psiDataTemp3->First();
DataModule2->psiDataTemp3->RecordCount;
OptionsGraphForm->edtA->Text=DataModule2->psiDataTemp3->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp3->Last();
OptionsGraphForm->edtB->Text=DataModule2->psiDataTemp3->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp3->First();

 for (int i=0; i<DataModule2->psiDataTemp3->RecordCount; i++){

      OptionsGraphForm->edtA->Items->Add(DataModule2->psiDataTemp3->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtB->Items->Add(DataModule2->psiDataTemp3->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtT->Items->Add(DataModule2->psiDataTemp3->FieldByName("Temp")->AsString);
      DataModule2->psiDataTemp3->Next();
 }
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Tnastr` from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;
OptionsGraphForm->edtT->Text=DataModule2->SqlSpec->FieldByName("Tnastr")->AsString;


        for (int j=0; j<DataModule2->psiData2->RecordCount; j++){
 while (Chart1->SeriesCount()>0) {
     Chart1->Series[0]->Free();
   }
  double X,Y;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"'");


DataModule2->psiData->Active=true;
DataModule2->psiData->First();

DataModule2->psiDataTemp->Active=false;
DataModule2->psiDataTemp->SQL->Clear();
DataModule2->psiDataTemp->SQL->Add("Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' ORDER BY Temp");
DataModule2->psiDataTemp->Active=true;
DataModule2->psiDataTemp->First();
int k=DataModule2->psiDataTemp->RecordCount;
   if (k>0){
      double F=DataModule2->psiData->FieldByName("F")->AsFloat;
      double Fns,Fnl;
     for (int i=0;i<k;i++){
                 if (DataModule2->psiDataTemp->FieldByName("Temp")->AsString==OptionsGraphForm->edtT->Text){

                  Fns=DataModule2->psiDataTemp->FieldByName("F")->AsFloat;
                  Fnl=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat;
                 }
       DataModule2->psiDataTemp->Next();
     }
     DataModule2->psiDataTemp->First();
     TPointSeries *Series2 = new TPointSeries(Chart1);
                  Series2->Pointer->Visible=true;
                  Series2->Pointer->Style=psCircle;
                  Series2->Pointer->Size=4;
                  Chart1->AddSeries(Series2);
  for (int i=0;i<k;i++){
             X=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
            if (edtTypeF->Text=="F (без нагрузки)"){
             Y=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Y=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
             Chart1->LeftAxis->Title->Caption="F, ppm";
             }

              if (edtTypeF->Text=="R (Сопротивление)"){
             Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
             Chart1->LeftAxis->Title->Caption="R, Ом";
             }
              if (edtTypeF->Text=="Монотонность"){
             Y=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
             Chart1->LeftAxis->Title->Caption="ppm";
             }
              if (edtTypeF->Text=="Добротность"){
             Y=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Q,x1000";
             }
              if (edtTypeF->Text=="С0,pF"){
             Y=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
             Chart1->LeftAxis->Title->Caption="C0,пФ";
             }
              if (edtTypeF->Text=="Сq,fF"){
             Y=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Cq,фФ";
             }
              if (edtTypeF->Text=="L,mh"){
             Y=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
             Chart1->LeftAxis->Title->Caption="L,мГн";
             }
              if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Y=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Rb,Ом";
             }
              if (edtTypeF->Text=="Rc/Rb"){
             Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             Chart1->LeftAxis->Title->Caption="Rc/Rb";
             }

            Series2->AddXY(X,Y,"",clRed);
            DataModule2->psiDataTemp->Next();
         }

             if (OptionsGraphForm->Polinom->Checked){
           double A,B;
           double X,Y;
           ap::real_1d_array X1,Y1,Kp1,mono1,jump;
           ap::real_1d_array W;
           int l=0;
           double M;
           double Mono;
     int k=DataModule2->psiDataTemp->RecordCount;
 X1.setbounds(0,k);
 Y1.setbounds(0,k);
 Kp1.setbounds(0,k);
 W.setbounds(0,k);
 mono1.setbounds(0,k);
 jump.setbounds(0,k);
      double F=DataModule2->psiData->FieldByName("F")->AsFloat;
      

     DataModule2->psiDataTemp->First();


                                for (int j=0;j<k;j++){
                                                       if (edtTypeF->Text=="F (без нагрузки)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
             }
             if (edtTypeF->Text=="FL (с нагрузкой)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
             }
              if (edtTypeF->Text=="R (Сопротивление)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
             }
              if (edtTypeF->Text=="Монотонность"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
             }
              if (edtTypeF->Text=="Добротность"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
             }
              if (edtTypeF->Text=="С0,pF"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
             }
              if (edtTypeF->Text=="Сq,fF"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
             }
              if (edtTypeF->Text=="L,mh"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
             }
              if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             }
              if (edtTypeF->Text=="Rc/Rb"){
             Y1(j)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
             }


                                                      X1(j)=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
                                                      W(j)=1;
                                                      DataModule2->psiDataTemp->Next();
                                }


//температурные пределы
         A=StrToFloat(OptionsGraphForm->edtA->Text);
         B=StrToFloat(OptionsGraphForm->edtB->Text);
         M=OptionsGraphForm->RzSpinEdit1->Value;
         buildchebyshevleastsquares(X1,Y1,W,A,B,k,M,Kp1);//апроксимация
         double C=(abs(A)+abs(B))/0.1;
         X=A;
            TLineSeries *Series1 = new TLineSeries(Chart1);
                  Series1->Pointer->Visible=false;
                  Series1->Pointer->Style=psCircle;
                  Series1->Pointer->Size=3;
                  Chart1->AddSeries(Series1);
         while (X<=B){
                   X=A+l*0.1;
                   Y=calculatechebyshevleastsquares(M,Kp1,X);
                   Series1->AddXY(X,Y,"",clBlack);
                    l++;
           }


                     GpForm->Chart1->Title->Clear();
                     Chart1->Title->Text->Add("№"+DataModule2->psiData2->FieldByName("N")->AsString);
                    if (OptionsGraphForm->edtMSK->Checked){
                          Chart1->Title->Text->Add("МСК  "+edtMsk->Text);

                     }
                     if (OptionsGraphForm->edtP->Checked){
                          Chart1->Title->Text->Add("Полином  "+FloatToStr(M)+" порядка");

                     }
                     if (OptionsGraphForm->chk_coef->Checked){
                        for (int ii=0;ii<=M;ii++){
                          Chart1->Title->Text->Add("A"+FloatToStr(ii)+" = "+Kp1(ii));

                          }

                     }
                     if (OptionsGraphForm->Mono->Checked){
                           double MonoT2;
                          MonotonP(X1,Y1,A,B,Mono,k,W,M,mono1,MonoT2);
                         Chart1->Title->Text->Add("Монотонность  "+FloatToStrF(Mono,ffFixed,4,2)+" ppm");
                           if (OptionsGraphForm->addMono->Checked){
                               TLineSeries *Series3 = new TLineSeries(Chart1);
                              Series3->Pointer->Visible=false;
                           Series3->Pointer->Style=psCircle;
                           Series3->Pointer->Size=3;
                            Chart1->AddSeries(Series3);
                                    for (int i=0;i<k;i++){

                                      Series3->AddXY(X1(i),mono1(i),"",clNavy);
                                   }

                           }

                     }
                    if (OptionsGraphForm->Jump->Checked){
                      double Jump1,Tmax;
                      double Jump2, Tmin;
                               Jump(X1,Y1,A,B,Jump1,Jump2,k,W,M,jump,Tmax,Tmin);
                      Chart1->Title->Text->Add("Скачок  +  "+FloatToStrF(Jump1,ffFixed,4,2)+" ppm   T="+ FloatToStrF(Tmax,ffFixed,4,2) );
                      Chart1->Title->Text->Add("Скачок  -  "+FloatToStrF(Jump2,ffFixed,4,2)+" ppm   T="+ FloatToStrF(Tmin,ffFixed,4,2) );
                         if (OptionsGraphForm->addJump->Checked){
                                    TLineSeries *Series4 = new TLineSeries(Chart1);
                                 Series4->Pointer->Visible=false;
                           Series4->Pointer->Style=psCircle;
                           Series4->Pointer->Size=3;
                            Chart1->AddSeries(Series4) ;
                                    for (int i=0;i<k;i++){

                                      Series4->AddXY(X1(i),jump(i),"",clLime);
                                   }


                           }


     }

  }



  }


  //Series2->Visible=true;
   //Series1->Visible=true;
 //Chart1->Print();
        AnsiString tr= DataModule1->Options->FieldByName("GraphDir")->AsString;
        Chart1->SaveToBitmapFile(DataModule1->Options->FieldByName("GraphDir")->AsString+"\\"+DataModule2->psiData2->FieldByName("N")->AsString+".bmp");
        DataModule2->psiDataTemp->Next();
 DataModule2->psiData2->Next();
}
 }
 else {
  DataModule2->psiData2->Active=false;
DataModule2->psiData2->SQL->Clear();
AnsiString S;
int ColorInt=0;
 TColor OColor[16] =
{
	clRed,
	clLime,
	clYellow,
	clBlue,
	clAqua,
	clWhite,
	clBlack,
        clSkyBlue,
        clGreen,
        clMaroon,
        clFuchsia,
        clSilver,
        clTeal,
        clPurple,
        clNavy,
        clOlive
};
  while (Chart1->SeriesCount()>0) {
     Chart1->Series[0]->Free();
   }
  if (OptionsGraphForm->OnlyGood->Checked){
  S="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' and Status='Годен'";
  }
  else {
 S="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' and Status <> 'Незамер.'";
 }
DataModule2->psiData2->SQL->Add(S);
DataModule2->psiData2->Active=true;
DataModule2->psiData2->First();

DataModule2->psiDataTemp3->Active=false;
DataModule2->psiDataTemp3->SQL->Clear();
 if (OptionsGraphForm->OnlyGood->Checked){
      DataModule2->psiDataTemp3->SQL->Add("Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' and  Status1 = 'Годен' ORDER BY Temp");
 }
 else {
        DataModule2->psiDataTemp3->SQL->Add("Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' and  Status1 <> 'Незамер.' ORDER BY Temp");
      }
DataModule2->psiDataTemp3->Active=true;
DataModule2->psiDataTemp3->First();
DataModule2->psiDataTemp3->RecordCount;
OptionsGraphForm->edtA->Text=DataModule2->psiDataTemp3->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp3->Last();
OptionsGraphForm->edtB->Text=DataModule2->psiDataTemp3->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp3->First();
    OptionsGraphForm->edtA->Items->Clear();
      OptionsGraphForm->edtB->Items->Clear();
      OptionsGraphForm->edtT->Items->Clear();
 for (int i=0; i<DataModule2->psiDataTemp3->RecordCount; i++){

      OptionsGraphForm->edtA->Items->Add(DataModule2->psiDataTemp3->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtB->Items->Add(DataModule2->psiDataTemp3->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtT->Items->Add(DataModule2->psiDataTemp3->FieldByName("Temp")->AsString);
      DataModule2->psiDataTemp3->Next();
 }
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Tnastr` from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;
OptionsGraphForm->edtT->Text=DataModule2->SqlSpec->FieldByName("Tnastr")->AsString;

        for (int j=0; j<DataModule2->psiData2->RecordCount; j++){
        if (ColorInt>14){
         ColorInt=0;
        }
        else {
         ColorInt++;
        }
                  double X,Y;
                  TLineSeries *Series = new TLineSeries(Chart1);
                  Series->Pointer->Visible=true;
                  Series->Pointer->Style=psCircle;
                  Series->Pointer->Size=3;
                  Chart1->AddSeries(Series);
                        DataModule2->psiData->Active=false;
                        DataModule2->psiData->SQL->Clear();
                        AnsiString SqlMain,SqlTemp;

                        if (OptionsGraphForm->OnlyGood->Checked){
                                        SqlMain="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' and Status='Годен'"  ;
                                        SqlTemp="Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' and Status1='Годен' ORDER BY Temp" ;
                                        }
                                        else {
                                                SqlMain="Select `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' and Status <> 'Незамер.'"  ;
                                                SqlTemp="Select `F`,`FL`,`R`,`Temp`,`Mono`,`Q`,`C0`,`Cq`,`Rb`,`N` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' and Status1 <> 'Незамер.' ORDER BY Temp"  ;
                                        }
                        DataModule2->psiData->SQL->Add(SqlMain);
                        DataModule2->psiData->Active=true;
                        DataModule2->psiData->First();

                        DataModule2->psiDataTemp->Active=false;
                        DataModule2->psiDataTemp->SQL->Clear();
                        DataModule2->psiDataTemp->SQL->Add(SqlTemp);
                        DataModule2->psiDataTemp->Active=true;
                        DataModule2->psiDataTemp->First();
                           int k=DataModule2->psiDataTemp->RecordCount;
                                 if (k>0){

                                         double F=DataModule2->psiData->FieldByName("F")->AsFloat;
                                          double Fns,Fnl;
                                                 for (int i=0;i<k;i++){
                                                          if (DataModule2->psiDataTemp->FieldByName("Temp")->AsString==OptionsGraphForm->edtT->Text){
                                                                    Fns=DataModule2->psiDataTemp->FieldByName("F")->AsFloat;
                                                                    Fnl=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat;
                                                                 }
                                                         DataModule2->psiDataTemp->Next();
                                                         }
                                         DataModule2->psiDataTemp->First();
                                         double M;
                                  if (!OptionsGraphForm->ShowApp->Checked){
                                                 for (int i=0;i<k;i++){
                                                          X=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
                                                                   if (edtTypeF->Text=="F (без нагрузки)"){
                                                                         Y=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
                                                                         Chart1->LeftAxis->Title->Caption="F, ppm";
                                                                         }
                                                                    if (edtTypeF->Text=="FL (с нагрузкой)"){
                                                                        Y=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
                                                                         Chart1->LeftAxis->Title->Caption="F, ppm";
                                                                           }

                                                                          if (edtTypeF->Text=="R (Сопротивление)"){
                                                                                 Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
                                                                                        Chart1->LeftAxis->Title->Caption="R, Ом";
                                                                                 }
                                                                         if (edtTypeF->Text=="Монотонность"){
                                                                                 Y=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
                                                                                 Chart1->LeftAxis->Title->Caption="ppm";
                                                                                 }
                                                                         if (edtTypeF->Text=="Добротность"){
                                                                                 Y=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
                                                                                 Chart1->LeftAxis->Title->Caption="Q,x1000";
                                                                                 }
                                                                          if (edtTypeF->Text=="С0,pF"){
                                                                                 Y=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
                                                                                 Chart1->LeftAxis->Title->Caption="C0,пФ";
                                                                                 }
                                                                          if (edtTypeF->Text=="Сq,fF"){
                                                                                  Y=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
                                                                                 Chart1->LeftAxis->Title->Caption="Cq,фФ";
                                                                                   }
                                                                          if (edtTypeF->Text=="L,mh"){
                                                                                 Y=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
                                                                                 Chart1->LeftAxis->Title->Caption="L,мГн";
                                                                                }
                                                                           if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
                                                                                 Y=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
                                                                                 Chart1->LeftAxis->Title->Caption="Rb,Ом";
                                                                                 }
                                                                          if (edtTypeF->Text=="Rc/Rb"){
                                                                                 Y=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
                                                                                  Chart1->LeftAxis->Title->Caption="Rc/Rb";
                                                                                 }

                                                                        Series->AddXY(X,Y,"",OColor[ColorInt]);
                                                                        DataModule2->psiDataTemp->Next();
                                                                        }
                                                           }

                                   else {
                                   Series->Pointer->Visible=false;
                                                  double A,B;
                                                  double X,Y;
                                                 ap::real_1d_array X1,Y1,Kp1,mono1,jump;
                                                 ap::real_1d_array W;
                                                   int l=0;

                                                  double Mono;
                                                 int k=DataModule2->psiDataTemp->RecordCount;
                                                        X1.setbounds(0,k);
                                                        Y1.setbounds(0,k);
                                                        Kp1.setbounds(0,k);
                                                        W.setbounds(0,k);
                                                         mono1.setbounds(0,k);
                                                        jump.setbounds(0,k);
                                                   DataModule2->psiDataTemp->First();
                                                //  double F=DataModule2->psiData->FieldByName("F")->AsFloat;
      
                                                   for (int i=0;i<k;i++){
                                                                    if (DataModule2->psiDataTemp->FieldByName("Temp")->AsString==OptionsGraphForm->edtT->Text){

                                                                          Fns=DataModule2->psiDataTemp->FieldByName("F")->AsFloat;
                                                                                Fnl=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat;
                                                                         }
                                                                DataModule2->psiDataTemp->Next();
                                                        }

                                         DataModule2->psiDataTemp->First();


                                for (int j=0;j<k;j++){
                                        if (edtTypeF->Text=="F (без нагрузки)"){
                                                  Y1(j)=DataModule2->psiDataTemp->FieldByName("F")->AsFloat-Fns;
                                          }
                                        if (edtTypeF->Text=="FL (с нагрузкой)"){
                                                        Y1(j)=DataModule2->psiDataTemp->FieldByName("FL")->AsFloat-Fnl;
                                                 }
                                        if (edtTypeF->Text=="R (Сопротивление)"){
                                                         Y1(j)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat;
                                                }
                                         if (edtTypeF->Text=="Монотонность"){
                                                         Y1(j)=DataModule2->psiDataTemp->FieldByName("Mono")->AsFloat;
                                                 }
                                          if (edtTypeF->Text=="Добротность"){
                                                          Y1(j)=DataModule2->psiDataTemp->FieldByName("Q")->AsFloat;
                                                  }
                                           if (edtTypeF->Text=="С0,pF"){
                                                           Y1(j)=DataModule2->psiDataTemp->FieldByName("C0")->AsFloat;
                                                 }
                                         if (edtTypeF->Text=="Сq,fF"){
                                                          Y1(j)=DataModule2->psiDataTemp->FieldByName("Cq")->AsFloat;
                                                  }
                                           if (edtTypeF->Text=="L,mh"){
                                                          Y1(j)=DataModule2->psiDataTemp->FieldByName("L")->AsFloat;
                                                    }
                                          if (edtTypeF->Text=="Rb(Сопротивление моды Б)"){
                                                   Y1(j)=DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
                                                         }
                                          if (edtTypeF->Text=="Rc/Rb"){
                                                  Y1(j)=DataModule2->psiDataTemp->FieldByName("R")->AsFloat/DataModule2->psiDataTemp->FieldByName("Rb")->AsFloat;
                                                  }


                                                      X1(j)=DataModule2->psiDataTemp->FieldByName("Temp")->AsFloat;
                                                      W(j)=1;
                                                      DataModule2->psiDataTemp->Next();
                                            }


//температурные пределы
                                                           A=StrToFloat(OptionsGraphForm->edtA->Text);
                                                           B=StrToFloat(OptionsGraphForm->edtB->Text);
                                                           M=OptionsGraphForm->RzSpinEdit1->Value;
                                                           buildchebyshevleastsquares(X1,Y1,W,A,B,k,M,Kp1);//апроксимация
                                                          double C=(abs(A)+abs(B))/0.1;
                                                         X=A;
                                                          while (X<=B){
                                                                           X=A+l*0.1;
                                                                           Y=calculatechebyshevleastsquares(M,Kp1,X);
                                                                            Series->AddXY(X,Y,"",OColor[ColorInt]);
                                                                                l++;
                                                                        }
                                                        }
                     GpForm->Chart1->Title->Clear();
                     Chart1->Title->Text->Add("Всего   "+FloatToStr(k));
                    if (OptionsGraphForm->edtMSK->Checked){
                          Chart1->Title->Text->Add("МСК  "+edtMsk->Text);

                     }
                     if (OptionsGraphForm->edtP->Checked){
                          Chart1->Title->Text->Add("Полином  "+FloatToStr(M)+" порядка");

                     }

                                }                        
                         DataModule2->psiData2->Next();

                 }

 }
}
//---------------------------------------------------------------------------


void __fastcall TGpForm::cmb_IDKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
 AnsiString S,S1,S2;
//Делаем запрос в таблицу psidata по номеру замера
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select `Spc`,`Msk` from psidata where Measure_ID='"+cmb_ID->Text+"' LIMIT 1");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtMsk->Text=DataModule2->psiData->FieldByName("Msk")->AsString;
// Выбираем соотвествующую спецификацию
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Name`,`NameR` from  specification where `Name`='"+DataModule2->psiData->FieldByName("Spc")->AsString+"'");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
/*
for (int j=0;j<DataModule2->SqlSpec->RecordCount;j++){
  if (DataModule2->psiData->FieldByName("Spc")->AsString==DataModule2->SqlSpec->FieldByName("Name")->AsString){
   edtSpc->Text=DataModule2->SqlSpec->FieldByName("Name")->AsString;
    edtType->Text=DataModule2->SqlSpec->FieldByName("NameR")->AsString;
    edtSpc->Enabled=true;
   edtType->Enabled=true;
   edtMsk->Enabled=true;
   edtNumber->Enabled=true;
   break;
  }

  DataModule2->SqlSpec->Next();
}
*/
 edtSpc->Text=DataModule2->SqlSpec->FieldByName("Name")->AsString;
 edtType->Text=DataModule2->SqlSpec->FieldByName("NameR")->AsString;
 //Очищаем поле выбора номеров
 edtM->Items->Clear();
 edtNumber->Items->Clear();
 //Загружаем номера
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select distinct `N` from psidata where Measure_ID='"+cmb_ID->Text+"' Order by `N`");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
/*
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

          int u=1;
          S2=DataModule2->psiData->FieldByName("N")->AsString;
          for (int j=0;j<edtNumber->Items->Count; j++){
               if (S2==edtNumber->Items->Strings[j]){
               u=0;
               break;
               }
             u=1;
          }
          if (u==1){
           edtNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);

          }


    DataModule2->psiData->Next();
      }
 */
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
     edtNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
     DataModule2->psiData->Next();
}

AnsiString S4;
S4="Select `Temp` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";
 //         AnsiString ttt=edtNumber->Items->Strings[0];
       S4=S4+" and N='"+edtNumber->Items->Strings[0]+"'"+" ORDER BY Temp";

DataModule2->psiDataTemp2->Active=false;
DataModule2->psiDataTemp2->SQL->Clear();
DataModule2->psiDataTemp2->SQL->Add(S4);

DataModule2->psiDataTemp2->Active=true;
DataModule2->psiDataTemp2->First();
Integer N=DataModule2->psiDataTemp2->RecordCount;
OptionsGraphForm->edtA->Text=DataModule2->psiDataTemp2->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp2->Last();
OptionsGraphForm->edtB->Text=DataModule2->psiDataTemp2->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp2->First();
  OptionsGraphForm->edtA->Items->Clear();
      OptionsGraphForm->edtB->Items->Clear();
      OptionsGraphForm->edtT->Items->Clear();
 for (int i=0; i<N; i++){

      OptionsGraphForm->edtA->Items->Add(DataModule2->psiDataTemp2->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtB->Items->Add(DataModule2->psiDataTemp2->FieldByName("Temp")->AsString);
      OptionsGraphForm->edtT->Items->Add(DataModule2->psiDataTemp2->FieldByName("Temp")->AsString);
      DataModule2->psiDataTemp2->Next();
 }
DataModule2->psiDataTemp2->Active=false;
  edtNumber->Enabled=true;
  edtTypeF->Enabled=true;

}
}
//---------------------------------------------------------------------------

void __fastcall TGpForm::RzButton2Click(TObject *Sender)
{
for (int i=0; i<Chart1->SeriesCount();i++){
 Chart1->Series[0]->Free();
 

}
}
//---------------------------------------------------------------------------






