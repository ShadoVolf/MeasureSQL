 //---------------------------------------------------------------------------

 
#include <vcl.h>
#pragma hdrstop

#include "protokol.h"
#include "data1.h"
#include "Data.h"
#include "protokolbuild.h"
#include "PassportNumbers.h"
#include "SortResult.h"
#include "ProtokolData.h"
#include "MathLib.h"
#include "Data_RQ.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "VrProgressBar"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "RzCmboBx"
#pragma link "RzButton"
#pragma link "frxGradient"
#pragma link "RzEdit"
#pragma link "frxDCtrl"
#pragma link "frxExportXLS"
#pragma link "frxBarcode"
#pragma link "AdvGlassButton"
#pragma link "frxExportRTF"
#pragma resource "*.dfm"

TProtokolForm *ProtokolForm;
bool fStart1;
TStringList * NumbersG;
Variant  vVarApp,vVarBooks,vVarBook,vVarSheets,
                 vVarSheet,vVarCells,vVarCell;
Variant  vVarApp1,vVarDocs1,vVarDoc1;
AnsiString PmiString="False";
double Fmax,Fmin,Rmax,Rmin,RRmax,RRmin,Qmax,Qmin,C0max,C0min,Cqmax,Cqmin,FTmax,FTmin,SRmax,SRmin,Fmaxmax,Fminmin,Smax,Smin,Mmax,Mmin,Rmaxmax,Rmaxmin;
double ShMax,ShMin,RR1max,RR1min,Rc_Rbmax,Tminmax,Tminmin,Tmaxmax,Tmaxmin,Fptpmax,Fptpmin,C0_C1max,C0_C1min,Fptp2max,Fptp2min;
double old1min,old1max,RR2max,RR2min,RR3max,RR3min,FnastrHz,RR4max,RR4min,RR5max,RR5min,Ft1max,Ft1min,Ft2max,Ft2min,old2max,old2min;
double old3max,old3min,C1_2C0max,C1_2C0min,Sh1Max,Sh1Min,Tomax,Tomin;

 AnsiString Measure_Protokol_ID;
 AnsiString CustomerName;
 AnsiString Dogovor;
 int Measure_Protokol_ID_Const;
 int Protokol_N;

 bool kl=false;

 int Count_Current;
//---------------------------------------------------------------------------
__fastcall TProtokolForm::TProtokolForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TProtokolForm::btnCloseClick(TObject *Sender)
{
ProtokolForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TProtokolForm::FormShow(TObject *Sender)
{
ActionList1->Actions[18]->Execute();

}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Name` from  specification where NameR='"+edtType->Text+"'");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }

}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::edtSpcChange(TObject *Sender)
{
edtMsk->Items->Clear();
edtProtokolN->Items->Clear();
AnsiString S,S1,S2;
VrProgressBar1->Position=0;

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select distinct `msk` from psidata where Spc='"+edtSpc->Text+"' ORDER BY msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
    for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                   edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
                   VrProgressBar1->Position=i+1;
                    DataModule2->psiData->Next();
    }
 edtMsk->Enabled=true;
 edtProtokolN->Enabled=true;

}
//---------------------------------------------------------------------------



void __fastcall TProtokolForm::btnPrintClick(TObject *Sender)
{
CustomerName="";
Dogovor="";
ActionList1->Actions[17]->Execute();
}
//---------------------------------------------------------------------------



void __fastcall TProtokolForm::VrShadowButton1Click(TObject *Sender)
{
PrBuildForm->cmb_ID->Text=cmb_ID->Text;
PrBuildForm->Action1->Execute();
PrBuildForm->Show();

}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::edtProtokolNChange(TObject *Sender)
{
 AnsiString S;
edtProtokol->Enabled=true;
btnPrint->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE `Name` from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();

 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){

           break;
            }
        DataModule2->SqlSpec->Next();
      }
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::edtProtokolChange(TObject *Sender)
{
if (edtProtokol->Text=="Паспорт" || edtProtokol->Text=="Протокол ВП-РК" || edtProtokol->Text=="Паспорт (Приложение)" || edtProtokol->Text=="Протокол ВП" || edtProtokol->Text=="Протокол ВП(ПСИ)"){
   btnNum->Enabled=true;
   edtDate->Visible=true;
   setDate->Visible=true;
   Label7->Visible=true;
   edtDate1->Visible=true;
   setDate1->Visible=true;
   Label8->Visible=true;
     for (int l=0; l<PNForm->viewNumber->Count; l++){

                                PNForm->viewNumber->ItemState[l]=1;

                     }
}
else {
 btnNum->Enabled=false;
 edtDate->Visible=false;
   setDate->Visible=false;
   Label7->Visible=false;
    edtDate1->Visible=false;
   setDate1->Visible=false;
   Label8->Visible=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::btnNumClick(TObject *Sender)
{
 PNForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::setDateClick(TObject *Sender)
{
DataModule2->SetSqlDate->SQL->Clear();
DataModule2->SetSqlDate->SQL->Add("Update psidata set `MakeDate`='"+edtDate->Text+"' WHERE `msk`='"+edtMsk->Text+"'");
DataModule2->SetSqlDate->Execute();
ShowMessage("Дата установлена");
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::edtClick(TObject *Sender)
{
if (edtProtokol->Text=="Паспорт" || edtProtokol->Text=="Протокол ВП-РК"){
     AnsiString S;
VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select `N`,`Status`,`Status2`,`PrintSelect`,`ProtokolN`,`Spc`,`Measure_ID` from psidata where msk='"+edtMsk->Text+"' ORDER BY N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
PNForm->viewNumber->Items->Clear();
int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("ProtokolN")->AsString;
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }

                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                        if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[i]=cbUnchecked;
                                  }
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }



  PNForm->lCount->Caption=FloatToStr(k);

}
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::setDate1Click(TObject *Sender)
{
DataModule2->SetSqlDate->SQL->Clear();
DataModule2->SetSqlDate->SQL->Add("Update psidata set `MakeDate1`='"+edtDate1->Text+"' WHERE `msk`='"+edtMsk->Text+"'");
DataModule2->SetSqlDate->Execute();
ShowMessage("Дата установлена");
}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::RzButton1Click(TObject *Sender)
{
SortResultForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::RzButton2Click(TObject *Sender)
{
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
AnsiString search=edtMsk->Text.SubString(0,edtMsk->Text.Length());
DataModule2->psiData->SQL->Add("select distinct `msk` from psidata where (locate('"+search+"',msk)>0) order by msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtMsk->Clear();
int k;
AnsiString S,S1,S2;
k=DataModule2->psiData->RecordCount;
VrProgressBar1->Position=0;
VrProgressBar1->MaxValue=k-1;


for (int i=0;i<k;i++){
                     S=DataModule2->psiData->FieldByName("MSK")->AsString;

                     DataModule2->psiData->Next();
                     S1=DataModule2->psiData->FieldByName("MSK")->AsString;
                         if (S1!=S){
                                   edtMsk->Items->Add(S);
                                    S=S1;
                                    }
                  VrProgressBar1->StepIt();
   }
}
//---------------------------------------------------------------------------








void __fastcall TProtokolForm::cmb_Protokol_IDChange(TObject *Sender)
{
 edtProtokol->Enabled=true;
AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select `Msk`,`Spc`,`N`,`PrintSelect`,`Status`,`Status2`,`ProtokolType_ID` from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk->Clear();
 edtMsk->Items->Add(MSK);
 edtMsk->ItemIndex=0;
 edtSpc->Clear();
 edtSpc->Items->Add(Spc);
 edtSpc->ItemIndex=0;
 DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification where `Name`='"+Spc+"' limit 1");
DataModule2->SqlSpec->Active=true;


 btnPrint->Enabled=true;
 PNForm->viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[i]=cbUnchecked;
                                  }
                                  k++;
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;

      }

   edtProtokol->ItemIndex=DataModule2->psiData->FieldByName("ProtokolType_ID")->AsFloat;
  PNForm->lCount->Caption=FloatToStr(k);
  edtProtokol->Enabled=true;
  edtSpc->Enabled=true;
  btnNum->Enabled=true;



  }
}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::Action1Execute(TObject *Sender)
{
edtProtokol->Enabled=true;
AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select `msk`,`spc`,`Status`,`Status2`,`PrintSelect`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk->Clear();
 edtMsk->Items->Add(MSK);
 edtMsk->ItemIndex=0;
 edtSpc->Clear();
 edtSpc->Items->Add(Spc);
 edtSpc->ItemIndex=0;
 DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==Spc){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 btnPrint->Enabled=true;
 PNForm->viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=cbUnchecked;
                                  }
                                  k++;
                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[i]=cbChecked;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[i]=cbUnchecked;
                                  }
                                  k++;
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }


  PNForm->lCount->Caption=FloatToStr(k);
  edtProtokol->Enabled=true;
  edtSpc->Enabled=true;
  btnNum->Enabled=true;



  }        
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::cmb_IDKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
  ActionList1->Actions[19]->Execute();
}
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::edtMskKeyPress(TObject *Sender, char &Key)
{
        if (Key==13){
           ActionList1->Actions[2]->Execute();
        }
}
//-------------------------------------------------------------------------

void __fastcall TProtokolForm::AdvGlassButton2Click(TObject *Sender)
{

 DataModule2->psiData2->Active=false;
DataModule2->psiData2->SQL->Clear();
AnsiString S,S1,S2,S3,S4;
AnsiString A,B,Tnastr,LoadType;
TStream *FStream;

  S="Select SQL_NO_CACHE `F`,`N` from psidata where ";
     S1="Select SQL_NO_CACHE `Temp`,`F`,`FL` from psidatatemp where ";


       if (edtMsk->Text!="" || !edtMsk->Text.IsEmpty()){
       S=S+"msk='"+edtMsk->Text+"' ";
       S1=S1+"msk='"+edtMsk->Text+"' ";

       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtMsk->ItemIndex!=-1){
             S=S+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S=S+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }
           S1=S1+"and ProtokolN='"+edtProtokolN->Text+"' ";
       }

       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";
        S1=S1+"and `MSK-M`='"+edtM->Text+"' ";
       }
      if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){

        S="Select SQL_NO_CACHE `F`,`N` from psidata where Measure_ID='"+cmb_ID->Text+"' ";
        S1="Select SQL_NO_CACHE `Temp`,`F`,`FL` from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";


       }

DataModule2->psiData2->SQL->Add(S);
DataModule2->psiData2->Active=true;
DataModule2->psiData2->First();
S2=S1+" and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' ORDER BY Temp";
DataModule2->psiDataTemp4->Active=false;
DataModule2->psiDataTemp4->SQL->Clear();
DataModule2->psiDataTemp4->SQL->Add(S2);
DataModule2->psiDataTemp4->Active=true;
DataModule2->psiDataTemp4->First();
DataModule2->psiDataTemp4->RecordCount;
A=DataModule2->psiDataTemp4->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp4->Last();
B=DataModule2->psiDataTemp4->FieldByName("Temp")->AsString;
DataModule2->psiDataTemp4->First();

DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select `Tnastr`,`LoadType` from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;
Tnastr=DataModule2->SqlSpec->FieldByName("Tnastr")->AsString;
LoadType=DataModule2->SqlSpec->FieldByName("LoadType")->AsString;


        for (int j=0; j<DataModule2->psiData2->RecordCount; j++){
                while (Chart1->SeriesCount()>0)
                {
                        Chart1->Series[0]->Free();
                }
                 while (Chart2->SeriesCount()>0)
                {
                   Chart2->Series[0]->Free();
                }
        TMemoryStream *TCHStream = new TMemoryStream();
        double X,Y;
                DataModule2->psiDataTemp4->Active=false;
                DataModule2->psiDataTemp4->SQL->Clear();
                S2=S1+" and N='"+DataModule2->psiData2->FieldByName("N")->AsString+"' ORDER BY Temp";
                DataModule2->psiDataTemp4->SQL->Add(S2);
                DataModule2->psiDataTemp4->Active=true;
                DataModule2->psiDataTemp4->First();
           int k=DataModule2->psiDataTemp4->RecordCount;
                   if (k>0){
                        double Fns,Fnl;
                                for (int i=0;i<k;i++){
                                        if (DataModule2->psiDataTemp4->FieldByName("Temp")->AsString==Tnastr){
                                                  Fns=DataModule2->psiDataTemp4->FieldByName("F")->AsFloat;
                                                  Fnl=DataModule2->psiDataTemp4->FieldByName("FL")->AsFloat;
                                         }
                                DataModule2->psiDataTemp4->Next();
                                }
                          DataModule2->psiDataTemp4->First();
                          TPointSeries *Series2 = new TPointSeries(Chart1);
                          Series2->Pointer->Visible=true;
                          Series2->Pointer->Style=psCircle;
                          Series2->Pointer->Size=4;
                          Chart1->AddSeries(Series2);
                                for (int i=0;i<k;i++){
                                        X=DataModule2->psiDataTemp4->FieldByName("Temp")->AsFloat;
                                            if ((LoadType=="Series") || (LoadType=="Saunders(FR)")){
                                                     Y=DataModule2->psiDataTemp4->FieldByName("F")->AsFloat-Fns;
                                                     Chart1->LeftAxis->Title->Caption="F, ppm";
                                             }
                                             if (LoadType=="EqReact" || LoadType=="Saunders (FR+FL)"){
                                                     Y=DataModule2->psiDataTemp4->FieldByName("FL")->AsFloat-Fnl;
                                                     Chart1->LeftAxis->Title->Caption="F, ppm";
                                             }
                                    Series2->AddXY(X,Y,"",clRed);
                                    DataModule2->psiDataTemp4->Next();
                                 }


                      double Ad,Bd;
                      ap::real_1d_array X1,Y1,Kp1;
                      ap::real_1d_array W;
                      int l=0;
                      double M;
                                X1.setbounds(0,k);
                                Y1.setbounds(0,k);
                                Kp1.setbounds(0,k);
                                W.setbounds(0,k);
                                DataModule2->psiDataTemp4->First();
                                           for (int j=0;j<k;j++){
                                                       if (LoadType=="Series" || LoadType=="Saunders(FR)"){
                                                                   Y1(j)=DataModule2->psiDataTemp4->FieldByName("F")->AsFloat-Fns;
                                                        }
                                                        if (LoadType=="EqReact" || LoadType=="Saunders (FR+FL)"){
                                                                    Y1(j)=DataModule2->psiDataTemp4->FieldByName("FL")->AsFloat-Fnl;
                                                         }
                                                  X1(j)=DataModule2->psiDataTemp4->FieldByName("Temp")->AsFloat;
                                                   W(j)=1;
                                                   DataModule2->psiDataTemp4->Next();
                                                  }

//температурные пределы
                                 Ad=StrToFloat(A);
                                 Bd=StrToFloat(B);
                                 M=3;
                                 buildchebyshevleastsquares(X1,Y1,W,Ad,Bd,k,M,Kp1);//апроксимация
                                 X=Ad;
                            TLineSeries *Series1 = new TLineSeries(Chart1);
                                 Series1->Pointer->Visible=false;
                                 Series1->Pointer->Style=psCircle;
                                 Series1->Pointer->Size=3;
                                 Chart1->AddSeries(Series1);

                                 TStringList * TCH_StrintList;
                                 TCH_StrintList=new TStringList();
                                          while (X<=Bd){
                                                        X=Ad+l*0.1;
                                                       Y=calculatechebyshevleastsquares(M,Kp1,X);
                                                       AnsiString Yst=FloatToStr(Y);
                                                       AnsiString Xst=FloatToStr(X);
                                                       TCH_StrintList->Add(Xst+" "+Yst);
                                                       double tt[2];
                                                       tt[0]=X;
                                                       tt[1]=Y;
                                                       Series1->AddXY(X,Y,"",clBlack);
                                                       l++;

                                           }


                                          TCH_StrintList->SaveToStream(TCHStream);

                                 Chart1->Title->Clear();
                                 Chart1->Title->Text->Add("№"+DataModule2->psiData2->FieldByName("N")->AsString);
                                 Chart1->Title->Text->Add("МСК  "+DataModule2->psiData2->FieldByName("MSK")->AsString);
                                 Chart1->SaveToBitmapFile(DataModule1->Options->FieldByName("GraphDir")->AsString+"\\"+DataModule2->psiData2->FieldByName("N")->AsString+".bmp");

                                  DataModule2->ULN->Active=false;
                                  DataModule2->ULN->SQL->Clear();
                                  S4="Select * from ULN_DNCH where `SerialN`='"+DataModule2->psiData2->FieldByName("N")->AsString+"'";
                                  DataModule2->ULN->SQL->Add(S4);
                                  DataModule2->ULN->Active=true;
                                  int k1= DataModule2->ULN->RecordCount;
                                        if (k1>0){

                                             FStream=DataModule2->ULN->CreateBlobStream(DataModule2->ULN->FieldByName("Data"),bmRead);
                                             TStringList * ptStrintList;

                                             ptStrintList=new TStringList();
                                             ptStrintList->LoadFromStream(FStream);
                                              DateSeparator = '-';
                                              TimeSeparator = ':';
                                              LongDateFormat = "YYYY-MM-DD";
                                              ShortDateFormat = "YYYY-MM-DD";
                                              ShortTimeFormat = "HH:MM:SS";
                                              LongTimeFormat = "HH:MM:SS";
                                              TStringList *list = new TStringList;
                                                list->Delimiter='\t';
                                                list->DelimitedText=ptStrintList->Strings[0];
                                              double nom=list->Strings[2].ToDouble();
                                                TDateTime begin_dt;
                                                begin_dt=StrToDateTime(list->Strings[0]+" "+list->Strings[1]);

                                              TLineSeries *Series3 = new TLineSeries(Chart2);
                                                Series3->Pointer->Visible=false;
                                                 Series3->Pointer->Style=psCircle;
                                                Series3->Pointer->Size=3;
                                                 Chart2->AddSeries(Series3);

                                               TPointSeries *Series4 = new TPointSeries(Chart2);
                                                 Series4->Pointer->Visible=true;
                                                 Series4->Pointer->Style=psCircle;
                                                 Series4->Pointer->Size=4;
                                                 Chart2->AddSeries(Series4);

                                                  for (int j=0;j<ptStrintList->Count;j++){
                                                         AnsiString v=ptStrintList->Strings[j];
                                                           TStringList *list = new TStringList;
                                                           list->Delimiter='\t';
                                                           list->DelimitedText=v;
                                                         double Y=((list->Strings[2].ToDouble()-nom)/nom)*10E9;

                                                                                TDateTime dt;
                                                                                 dt=StrToDateTime(list->Strings[0]+" "+list->Strings[1]);
                                                                             double dif_date=(double) (dt-begin_dt);
                                                                                 Series3->AddXY(dif_date,Y,"",clBlack);
                                                                                 Series4->AddXY(dif_date,Y,"",clRed);

                                                                
                                                            delete list;

                                                         }
                                                  Chart2->Title->Clear();
                                                  Chart2->Title->Text->Add("№"+DataModule2->psiData2->FieldByName("N")->AsString);
                                                  Chart2->Title->Text->Add("МСК  "+DataModule2->psiData2->FieldByName("MSK")->AsString);
                                                  Chart2->Title->Text->Add("Дата установки  "+DateToStr(begin_dt));
                                                  Chart2->SaveToBitmapFile(DataModule1->Options->FieldByName("GraphDir")->AsString+"\\"+DataModule2->psiData2->FieldByName("N")->AsString+"_DNCH.bmp");
                                                  //delete ptStrintList;
                                                }


                                 DataModule2->psidataTCHGraph->Active=false;
                                 DataModule2->psidataTCHGraph->SQL->Clear();
                                 AnsiString GH= "Select Count(N) from psidata_TCH_graphics where `Measure_ID`='"+DataModule2->psiData2->FieldByName("Measure_ID")->AsString+"' and `N`='"+DataModule2->psiData2->FieldByName("N")->AsString+"'";
                                 DataModule2->psidataTCHGraph->SQL->Add(GH);
                                         DataModule2->psidataTCHGraph->Active=true;
                                 DataModule2->psidataTCHGraph->First();
                                 DataModule2->Comand->SQL->Clear();
                                 DataModule2->Comand->Params->CreateParam(ftBlob,"Graph_Picture",ptInput);
                                 DataModule2->Comand->Params->ParamByName("Graph_Picture")->LoadFromFile(DataModule1->Options->FieldByName("GraphDir")->AsString+"\\"+DataModule2->psiData2->FieldByName("N")->AsString+".bmp",ftBlob);
                                 DataModule2->Comand->Params->CreateParam(ftBlob,"Graph_Data",ptInput);
                                  DataModule2->Comand->Params->ParamByName("Graph_Data")->LoadFromStream(TCHStream,ftBlob);

                                  DataModule2->Comand->Params->CreateParam(ftBlob,"DNCH_Picture",ptInput);
                                 DataModule2->Comand->Params->ParamByName("DNCH_Picture")->LoadFromFile(DataModule1->Options->FieldByName("GraphDir")->AsString+"\\"+DataModule2->psiData2->FieldByName("N")->AsString+"_DNCH.bmp",ftBlob);
                                 DataModule2->Comand->Params->CreateParam(ftBlob,"DNCH_Data",ptInput);
                                  DataModule2->Comand->Params->ParamByName("DNCH_Data")->LoadFromStream(FStream,ftBlob);
                                 AnsiString sql;

                                  if (DataModule2->psidataTCHGraph->FieldByName("Count(N)")->AsFloat>0){
                                      sql="Update psidata_TCH_graphics set `Graph_Picture`=:Graph_Picture, `Graph_Data`=:Graph_Data, `DNCH_Picture`=:DNCH_Picture ,`DNCH_Data`=:DNCH_Data where `Measure_ID`='"+DataModule2->psiData2->FieldByName("Measure_ID")->AsString+"' and `N`='"+DataModule2->psiData2->FieldByName("N")->AsString+"'";
                                  }
                                  else {
                                     sql="INSERT INTO psidata_TCH_graphics (N,Measure_ID,Msk,Graph_Picture,Graph_Data,DNCH_Picture,DNCH_Data) VALUES ('"+DataModule2->psiData2->FieldByName("N")->AsString+"','"+DataModule2->psiData2->FieldByName("Measure_ID")->AsString+"','"+DataModule2->psiData2->FieldByName("Msk")->AsString+"',:Graph_Picture ,:Graph_Data,:DNCH_Picture,:DNCH_Data)";
                                  }
                                  DataModule2->Comand->SQL->Add(sql);
                                  DataModule2->Comand->Execute();
                        }
                     // delete Fstream;
                      delete TCHStream;

               DataModule2->psiData2->Next();
                     }


}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::edtMskChange(TObject *Sender)
{
VrProgressBar1->Position=0;
 cmb_ID->Items->Clear();
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select distinct `Measure_ID` from psidata where `msk`='"+edtMsk->Text+"' ORDER BY Measure_ID");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
    for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                   cmb_ID->Items->Add(DataModule2->psiData->FieldByName("Measure_ID")->AsString);
                   VrProgressBar1->Position=i+1;
                    DataModule2->psiData->Next();
    }
 AdvGlassButton2->Enabled=true;

}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::LotNumberChange(TObject *Sender)
{
ActionList1->Actions[20]->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::LotSpcChange(TObject *Sender)
{
ActionList1->Actions[21]->Execute();

RQ_Data->LotNumbers->Active=false;
 RQ_Data->LotNumbers->SQL->Clear();
 RQ_Data->LotNumbers->SQL->Add("Select distinct `ЗаказДата` from `заказы1С_новые` where `ЗаказНомер`='"+LotNumber->Text+"' and `Номенклатура`='"+LotSpc->Text+"'");
 RQ_Data->LotNumbers->Active=true;
 RQ_Data->LotNumbers->First();
 ZakazData_Combo->Items->Clear();
 for (int i=0; i<RQ_Data->LotNumbers->RecordCount; i++){
      ZakazData_Combo->Items->Add(RQ_Data->LotNumbers->FieldByName("ЗаказДата")->AsString);
      RQ_Data->LotNumbers->Next();
 }
 RQ_Data->LotNumbers->Active=false;
 ZakazData_Combo->ItemIndex=0;

}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::Create_LOT_RQExecute(TObject *Sender)
{
if (Lot->Checked==true){

AnsiString Numbers;
SYSTEMTIME st;
          GetLocalTime(&st);
          AnsiString stD,stMn,stY,stH,stM,stS;
          stD=st.wDay;
          stMn=st.wMonth;
          stY=st.wYear;
          stH=st.wHour;
          stM=st.wMinute;
          stS=st.wSecond;
int count=NumbersG->Count;

          RQ_Data->Spc_RQ->Active=false;
          RQ_Data->Spc_RQ->SQL->Clear();
          RQ_Data->Spc_RQ->SQL->Add("Select `номенклатура` from nomeklatura_rk where `наименование`='"+LotSpc->Text+"'");
          RQ_Data->Spc_RQ->Active=true;
          RQ_Data->Spc_RQ->First();
AnsiString MSK_NOM_ID=RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString;

AnsiString sql="Select * from `MSK_Join` where  `Msk_Name`='"+LotMSK->Text+"' and `MSK_NOM_ID`='"+MSK_NOM_ID+"'";
          RQ_Data->MSK_JOIN->Active=false;
          RQ_Data->MSK_JOIN->SQL->Clear();
          RQ_Data->MSK_JOIN->SQL->Add(sql);
          RQ_Data->MSK_JOIN->Active=true;
          RQ_Data->MSK_JOIN->First();
AnsiString Numbers_OLD=RQ_Data->MSK_JOIN->FieldByName("PSI_Numbers")->AsString;

TStringList * MyList = new TStringList();
              MyList->Delimiter=', ';
              MyList->DelimitedText=Numbers_OLD;

              TStringList * NumbersL = new TStringList();
             for (int i=0;i<MyList->Count;i++){
                 AnsiString t=MyList->Strings[i];
                 int S_pos=t.AnsiPos(",");
                 if (S_pos>0){
                  t[S_pos]=' ';
                  t=t.Trim();
                 }
                 NumbersL->Add(t);
             }
delete MyList;

int countEx=0;
for (int i=0; i<count; i++){
boolean ex=false;
        for (int j=0;j<NumbersL->Count; j++){
                if (NumbersL->Strings[j]==NumbersG->Strings[i]){
                 ex=true;
                 break;
                }
        }
 //if (ex){
  if (i==0){
        Numbers=NumbersG->Strings[i]+", ";
       }
    else {
      Numbers=Numbers+NumbersG->Strings[i]+", ";
    }
    countEx++;
   }
//}
if (countEx==count){
        Numbers=Numbers.SubString(1,Numbers.Length()-2);
   AnsiString LotCode, LotCustomer;
        RQ_Data->LotNumbers->Active=false;
        RQ_Data->LotNumbers->SQL->Clear();
        RQ_Data->LotNumbers->SQL->Add("Select `Code`,`Customer` from `Извещение` where `Name`='"+LotNumber->Text+"' and `Spc`='"+LotSpc->Text+"'");
        RQ_Data->LotNumbers->Active=true;
        RQ_Data->LotNumbers->First();
        LotCode=RQ_Data->LotNumbers->FieldByName("Code")->AsString;
        LotCustomer=RQ_Data->LotNumbers->FieldByName("Customer")->AsString;
        RQ_Data->LotNumbers->Active=false;
    AnsiString date=stD+"-"+stMn+"-"+stY;

        RQ_Data->Insert_LOT_RQ->SQL->Clear();
        RQ_Data->Insert_LOT_RQ->SQL->Add("Insert into `LotRK` (`Lot`,`LotCode`,`Numbers`,`Customer`,`Nomeklature`,`Count`,`_Date`) Values ('"+LotNumber->Text+"','"+LotCode+"','"+Numbers+"','"+LotCustomer+"','"+LotSpc->Text+"','"+FloatToStr(count)+"','"+date+"')");
        RQ_Data->Insert_LOT_RQ->Execute();
   }
   else {
    ShowMessage("Номера резонаторов в протоколе не соответсвуют номерам с МСК");
   }
 }
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::SetNumbersExecute(TObject *Sender)
{
int count=0;
NumbersG =new TStringList();
 for (int l=0; l<PNForm->viewNumber->Count; l++){
     if (PNForm->viewNumber->ItemState[l]!=0){
       NumbersG->Add(PNForm->viewNumber->Items->Strings[l]);
       AnsiString N=PNForm->viewNumber->Items->Strings[l];
       count++;
     }

}

}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::LotMSKChange(TObject *Sender)
{
 edtMsk->Text=LotMSK->Text;
 ActionList1->Actions[2]->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::MskSelectExecute(TObject *Sender)
{
AnsiString S,S1,S2,S3;
edtProtokol->Enabled=true;
   for (int l=0; l<PNForm->viewNumber->Count; l++){

   PNForm->viewNumber->ItemState[l]=1;

   }
btnPrint->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
VrProgressBar1->Position=0;
 S3="Select SQL_NO_CACHE * from psidata where ";
       if (edtMsk->Text!="" || edtMsk->Text.IsEmpty()){
       S3=S3+"msk='"+edtMsk->Text+"' ";

       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtM->ItemIndex!=-1){
             S3=S3+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S3=S3+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }

       }
       if (edtAn->Checked){
        S3=S3+"and Status2='Good' ";

       }
       if (edt->Checked){
       S3=S3+"and Status='Годен' ";

       }
       if (edtM->ItemIndex!=-1){

        S3=S3+"and `MSK-M`='"+edtM->Text+"' ";

       }
      if (cmb_ID->Text!=""){
        S3="Select SQL_NO_CACHE * from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
       S3=S3+"ORDER BY N";

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
edtProtokolN->Items->Clear();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
edtMsk->Items->Add(DataModule2->psiData->FieldByName("ProtokolN")->AsString);
edtDate->Text=DataModule2->psiData->FieldByName("MakeDate")->AsString;
edtDate1->Text=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
 edtM->Items->Clear();
 cmb_ID->Items->Clear();
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("ProtokolN")->AsString;
              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;
           int u=1;
           for (int j=0;j<edtProtokolN->Items->Count;j++){
                     if (S==edtProtokolN->Items->Strings[j] || S==NULL){
                      u=0;
                      break;
                     }
                u=1;

           }
          if (u==1){
           edtProtokolN->Items->Add(S);
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
          if (p==1 & !S1.IsEmpty()){
           edtM->Items->Add(S1);

          }
         int p1=1;
         S2=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S2==cmb_ID->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID->Items->Add(S2);

          }
      }
int k=0;
  DataModule2->SqlSpec->First();
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){
           k=1;
           break;
            }
        DataModule2->SqlSpec->Next();
      }
  edtSpc->Text=DataModule2->SqlSpec->FieldByName("Name")->AsString;
 VrProgressBar1->Position=0;
DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select SQL_NO_CACHE * from psidata where msk='"+edtMsk->Text+"' ORDER BY N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;

PNForm->viewNumber->Items->Clear();
k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("ProtokolN")->AsString;
             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен" & DataModule2->psiData->FieldByName("Status2")->AsString=="Good"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                         if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                                    PNForm->viewNumber->ItemState[k]=1;
                                                     k++;
                                        }
                                          else {
                                                   PNForm->viewNumber->ItemState[k]=0;
                                                 }

                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[i]=1;
                                  k++;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[i]=0;
                                  }
                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }


  PNForm->lCount->Caption=FloatToStr(k);
}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::PrintExecute(TObject *Sender)
{
 Protokol_Data->Protokol_Types->Active=false;
 Protokol_Data->Protokol_Types->SQL->Clear();
        if (edtProtokol->ItemIndex==-1){
          edtProtokol->ItemIndex=8;
        }
 AnsiString PMI;
 if (PmiString=="True"){
        PMI="1";
    }
    else {
        PMI="0";
        }
 Protokol_Data->Protokol_Types->SQL->Add("Select * from print_protokol_types where `Name`='"+edtProtokol->Text+"' and `PMI`='"+PMI+"'");
 Protokol_Data->Protokol_Types->Active=true;
 AnsiString FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;

DataModule2->Print->Active=false;
DataModule2->Print->SQL->Clear();
DataModule2->Print->SQL->Add("Select `"+FieldName+"` from `print_data` where `ID`='"+DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString+"'");
DataModule2->Print->Active=true;
DataModule2->Print->First();
AnsiString PrintFileName=DataModule2->Print->FieldByName(FieldName)->AsString;
DataModule2->Print->Active=false;

DataModule2->Print_Files->Active=false;
DataModule2->Print_Files->SQL->Clear();
DataModule2->Print_Files->SQL->Add("Select SQL_NO_CACHE * from `print_files` where `Name`='"+PrintFileName+"'");
DataModule2->Print_Files->Active=true;
DataModule2->Print_Files->First();
int hh=DataModule2->Print_Files->RecordCount;
TStream *FStream;
FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
frxReport1->LoadFromStream(FStream);
//DataModule2->Print_Files->Active=false;

 frxReport1->PrepareReport(true);
       if (CheckBox1->Checked==true){
           ActionList1->Actions[4]->Execute();
       }
        else {
                 DataModule2->Lianoz->Refresh();
                 frxReport1->ShowPreparedReport();

        }
      // DataModule1->DropStatTable->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::ExportProtokolExecute(TObject *Sender)
{
  DataModule1->Options->Active=false;
  DataModule1->Options->Active=true;
AnsiString FName,FullFileName;
  FName=edtMsk->Text +"_#"+cmb_ID->Text;
         if (DataModule1->Options->FieldByName("Filtr")->AsString=="PDF"){
                    if(DataModule1->Options->FieldByName("Export_Type")->AsFloat==1){
                                FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+FName+".pdf";
                                 frxPDFExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+FName+".pdf";
                                 frxReport1->Export(frxPDFExport1);
                       }
                      else if (DataModule1->Options->FieldByName("Export_Type")->AsFloat==2){
                                   AnsiString FF=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\RTF\\"+FName+".rtf";
                                   frxRTFExport1->FileName=FF;
                                   frxReport1->Export(frxRTFExport1);
                                   if(!fStart1)
                                           {
                                                try
                                                {
                                                 vVarApp1=CreateOleObject("Word.Application");
                                                 vVarApp1.OlePropertySet("Visible",false);
                                                fStart1=true;
                                                         }
                                                        catch(...)
                                                                   {
                                                         MessageBox(0, "Ошибка при открытии сервера word",
                                                                         "Ошибка", MB_OK);
                                                                  return;
                                                                 }
                                                         }

                                          if (fStart1){
                                              try{
                                                 vVarDocs1=vVarApp1.OlePropertyGet("Documents");
                                                 vVarDocs1.OleProcedure("Open",FF.c_str());
                                                 vVarApp1.OlePropertySet("DisplayAlerts",false);
                                                 vVarDoc1=vVarDocs1.OleFunction("Item",1);
                                                 AnsiString FF1=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+FName+".pdf";
                                                 vVarDoc1.OleProcedure("SaveAs",FF1.c_str(),17,false,"",true,"",false,false,false,false,false);
                                                vVarApp1.OleProcedure("Quit");
                                                 FullFileName=FF1;
                                                 fStart1= false;
                                              }
                                              catch(...){
                                                MessageBox(0, "Ошибка открытия файла","Ошибка",MB_OK);
                                                fStart1= false;
                                                vVarApp1.OleProcedure("Quit");
                                              }


                                          }



                                 }

          }
}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::CreateNormExecute(TObject *Sender)
{
  if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){
             Fmax=DataModule2->SqlSpec->FieldByName("Fmax")->AsFloat;
          }
          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
               Fmin=DataModule2->SqlSpec->FieldByName("Fmin")->AsFloat;
             }
           if (DataModule2->SqlSpec->FieldByName("FnastrHZ")->AsFloat>0){
               FnastrHz=DataModule2->SqlSpec->FieldByName("FnastrHz")->AsFloat;
             }

           if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
               Rmax=DataModule2->SqlSpec->FieldByName("Rmax")->AsFloat;
             }
             if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                    Rmin=DataModule2->SqlSpec->FieldByName("Rmin")->AsFloat;
                    }
            if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                  Qmax=DataModule2->SqlSpec->FieldByName("Qmax")->AsFloat;
               }
        if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
             Qmin=DataModule2->SqlSpec->FieldByName("Qmin")->AsFloat;
             }
          if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
              RRmax=DataModule2->SqlSpec->FieldByName("RRmax")->AsFloat;
             }
           if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
               RRmin=DataModule2->SqlSpec->FieldByName("RRmin")->AsFloat;
              }
           if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
              Rmaxmax=DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsFloat;
             }
           if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
               Rmaxmin=DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsFloat;
              }
              if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                   C0max=DataModule2->SqlSpec->FieldByName("C0max")->AsFloat;
                  }
               if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                      C0min=DataModule2->SqlSpec->FieldByName("C0min")->AsFloat;
                     }
              if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                  Cqmax=DataModule2->SqlSpec->FieldByName("Cqmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                   Cqmin=DataModule2->SqlSpec->FieldByName("Cqmin")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                  FTmax=DataModule2->SqlSpec->FieldByName("FTmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                   FTmin=DataModule2->SqlSpec->FieldByName("FTmin")->AsFloat;
                   }

                if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                  SRmax=DataModule2->SqlSpec->FieldByName("Rsp1max")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                   SRmin=DataModule2->SqlSpec->FieldByName("Rsp1min")->AsFloat;
                   }

                  if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                  Fmaxmax=DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                   Fminmin=DataModule2->SqlSpec->FieldByName("Fminmin")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                  Smax=DataModule2->SqlSpec->FieldByName("Smax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                   Smin=DataModule2->SqlSpec->FieldByName("Smin")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                  Mmax=DataModule2->SqlSpec->FieldByName("Mmax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                   Mmin=DataModule2->SqlSpec->FieldByName("Mmin")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                  ShMax=DataModule2->SqlSpec->FieldByName("ShMax")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                   ShMin=DataModule2->SqlSpec->FieldByName("ShMin")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Sh1Max")->AsString!="no"){
                  Sh1Max=DataModule2->SqlSpec->FieldByName("Sh1Max")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("Sh1Min")->AsString!="no"){
                   Sh1Min=DataModule2->SqlSpec->FieldByName("Sh1Min")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                  RR1max=DataModule2->SqlSpec->FieldByName("RR1max")->AsFloat;
                 }
               if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                   RR1min=DataModule2->SqlSpec->FieldByName("RR1min")->AsFloat;
                   }

               if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                   Rc_Rbmax=DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                   Tminmax=DataModule2->SqlSpec->FieldByName("Tminmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                   Tminmin=DataModule2->SqlSpec->FieldByName("Tminmin")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                   Tmaxmax=DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                   Tmaxmin=DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Tomax")->AsString!="no"){
                   Tomax=DataModule2->SqlSpec->FieldByName("Tomax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Tomin")->AsString!="no"){
                   Tomin=DataModule2->SqlSpec->FieldByName("Tomin")->AsFloat;
                   }

                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                   Fptpmax=DataModule2->SqlSpec->FieldByName("Fptpmax")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                   Fptpmin=DataModule2->SqlSpec->FieldByName("Fptpmin")->AsFloat;
                   }
                    if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                   Fptp2max=DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                   Fptp2min=DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsFloat;
                   }
                 if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                   C0_C1max=DataModule2->SqlSpec->FieldByName("C0_C1max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                   C0_C1min=DataModule2->SqlSpec->FieldByName("C0_C1min")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                   RR2max=DataModule2->SqlSpec->FieldByName("RR2max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                   RR2min=DataModule2->SqlSpec->FieldByName("RR2min")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                   RR3max=DataModule2->SqlSpec->FieldByName("RR3max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                   RR3min=DataModule2->SqlSpec->FieldByName("RR3min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                   RR4max=DataModule2->SqlSpec->FieldByName("RR4max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                   RR4min=DataModule2->SqlSpec->FieldByName("RR4min")->AsFloat;
                   }
                  if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                   RR5max=DataModule2->SqlSpec->FieldByName("RR5max")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                   RR5min=DataModule2->SqlSpec->FieldByName("RR5min")->AsFloat;
                   }
                if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                   Ft1min=DataModule2->SqlSpec->FieldByName("Ft1min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                   Ft1max=DataModule2->SqlSpec->FieldByName("Ft1max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                   Ft2min=DataModule2->SqlSpec->FieldByName("Ft2min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                   Ft2max=DataModule2->SqlSpec->FieldByName("Ft2max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                   old1max=DataModule2->SqlSpec->FieldByName("old1max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                   old1min=DataModule2->SqlSpec->FieldByName("old1min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old2max")->AsString!="no"){
                   old2max=DataModule2->SqlSpec->FieldByName("old2max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old2min")->AsString!="no"){
                   old2min=DataModule2->SqlSpec->FieldByName("old2min")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old3max")->AsString!="no"){
                   old3max=DataModule2->SqlSpec->FieldByName("old3max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("old3min")->AsString!="no"){
                   old3min=DataModule2->SqlSpec->FieldByName("old3min")->AsFloat;
                   }
                    if (DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsString!="no"){
                   C1_2C0max=DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsFloat;
                   }
                   if (DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsString!="no"){
                   C1_2C0min=DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsFloat;
                   }
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::Create_IDExecute(TObject *Sender)
{
DataModule2->Protokol_Measure_ID->Active=true;
                      DataModule2->Protokol_Measure_ID->Last();
                      Protokol_N = DataModule2->Protokol_Measure_ID->FieldByName("ProtokolN")->AsFloat;
                     DataModule2->Protokol_Measure_ID->Append();
                     DataModule2->Protokol_Measure_ID->FieldByName("MSK")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Measure_ID->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("dataR")->AsString=Now().DateString();
                      DataModule2->Protokol_Measure_ID->FieldByName("ProtokolN")->AsFloat=Protokol_N+1;
                      Protokol_N=Protokol_N+1;
                     DataModule2->Protokol_Measure_ID->Post();
                     DataModule2->Protokol_Measure_ID->Last();
                     Measure_Protokol_ID=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsString;
                     Measure_Protokol_ID_Const=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsFloat-1;

       DataModule2->Protokol_Measure_ID->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::InsertArchiveExecute(TObject *Sender)
{
DataModule2->Protokol_Archive->Append();
                      DataModule2->Protokol_Archive->FieldByName("ProtokolType_ID")->AsString="1";
                     DataModule2->Protokol_Archive->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FL_Num")->AsFloat=DataModule2->psiData->FieldByName("FL_Num")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FL_Num_Virtual")->AsFloat=DataModule2->psiData->FieldByName("FL_Num_Virtual")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("C1_2C0")->AsFloat=DataModule2->psiData->FieldByName("C1_2C0")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Measure_Protokol_ID")->AsString=Measure_Protokol_ID;
                     DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Shum_1")->AsFloat=DataModule2->psiData->FieldByName("Shum_1")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("G")->AsFloat=DataModule2->psiData->FieldByName("G")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     DataModule2->Protokol_Archive->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("Rtgk")->AsFloat=DataModule2->psiData->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ftgk")->AsFloat=DataModule2->psiData->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("PH_ID")->AsFloat=DataModule2->psiData->FieldByName("PH_ID")->AsFloat;

                     DataModule2->Protokol_Archive->FieldByName("Date")->AsString=Now().DateString();
                     DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Operator")->AsString=DataModule1->Dostup->FieldByName("Name")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;

                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                     DataModule2->Protokol_Archive->FieldByName("RR2")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR3")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR4")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                     DataModule2->Protokol_Archive->FieldByName("RR5")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;

                     DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                       DataModule2->Protokol_Archive->FieldByName("PH_OCS")->AsString=DataModule2->psiData->FieldByName("PH_OCS")->AsString;
                         DataModule2->Protokol_Archive->FieldByName("PH_Analyser")->AsString=DataModule2->psiData->FieldByName("PH_Analyser")->AsString;
                           DataModule2->Protokol_Archive->FieldByName("PH_Analyser_SN")->AsString=DataModule2->psiData->FieldByName("PH_Analyser_SN")->AsString;
                     DataModule2->Protokol_Archive->Post();

}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::InsertLianozExecute(TObject *Sender)
{

  DataModule2->Lianoz->Append();
                     int m=StrToIntDef(DataModule2->psiData->FieldByName("N")->AsString,0);
                     if (m!=0){
                     DataModule2->Lianoz->FieldByName("NN")->AsFloat=m;
                     }
                     DataModule2->Lianoz->FieldByName("Customer")->AsString=CustomerName;
                     DataModule2->Lianoz->FieldByName("Dogovor")->AsString=Dogovor;
                     DataModule2->Lianoz->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;

                     DataModule2->Lianoz->FieldByName("C0")->AsFloat=DataModule2->psiData->FieldByName("C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Cq")->AsFloat=DataModule2->psiData->FieldByName("Cq")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Q")->AsFloat=DataModule2->psiData->FieldByName("Q")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR")->AsFloat=DataModule2->psiData->FieldByName("R1R2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("R")->AsFloat=DataModule2->psiData->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("FT")->AsFloat=DataModule2->psiData->FieldByName("FT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft1")->AsFloat=DataModule2->psiData->FieldByName("Ft1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft2")->AsFloat=DataModule2->psiData->FieldByName("Ft2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_Protokol_ID")->AsFloat=Measure_Protokol_ID_Const;
                     DataModule2->Lianoz->FieldByName("Rmax")->AsFloat=DataModule2->psiData->FieldByName("Rmax")->AsFloat;
                      DataModule2->Lianoz->FieldByName("IT")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmax")->AsFloat=DataModule2->psiData->FieldByName("Tmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Mono")->AsFloat=DataModule2->psiData->FieldByName("Mono")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spur")->AsFloat=DataModule2->psiData->FieldByName("Spur")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C1_2C0")->AsFloat=DataModule2->psiData->FieldByName("C1_2C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Slope")->AsFloat=DataModule2->psiData->FieldByName("Slope")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum")->AsFloat=DataModule2->psiData->FieldByName("Shum")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum_1")->AsFloat=DataModule2->psiData->FieldByName("Shum_1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("G")->AsFloat=DataModule2->psiData->FieldByName("G")->AsFloat;
                     DataModule2->Lianoz->FieldByName("TurnOver")->AsFloat=DataModule2->psiData->FieldByName("TurnOver")->AsFloat;
                      if(DataModule2->SqlSpec->FieldByName("Fptp_2")->AsString=="True"){
                      DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp_2")->AsFloat;
                      }
                      else {
                     DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->psiData->FieldByName("Fptp")->AsFloat;
                     }
                     if(DataModule2->SqlSpec->FieldByName("FL_Num")->AsString == "True"){
                       DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("FL_Num")->AsFloat;

                     }
                     else {

                      DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->psiData->FieldByName("F")->AsFloat;
                     }
                     DataModule2->Lianoz->FieldByName("L")->AsFloat=DataModule2->psiData->FieldByName("L")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rc_Rb")->AsFloat=DataModule2->psiData->FieldByName("RcRb")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmin")->AsFloat=DataModule2->psiData->FieldByName("Tmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmax")->AsFloat=DataModule2->psiData->FieldByName("Fmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmin")->AsFloat=DataModule2->psiData->FieldByName("Fmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Variant")->AsString=DataModule2->psiData->FieldByName("variant")->AsString;
                     DataModule2->Lianoz->FieldByName("PMI")->AsString=DataModule2->psiData->FieldByName("PMI")->AsString;
                      DataModule2->Lianoz->FieldByName("Rtgk")->AsFloat=DataModule2->psiData->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ftgk")->AsFloat=DataModule2->psiData->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmaxm")->AsFloat=DataModule2->psiData->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Lianoz->FieldByName("Operator")->AsString=DataModule1->Dostup->FieldByName("Name")->AsString;
                     DataModule2->Lianoz->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Lianoz->FieldByName("intervalfg")->AsString=DataModule2->psiData->FieldByName("intervalgf")->AsString;

                      if (DataModule2->SqlSpec->FieldByName("RR3")->AsString=="True" & DataModule2->SqlSpec->FieldByName("RR2")->AsString=="True"){
                           if(DataModule2->psiData->FieldByName("RR2")->AsFloat>DataModule2->psiData->FieldByName("RR3")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR2")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR3")->AsFloat;
                              }

                     }
                     else if(DataModule2->SqlSpec->FieldByName("RR4")->AsString=="True" || DataModule2->SqlSpec->FieldByName("RR5")->AsString=="True") {
                          if(DataModule2->psiData->FieldByName("RR4")->AsFloat>DataModule2->psiData->FieldByName("RR5")->AsFloat){
                                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR4")->AsFloat;
                                }
                              else {
                                   DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR5")->AsFloat;
                              }

                         }
                     else {
                      DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->psiData->FieldByName("RR1")->AsFloat;

                     }
                     DataModule2->Lianoz->FieldByName("C0_C1")->AsFloat=DataModule2->psiData->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Old")->AsFloat=DataModule2->psiData->FieldByName("Old")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Date")->AsString=DataModule2->psiData->FieldByName("MakeDate")->AsString;
                     DataModule2->Lianoz->FieldByName("Date1")->AsString=DataModule2->psiData->FieldByName("MakeDate1")->AsString;
  DataModule2->Lianoz->Post();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::RazbrakovkaExecute(TObject *Sender)
{
   if (DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True" || DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="True"){
                  if (DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="False"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat+0.001){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat-0.001){
                                       kl=true;
                                  }
                            }
                     }
                     else {
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat>FnastrHz-FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat<-FnastrHz+FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                       kl=true;
                                  }
                            }



                     }
                 }
               if (DataModule2->SqlSpec->FieldByName("FtVP")->AsString=="True"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-fabs(Fmax)*DataModule2->SqlSpec->FieldByName("DopuskF_P")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+fabs(Fmin)*DataModule2->SqlSpec->FieldByName("DopuskF_P")->AsFloat/100){
                                       kl=true;
                                  }
                            }
                     }
            if (DataModule2->SqlSpec->FieldByName("R")->AsString=="True" & DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="True"){
                  if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString=="True"){
                    if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }

               }
               else  {
                   if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                        double jj=SimpleRoundTo(DataModule2->psiData->FieldByName("R")->AsFloat,-1);

                        double jj1=Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100);
                           if(jj>jj1+0.001){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(ceil(DataModule2->psiData->FieldByName("R")->AsFloat*10)/10<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }


               }
                }


               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                    kl=true;
                              }
                      }
              if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)){
                                    kl=true;
                              }
                      }
                  }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                              if (DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                              kl=true;
                                            }
                                }
                               if (DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                                  if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                              kl=true;
                                            }
                               }
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax)){
                                              kl=true;
                                            }

                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                       if (DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(fabs(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100)))){
                                    kl=true;
                              }
                           }
                        if (DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(fabs(Fminmin+DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat))){
                                    kl=true;
                              }
                           }
                           if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(fabs(Fminmin))){
                                              kl=true;
                                            }

                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(abs(DataModule2->psiData->FieldByName("Shum")->AsFloat)>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(abs(DataModule2->psiData->FieldByName("Shum")->AsFloat)<ShMin){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("Sh1Max")->AsString!="no"){
                                          if(abs(DataModule2->psiData->FieldByName("Shum_1")->AsFloat)>Sh1Max){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Sh1Min")->AsString!="no"){
                              if(abs(DataModule2->psiData->FieldByName("Shum_1")->AsFloat)<Sh1Min){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                   if (DataModule2->SqlSpec->FieldByName("INVERT_Rc_RB")->AsString=="True"){
                     if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat<Rc_Rbmax){
                                    kl=true;
                              }
                      }
                   }
                   else {
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                     }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("Tomin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("TurnOver")->AsFloat<Tomin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tomax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("TurnOver")->AsFloat>Tomax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat<old1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat>old1max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=true;
                              }
                      }

                         if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR5max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat<C1_2C0min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat>C1_2C0max){
                                    kl=true;
                              }
                      }
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::Razbrakovka_bez_ZPExecute(TObject *Sender)
{
 if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no" & DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax){
                                                      kl=true;
                                                  }

                                             }
                if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no" & DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin){
                                       kl=true;
                                  }
                   }
             if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin){
                                    kl=true;
                              }
                  }
               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>Cqmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<Cqmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>FTmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<FTmin){
                                    kl=true;
                              }
                      }
                if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>SRmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<SRmin){
                                    kl=true;
                              }
                      }
                  }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>Fmaxmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>fabs(Fminmin)){
                                    kl=true;
                              }
                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>RRmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<RRmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>Rmaxmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<Rmaxmin){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(abs(DataModule2->psiData->FieldByName("Shum")->AsFloat)>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(abs(DataModule2->psiData->FieldByName("Shum")->AsFloat)<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){

                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Tomin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("TurnOver")->AsFloat<Tomin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tomax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("TurnOver")->AsFloat>Tomax){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<Fptpmin){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>Fptpmax){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<Fptp2min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>Fptp2max){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old")->AsFloat<old1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old")->AsFloat>old1max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=true;
                              }
                      }

                           if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR5max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    kl=true;
                              }
                      }
                        if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("C1_2C0min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat<C1_2C0min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C1_2C0max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat>C1_2C0max){
                                    kl=true;
                              }
                      }

}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::Razbrakovka_ZPExecute(TObject *Sender)
{
if (DataModule2->psiData->FieldByName("F")->AsFloat*DataModule2->psiData->FieldByName("R")->AsFloat*DataModule2->psiData->FieldByName("C0")->AsFloat>0)
                         {
                            if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){
                                           if(DataModule2->psiData->FieldByName("F")->AsFloat>(Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat) & DataModule2->psiData->FieldByName("F")->AsFloat<Fmax){
                                                    kl=true;
                                          }
                             }

                           if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                           if(DataModule2->psiData->FieldByName("F")->AsFloat<(Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat) & DataModule2->psiData->FieldByName("F")->AsFloat>Fmin ){
                                                 kl=true;
                                           }
                             }


                          if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                                         if(DataModule2->psiData->FieldByName("R")->AsFloat>(Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)) & DataModule2->psiData->FieldByName("R")->AsFloat<Rmax){
                                                kl=true;
                                              }
                           }
                            if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                                         if(DataModule2->psiData->FieldByName("R")->AsFloat>(Rmin-Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)) & DataModule2->psiData->FieldByName("R")->AsFloat>Rmin){
                                                kl=true;
                                              }
                            }

                           if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<(Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)) &DataModule2->psiData->FieldByName("Q")->AsFloat>Qmin){
                                             kl=true;
                                          }
                              }

                             if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<(Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)) &DataModule2->psiData->FieldByName("Q")->AsFloat<Qmax){
                                             kl=true;
                                          }
                               }


                              if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                                                if(DataModule2->psiData->FieldByName("C0")->AsFloat>(C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)) & DataModule2->psiData->FieldByName("C0")->AsFloat<C0max){
                                                      kl=true;
                                                 }
                                  }
                                if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                                if(DataModule2->psiData->FieldByName("C0")->AsFloat<(C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)) & DataModule2->psiData->FieldByName("C0")->AsFloat>C0min){
                                                      kl=true;
                                                 }
                                  }





                               if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100)) & DataModule2->psiData->FieldByName("Cq")->AsFloat<Cqmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100)) & DataModule2->psiData->FieldByName("Cq")->AsFloat>Cqmin){
                                                            kl=true;
                                                     }
                                 }

                                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat) & DataModule2->psiData->FieldByName("FT")->AsFloat<FTmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat) & DataModule2->psiData->FieldByName("FT")->AsFloat>FTmin){
                                                            kl=true;
                                                     }
                                 }
                                if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                                   if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat) & DataModule2->psiData->FieldByName("Spur")->AsFloat<SRmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat) & DataModule2->psiData->FieldByName("Spur")->AsFloat>SRmin){
                                                            kl=true;
                                                     }
                                 }
                               }
                                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fmaxm")->AsFloat<Fmaxmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat<(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fmaxm")->AsFloat>Fminmin){
                                                            kl=true;
                                                     }
                                 }
                                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp")->AsFloat<Fptpmax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp")->AsFloat>Fptpmin){
                                                            kl=true;
                                                     }
                                 }
                                     if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<Fptp2max){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100)) & DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>Fptp2min){
                                                            kl=true;
                                                     }
                                 }
                                  if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                                               if(DataModule2->psiData->FieldByName("Slope")->AsFloat>(Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat) & DataModule2->psiData->FieldByName("Slope")->AsFloat<Smax){
                                                   kl=true;
                                                   }
                                }

                              if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                                                      if(DataModule2->psiData->FieldByName("Slope")->AsFloat<(Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat) & DataModule2->psiData->FieldByName("Slope")->AsFloat>Smin){
                                                            kl=true;
                                                     }
                                 }




             if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax){
                     kl=false;
                   }
                 }
            if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
               if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin){
                 kl=false;
                }
                }
                  if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>Rmaxmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<Rmaxmin){
                 kl=false;
                }
                }
                  if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                 kl=false;
                }
                }



                if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Cq")->AsFloat>Cqmax){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                if(DataModule2->psiData->FieldByName("Cq")->AsFloat<Cqmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("FT")->AsFloat<FTmin){
                 kl=false;
                }
                }
                if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("FT")->AsFloat>FTmax){
                 kl=false;
                }
                }
                  if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Spur")->AsFloat>SRmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Spur")->AsFloat<SRmin){
                 kl=false;
                }
                }
                  }
                  if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat>Fmaxmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat<Fminmin){
                 kl=false;
                }
                }
                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>RRmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<RRmin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>Fptpmax){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<Fptpmin){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>Fptp2max){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<Fptp2min){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                 kl=false;
                }
                }
                 if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                 if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                 kl=false;
                }
                }

                 if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat<old1min){
                                    kl=false;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat>old1max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=false;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=false;
                              }
                      }

                           if (DataModule2->SqlSpec->FieldByName("RR4max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR4min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    kl=false;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR5max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR5max){
                                    kl=false;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR5min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    kl=false;
                              }
                      }
                            if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }


               }
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::Razbrakovka_RKExecute(TObject *Sender)
{
  if (DataModule2->SqlSpec->FieldByName("Ft")->AsString=="True" || DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="True"){
                  if (DataModule2->SqlSpec->FieldByName("Ftgk")->AsString=="False"){
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+DataModule2->SqlSpec->FieldByName("DopuskF")->AsFloat){
                                       kl=true;
                                  }
                            }
                     }
                     else {
                           if (DataModule2->SqlSpec->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat>FnastrHz-FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpec->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat<-FnastrHz+FnastrHz*DataModule2->SqlSpec->FieldByName("DopuskFtgk")->AsFloat/100){
                                       kl=true;
                                  }
                            }



                     }
                 }
              if (DataModule2->SqlSpec->FieldByName("R")->AsString=="True" & DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="True"){
                  if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString!="False"){
             if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }

               }
               else if (DataModule2->SqlSpec->FieldByName("Rtgk")->AsString=="True"){
                    if (DataModule2->SqlSpec->FieldByName("Rmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpec->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }


               }
           }
               if (DataModule2->SqlSpec->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax-DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpec->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin+DataModule2->SqlSpec->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpec->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpec->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(DataModule2->SqlSpec->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpec->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpec->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(DataModule2->SqlSpec->FieldByName("DopuskC0")->AsFloat/100)){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpec->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpec->FieldByName("DopuskCq")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpec->FieldByName("DopuskFT")->AsFloat)){
                                    kl=true;
                              }
                      }
                if (DataModule2->SqlSpec->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpec->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-SRmax*(DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+SRmin*(DataModule2->SqlSpec->FieldByName("DopuskSR")->AsFloat)/100)){
                                    kl=true;
                              }
                      }
                 }
                    if (DataModule2->SqlSpec->FieldByName("Fmaxmax")->AsString!="no"){
                       if(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                              kl=true;
                                            }
                                         }
                        if(DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                              kl=true;
                                            }
                                         }

                   }
               if (DataModule2->SqlSpec->FieldByName("Fminmin")->AsString!="no"){
                           if(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Fminmin*(DataModule2->SqlSpec->FieldByName("DopuskFi")->AsFloat/100))){
                                    kl=true;
                              }
                            }
                           if(DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+DataModule2->SqlSpec->FieldByName("DopuskFi_Real")->AsFloat)){
                                    kl=true;
                              }
                            }
                      }

                   if (DataModule2->SqlSpec->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(DataModule2->SqlSpec->FieldByName("DopuskRR")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(DataModule2->SqlSpec->FieldByName("DopuskRmax")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpec->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Shum")->AsFloat>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Shum")->AsFloat<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpec->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpec->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpec->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>Tminmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin+DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax-DataModule2->SqlSpec->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin-Fptpmin*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                           if (DataModule2->SqlSpec->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpec->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpec->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpec->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=true;
                              }
                      }
                            if (DataModule2->SqlSpec->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpec->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpec->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpec->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat<old1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpec->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old1")->AsFloat>old1max){
                                    kl=true;
                              }
                      }       
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::NumbersSelectExecute(TObject *Sender)
{
 for (int l=0; l<PNForm->viewNumber->Count; l++){
                                 if (PNForm->viewNumber->Items->Strings[l]==DataModule2->psiData->FieldByName("N")->AsString){
                                          if (kl==false){
                                                    if (PNForm->viewNumber->ItemState[l]!=0){
                                                            kl=false;

                                                         }
                                                        else {
                                                                 kl=true;
                                                          }
                                                       if (kl==true){
                                                         PNForm->viewNumber->ItemState[l]=0;
                                                       }
                                                       else {
                                                        PNForm->viewNumber->ItemState[l]=1;
                                                       }

                                           }
                                           else {
                                               PNForm->viewNumber->ItemState[l]=0;

                                           }
                                        break;
                                   }
                     }
   ActionList1->Actions[1]->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::CreateStatTableExecute(TObject *Sender)
{
 DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop Table IF EXISTS  `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();

DataModule2->Parameters->Active=true;
DataModule2->Parameters->First();
DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop table IF EXISTS `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();
DataModule1->CreateStatTable->SQL->Clear();
DataModule1->CreateStatTable->SQL->Add("CREATE TABLE `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CreateStatTable->SQL->Add("(`ID` int(11) NOT NULL auto_increment,`Measure_ID` int(11) default NULL,");
                for (int i=0; i<DataModule2->Parameters->RecordCount; i++){
                        if (DataModule2->SqlSpec->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
                                  AnsiString P_Name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
                                  DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_AVG_A` double(15,3) default NULL,");
                                  DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Max_A` double(15,3) default NULL,");
                                  DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Min_A` double(15,3) default NULL,");
                                  DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_ST_DEV_A` double(15,3) default NULL,");
                                 DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_CPK` double(15,3) default NULL,");
                           }
                        DataModule2->Parameters->Next();
                     }
DataModule1->CreateStatTable->SQL->Add("   PRIMARY KEY  (`ID`),  UNIQUE KEY `ID` USING BTREE (`ID`)) ENGINE=MEMORY DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;");
DataModule1->CreateStatTable->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::WriteStatExecute(TObject *Sender)
{
 DataModule1->psi_stat_1->Active=false;
DataModule1->psi_stat_1->SQL->Clear();
DataModule1->psi_stat_1->SQL->Add("Select * from `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->psi_stat_1->Active=true;
DataModule1->psi_stat_1->Append();
DataModule1->psi_stat_1->FieldByName("Measure_ID")->AsString=DataModule2->psiData->FieldByName("Measure_ID")->AsString;

        DataModule2->Statistika->Active=false;
        DataModule2->Statistika->SQL->Clear();
        DataModule2->Statistika->SQL->Add("Select SQL_NO_CACHE * from psi_statistika where Measure_ID='"+DataModule2->psiData->FieldByName("Measure_ID")->AsString+"'");
        DataModule2->Statistika->Active=true;
        DataModule2->Statistika->First();
 for (int i=0; i<DataModule2->Statistika->RecordCount; i++){
            DataModule2->Parameters->First();
          for (int j=0; j<DataModule2->Parameters->RecordCount; j++){
              if (DataModule2->Parameters->FieldByName("ID")->AsString==DataModule2->Statistika->FieldByName("Parametr_ID")->AsString){
                  AnsiString PP_name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
                          if (DataModule2->SqlSpec->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
                                    DataModule1->psi_stat_1->FieldByName(PP_name+"_AVG_A")->AsString=DataModule2->Statistika->FieldByName("AVG_A")->AsString;
                                    DataModule1->psi_stat_1->FieldByName(PP_name+"_Max_A")->AsString=DataModule2->Statistika->FieldByName("Max_A")->AsString;
                                    DataModule1->psi_stat_1->FieldByName(PP_name+"_Min_A")->AsString=DataModule2->Statistika->FieldByName("Min_A")->AsString;
                                    DataModule1->psi_stat_1->FieldByName(PP_name+"_ST_DEV_A")->AsString=DataModule2->Statistika->FieldByName("STDEV_A")->AsString;
                                    DataModule1->psi_stat_1->FieldByName(PP_name+"_CPK")->AsString=DataModule2->Statistika->FieldByName("CPK")->AsString;
               }
               break;
              }
              DataModule2->Parameters->Next();
          }

       DataModule2->Statistika->Next();
 }
DataModule1->psi_stat_1->Post();
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::AddCountExecute(TObject *Sender)
{
 DataModule2->Protokol_Measure_ID_Edit->Active=false;
                   AnsiString sql_p="Select * from `psi_measure_protokol_id` where `Measure_protokol_ID`='"+Measure_Protokol_ID+"'";
                   DataModule2->Protokol_Measure_ID_Edit->SQL->Clear();
                   DataModule2->Protokol_Measure_ID_Edit->SQL->Add(sql_p);
                   DataModule2->Protokol_Measure_ID_Edit->Active=true;
                   DataModule2->Protokol_Measure_ID_Edit->Edit();
                   DataModule2->Protokol_Measure_ID_Edit->FieldByName("Count")->AsFloat=Count_Current;
                   DataModule2->Protokol_Measure_ID_Edit->Post();
                   DataModule2->Protokol_Measure_ID_Edit->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::PrintAllExecute(TObject *Sender)
{
 AnsiString S,S1,S2,WD;
    AnsiString FieldName;
    kl=false;
char WindowsDirectory[MAX_PATH];
GetWindowsDirectory(WindowsDirectory, MAX_PATH);
WD=WindowsDirectory;
 btnNum->Enabled=true;


        DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
        DataModule2->Protokol_Archive->Active=true;
     S="Select SQL_NO_CACHE * from psidata where ";
     S1="Select SQL_NO_CACHE * from psidatatemp where ";
     S2="Select SQL_NO_CACHE * from psidatata_TCH_graphics where ";
       if (edtMsk->Text!="" || !edtMsk->Text.IsEmpty()){
       S=S+"msk='"+edtMsk->Text+"' ";
       S1=S1+"msk='"+edtMsk->Text+"' ";
       S2=S2+"Msk='"+edtMsk->Text+"' ";
       }
       if  (edtProtokolN->ItemIndex!=-1){
          if (edtMsk->ItemIndex!=-1){
             S=S+"and ProtokolN='"+edtProtokolN->Text+"' ";
             }
             else {
              S=S+"ProtokolN='"+edtProtokolN->Text+"' and Spc='"+edtSpc->Text+"' ";
             }
           S1=S1+"and ProtokolN='"+edtProtokolN->Text+"' ";
           S2=S2+"and ProtokolN='"+edtProtokolN->Text+"' ";
       }

       if (edtM->ItemIndex!=-1){

        S=S+"and `MSK-M`='"+edtM->Text+"' ";
        S1=S1+"and `MSK-M`='"+edtM->Text+"' ";
       }
      if (!cmb_ID->Text.IsEmpty() || cmb_ID->Text!=""){

        S="Select SQL_NO_CACHE * from psidata where Measure_ID='"+cmb_ID->Text+"' ";
        S1="Select SQL_NO_CACHE * from psidatatemp where Measure_ID='"+cmb_ID->Text+"' ";
        S2="Select SQL_NO_CACHE * from psidata_TCH_graphics where Measure_ID='"+cmb_ID->Text+"' ";

       }
     if (!cmb_Protokol_ID->Text.IsEmpty()){

      S="Select SQL_NO_CACHE * from psi_protokol_archive where Measure_Protokol_ID='"+cmb_Protokol_ID->Text+"' ";
     }
      if (edtAn->Checked){
        S=S+"and Status2='Good' and Status!='Аномал.'";
        S1=S1+"and Status='Pass' and Status1!='Аномал.'";
       }
       if (edt->Checked){
       S=S+"and Status='Годен' ";
       S1=S1+"and Status1='Годен' ";
       }
       S=S+" ORDER BY N";
       S1=S1+" ORDER BY Temp";
//***************************************************************************************************************
  ActionList1->Actions[5]->Execute();
  DataModule1->DropLianozTable->Execute();
  DataModule1->CreateLianozTable->Execute();
  Lianoz->Open();

//*********************************************************************************************************************

 if (edtProtokol->Text=="Протокол ВП" || edtProtokol->Text=="Протокол ВП(ПСИ)" || edtProtokol->Text=="Протокол(Этикетка)"){
         ActionList1->Actions[6]->Execute();
        DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
        DataModule2->Protokol_Archive->Active=true;

        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
        
        DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();

        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select SQL_NO_CACHE * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"' and `ResonatorName`='"+DataModule2->SqlSpec->FieldByName("NameR")->AsString+"'");
        DataModule2->TU->Active=true;

        DataModule2->TU_Parameters->Active=false;
        DataModule2->TU_Parameters->SQL->Clear();
        DataModule2->TU_Parameters->SQL->Add("Select SQL_NO_CACHE * from `TU_Parameters` where TU_ID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->TU_Parameters->Active=true;

       DataModule2->dopuski->SQL->Add("Select SQL_NO_CACHE * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;
        int h=DataModule2->Lianoz->RecordCount;

       DataModule2->psiData->Active=false;
       DataModule2->psiData->SQL->Clear();
       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
int Count_all=0;
int Count_Current_Rev;
if (StrToFloat(Protokol_Count->Text)==0){
  Count_Current_Rev=-1;
}
else {
  Count_Current_Rev=StrToFloat(Protokol_Count->Text);
}
      Count_Current=0;
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
          if (edtProtokol->Text=="Протокол ВП" || edtProtokol->Text=="Протокол(Этикетка)"){
          ActionList1->Actions[9]->Execute();

           }
           else {
           ActionList1->Actions[10]->Execute();

           }

            ActionList1->Actions[13]->Execute();


            if (!kl){
            if ( Count_Current_Rev>=0){
                  if (Count_Current_Rev==0){

                  DataModule2->Protokol_Measure_ID_Edit->Active=false;
                   AnsiString sql_p="Select * from `psi_measure_protokol_id` where `Measure_protokol_ID`='"+Measure_Protokol_ID+"'";
                   DataModule2->Protokol_Measure_ID_Edit->SQL->Clear();
                   DataModule2->Protokol_Measure_ID_Edit->SQL->Add(sql_p);
                   DataModule2->Protokol_Measure_ID_Edit->Active=true;
                   DataModule2->Protokol_Measure_ID_Edit->Edit();
                   DataModule2->Protokol_Measure_ID_Edit->FieldByName("Count")->AsFloat=Count_Current;
                   DataModule2->Protokol_Measure_ID_Edit->Post();
                   DataModule2->Protokol_Measure_ID_Edit->Active=false;

                   DataModule2->Protokol_Measure_ID->Active=true;
                     Protokol_N = Protokol_N+1 ;
                     DataModule2->Protokol_Measure_ID->Append();
                     DataModule2->Protokol_Measure_ID->FieldByName("MSK")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("Measure_ID")->AsFloat=DataModule2->psiData->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Protokol_Measure_ID->FieldByName("Spc")->AsString=DataModule2->psiData->FieldByName("Spc")->AsString;
                     DataModule2->Protokol_Measure_ID->FieldByName("dataR")->AsString=Now().DateString();
                     DataModule2->Protokol_Measure_ID->FieldByName("ProtokolN")->AsFloat=Protokol_N;
                     DataModule2->Protokol_Measure_ID->Post();
                     Measure_Protokol_ID=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsString;
                     DataModule2->Protokol_Measure_ID->Active=false;
                     Count_Current_Rev=StrToFloat(Protokol_Count->Text);
                     Count_Current=0;
                  }
            }
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                     Count_Current_Rev=Count_Current_Rev-1;
                     Count_Current++;
                     Count_all++;
                     ActionList1->Actions[7]->Execute();
                     ActionList1->Actions[8]->Execute();
                    }
             DataModule2->psiData->Next();
         }

          ActionList1->Actions[16]->Execute();

        PmiString=DataModule2->Lianoz->FieldByName("PMI")->AsString;
        ActionList1->Actions[0]->Execute();

        ActionList1->Actions[3]->Execute();
 }

 if (edtProtokol->Text=="Протокол ОТК" || edtProtokol->Text=="Измерение мощности"){

            DataModule2->psiData->Active=false;
           DataModule2->psiData->SQL->Clear();
           DataModule2->psiData->SQL->Add(S);
           DataModule2->psiData->Active=true;
           DataModule2->psiData->First();
           DataModule2->psiData->RecordCount;
         ActionList1->Actions[14]->Execute();
         ActionList1->Actions[15]->Execute();


         WD=DataModule1->Options->FieldByName("ReportDir")->AsString;
        ActionList1->Actions[3]->Execute();

                }
  if (edtProtokol->Text=="Протокол измерений" || edtProtokol->Text=="Радиус сферы"){



           DataModule2->psiData->Active=false;
           DataModule2->psiData->SQL->Clear();
           DataModule2->psiData->SQL->Add(S);
           DataModule2->psiData->Active=true;
           DataModule2->psiData->First();
           ActionList1->Actions[14]->Execute();
           ActionList1->Actions[15]->Execute();

         ActionList1->Actions[3]->Execute();
        WD=DataModule1->Options->FieldByName("ReportDir")->AsString;


                }
 if (edtProtokol->Text=="Протокол ВП без запаса"){
      ActionList1->Actions[6]->Execute();
      DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
        DataModule2->Protokol_Archive->Active=true;

      DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();
        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
                    DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select SQL_NO_CACHE * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select SQL_NO_CACHE * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;


       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       Count_Current=0;
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                kl=false;

               ActionList1->Actions[11]->Execute();
               ActionList1->Actions[13]->Execute();
            if (kl){
                  Count_Current++;
                   ActionList1->Actions[7]->Execute();
                    ActionList1->Actions[8]->Execute();
                    }
             DataModule2->psiData->Next();
         }
          ActionList1->Actions[16]->Execute();
        PmiString=DataModule2->Lianoz->FieldByName("PMI")->AsString;

     ActionList1->Actions[3]->Execute();

 }

  if (edtProtokol->Text=="Распечатка" || edtProtokol->Text=="Распечатка(ПСИ)"){


           DataModule2->psiData->Active=false;
           DataModule2->psiData->SQL->Clear();
           DataModule2->psiData->SQL->Add(S);
           DataModule2->psiData->Active=true;
           DataModule2->psiData->First();
           DataModule2->psiDataTemp->Active=false;
           DataModule2->psiDataTemp->SQL->Clear();
           DataModule2->psiDataTemp->SQL->Add(S1);
           DataModule2->psiDataTemp->Active=true;
           DataModule2->psiDataTemp->First();
           DataModule2->psiDataTemp->RecordCount;
           DataModule2->psiData->RecordCount;
          // DataModule2->Print->Active=true;

           DataModule2->SqlSpec->Active=false;
           DataModule2->SqlSpec->SQL->Clear();
           DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE * from  specification where Name='"+edtSpc->Text+"'");
           DataModule2->SqlSpec->Active=true;
          DataModule2->SqlSpec->First();
          ActionList1->Actions[3]->Execute();
          WD=DataModule1->Options->FieldByName("ReportDir")->AsString;



  }

  if (edtProtokol->Text=="Паспорт"){
         ActionList1->Actions[6]->Execute();

        DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();

         DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
        DataModule2->Protokol_Archive->Active=true;

        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
        DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select SQL_NO_CACHE * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select SQL_NO_CACHE * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;

       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;

        DataModule2->psiDataTemp->Active=false;
           DataModule2->psiDataTemp->SQL->Clear();
           DataModule2->psiDataTemp->SQL->Add(S1);
           DataModule2->psiDataTemp->Active=true;
           DataModule2->psiDataTemp->First();
           DataModule2->psiDataTemp->RecordCount;



       DataModule2->psiData->First();
       Count_Current=0;
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
                  ActionList1->Actions[12]->Execute();
                  ActionList1->Actions[13]->Execute();


            if (!kl){
                     Count_Current++;
                     ActionList1->Actions[7]->Execute();
                     ActionList1->Actions[8]->Execute();
                    }
             DataModule2->psiData->Next();
         }
         ActionList1->Actions[16]->Execute();
          ActionList1->Actions[0]->Execute();
          
  AnsiString LianTableName="`lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`";
       S2="select `psidata_TCH_graphics`.`Graph_Picture`,`psidata_TCH_graphics`.`DNCH_Picture`,`psidata_TCH_graphics`.`N` from `psidata_TCH_graphics`,"+LianTableName+" where `psidata_TCH_graphics`.`Measure_ID`="+LianTableName+".`Measure_ID` and `psidata_TCH_graphics`.`N`="+LianTableName+".`N`";
       DataModule2->GR_TCH->Active=false;
       DataModule2->GR_TCH->SQL->Clear();
       DataModule2->GR_TCH->SQL->Add(S2);
       DataModule2->GR_TCH->Active=true;
        PmiString=DataModule2->Lianoz->FieldByName("PMI")->AsString;
        DataModule2->psiDataTemp5->Active=false;
           DataModule2->psiDataTemp5->SQL->Clear();
           DataModule2->psiDataTemp5->SQL->Add(S1);
           DataModule2->psiDataTemp5->Active=true;
           DataModule2->psiDataTemp5->First();
           DataModule2->psiDataTemp5->RecordCount;
        ActionList1->Actions[3]->Execute();

    }
  if (edtProtokol->Text=="Протокол ВП-РК" || edtProtokol->Text=="Перепроверка"){
       ActionList1->Actions[6]->Execute();

        DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();

      DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
        DataModule2->Protokol_Archive->Active=true;

        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
            DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();

        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select SQL_NO_CACHE * from tu where `TUName`='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"' and `ResonatorName`='"+DataModule2->SqlSpec->FieldByName("NameR")->AsString+"'");
        DataModule2->TU->Active=true;
        int Count= DataModule2->TU->RecordCount;

        DataModule2->TU_Parameters->Active=false;
        DataModule2->TU_Parameters->SQL->Clear();
        DataModule2->TU_Parameters->SQL->Add("Select SQL_NO_CACHE * from `TU_Parameters` where TU_ID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->TU_Parameters->Active=true;
         int Count1= DataModule2->TU_Parameters->RecordCount;
        DataModule2->dopuski->SQL->Add("Select SQL_NO_CACHE * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;
        int h=DataModule2->Lianoz->RecordCount;

       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       Count_Current=0;
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
                  ActionList1->Actions[12]->Execute();
                   ActionList1->Actions[13]->Execute();



            if (!kl){
                     Count_Current++;
                     ActionList1->Actions[7]->Execute();
                     ActionList1->Actions[22]->Execute();    //Получаем Dogovor and Customer
                     ActionList1->Actions[8]->Execute();     //Таблица Lianoz
                    }
             DataModule2->psiData->Next();
         }
          ActionList1->Actions[16]->Execute();
         PmiString=DataModule2->Lianoz->FieldByName("PMI")->AsString;

        ActionList1->Actions[3]->Execute();

    }
    if (edtProtokol->Text=="Паспорт (Приложение)"){
        ActionList1->Actions[6]->Execute();
        
        DataModule2->psiData->Active=false;
      DataModule2->psiData->SQL->Clear();
        DataModule2->Protokol_Archive->Active=false;
                     DataModule2->Protokol_Archive->SQL->Clear();
                     DataModule2->Protokol_Archive->SQL->Add("Select * from psi_protokol_archive where Measure_Protokol_ID='"+Measure_Protokol_ID+"'");
        DataModule2->Protokol_Archive->Active=true;

        DataModule2->Lianoz->Active=true;
        DataModule2->Lianoz->First();
            DataModule2->dopuski->Active=false;
        DataModule2->dopuski->SQL->Clear();
        DataModule2->TU->Active=false;
        DataModule2->TU->SQL->Clear();
        DataModule2->TU->SQL->Add("Select SQL_NO_CACHE * from tu where TUName='"+DataModule2->SqlSpec->FieldByName("TU")->AsString+"'");
        DataModule2->TU->Active=true;
        DataModule2->dopuski->SQL->Add("Select SQL_NO_CACHE * from dopuski where TUID='"+DataModule2->TU->FieldByName("TUIndex")->AsString+"'");
        DataModule2->dopuski->Active=true;
        int h=DataModule2->Lianoz->RecordCount;

       DataModule2->psiData->SQL->Add(S);
       DataModule2->psiData->Active=true;
       DataModule2->psiData->First();
       Count_Current=0;
       for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;
               ActionList1->Actions[12]->Execute();
                 ActionList1->Actions[13]->Execute();


            if (!kl){
                      Count_Current++;
                      ActionList1->Actions[7]->Execute();
                      ActionList1->Actions[8]->Execute();

                    }
             DataModule2->psiData->Next();
         }
        ActionList1->Actions[16]->Execute();
        //ActionList1->Actions[1]->Execute();
        ActionList1->Actions[0]->Execute();
        PmiString=DataModule2->Lianoz->FieldByName("PMI")->AsString;

        ActionList1->Actions[3]->Execute();

    }

  Lianoz->Close();
 DataModule1->DropLianozTable->Execute();
DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop table IF EXISTS `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();        
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::LoadProtokolTypesExecute(TObject *Sender)
{
Protokol_Data->Protokol_Types->Active=false;
Protokol_Data->Protokol_Types->SQL->Clear();
Protokol_Data->Protokol_Types->SQL->Add("select distinct `Name` from print_protokol_types order by Name");
Protokol_Data->Protokol_Types->Active=true;
 edtProtokol->Items->Clear();
Protokol_Data->Protokol_Types->First();
for (int hh=0;hh<Protokol_Data->Protokol_Types->RecordCount;hh++){
    edtProtokol->Items->Add(Protokol_Data->Protokol_Types->FieldByName("Name")->AsString);
    Protokol_Data->Protokol_Types->Next();
}
Protokol_Data->Protokol_Types->Active=false;
DataModule2->ResonatorType->Active=true;
DataModule2->ResonatorType->First();
DataModule2->psi->Active=true;
edtType->Items->Clear();
for (int i=0;i<DataModule2->ResonatorType->RecordCount;i++){
                    edtType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    DataModule2->ResonatorType->Next();
}
 RQ_Data->LotNumbers->Active=false;
 RQ_Data->LotNumbers->SQL->Clear();
 RQ_Data->LotNumbers->SQL->Add("Select distinct `ЗаказНомер` from `заказы1с_новые` where `ОсталосьВыпуститьПоГрафику`>'0'");
 RQ_Data->LotNumbers->Active=true;
 RQ_Data->LotNumbers->First();
 LotNumber->Items->Clear();
 for (int i=0; i<RQ_Data->LotNumbers->RecordCount; i++){
      LotNumber->Items->Add(RQ_Data->LotNumbers->FieldByName("ЗаказНомер")->AsString);
      RQ_Data->LotNumbers->Next();
 }



  edtProtokol->Enabled=false;
  edtSpc->Enabled=false;
  btnPrint->Enabled=false;
  edtProtokolN->Enabled=false;        
}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::ID_ChangeExecute(TObject *Sender)
{
 AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select SQL_NO_CACHE `N`,`Msk`,`File`,`Status`,`PrintSelect`,`Spc`,`Measure_ID` from psidata where Measure_ID='"+cmb_ID->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk->Clear();
 edtMsk->Items->Add(MSK);
 edtMsk->ItemIndex=0;
 edtSpc->Clear();
 edtSpc->Items->Add(Spc);
 edtSpc->ItemIndex=0;
 DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select SQL_NO_CACHE * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==Spc){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

 btnPrint->Enabled=true;
 PNForm->viewNumber->Items->Clear();
 int k=0;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

             if (edt->Checked){
                        if  (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                                 PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                                 if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=1;
                                  k++;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=0;
                                  }

                                 }
                  }
                 else{

                     PNForm->viewNumber->Items->Add(DataModule2->psiData->FieldByName("N")->AsString);
                      if (DataModule2->psiData->FieldByName("PrintSelect")->AsString=="True"){
                                  PNForm->viewNumber->ItemState[k]=1;
                                  k++;
                                  }
                                  else {
                                    PNForm->viewNumber->ItemState[k]=0;
                                  }

                    }


          DataModule2->psiData->Next();
          VrProgressBar1->Position=i+1;
      }
for (int l=0; l<PNForm->viewNumber->Count; l++){
   PNForm->viewNumber->ItemState[l]=1;

   }

  PNForm->lCount->Caption=FloatToStr(k);
  edtProtokol->Enabled=true;
  edtSpc->Enabled=true;
  btnNum->Enabled=true;
  edtProtokol->Enabled=true;
 }        
}
//---------------------------------------------------------------------------


void __fastcall TProtokolForm::LotChangeExecute(TObject *Sender)
{
RQ_Data->LotNumbers->Active=false;
 RQ_Data->LotNumbers->SQL->Clear();
 RQ_Data->LotNumbers->SQL->Add("Select distinct `Номенклатура` from `заказы1С_новые` where `ЗаказНомер`='"+LotNumber->Text+"' and `ОсталосьВыпуститьПоГрафику`>'0'");
 RQ_Data->LotNumbers->Active=true;
 RQ_Data->LotNumbers->First();
 LotSpc->Items->Clear();
 for (int i=0; i<RQ_Data->LotNumbers->RecordCount; i++){
      LotSpc->Items->Add(RQ_Data->LotNumbers->FieldByName("Номенклатура")->AsString);
      RQ_Data->LotNumbers->Next();
 }
 RQ_Data->LotNumbers->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::SpcChangeLotExecute(TObject *Sender)
{
 RQ_Data->Spc_RQ->Active=false;
   RQ_Data->Spc_RQ->SQL->Clear();
   RQ_Data->Spc_RQ->SQL->Add("Select `номенклатура` from nomeklatura_rk where `наименование`='"+LotSpc->Text+"'");
   RQ_Data->Spc_RQ->Active=true;
   RQ_Data->Spc_RQ->First();

RQ_Data->MSK_JOIN->Active=false;
 RQ_Data->MSK_JOIN->SQL->Clear();
 RQ_Data->MSK_JOIN->SQL->Add("Select `Msk_Name` from `MSK_Join` where `MSK_NOM_ID`='"+RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString+"'");
 RQ_Data->MSK_JOIN->Active=true;
 RQ_Data->MSK_JOIN->First();
 LotMSK->Items->Clear();
 for (int i=0; i<RQ_Data->MSK_JOIN->RecordCount; i++){
      LotMSK->Items->Add(RQ_Data->MSK_JOIN->FieldByName("Msk_Name")->AsString);
      RQ_Data->MSK_JOIN->Next();
 }
 RQ_Data->Spc_RQ->Active=false;
 RQ_Data->MSK_JOIN->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TProtokolForm::GetCustomerExecute(TObject *Sender)
{
DataModule2->Notification->Active=false;
DataModule2->Notification->SQL->Clear();
DataModule2->Notification->SQL->Add("Select * from `заказы1с_новые` where `ЗаказНомер`='"+LotNumber->Text+
                                        "' and `Номенклатура`='"+LotSpc->Text+"' and `ЗаказДата`='"+ZakazData_Combo->Text+"'");
DataModule2->Notification->Active=true;
CustomerName=DataModule2->Notification->FieldByName("ЗаказКонтрагент")->AsString+" "+ DataModule2->Notification->FieldByName("ГородКонтрагент")->AsString;
Dogovor=DataModule2->Notification->FieldByName("ДоговорКонтрагентаРодитель")->AsString;


}
//---------------------------------------------------------------------------








void __fastcall TProtokolForm::ZakazData_ComboChange(TObject *Sender)
{
RQ_Data->LotNumbers->Active=false;
 RQ_Data->LotNumbers->SQL->Clear();
 RQ_Data->LotNumbers->SQL->Add("Select * from `заказы1С_новые` where `ЗаказНомер`='"+LotNumber->Text+
                                "' and `Номенклатура`='"+LotSpc->Text+"' and `ЗаказДата`='"+ZakazData_Combo->Text+"' and `ОсталосьВыпуститьПоГрафику`>'0'");
 RQ_Data->LotNumbers->Active=true;
 RQ_Data->LotNumbers->First();
 Costumer_label->Caption=RQ_Data->LotNumbers->FieldByName("ЗаказКонтрагент")->AsString;
 Dogovor_label->Caption=RQ_Data->LotNumbers->FieldByName("ДоговорКонтрагентаРодитель")->AsString;
 Count_label->Caption= RQ_Data->LotNumbers->FieldByName("ОсталосьВыпуститьПоГрафику")->AsString;

 RQ_Data->LotNumbers->Active=false;

}
//---------------------------------------------------------------------------

