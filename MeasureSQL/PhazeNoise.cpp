//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PhazeNoise.h"
#include "data1.h"
#include "Data.h"
#include "PHN.h"
#include "protokol.h"
#include <ComObj.hpp>
#include  <utilcls.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzButton"
#pragma link "RzCmboBx"
#pragma link "RzPanel"
#pragma link "TeeComma"
#pragma link "RzEdit"
#pragma link "VrControls"
#pragma link "VrLeds"
#pragma link "frxBarcode"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "frxExportXLS"

#pragma link "RzSpnEdt"
#pragma link "frxExportImage"
#pragma link "frxExportRTF"
#pragma link "frxExportXML"
#pragma link "clFtp"
#pragma link "clTcpClient"
#pragma link "clMailMessage"
#pragma link "clMC"
#pragma link "clSmtp"
#pragma resource "*.dfm"
Variant  vVarApp,vVarDocs,vVarDoc;
bool fStart;
TPhazeNoiseForm *PhazeNoiseForm;
//---------------------------------------------------------------------------
__fastcall TPhazeNoiseForm::TPhazeNoiseForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPhazeNoiseForm::btnCloseClick(TObject *Sender)
{
this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TPhazeNoiseForm::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification where NameR='"+edtType->Text+"' order by Name");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
edtSpc2->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             edtSpc2->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }        
}
//---------------------------------------------------------------------------
void __fastcall TPhazeNoiseForm::FormShow(TObject *Sender)
{
DataModule2->ResonatorType->Active=true;
DataModule2->ResonatorType->First();
DataModule2->psi->Active=true;
edtType->Items->Clear();
for (int i=0;i<DataModule2->ResonatorType->RecordCount;i++){
                    edtType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    DataModule2->ResonatorType->Next();
                    }
VrLed2->Active=true;
VrLed3->Active=true;
}
//---------------------------------------------------------------------------
void __fastcall TPhazeNoiseForm::edtSpcChange(TObject *Sender)
{
edtMsk->Items->Clear();
AnsiString S,S1;


DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
DataModule2->PhazeNoise->SQL->Add("Select distinct `msk` from Phaze_Noise  where Spc='"+edtSpc->Text+"' ORDER BY msk");
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();
for (int i=0;i<DataModule2->PhazeNoise->RecordCount;i++){
             edtMsk->Items->Add(DataModule2->PhazeNoise->FieldByName("Msk")->AsString);
              DataModule2->PhazeNoise->Next();

      }
 DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
DataModule2->PhazeNoise->SQL->Add("Select distinct `MeasureID` from Phaze_Noise  where Spc='"+edtSpc->Text+"' ORDER BY MeasureID");
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();
cmb_ID->Items->Clear();
for (int i=0;i<DataModule2->PhazeNoise->RecordCount;i++){
             cmb_ID->Items->Add(DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString);
              DataModule2->PhazeNoise->Next();

      }

  edtMsk->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TPhazeNoiseForm::edtNumberChange(TObject *Sender)
{
double X,Y;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3,S4;
S3="Select * from Phaze_Noise where ";
S4="Select `N`,`Freq`,`PN` from Phaze_Noise_Data where ";
       if (edtMsk->Text!=""){
       S3=S3+"MSK='"+edtMsk->Text+"' ";
       S4=S4+"Msk='"+edtMsk->Text+"' ";
       }

      if (cmb_ID->Text!=""){
        S3="Select * from Phaze_Noise where MeasureID='"+cmb_ID->Text+"' ";
        S4="Select `N`,`Freq`,`PN` from Phaze_Noise_Data where MeasureID='"+cmb_ID->Text+"' ";
       }

       S3=S3+" and N='"+edtNumber->Text+"'"+" ORDER BY N";
       S4=S4+" and N='"+edtNumber->Text+"'"+" ORDER BY ID";


DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();

DataModule2->PhazeNoiseData->Active=false;
DataModule2->PhazeNoiseData->SQL->Clear();

DataModule2->PhazeNoiseData->SQL->Add(S4);

DataModule2->PhazeNoiseData->Active=true;
DataModule2->PhazeNoiseData->First();
DataModule2->PhazeNoise->RecordCount;
int k=DataModule2->PhazeNoiseData->RecordCount;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;

 if (DataModule2->PhazeNoiseData->RecordCount>0){
              Series2->Visible=false;
              Series1->Visible=false;
              Series3->Visible=false;
              Series4->Visible=false;
              Series5->Visible=false;
              Series6->Visible=false;
               Series2->Clear();
               Series3->Clear();
               Series4->Clear();
               Series5->Clear();
               Series6->Clear();
  for (int i=0;i<k;i++){
             X=DataModule2->PhazeNoiseData->FieldByName("Freq")->AsFloat;

             Y=DataModule2->PhazeNoiseData->FieldByName("PN")->AsFloat;
             Chart1->LeftAxis->Title->Caption="dB/Hz";
            Series2->AddXY(X,Y,"",clTeeColor);
         DataModule2->PhazeNoiseData->Next();
  }
  Chart1->Title->Clear();
   Chart1->SubTitle->Clear();
   Chart1->Foot->Clear();
   Chart1->SubFoot->Clear();
  AnsiString Status="Годен";
  AnsiString Status1="Годен";
  AnsiString Status2="Годен";
  AnsiString Status3="Годен";
  Chart1->Title->Text->Add("№  "+DataModule2->PhazeNoise->FieldByName("N")->AsString);
  Chart1->SubFoot->Text->Add("МСК  "+DataModule2->PhazeNoise->FieldByName("Msk")->AsString+"                        "+DataModule2->SqlSpec->FieldByName("Name")->AsString);
  Chart1->SubFoot->Text->Add("ID  "+DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString);
  Chart1->Foot->Text->Add("Дата  "+DataModule2->PhazeNoise->FieldByName("_Date_")->AsString+"  " +DataModule2->PhazeNoise->FieldByName("_Time_")->AsString);

   DataModule2->PHUser->Active=false;
   DataModule2->PHUser->SQL->Clear();
   DataModule2->PHUser->SQL->Add("Select * from пользователи where PH_Login='"+DataModule2->PhazeNoise->FieldByName("Operator")->AsString+"'");
   DataModule2->PHUser->Active=true;
   Chart1->Foot->Text->Add("Выполнил      "+DataModule2->PHUser->FieldByName("Fname")->AsString);
   Chart1->Foot->Text->Add("Идентификатор замера  "+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString);
  if (DataModule2->SqlSpec->FieldByName("Shum")->AsString=="True"){
      AnsiString Marker1=">1 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker1=Marker1+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker1=Marker1+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker1=Marker1+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker1=Marker1+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker1=Marker1+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker1=Marker1+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker1=Marker1+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker1=Marker1+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("ShMax")->AsFloat){
               Status="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("ShMin")->AsFloat){
               Status="Брак";
              }
         }
         Marker1 = Marker1+"  "+Status;
         Series3->AddXY(DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat,data,"",black);
         Series3->Visible=true;


         Chart1->Foot->Text->Add("Норма 1 отстройка "+DataModule2->SqlSpec->FieldByName("ShOT")->AsString+"ГЦ >"+DataModule2->SqlSpec->FieldByName("ShMin")->AsString+"dB/Hz");
         Chart1->SubTitle->Text->Add(Marker1);
  }
  if (DataModule2->SqlSpec->FieldByName("Shum1")->AsString=="True"){
      AnsiString Marker2=">2 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker2=Marker2+"1Hz   "+ FormatFloat("0.00",data);
         }
          else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker2=Marker2+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker2=Marker2+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker2=Marker2+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker2=Marker2+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker2=Marker2+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker2=Marker2+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker2=Marker2+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh1Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh1Max")->AsFloat){
               Status1="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh1Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh1Min")->AsFloat){
               Status1="Брак";
              }
         }
         Series4->AddXY(DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat,data,"",black);
         Series4->Visible=true;
         Chart1->Foot->Text->Add("Норма 2 отстройка "+DataModule2->SqlSpec->FieldByName("Sh1OT")->AsString+"Гц >"+DataModule2->SqlSpec->FieldByName("Sh1Min")->AsString+"dB/Hz");
         Marker2 = Marker2+"  "+Status1;
         Chart1->SubTitle->Text->Add(Marker2);
  }
 if (DataModule2->SqlSpec->FieldByName("Shum2")->AsString=="True"){
      AnsiString Marker3=">3 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker3=Marker3+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker3=Marker3+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker3=Marker3+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker3=Marker3+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker3=Marker3+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker3=Marker3+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker3=Marker3+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker3=Marker3+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh2Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh2Max")->AsFloat){
               Status2="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh2Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh2Min")->AsFloat){
               Status2="Брак";
              }
         }
         Series5->AddXY(DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat,data,"",black);
         Series5->Visible=true;
         Chart1->Foot->Text->Add("Норма 3 отстройка "+DataModule2->SqlSpec->FieldByName("Sh2OT")->AsString+"Гц >"+DataModule2->SqlSpec->FieldByName("Sh2Min")->AsString+"dB/Hz");
         Marker3 = Marker3+"  "+Status2;
         Chart1->SubTitle->Text->Add(Marker3);
  }
   if (DataModule2->SqlSpec->FieldByName("Shum3")->AsString=="True"){
      AnsiString Marker4=">4 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker4=Marker4+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker4=Marker4+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker4=Marker4+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker4=Marker4+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker4=Marker4+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker4=Marker4+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker4=Marker4+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker4=Marker4+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh3Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh3Max")->AsFloat){
               Status3="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh3Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh3Min")->AsFloat){
               Status3="Брак";
              }
         }
         Series6->AddXY(DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat,data,"",black);
         Series6->Visible=true;
         Marker4 = Marker4+"  "+Status3;
         Chart1->Foot->Text->Add("Норма 4 отстройка "+DataModule2->SqlSpec->FieldByName("Sh3OT")->AsString+"Гц >"+DataModule2->SqlSpec->FieldByName("Sh3Min")->AsString+"dB/Hz");
         Chart1->SubTitle->Text->Add(Marker4);

  }
  Chart1->BottomAxis->Logarithmic=true;
  Series2->Visible=true;
   }
   else {

    ShowMessage("Данные отсутствуют");
   }
}
//---------------------------------------------------------------------------
void __fastcall TPhazeNoiseForm::btnMakeClick(TObject *Sender)
{
DataModule2->PhazeNoise1->Active=false;
DataModule2->PhazeNoise1->SQL->Clear();
AnsiString Status;
  AnsiString Status1;
  AnsiString Status2;
  AnsiString Status3;
AnsiString S5;
 S5="Select * from Phaze_Noise where Spc='"+edtSpc->Text+"' and ";
       if (edtMsk->Text!=""  & !edtMsk->Text.IsEmpty()){
       S5=S5+"Msk='"+edtMsk->Text+"'";
             if (cmb_ID->Text!="" & !cmb_ID->Text.IsEmpty()){
                S5=S5+" and MeasureID='"+cmb_ID->Text+"' ";

               }
       }
       else {
             if (cmb_ID->Text!="" & !cmb_ID->Text.IsEmpty()){
                S5=S5+"MeasureID='"+cmb_ID->Text+"' ";

               }
               else {
                ShowMessage("Данные для печати не найдены повторите ввод");
               }
       }


       S5=S5+"ORDER BY N";
DataModule2->PhazeNoise1->SQL->Add(S5);
DataModule2->PhazeNoise1->Active=true;
DataModule2->PhazeNoise1->First();
 TPrinter *Prntr = Printer();
  int count=0;
int countMax;
if (CheckBox1->Checked){
 countMax=1;
}
else {
countMax=7;
}

 for (int j=0; j<DataModule2->PhazeNoise1->RecordCount;j++){
double X,Y;


DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3,S4;
S3="Select * from Phaze_Noise where ";
S4="Select * from Phaze_Noise_Data where ";
       if (edtMsk->Text!="" || !edtMsk->Text.IsEmpty()){
       S3=S3+"MSK='"+edtMsk->Text+"' ";
       S4=S4+"Msk='"+edtMsk->Text+"' ";
       }

      if (cmb_ID->Text!=""){
        S3="Select * from Phaze_Noise where MeasureID='"+cmb_ID->Text+"' ";
        S4="Select * from Phaze_Noise_Data where MeasureID='"+cmb_ID->Text+"' ";
       }

       S3=S3+" and N='"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+"'"+" ORDER BY N";
       S4=S4+" and N='"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+"'"+" ORDER BY ID";


DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();

DataModule2->PhazeNoiseData->Active=false;
DataModule2->PhazeNoiseData->SQL->Clear();

DataModule2->PhazeNoiseData->SQL->Add(S4);

DataModule2->PhazeNoiseData->Active=true;
DataModule2->PhazeNoiseData->First();
DataModule2->PhazeNoise->RecordCount;
int k=DataModule2->PhazeNoiseData->RecordCount;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;


              Series2->Visible=false;
              Series1->Visible=false;
              Series3->Visible=false;
              Series4->Visible=false;
              Series5->Visible=false;
              Series6->Visible=false;
               Series2->Clear();
               Series3->Clear();
               Series4->Clear();
               Series5->Clear();
               Series6->Clear();
 if (DataModule2->PhazeNoiseData->RecordCount>0){
  for (int i=0;i<k;i++){
             X=DataModule2->PhazeNoiseData->FieldByName("Freq")->AsFloat;

             Y=DataModule2->PhazeNoiseData->FieldByName("PN")->AsFloat;
             Chart1->LeftAxis->Title->Caption="dB/Hz";
            Series2->AddXY(X,Y,"",clTeeColor);
         DataModule2->PhazeNoiseData->Next();
  }
  }
  Chart1->Title->Clear();
   Chart1->SubTitle->Clear();
   Chart1->Foot->Clear();
   Chart1->SubFoot->Clear();
  Status="Годен";
  Status1="Годен";
  Status2="Годен";
  Status3="Годен";
  Chart1->Title->Text->Add("№  "+DataModule2->PhazeNoise1->FieldByName("N")->AsString);
  Chart1->SubFoot->Text->Add("МСК  "+DataModule2->PhazeNoise1->FieldByName("Msk")->AsString+"                        "+DataModule2->SqlSpec->FieldByName("Name")->AsString);
  Chart1->SubFoot->Text->Add("ID  "+DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString);
  Chart1->Foot->Text->Add("Дата  "+DataModule2->PhazeNoise->FieldByName("_Date_")->AsString+"  " +DataModule2->PhazeNoise->FieldByName("_Time_")->AsString);
   DataModule2->PHUser->Active=false;
   DataModule2->PHUser->SQL->Clear();
   DataModule2->PHUser->SQL->Add("Select * from пользователи where PH_Login='"+DataModule2->PhazeNoise->FieldByName("Operator")->AsString+"'");
   DataModule2->PHUser->Active=true;
   Chart1->Foot->Text->Add("Выполнил      "+DataModule2->PHUser->FieldByName("Fname")->AsString);
   Chart1->Foot->Text->Add("Идентификатор замера  "+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString);
  if (DataModule2->SqlSpec->FieldByName("Shum")->AsString=="True"){
      AnsiString Marker1=">1 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker1=Marker1+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==3){

        data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
           Marker1=Marker1+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker1=Marker1+"10Hz   "+ FormatFloat("0.00",data);
         }
          else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==50){
               data=DataModule2->PhazeNoise->FieldByName("Shum50")->AsFloat;
               Marker1=Marker1+"50Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker1=Marker1+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker1=Marker1+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker1=Marker1+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker1=Marker1+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker1=Marker1+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("ShMax")->AsFloat){
               Status="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("ShMin")->AsFloat){
               Status="Брак";
              }
         }
         Series3->AddXY(DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat,data,"",black);



         Chart1->Foot->Text->Add("Норма 1 отстройка "+DataModule2->SqlSpec->FieldByName("ShOT")->AsString+"ГЦ >"+DataModule2->SqlSpec->FieldByName("ShMin")->AsString+"dB/Hz");
         Marker1 = Marker1+"  "+Status;
         Chart1->SubTitle->Text->Add(Marker1);
  }
  if (DataModule2->SqlSpec->FieldByName("Shum1")->AsString=="True"){
      AnsiString Marker2=">2 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker2=Marker2+"1Hz   "+ FormatFloat("0.00",data);
         }
           else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==3){

        data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
           Marker2=Marker2+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker2=Marker2+"10Hz   "+ FormatFloat("0.00",data);
         }
          else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==50){
               data=DataModule2->PhazeNoise->FieldByName("Shum50")->AsFloat;
               Marker2=Marker2+"50Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker2=Marker2+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker2=Marker2+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker2=Marker2+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker2=Marker2+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker2=Marker2+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh1Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh1Max")->AsFloat){
               Status1="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh1Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh1Min")->AsFloat){
               Status1="Брак";
              }
         }
         Series4->AddXY(DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat,data,"",black);



         Chart1->Foot->Text->Add("Норма 2 отстройка "+DataModule2->SqlSpec->FieldByName("Sh1OT")->AsString+"ГЦ >"+DataModule2->SqlSpec->FieldByName("Sh1Min")->AsString+"dB/Hz");
         Marker2 = Marker2+"  "+Status1;
         Chart1->SubTitle->Text->Add(Marker2);
  }
 if (DataModule2->SqlSpec->FieldByName("Shum2")->AsString=="True"){
      AnsiString Marker3=">3 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker3=Marker3+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker3=Marker3+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker3=Marker3+"10Hz   "+ FormatFloat("0.00",data);
         }
          else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==50){
               data=DataModule2->PhazeNoise->FieldByName("Shum50")->AsFloat;
               Marker3=Marker3+"50Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker3=Marker3+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker3=Marker3+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker3=Marker3+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker3=Marker3+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker3=Marker3+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh2Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh2Max")->AsFloat){
               Status2="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh2Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh2Min")->AsFloat){
               Status2="Брак";
              }
         }
         Series5->AddXY(DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat,data,"",black);



         Chart1->Foot->Text->Add("Норма 3 отстройка "+DataModule2->SqlSpec->FieldByName("Sh2OT")->AsString+"ГЦ >"+DataModule2->SqlSpec->FieldByName("Sh2Min")->AsString+"dB/Hz");
         Marker3 = Marker3+"  "+Status2;
         Chart1->SubTitle->Text->Add(Marker3);
  }
   if (DataModule2->SqlSpec->FieldByName("Shum3")->AsString=="True"){
      AnsiString Marker4=">4 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker4=Marker4+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker4=Marker4+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker4=Marker4+"10Hz   "+ FormatFloat("0.00",data);
         }
           else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==50){
               data=DataModule2->PhazeNoise->FieldByName("Shum50")->AsFloat;
               Marker4=Marker4+"50Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker4=Marker4+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker4=Marker4+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker4=Marker4+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker4=Marker4+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker4=Marker4+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh3Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh3Max")->AsFloat){
               Status3="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh3Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh3Min")->AsFloat){
               Status3="Брак";
              }
         }
         Series6->AddXY(DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat,data,"",black);



         Chart1->Foot->Text->Add("Норма 4 отстройка "+DataModule2->SqlSpec->FieldByName("Sh3OT")->AsString+"ГЦ >"+DataModule2->SqlSpec->FieldByName("Sh3Min")->AsString+"dB/Hz");
         Marker4 = Marker4+"  "+Status3;
         Chart1->SubTitle->Text->Add(Marker4);

  }
  Chart1->BottomAxis->Logarithmic=true;
  Series2->Visible=true;

if (edt->Checked==true){
   if (Status=="Годен" & Status1=="Годен" & Status2=="Годен" & Status3=="Годен"){

           if (CheckBox2->Checked){
                int u=0;
                  for (int y=0;y<PHNForm->viewNumber->Count;y++){
                        if (DataModule2->PhazeNoise->FieldByName("N")->AsString==PHNForm->viewNumber->Items->Strings[y] & PHNForm->viewNumber->ItemState[y]!=0){
                           u=1;
                           break;
                           }
                        u=0;
                  }
                if (u==1){
                  if (count==0){
                          Prntr->BeginDoc();
                                 }
                   if (CheckBox1->Checked){

                                       if (DataModule2->SqlSpec->FieldByName("Shum")->AsString=="True"){
                                                                         Series3->Visible=true;
                                        }
                                       if (DataModule2->SqlSpec->FieldByName("Shum1")->AsString=="True"){
                                                                        Series4->Visible=true;
                                       }
                                       if (DataModule2->SqlSpec->FieldByName("Shum2")->AsString=="True"){
                                                                        Series5->Visible=true;
                                       }
                                       if (DataModule2->SqlSpec->FieldByName("Shum3")->AsString=="True"){
                                                                        Series6->Visible=true;
                                       }
                                       if(count==0){
                                                                         TRect r(50,50,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                                                        Chart1->PrintPartial(r);
                                       }
                                       else if (count==1){
                                                                        TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight);
                                                                         Chart1->PrintPartial(r);
                                       }
                   }
                  else {


                        if(count==0){
                                         TRect r(50,50,Prntr->PageWidth*0.5,Prntr->PageHeight*0.25);
                                         Chart1->PrintPartial(r);
                                        }
                         else if (count==1){
                                        TRect r(50,Prntr->PageHeight*0.25,Prntr->PageWidth*0.5,Prntr->PageHeight*0.5);
                                         Chart1->PrintPartial(r);
                                        }
                        else if (count==2){
                                        TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth*0.5,Prntr->PageHeight*0.75);
                                        Chart1->PrintPartial(r);
                                        }
                        else if (count==3){
                                         TRect r(50,Prntr->PageHeight*0.75,Prntr->PageWidth*0.5,Prntr->PageHeight);
                                        Chart1->PrintPartial(r);
                                         }
                         else  if(count==4){
                                         TRect r(Prntr->PageWidth*0.5,50,Prntr->PageWidth,Prntr->PageHeight*0.25);
                                          Chart1->PrintPartial(r);
                                         }
                         else if (count==5){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.25,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                         Chart1->PrintPartial(r);
                                        }
                         else if (count==6){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight*0.75);
                                         Chart1->PrintPartial(r);
                                                 }
                        else if (count==7){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.75,Prntr->PageWidth,Prntr->PageHeight);
                                                Chart1->PrintPartial(r);
                                         }
                         }
                       count++;
                      }
                   }
               else {
                        if (count==0){
                                   Prntr->BeginDoc();
                                       }
                     if (CheckBox1->Checked){
                                       if (DataModule2->SqlSpec->FieldByName("Shum")->AsString=="True"){
                                                                         Series3->Visible=true;
                                        }
                                       if (DataModule2->SqlSpec->FieldByName("Shum1")->AsString=="True"){
                                                                        Series4->Visible=true;
                                       }
                                       if (DataModule2->SqlSpec->FieldByName("Shum2")->AsString=="True"){
                                                                        Series5->Visible=true;
                                       }
                                       if (DataModule2->SqlSpec->FieldByName("Shum3")->AsString=="True"){
                                                                        Series6->Visible=true;
                                       }
                                       if(count==0){
                                                                         TRect r(50,50,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                                                        Chart1->PrintPartial(r);
                                       }
                                       else if (count==1){
                                                                        TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight);
                                                                         Chart1->PrintPartial(r);
                                       }
                   }
                  else {

                        if(count==0){
                                         TRect r(50,50,Prntr->PageWidth*0.5,Prntr->PageHeight*0.25);
                                         Chart1->PrintPartial(r);
                                        }
                         else if (count==1){
                                        TRect r(50,Prntr->PageHeight*0.25,Prntr->PageWidth*0.5,Prntr->PageHeight*0.5);
                                         Chart1->PrintPartial(r);
                                        }
                        else if (count==2){
                                        TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth*0.5,Prntr->PageHeight*0.75);
                                        Chart1->PrintPartial(r);
                                        }
                        else if (count==3){
                                         TRect r(50,Prntr->PageHeight*0.75,Prntr->PageWidth*0.5,Prntr->PageHeight);
                                        Chart1->PrintPartial(r);
                                         }
                         else  if(count==4){
                                         TRect r(Prntr->PageWidth*0.5,50,Prntr->PageWidth,Prntr->PageHeight*0.25);
                                          Chart1->PrintPartial(r);
                                         }
                         else if (count==5){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.25,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                         Chart1->PrintPartial(r);
                                        }
                         else if (count==6){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight*0.75);
                                         Chart1->PrintPartial(r);
                                                 }
                        else if (count==7){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.75,Prntr->PageWidth,Prntr->PageHeight);
                                                Chart1->PrintPartial(r);
                                         }
                         }
                     count++;

                  }


        }
}
   else {

        if (CheckBox2->Checked){
                   int u=0;
                  for (int y=0;y<PHNForm->viewNumber->Count;y++){
                        if (DataModule2->PhazeNoise->FieldByName("N")->AsString==PHNForm->viewNumber->Items->Strings[y] & PHNForm->viewNumber->ItemState[y]!=0){
                           u=1;
                           break;
                           }
                        u=0;
                  }
                if (u==1){
                 if (count==0){
                               Prntr->BeginDoc();
                               }
                 if (CheckBox1->Checked){

                                 if (DataModule2->SqlSpec->FieldByName("Shum")->AsString=="True"){
                                         Series3->Visible=true;
                                 }
                                 if (DataModule2->SqlSpec->FieldByName("Shum1")->AsString=="True"){
                                        Series4->Visible=true;
                                 }
                                if (DataModule2->SqlSpec->FieldByName("Shum2")->AsString=="True"){
                                         Series5->Visible=true;
                                 }
                                 if (DataModule2->SqlSpec->FieldByName("Shum3")->AsString=="True"){
                                        Series6->Visible=true;
                                 }
                                if(count==0){
                                             TRect r(50,50,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                                 Chart1->PrintPartial(r);
                                 }
                                 else if (count==1){
                                                TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight);
                                                 Chart1->PrintPartial(r);
                                 }
                }
                else {

                                if(count==0){
                                         TRect r(50,50,Prntr->PageWidth*0.5,Prntr->PageHeight*0.25);
                                        Chart1->PrintPartial(r);
                                }
                                else if (count==1){
                                        TRect r(50,Prntr->PageHeight*0.25,Prntr->PageWidth*0.5,Prntr->PageHeight*0.5);
                                         Chart1->PrintPartial(r);
                                 }
                                 else if (count==2){
                                        TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth*0.5,Prntr->PageHeight*0.75);
                                         Chart1->PrintPartial(r);
                                 }
                                 else if (count==3){
                                        TRect r(50,Prntr->PageHeight*0.75,Prntr->PageWidth*0.5,Prntr->PageHeight);
                                        Chart1->PrintPartial(r);
                                 }
                                else  if(count==4){
                                         TRect r(Prntr->PageWidth*0.5,50,Prntr->PageWidth,Prntr->PageHeight*0.25);
                                                Chart1->PrintPartial(r);
                                 }
                                else if (count==5){
                                        TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.25,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                        Chart1->PrintPartial(r);
                                 }
                                 else if (count==6){
                                        TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight*0.75);
                                         Chart1->PrintPartial(r);
                                 }
                                 else if (count==7){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.75,Prntr->PageWidth,Prntr->PageHeight);
                                         Chart1->PrintPartial(r);
                                }
                    }
                count++;
               }
           }
          else {

                if (CheckBox1->Checked){
                if (count==0){
                               Prntr->BeginDoc();
                               }
                                 if (DataModule2->SqlSpec->FieldByName("Shum")->AsString=="True"){
                                         Series3->Visible=true;
                                 }
                                 if (DataModule2->SqlSpec->FieldByName("Shum1")->AsString=="True"){
                                        Series4->Visible=true;
                                 }
                                if (DataModule2->SqlSpec->FieldByName("Shum2")->AsString=="True"){
                                         Series5->Visible=true;
                                 }
                                 if (DataModule2->SqlSpec->FieldByName("Shum3")->AsString=="True"){
                                        Series6->Visible=true;
                                 }
                                if(count==0){
                                             TRect r(50,50,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                                 Chart1->PrintPartial(r);
                                 }
                                 else if (count==1){
                                                TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight);
                                                 Chart1->PrintPartial(r);
                                 }
                }
                else {
                             if (count==0){
                                   Prntr->BeginDoc();
                                       }
                                if(count==0){
                                         TRect r(50,50,Prntr->PageWidth*0.5,Prntr->PageHeight*0.25);
                                        Chart1->PrintPartial(r);
                                }
                                else if (count==1){
                                        TRect r(50,Prntr->PageHeight*0.25,Prntr->PageWidth*0.5,Prntr->PageHeight*0.5);
                                         Chart1->PrintPartial(r);
                                 }
                                 else if (count==2){
                                        TRect r(50,Prntr->PageHeight*0.5,Prntr->PageWidth*0.5,Prntr->PageHeight*0.75);
                                         Chart1->PrintPartial(r);
                                 }
                                 else if (count==3){
                                        TRect r(50,Prntr->PageHeight*0.75,Prntr->PageWidth*0.5,Prntr->PageHeight);
                                        Chart1->PrintPartial(r);
                                 }
                                else  if(count==4){
                                         TRect r(Prntr->PageWidth*0.5,50,Prntr->PageWidth,Prntr->PageHeight*0.25);
                                                Chart1->PrintPartial(r);
                                 }
                                else if (count==5){
                                        TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.25,Prntr->PageWidth,Prntr->PageHeight*0.5);
                                        Chart1->PrintPartial(r);
                                 }
                                 else if (count==6){
                                        TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.5,Prntr->PageWidth,Prntr->PageHeight*0.75);
                                         Chart1->PrintPartial(r);
                                 }
                                 else if (count==7){
                                         TRect r(Prntr->PageWidth*0.5,Prntr->PageHeight*0.75,Prntr->PageWidth,Prntr->PageHeight);
                                         Chart1->PrintPartial(r);
                                }
                 }
                count++;




          }
   }

   if (count>countMax){
   Prntr->EndDoc();
   count=0;
   }
   DataModule2->PhazeNoise1->Next();
  
  }
  if (count<=countMax & count>0){
   Prntr->EndDoc();

  }
  if (Prntr->Printing){
   Prntr->EndDoc();
  }

}
//---------------------------------------------------------------------------

void __fastcall TPhazeNoiseForm::btnAppClick(TObject *Sender)
{
 DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where Measure_ID='"+edtMeasure_ID->Text+"' order by N");
DataModule2->psiData->Active=true;

DataModule2->PhazeNoise1->Active=false;
DataModule2->PhazeNoise1->SQL->Clear();
AnsiString sql;
if (edtMsk->Text==""){
 sql="Select * from Phaze_Noise where MeasureID='"+cmb_ID->Text+"'";

  sql=sql+" order by N";
}
else {
 sql="Select * from Phaze_Noise where MSK='"+edtMsk->Text+"'";
   if (cmb_ID->Text!=""){
   sql=sql+" and MeasureID='"+cmb_ID->Text+"'";

  }
  sql=sql+" order by N";
}
DataModule2->PhazeNoise1->SQL->Add(sql);
DataModule2->PhazeNoise1->Active=true;
DataModule2->PhazeNoise1->First();
DataModule2->psiData->First();
DataModule2->PhazeNoise1->RecordCount;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;

for (int i=0;i<DataModule2->PhazeNoise1->RecordCount; i++){
                DataModule2->psiData->First();
               for(int j=0; j<DataModule2->psiData->RecordCount; j++){
                   if (DataModule2->PhazeNoise1->FieldByName("N")->AsString==DataModule2->psiData->FieldByName("N")->AsString){
                         DataModule2->psiData->Edit();
                          if(DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1){
                                 DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum1")->AsFloat;
                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==3){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum3")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum10")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==50){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum50")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==100){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum100")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1000){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum1K")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10000){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum10K")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1E+5){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum100K")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1E+6){
                                DataModule2->psiData->FieldByName("Shum")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum1M")->AsFloat;

                            }

                            if(DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1){
                                 DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum1")->AsFloat;
                            }
                             else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==3){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum3")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum10")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==50){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum50")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==100){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum100")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1000){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum1K")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10000){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum10K")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1E+5){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum100K")->AsFloat;

                            }
                            else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1E+6){
                                DataModule2->psiData->FieldByName("Shum_1")->AsFloat=-DataModule2->PhazeNoise1->FieldByName("Shum1M")->AsFloat;

                            }
                          DataModule2->psiData->FieldByName("PH_ID")->AsString=DataModule2->PhazeNoise1->FieldByName("MeasureID")->AsString;
                          DataModule2->psiData->FieldByName("PH_Analyser")->AsString=DataModule2->PhazeNoise1->FieldByName("Pribor_Type")->AsString;
                          DataModule2->psiData->FieldByName("PH_OCS")->AsString=DataModule2->PhazeNoise1->FieldByName("Generator_SN")->AsString;
                          DataModule2->psiData->FieldByName("PH_Analyser_SN")->AsString=DataModule2->PhazeNoise1->FieldByName("Pribor_SN")->AsString;
                         DataModule2->psiData->Post();
                    break;
                   }
                 DataModule2->psiData->Next();
               }
            DataModule2->PhazeNoise1->Edit();
            DataModule2->PhazeNoise1->FieldByName("Lot")->AsString=DataModule2->psiData->FieldByName("Lot_Date")->AsString;
            DataModule2->PhazeNoise1->FieldByName("Inc")->AsString=DataModule2->psiData->FieldByName("type")->AsString;
            DataModule2->PhazeNoise1->Post();

            DataModule2->PhazeNoise1->Next();


}

 VrLed1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TPhazeNoiseForm::edtMeasure_IDChange(TObject *Sender)
{
VrLed1->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TPhazeNoiseForm::RzButton2Click(TObject *Sender)
{
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S5;
AnsiString FName;
AnsiString FullFileName;
AnsiString FtpFileName;
 S5="Select * from Phaze_Noise where Spc='"+edtSpc->Text+"' and ";
       if (edtMsk->Text!=""  & !edtMsk->Text.IsEmpty()){
       S5=S5+"Msk='"+edtMsk->Text+"'";
             if (cmb_ID->Text!="" & !cmb_ID->Text.IsEmpty()){
                S5=S5+" and MeasureID='"+cmb_ID->Text+"' ";

               }
       }
       else {
             if (cmb_ID->Text!="" & !cmb_ID->Text.IsEmpty()){
                S5=S5+"MeasureID='"+cmb_ID->Text+"' ";

               }
               else {
                ShowMessage("Данные для печати не найдены повторите ввод");
               }
       }
      S5=S5+" Order by N";
DataModule2->PhazeNoise->SQL->Add(S5);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();
 FName=DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString+"_"+DataModule2->PhazeNoise->FieldByName("_Date_")->AsString;
 FtpFileName=DataModule2->PhazeNoise->FieldByName("Lot")->AsString+"_"+DataModule2->PhazeNoise->FieldByName("_Date_")->AsString;
 if (DataModule2->PhazeNoise->FieldByName("inc")->AsString=="True"){
  FtpFileName=FtpFileName+"_Incoming";
 }
 FtpFileName=FtpFileName+".pdf";
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;
  AnsiString FieldName;
        if (CheckBox3->Checked==true){
            FieldName="PhazeNoise";


        }
        else {
          FieldName="PhazeNoiseM";
        }

DataModule2->Print->Active=false;
DataModule2->Print->SQL->Clear();
DataModule2->Print->SQL->Add("Select `"+FieldName+"` from `print_data` where `ID`='"+DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString+"'");
DataModule2->Print->Active=true;
DataModule2->Print->First();
AnsiString PrintFileName="";
        if (DataModule2->Print->RecordCount>0){
                 PrintFileName=DataModule2->Print->FieldByName(FieldName)->AsString;
               }
DataModule2->Print->Active=false;



          if (PrintFileName!=""){
                DataModule2->Print_Files->Active=false;
                DataModule2->Print_Files->SQL->Clear();
                DataModule2->Print_Files->SQL->Add("Select SQL_NO_CACHE * from `print_files` where `Name`='"+PrintFileName+"'");
                DataModule2->Print_Files->Active=true;
                DataModule2->Print_Files->First();
                DataModule1->Options->Active=false;
                DataModule1->Options->Active=true;
                         if (DataModule2->Print_Files->RecordCount>0){
                                 TStream *FStream;
                                 FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
                                 frxReport1->LoadFromStream(FStream);
                                 DataModule2->Print_Files->Active=false;
                                 frxReport1->PrepareReport(true);
                                frxReport1->ShowPreparedReport();
             AnsiString sqlex;
             sqlex="Update  ReportExport set  PHFile='"+FName+".pdf',ExportPHFile='"+FtpFileName+"' where Measure_ID='"+DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString+"'";
             DataModule1->InsertExportReport->SQL->Clear();
             DataModule1->InsertExportReport->SQL->Add(sqlex);
             DataModule1->InsertExportReport->Execute();
             clSmtp1->Open();
              clSmtp1->MailToList->Clear();
             clSmtp1->MailToList->Add("ExportAll@npk2.morion");
  AnsiString HTMLtext1;
              HTMLtext1="<html><body><h2>Измерена МСК&nbsp; &nbsp; <font color=\"#FF0000\">";
              HTMLtext1=HTMLtext1+DataModule2->PhazeNoise->FieldByName("MSK")->AsString+"</font></h2><p>Спецификация&nbsp; &nbsp; <font color=\"#FF0000\">";
              HTMLtext1=HTMLtext1+DataModule2->PhazeNoise->FieldByName("Spc")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Идентификатор замера ПСИ&nbsp; &nbsp;<font color=\"#FF0000\">"+DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Идентификатор замера ФШ&nbsp; &nbsp; &nbsp; <font color=\"#FF0000\">"+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Дата измерения&nbsp; &nbsp; &nbsp; &nbsp; <font color=\"#FF0000\">" +DataModule2->PhazeNoise->FieldByName("_Date_")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Изготовитель&nbsp; &nbsp; <font color=\"#FF0000\">" +DataModule2->PhazeNoise->FieldByName("Lot")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Лот&nbsp; &nbsp; <font color=\"#FF0000\">" +DataModule2->PhazeNoise->FieldByName("Inc")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Ссылка на протокол измерений&nbsp;</p><p><font color=\"#0000FF\">" ;
              HTMLtext1=HTMLtext1+"http://172.16.20.18/FTPROOT/ReportsPDF/PhazeNoise/"+FName+".pdf"+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>&nbsp;Ссылка на протокол экспорта</p><p><font color=\"#0000FF\">" ;
               HTMLtext1=HTMLtext1+"http://172.16.20.18/FTPROOT/Export/PhazeNoise/"+FtpFileName+"</font></p><p>&nbsp;</p>";
               clMailMessage1->BuildMessage("ФШ",HTMLtext1);
clMailMessage1->Subject="Фазовые шумы   МСК  "+DataModule2->PhazeNoise->FieldByName("MSK")->AsString;
clSmtp1->Send();
clSmtp1->Close();

DataModule1->Oversight->Active=false;
DataModule1->Oversight->SQL->Clear();
DataModule1->Oversight->SQL->Add("Select SQL_NO_CACHE * from Oversight");
DataModule1->Oversight->Active=true;
DataModule1->Oversight->First();
for (int i=0;i<DataModule1->Oversight->RecordCount;i++){
  boolean send=false;
        if (DataModule1->Oversight->FieldByName("MSK")->AsString=="True"){
            if (DataModule2->PhazeNoise->FieldByName("Msk")->AsString==DataModule1->Oversight->FieldByName("MSK_Value")->AsString){
              send=true;
            }

        }
        else if(DataModule1->Oversight->FieldByName("Spc")->AsString=="True"){
           if (DataModule2->SqlSpec->FieldByName("ID")->AsString==DataModule1->Oversight->FieldByName("Spc_ID")->AsString){
              send=true;
            }
           }
         else if(DataModule1->Oversight->FieldByName("Type")->AsString=="True" & DataModule1->Oversight->FieldByName("Factory")->AsString=="True"){
            if (DataModule2->SqlSpec->FieldByName("NameR")->AsString==DataModule1->Oversight->FieldByName("Type_ID")->AsString & DataModule2->PhazeNoise->FieldByName("Inc")->AsString==DataModule1->Oversight->FieldByName("Factory_ID")->AsString){
              send=true;

             }
            }
           else if(DataModule1->Oversight->FieldByName("Type")->AsString=="True" & DataModule1->Oversight->FieldByName("Factory")->AsString=="False"){
            if (DataModule2->SqlSpec->FieldByName("NameR")->AsString==DataModule1->Oversight->FieldByName("Type_ID")->AsString){
              send=true;

             }
            }
          if (send){
           DataModule1->Email->Active=false;
           DataModule1->Email->SQL->Clear();
           DataModule1->Email->SQL->Add("Select * from Email where ID='"+DataModule1->Oversight->FieldByName("Email_ID")->AsString+"'");
           DataModule1->Email->Active=true;
           DataModule1->Email->First();
           clSmtp1->MailToList->Clear();
           clSmtp1->Open();
            clSmtp1->MailToList->Clear();
              for (int j=0;j<DataModule1->Email->RecordCount;j++){
                clSmtp1->MailToList->Add(DataModule1->Email->FieldByName("Mail")->AsString);
                DataModule1->Email->Next();
              }

              clMailMessage1->BuildMessage("ФШ",HTMLtext1);
              clMailMessage1->Subject="Фазовые шумы(Наблюдение)  МСК  "+DataModule2->PhazeNoise->FieldByName("MSK")->AsString;
            clSmtp1->Send();
            clSmtp1->Close();
          }

    DataModule1->Oversight->Next();
}

                if (DataModule1->Options->FieldByName("Send_data_to_ftp")->AsString=="True"){
                   AnsiString ftpDr=DataModule1->Options->FieldByName("LocDyr")->AsString+"//PhazeNoise";
                   AnsiString ftpFileName;
                    if (DataModule1->Options->FieldByName("Filtr")->AsString=="PDF"){
                    ftpFileName=FName+".pdf";
                      if(DataModule1->Options->FieldByName("Export_Type")->AsFloat==1){
                                FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\"+FName+".pdf";
                                 frxPDFExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\"+FName+".pdf";
                                 frxReport1->Export(frxPDFExport1);
                                 }
                                 else if (DataModule1->Options->FieldByName("Export_Type")->AsFloat==2){
                                 AnsiString FF=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\RTF\\"+FName+".rtf";
                                   frxRTFExport1->FileName=FF;
                                   frxReport1->Export(frxRTFExport1);
                                   if(!fStart)
                                           {
                                                try
                                                {
                                                 vVarApp=CreateOleObject("Word.Application");
                                                 vVarApp.OlePropertySet("Visible",false);
                                                fStart=true;
                                                         }
                                                        catch(...)
                                                                   {
                                                         MessageBox(0, "Ошибка при открытии сервера word",
                                                                         "Ошибка", MB_OK);
                                                                  return;
                                                                 }
                                                         }

                                          if (fStart){
                                              try{
                                                 vVarDocs=vVarApp.OlePropertyGet("Documents");
                                                 vVarDocs.OleProcedure("Open",FF.c_str());
                                                 vVarApp.OlePropertySet("DisplayAlerts",false);
                                                 vVarDoc=vVarDocs.OleFunction("Item",1);
                                                 AnsiString FF1=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\"+FName+".pdf";
                                                 vVarDoc.OleProcedure("SaveAs",FF1.c_str(),17,false,"",true,"",false,false,false,false,false);
                                                vVarApp.OleProcedure("Quit");
                                                 FullFileName=FF1;
                                                 fStart= false;
                                              }
                                              catch(...){
                                                MessageBox(0, "Ошибка открытия файла","Ошибка",MB_OK);
                                                fStart= false;
                                                vVarApp.OleProcedure("Quit");
                                              }


                                          }



                                 }
                      }
                      else if (DataModule1->Options->FieldByName("Filtr")->AsString=="XLS"){
                      ftpFileName=FName+".xls";
                      FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\XLS\\"+FName+".xls";
                      frxXLSExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\XLS\\"+FName+".xls";
                       frxReport1->Export(frxXLSExport1);
                       ftpDr=ftpDr+"//XLS";
                      }
                      else if (DataModule1->Options->FieldByName("Filtr")->AsString=="XML"){
                      ftpFileName=FName+".xls";
                       FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\XLS\\"+FName+".xls";
                      frxXMLExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\XLS\\"+FName+".xls";
                       frxReport1->Export(frxXMLExport1);
                       ftpDr=ftpDr+"//XLS";

                      }
                      else if (DataModule1->Options->FieldByName("Filtr")->AsString=="RTF"){
                      ftpFileName=FName+".rtf";
                      FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\RTF\\"+FName+".rtf";
                      frxRTFExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\RTF\\"+FName+".rtf";
                       frxReport1->Export(frxRTFExport1);
                       ftpDr=ftpDr+"//RTF";

                      }
                      else if (DataModule1->Options->FieldByName("Filtr")->AsString=="JPG"){
                      ftpFileName=FName+".jpg";
                      FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\JPG\\"+FName+".jpg";
                      frxJPEGExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\PhazeNoise\\JPG\\"+FName+".jpg";
                      frxJPEGExport1->SeparateFiles=false;
                       frxReport1->Export(frxJPEGExport1);
                       ftpDr=ftpDr+"//JPG";

                      }

                                         clFtp1->UserName=DataModule1->Options->FieldByName("User")->AsString;
                                        clFtp1->Password=DataModule1->Options->FieldByName("Password")->AsString;
                                        clFtp1->Port=DataModule1->Options->FieldByName("Port")->AsFloat;
                                        clFtp1->Server=DataModule1->Options->FieldByName("Host_IP")->AsString;

                                        clFtp1->TransferType = ttBinary;
                                        clFtp1->Open();
                                        clFtp1->ChangeCurrentDir(ftpDr);
                                        using namespace std;
                                                FILE *fp;
                                                fp = fopen(FullFileName.c_str(), "r+");
                                                if(!clFtp1->Active) return;
                                        if (fp!=NULL) {
                                                          fclose(fp);
                                                          int position = 0;
                                                         TStream *stream = new TFileStream(FullFileName, fmOpenRead |fmShareDenyWrite);
                                                        __try
                                                                {
                                                                  clFtp1->PutFile(ftpFileName, stream, position, -1);
                                                                 }
                                                         __finally
                                                                {
                                                                        delete stream;
                                                                 }
                                                         }
                                        clFtp1->Close();
                }



       }
       if (DataModule1->Options->FieldByName("Send_data_to_ftp")->AsString=="True"){
             if (DataModule2->Print->FieldByName("DefaultPrint")->AsString=="Measure,Print,Export"){
           int k3=0;
           DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print->FieldByName("PhazeNoise")->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  k3=1;
                  break;
               }
            DataModule2->Print_Files->Next();
           }
           if (k3==1){
              TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
         frxReport1->PrepareReport(true);
           AnsiString ftpDr=DataModule1->Options->FieldByName("FTPdyr")->AsString+"//PhazeNoise";

                      if(DataModule1->Options->FieldByName("Export_Type")->AsFloat==1){
                                FullFileName=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\PhazeNoise\\"+FName+".pdf";
                                 frxPDFExport1->FileName=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\PhazeNoise\\"+FName+".pdf";
                                 frxReport1->Export(frxPDFExport1);
                                 }
                                 else if (DataModule1->Options->FieldByName("Export_Type")->AsFloat==2){
                                 FullFileName=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\PhazeNoise\\"+FName+".pdf";
                                 AnsiString FF=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\PhazeNoise\\RTF\\"+FName+".rtf";
                                   frxRTFExport1->FileName=FF;
                                   frxReport1->Export(frxRTFExport1);
                                   if(!fStart)
                                           {
                                                try
                                                {
                                                 vVarApp=CreateOleObject("Word.Application");
                                                 vVarApp.OlePropertySet("Visible",false);
                                                fStart=true;
                                                         }
                                                        catch(...)
                                                                   {
                                                         MessageBox(0, "Ошибка при открытии сервера word",
                                                                         "Ошибка", MB_OK);
                                                                  return;
                                                                 }
                                                         }

                                          if (fStart){
                                              try{
                                                 vVarDocs=vVarApp.OlePropertyGet("Documents");
                                                 vVarDocs.OleProcedure("Open",FF.c_str());
                                                 vVarApp.OlePropertySet("DisplayAlerts",false);
                                                 vVarDoc=vVarDocs.OleFunction("Item",1);
                                                 AnsiString FF1=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\PhazeNoise\\"+FName+".pdf";
                                                 vVarDoc.OleProcedure("SaveAs",FF1.c_str(),17,false,"",true,"",false,false,false,false,false);
                                                vVarApp.OleProcedure("Quit");
                                                fStart= false;

                                              }
                                              catch(...){
                                                MessageBox(0, "Ошибка открытия файла","Ошибка",MB_OK);
                                                fStart= false;
                                                vVarApp.OleProcedure("Quit");
                                              }


                                          }

                                 }
                                       clFtp1->UserName=DataModule1->Options->FieldByName("User")->AsString;
                                        clFtp1->Password=DataModule1->Options->FieldByName("Password")->AsString;
                                        clFtp1->Port=DataModule1->Options->FieldByName("Port")->AsFloat;
                                        clFtp1->Server=DataModule1->Options->FieldByName("Host_IP")->AsString;

                                        clFtp1->TransferType = ttBinary;
                                        clFtp1->Open();
                                        clFtp1->ChangeCurrentDir(ftpDr);
                                        using namespace std;
                                                FILE *fp;
                                                fp = fopen(FullFileName.c_str(), "r+");
                                                if(!clFtp1->Active) return;
                                        if (fp!=NULL) {
                                                          fclose(fp);
                                                          int position = 0;
                                                         TStream *stream = new TFileStream(FullFileName, fmOpenRead |fmShareDenyWrite);
                                                        __try
                                                                {
                                                                  clFtp1->PutFile(FtpFileName, stream, position, -1);
                                                                 }
                                                         __finally
                                                                {
                                                                        delete stream;
                                                                 }
                                                         }
                                        clFtp1->Close();


           }
        }



       }
       }

}
//---------------------------------------------------------------------------

void __fastcall TPhazeNoiseForm::RzButton3Click(TObject *Sender)
{
DataModule2->PhazeNoise1->Active=false;
DataModule2->PhazeNoise1->SQL->Clear();
AnsiString S5;
 S5="Select * from Phaze_Noise where ";
       if (cmb_ID->Text!=""){
       S5=S5+"MeasureID='"+cmb_ID->Text+"' ";

       }
       if (edtMsk->Text!=""){
       S5=S5+"Msk='"+edtMsk->Text+"' ";

       }
       S5=S5+"ORDER BY N";
DataModule2->PhazeNoise1->SQL->Add(S5);
DataModule2->PhazeNoise1->Active=true;
DataModule2->PhazeNoise1->First();
 for (int j=0; j<DataModule2->PhazeNoise1->RecordCount;j++){
double X,Y;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3,S4;
S3="Select * from Phaze_Noise where ";
S4="Select * from Phaze_Noise_Data where ";
       if (edtMsk->ItemIndex!=-1){
       S3=S3+"MSK='"+edtMsk->Text+"' ";
       S4=S4+"Msk='"+edtMsk->Text+"' ";
       }

      if (cmb_ID->Text!=""){
        S3="Select * from Phaze_Noise where MeasureID='"+cmb_ID->Text+"' ";
        S4="Select * from Phaze_Noise_Data where MeasureID='"+cmb_ID->Text+"' ";
       }

       S3=S3+" and N='"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+"'"+" ORDER BY N";
       S4=S4+" and N='"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+"'"+" ORDER BY ID";


DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();

DataModule2->PhazeNoiseData->Active=false;
DataModule2->PhazeNoiseData->SQL->Clear();

DataModule2->PhazeNoiseData->SQL->Add(S4);

DataModule2->PhazeNoiseData->Active=true;
DataModule2->PhazeNoiseData->First();
DataModule2->PhazeNoise->RecordCount;
int k=DataModule2->PhazeNoiseData->RecordCount;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from specification where Name='"+edtSpc->Text+"'");
DataModule2->SqlSpec->Active=true;

 if (DataModule2->PhazeNoiseData->RecordCount>0){
              Series2->Visible=false;
              Series1->Visible=false;
               Series2->Clear();

  for (int i=0;i<k;i++){
             X=DataModule2->PhazeNoiseData->FieldByName("Freq")->AsFloat;

             Y=DataModule2->PhazeNoiseData->FieldByName("PN")->AsFloat;
             Chart1->LeftAxis->Title->Caption="dB/Hz";
            Series2->AddXY(X,Y,"",clTeeColor);
         DataModule2->PhazeNoiseData->Next();
  }
  Chart1->Title->Clear();
   Chart1->SubTitle->Clear();
   Chart1->Foot->Clear();
   Chart1->SubFoot->Clear();
  AnsiString Status="Годен";
  AnsiString Status1="Годен";
  AnsiString Status2="Годен";
  AnsiString Status3="Годен";
  Chart1->Title->Text->Add("№  "+DataModule2->PhazeNoise1->FieldByName("N")->AsString);
  Chart1->SubFoot->Text->Add("МСК  "+DataModule2->PhazeNoise1->FieldByName("Msk")->AsString+"                        "+DataModule2->SqlSpec->FieldByName("Name")->AsString);

  Chart1->Foot->Text->Add("Дата  "+DataModule2->PhazeNoise->FieldByName("_Date_")->AsString+"  " +DataModule2->PhazeNoise->FieldByName("_Time_")->AsString);
   DataModule2->PHUser->Active=false;
   DataModule2->PHUser->SQL->Clear();
   DataModule2->PHUser->SQL->Add("Select * from пользователи where PH_Login='"+DataModule2->PhazeNoise->FieldByName("Operator")->AsString+"'");
   DataModule2->PHUser->Active=true;
   Chart1->Foot->Text->Add("Выполнил      "+DataModule2->PHUser->FieldByName("Fname")->AsString);
   Chart1->Foot->Text->Add("Идентификатор замера  "+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString);
  if (DataModule2->SqlSpec->FieldByName("Shum")->AsString=="True"){
      AnsiString Marker1=">1 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker1=Marker1+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker1=Marker1+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker1=Marker1+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker1=Marker1+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker1=Marker1+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker1=Marker1+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker1=Marker1+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("ShOT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker1=Marker1+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("ShMax")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("ShMax")->AsFloat){
               Status="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("ShMin")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("ShMin")->AsFloat){
               Status="Брак";
              }
         }
         Marker1 = Marker1+"  "+Status;
         Chart1->SubTitle->Text->Add(Marker1);
  }
  if (DataModule2->SqlSpec->FieldByName("Shum1")->AsString=="True"){
      AnsiString Marker2=">2 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker2=Marker2+"1Hz   "+ FormatFloat("0.00",data);
         }
          else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker2=Marker2+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker2=Marker2+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker2=Marker2+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker2=Marker2+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker2=Marker2+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker2=Marker2+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh1OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker2=Marker2+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh1Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh1Max")->AsFloat){
               Status1="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh1Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh1Min")->AsFloat){
               Status1="Брак";
              }
         }
         Marker2 = Marker2+"  "+Status1;
         Chart1->SubTitle->Text->Add(Marker2);
  }
 if (DataModule2->SqlSpec->FieldByName("Shum2")->AsString=="True"){
      AnsiString Marker3=">3 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker3=Marker3+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker3=Marker3+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker3=Marker3+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker3=Marker3+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker3=Marker3+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker3=Marker3+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker3=Marker3+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh2OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker3=Marker3+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh2Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh2Max")->AsFloat){
               Status2="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh2Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh2Min")->AsFloat){
               Status2="Брак";
              }
         }
         Marker3 = Marker3+"  "+Status2;
         Chart1->SubTitle->Text->Add(Marker3);
  }
   if (DataModule2->SqlSpec->FieldByName("Shum3")->AsString=="True"){
      AnsiString Marker4=">4 ";
      double data;
       if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1){

        data=DataModule2->PhazeNoise->FieldByName("Shum1")->AsFloat;
           Marker4=Marker4+"1Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==3){
               data=DataModule2->PhazeNoise->FieldByName("Shum3")->AsFloat;
               Marker4=Marker4+"3Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==10){
               data=DataModule2->PhazeNoise->FieldByName("Shum10")->AsFloat;
               Marker4=Marker4+"10Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==100){
               data=DataModule2->PhazeNoise->FieldByName("Shum100")->AsFloat;
               Marker4=Marker4+"100Hz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1000){
               data=DataModule2->PhazeNoise->FieldByName("Shum1K")->AsFloat;
               Marker4=Marker4+"1KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==10000){
               data=DataModule2->PhazeNoise->FieldByName("Shum10K")->AsFloat;
               Marker4=Marker4+"10KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==100000){
               data=DataModule2->PhazeNoise->FieldByName("Shum100K")->AsFloat;
               Marker4=Marker4+"100KHz   "+ FormatFloat("0.00",data);
         }
         else if (DataModule2->SqlSpec->FieldByName("Sh3OT")->AsFloat==1E+6){
               data=DataModule2->PhazeNoise->FieldByName("Shum1M")->AsFloat;
               Marker4=Marker4+"1MHz   "+ FormatFloat("0.00",data);
         }
         if (DataModule2->SqlSpec->FieldByName("Sh3Max")->AsString!="no"){
              if (fabs(data)>DataModule2->SqlSpec->FieldByName("Sh3Max")->AsFloat){
               Status3="Брак";
              }
         }
         if (DataModule2->SqlSpec->FieldByName("Sh3Min")->AsString!="no"){
              if (fabs(data)<DataModule2->SqlSpec->FieldByName("Sh3Min")->AsFloat){
               Status3="Брак";
              }
         }
         Marker4 = Marker4+"  "+Status3;
         Chart1->SubTitle->Text->Add(Marker4);

  }
  Chart1->BottomAxis->Logarithmic=true;
  Series2->Visible=true;
   }
    AnsiString Path=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\PhazeNoise";
   Chart1->SaveToBitmapFile(Path+"\\"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+".bmp");
   DataModule2->PhazeNoise1->Next();
  }
}
//---------------------------------------------------------------------------


void __fastcall TPhazeNoiseForm::RzToolbarButton1Click(TObject *Sender)
{
AnsiString S,S1,S2,S4,S5;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3;
AnsiString Code=edtMeasure_ID->Text;
 S3="Select `Spc`,`N`,`Msk`,`MeasureID` from Phaze_Noise where ";
 if (Code.SubString(0,3)=="801"){
    Code=Code.SubString(4,Code.Length()-2);
    S3=S3+"Protokol_ID='"+Code+"' ";
  }
  else {
        S3=S3+"PSI_ID='"+edtMeasure_ID->Text+"' ";
        }

       S3=S3+"ORDER BY N";



DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();
edtNumber->Items->Clear();
edtMsk->Items->Clear();
edtMsk->Text="";
edtSpc->Text=DataModule2->PhazeNoise->FieldByName("Spc")->AsString;
PHNForm->viewNumber->Items->Clear();
cmb_ID->Items->Clear();
for (int i=0;i<DataModule2->PhazeNoise->RecordCount;i++){
          VrLed2->Active=false;
          VrLed1->Active=false;
          int u=1;
          S2=DataModule2->PhazeNoise->FieldByName("N")->AsString;
          for (int j=0;j<edtNumber->Items->Count; j++){
               if (S2==edtNumber->Items->Strings[j]){
               u=0;
               break;
               }
             u=1;
          }
          if (u==1){
           edtNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
           PHNForm->viewNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
          }


          int p1=1;
         S4=DataModule2->PhazeNoise->FieldByName("MSK")->AsString;
         for (int j1=0;j1<edtMsk->Items->Count; j1++){
               if (S4==edtMsk->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           edtMsk->Items->Add(S4);
           edtMsk->Text=S4;
          }
          int p2=1;
         S5=DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S5==cmb_ID->Items->Strings[j1]){
               p2=0;
               break;
               }
             p2=1;
          }
          if (p2==1){
           cmb_ID->Items->Add(S5);

          }
    DataModule2->PhazeNoise->Next();
      }
  Label7->Caption=DataModule2->PhazeNoise->RecordCount;
  Label7->Repaint();
  edtNumber->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TPhazeNoiseForm::edtMskKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
 AnsiString S,S1,S2,S4;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3;
 S3="Select `N`,`Spc`,`PSI_ID`,`MeasureID` from Phaze_Noise where ";

       S3=S3+"MSK='"+edtMsk->Text+"' ";



       S3=S3+"ORDER BY N";



DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();
edtNumber->Items->Clear();
cmb_ID->Items->Clear();
cmb_ID->Text="";
edtSpc->Text=DataModule2->PhazeNoise->FieldByName("Spc")->AsString;
if (DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsFloat>100){
edtMeasure_ID->Text=DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString;
}
PHNForm->viewNumber->Items->Clear();
for (int i=0;i<DataModule2->PhazeNoise->RecordCount;i++){
           VrLed2->Active=false;
           VrLed1->Active=false;
          int u=1;
          S2=DataModule2->PhazeNoise->FieldByName("N")->AsString;
          for (int j=0;j<edtNumber->Items->Count; j++){
               if (S2==edtNumber->Items->Strings[j]){
               u=0;
               break;
               }
             u=1;
          }
          if (u==1){
           edtNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
           PHNForm->viewNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
          }


          int p1=1;
         S4=DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString;
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
    DataModule2->PhazeNoise->Next();
      }
  Label7->Caption=DataModule2->PhazeNoise->RecordCount;
  Label7->Repaint();
  edtNumber->Enabled=true;


}        
}
//---------------------------------------------------------------------------

void __fastcall TPhazeNoiseForm::RzToolbarButton2Click(TObject *Sender)
{
AnsiString S,S1,S2,S4,S5;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3;
 S3="Select * from Phaze_Noise where ";
       S3=S3+"MSK='"+edtMsk->Text+"' ";
       S3=S3+"ORDER BY N";

DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();
edtNumber->Items->Clear();
edtMsk->Items->Clear();
edtMsk->Text="";
cmb_ID->Items->Clear();
edtSpc->Text=DataModule2->PhazeNoise->FieldByName("Spc")->AsString;
if (DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsFloat>100){
edtMeasure_ID->Text=DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString;
}
PHNForm->viewNumber->Items->Clear();

for (int i=0;i<DataModule2->PhazeNoise->RecordCount;i++){
          VrLed2->Active=false;
          VrLed1->Active=false;
          int u=1;
          S2=DataModule2->PhazeNoise->FieldByName("N")->AsString;
          for (int j=0;j<edtNumber->Items->Count; j++){
               if (S2==edtNumber->Items->Strings[j]){
               u=0;
               break;
               }
             u=1;
          }
          if (u==1){
           edtNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
           PHNForm->viewNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
          }


          int p1=1;
         S4=DataModule2->PhazeNoise->FieldByName("MSK")->AsString;
         for (int j1=0;j1<edtMsk->Items->Count; j1++){
               if (S4==edtMsk->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           edtMsk->Items->Add(S4);
           edtMsk->Text=S4;
          }
        int p2=1;
         S5=DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S5==cmb_ID->Items->Strings[j1]){
               p2=0;
               break;
               }
             p2=1;
          }
          if (p2==1){
           cmb_ID->Items->Add(S5);

          }
    DataModule2->PhazeNoise->Next();
      }
  Label7->Caption=DataModule2->PhazeNoise->RecordCount;
  Label7->Repaint();
  edtNumber->Enabled=true;
}
//---------------------------------------------------------------------------






void __fastcall TPhazeNoiseForm::cmb_IDKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
  AnsiString S,S1,S2,S4;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3;
 S3="Select `N`,`Spc`,`Msk`,`PSI_ID` from Phaze_Noise where ";
       if (cmb_ID->Text!=""){
       S3=S3+"MeasureID='"+cmb_ID->Text+"' ";

       }

       S3=S3+"ORDER BY N";



DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();
edtNumber->Items->Clear();
edtMsk->Items->Clear();
edtMsk->Text="";
edtSpc->Text=DataModule2->PhazeNoise->FieldByName("Spc")->AsString;
if (DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsFloat>100){
edtMeasure_ID->Text=DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString;
}
PHNForm->viewNumber->Items->Clear();
for (int i=0;i<DataModule2->PhazeNoise->RecordCount;i++){
          VrLed2->Active=false;
           VrLed1->Active=false;
          int u=1;
          S2=DataModule2->PhazeNoise->FieldByName("N")->AsString;
          for (int j=0;j<edtNumber->Items->Count; j++){
               if (S2==edtNumber->Items->Strings[j]){
               u=0;
               break;
               }
             u=1;
          }
          if (u==1){
           edtNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
           PHNForm->viewNumber->Items->Add(DataModule2->PhazeNoise->FieldByName("N")->AsString);
          }


          int p1=1;
         S4=DataModule2->PhazeNoise->FieldByName("MSK")->AsString;
         for (int j1=0;j1<edtMsk->Items->Count; j1++){
               if (S4==edtMsk->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           edtMsk->Items->Add(S4);

          }
    DataModule2->PhazeNoise->Next();
      }
  Label7->Caption=DataModule2->PhazeNoise->RecordCount;
  Label7->Repaint();
  edtNumber->Enabled=true;


}        
}
//---------------------------------------------------------------------------


void __fastcall TPhazeNoiseForm::RzButton6Click(TObject *Sender)
{

if (edtMeasure_ID->Text!=""){
  AnsiString S,S1,S2,S4;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3;
 S3="Select * from Phaze_Noise where ";
       if (edtMsk->Text!="" || !edtMsk->Text.IsEmpty()){
       S3=S3+"Msk='"+edtMsk->Text+"' ";
          if (cmb_ID->Text!="" || !cmb_ID->Text.IsEmpty()){

           S3=S3+" and  MeasureID='"+cmb_ID->Text+"'" ;
          }
       }
       else {
           if (cmb_ID->Text!="" || !cmb_ID->Text.IsEmpty()){

           S3=S3+"MeasureID='"+cmb_ID->Text+"'" ;
          }

       }

       S3=S3+"ORDER BY N";

DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select SQL_NO_CACHE * from psidata where Measure_ID='"+edtMeasure_ID->Text+"' order by N");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
 double Fmax,Fmin,Rmax,Rmin,RRmax,RRmin,Qmax,Qmin,C0max,C0min,Cqmax,Cqmin,FTmax,FTmin,SRmax,SRmin,Fmaxmax,Fminmin,Smax,Smin,Mmax,Mmin,Rmaxmax,Rmaxmin;
      double ShMax,ShMin,RR1max,RR1min,Rc_Rbmax,Tminmax,Tminmin,Tmaxmax,Tmaxmin,Fptpmax,Fptpmin,C0_C1max,C0_C1min,Fptp2max,Fptp2min;
      double old1min,old1max,RR2max,RR2min,RR3max,RR3min,FnastrHz,RR4max,RR4min,RR5max,RR5min,Ft1max,Ft1min,Ft2max,Ft2min,old2max,old2min;
      double old3max,old3min,C1_2C0max,C1_2C0min;
 DataModule2->SqlSpecTemp->Active=false;
  DataModule2->SqlSpecTemp->SQL->Clear();
  DataModule2->SqlSpecTemp->SQL->Add("select * from specification where Name='"+edtSpc2->Text+"'");
 DataModule2->SqlSpecTemp->Active=true;
 DataModule2->SqlSpecTemp->First();
  DataModule1->MeasureID->Active=true;
                 DataModule1->MeasureID->Append();
                 DataModule1->MeasureID->FieldByName("MSK")->AsString=edtMsk->Text;
                 DataModule1->MeasureID->FieldByName("File")->AsString=DataModule2->psiData->FieldByName("File")->AsString;;
                 DataModule1->MeasureID->Post();
                 DataModule1->MeasureID->Last();
                 AnsiString Measure_ID=DataModule1->MeasureID->FieldByName("MeasureID")->AsString;
  DataModule1->MeasureID->Active=false;
   DataModule2->PhazeNoise_ID->Active=true;
   DataModule2->PhazeNoise_ID->Append();
   DataModule2->PhazeNoise_ID->FieldByName("MSK")->AsString=edtMsk->Text;
    DataModule2->PhazeNoise_ID->FieldByName("PSI_ID")->AsString=Measure_ID;
    DataModule2->PhazeNoise_ID->Post();
   DataModule2->PhazeNoise_ID->Last();
    AnsiString PHMeasure_ID=DataModule2->PhazeNoise_ID->FieldByName("ID")->AsString;
 DataModule2->PhazeNoise_ID->Active=false;




 if (DataModule2->SqlSpecTemp->FieldByName("Fmax")->AsString!="no"){
             Fmax=DataModule2->SqlSpecTemp->FieldByName("Fmax")->AsFloat;
          }
          if (DataModule2->SqlSpecTemp->FieldByName("Fmin")->AsString!="no"){
               Fmin=DataModule2->SqlSpecTemp->FieldByName("Fmin")->AsFloat;
             }
           if (DataModule2->SqlSpecTemp->FieldByName("FnastrHZ")->AsFloat>0){
               FnastrHz=DataModule2->SqlSpecTemp->FieldByName("FnastrHz")->AsFloat;
             }

           if (DataModule2->SqlSpecTemp->FieldByName("Rmax")->AsString!="no"){
               Rmax=DataModule2->SqlSpecTemp->FieldByName("Rmax")->AsFloat;
             }
             if (DataModule2->SqlSpecTemp->FieldByName("Rmin")->AsString!="no"){
                    Rmin=DataModule2->SqlSpecTemp->FieldByName("Rmin")->AsFloat;
                    }
            if (DataModule2->SqlSpecTemp->FieldByName("Qmax")->AsString!="no"){
                  Qmax=DataModule2->SqlSpecTemp->FieldByName("Qmax")->AsFloat;
               }
        if (DataModule2->SqlSpecTemp->FieldByName("Qmin")->AsString!="no"){
             Qmin=DataModule2->SqlSpecTemp->FieldByName("Qmin")->AsFloat;
             }
          if (DataModule2->SqlSpecTemp->FieldByName("RRmax")->AsString!="no"){
              RRmax=DataModule2->SqlSpecTemp->FieldByName("RRmax")->AsFloat;
             }
           if (DataModule2->SqlSpecTemp->FieldByName("RRmin")->AsString!="no"){
               RRmin=DataModule2->SqlSpecTemp->FieldByName("RRmin")->AsFloat;
              }
           if (DataModule2->SqlSpecTemp->FieldByName("Rmaxmax")->AsString!="no"){
              Rmaxmax=DataModule2->SqlSpecTemp->FieldByName("Rmaxmax")->AsFloat;
             }
           if (DataModule2->SqlSpecTemp->FieldByName("Rmaxmin")->AsString!="no"){
               Rmaxmin=DataModule2->SqlSpecTemp->FieldByName("Rmaxmin")->AsFloat;
              }
              if (DataModule2->SqlSpecTemp->FieldByName("C0max")->AsString!="no"){
                   C0max=DataModule2->SqlSpecTemp->FieldByName("C0max")->AsFloat;
                  }
               if (DataModule2->SqlSpecTemp->FieldByName("C0min")->AsString!="no"){
                      C0min=DataModule2->SqlSpecTemp->FieldByName("C0min")->AsFloat;
                     }
              if (DataModule2->SqlSpecTemp->FieldByName("Cqmax")->AsString!="no"){
                  Cqmax=DataModule2->SqlSpecTemp->FieldByName("Cqmax")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("Cqmin")->AsString!="no"){
                   Cqmin=DataModule2->SqlSpecTemp->FieldByName("Cqmin")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("FTmax")->AsString!="no"){
                  FTmax=DataModule2->SqlSpecTemp->FieldByName("FTmax")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("FTmin")->AsString!="no"){
                   FTmin=DataModule2->SqlSpecTemp->FieldByName("FTmin")->AsFloat;
                   }

                if (DataModule2->SqlSpecTemp->FieldByName("Rsp1max")->AsString!="no"){
                  SRmax=DataModule2->SqlSpecTemp->FieldByName("Rsp1max")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("Rsp1min")->AsString!="no"){
                   SRmin=DataModule2->SqlSpecTemp->FieldByName("Rsp1min")->AsFloat;
                   }

                  if (DataModule2->SqlSpecTemp->FieldByName("Fmaxmax")->AsString!="no"){
                  Fmaxmax=DataModule2->SqlSpecTemp->FieldByName("Fmaxmax")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("Fminmin")->AsString!="no"){
                   Fminmin=DataModule2->SqlSpecTemp->FieldByName("Fminmin")->AsFloat;
                   }
                  if (DataModule2->SqlSpecTemp->FieldByName("Smax")->AsString!="no"){
                  Smax=DataModule2->SqlSpecTemp->FieldByName("Smax")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("Smin")->AsString!="no"){
                   Smin=DataModule2->SqlSpecTemp->FieldByName("Smin")->AsFloat;
                   }
                  if (DataModule2->SqlSpecTemp->FieldByName("Mmax")->AsString!="no"){
                  Mmax=DataModule2->SqlSpecTemp->FieldByName("Mmax")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("Mmin")->AsString!="no"){
                   Mmin=DataModule2->SqlSpecTemp->FieldByName("Mmin")->AsFloat;
                   }
                 if (DataModule2->SqlSpecTemp->FieldByName("ShMax")->AsString!="no"){
                  ShMax=DataModule2->SqlSpecTemp->FieldByName("ShMax")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("ShMin")->AsString!="no"){
                   ShMin=DataModule2->SqlSpecTemp->FieldByName("ShMin")->AsFloat;
                   }
                 if (DataModule2->SqlSpecTemp->FieldByName("RR1max")->AsString!="no"){
                  RR1max=DataModule2->SqlSpecTemp->FieldByName("RR1max")->AsFloat;
                 }
               if (DataModule2->SqlSpecTemp->FieldByName("RR1min")->AsString!="no"){
                   RR1min=DataModule2->SqlSpecTemp->FieldByName("RR1min")->AsFloat;
                   }

               if (DataModule2->SqlSpecTemp->FieldByName("Rc_Rbmax")->AsString!="no"){
                   Rc_Rbmax=DataModule2->SqlSpecTemp->FieldByName("Rc_Rbmax")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("Tminmax")->AsString!="no"){
                   Tminmax=DataModule2->SqlSpecTemp->FieldByName("Tminmax")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("Tminmin")->AsString!="no"){
                   Tminmin=DataModule2->SqlSpecTemp->FieldByName("Tminmin")->AsFloat;
                   }
                 if (DataModule2->SqlSpecTemp->FieldByName("Tmaxmax")->AsString!="no"){
                   Tmaxmax=DataModule2->SqlSpecTemp->FieldByName("Tmaxmax")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("Tmaxmin")->AsString!="no"){
                   Tmaxmin=DataModule2->SqlSpecTemp->FieldByName("Tmaxmin")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("Fptpmax")->AsString!="no"){
                   Fptpmax=DataModule2->SqlSpecTemp->FieldByName("Fptpmax")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("Fptpmin")->AsString!="no"){
                   Fptpmin=DataModule2->SqlSpecTemp->FieldByName("Fptpmin")->AsFloat;
                   }
                    if (DataModule2->SqlSpecTemp->FieldByName("Fptp_2max")->AsString!="no"){
                   Fptp2max=DataModule2->SqlSpecTemp->FieldByName("Fptp_2max")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("Fptp_2min")->AsString!="no"){
                   Fptp2min=DataModule2->SqlSpecTemp->FieldByName("Fptp_2min")->AsFloat;
                   }
                 if (DataModule2->SqlSpecTemp->FieldByName("C0_C1max")->AsString!="no"){
                   C0_C1max=DataModule2->SqlSpecTemp->FieldByName("C0_C1max")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("C0_C1min")->AsString!="no"){
                   C0_C1min=DataModule2->SqlSpecTemp->FieldByName("C0_C1min")->AsFloat;
                   }
                  if (DataModule2->SqlSpecTemp->FieldByName("RR2max")->AsString!="no"){
                   RR2max=DataModule2->SqlSpecTemp->FieldByName("RR2max")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("RR2min")->AsString!="no"){
                   RR2min=DataModule2->SqlSpecTemp->FieldByName("RR2min")->AsFloat;
                   }
                  if (DataModule2->SqlSpecTemp->FieldByName("RR3max")->AsString!="no"){
                   RR3max=DataModule2->SqlSpecTemp->FieldByName("RR3max")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("RR3min")->AsString!="no"){
                   RR3min=DataModule2->SqlSpecTemp->FieldByName("RR3min")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("RR4max")->AsString!="no"){
                   RR4max=DataModule2->SqlSpecTemp->FieldByName("RR4max")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("RR4min")->AsString!="no"){
                   RR4min=DataModule2->SqlSpecTemp->FieldByName("RR4min")->AsFloat;
                   }
                  if (DataModule2->SqlSpecTemp->FieldByName("RR5max")->AsString!="no"){
                   RR5max=DataModule2->SqlSpecTemp->FieldByName("RR5max")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("RR5min")->AsString!="no"){
                   RR5min=DataModule2->SqlSpecTemp->FieldByName("RR5min")->AsFloat;
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("Ft1min")->AsString!="no"){
                   Ft1min=DataModule2->SqlSpecTemp->FieldByName("Ft1min")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("Ft1max")->AsString!="no"){
                   Ft1max=DataModule2->SqlSpecTemp->FieldByName("Ft1max")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("Ft2min")->AsString!="no"){
                   Ft2min=DataModule2->SqlSpecTemp->FieldByName("Ft2min")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("Ft2max")->AsString!="no"){
                   Ft2max=DataModule2->SqlSpecTemp->FieldByName("Ft2max")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("old1max")->AsString!="no"){
                   old1max=DataModule2->SqlSpecTemp->FieldByName("old1max")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("old1min")->AsString!="no"){
                   old1min=DataModule2->SqlSpecTemp->FieldByName("old1min")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("old2max")->AsString!="no"){
                   old2max=DataModule2->SqlSpecTemp->FieldByName("old2max")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("old2min")->AsString!="no"){
                   old2min=DataModule2->SqlSpecTemp->FieldByName("old2min")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("old3max")->AsString!="no"){
                   old3max=DataModule2->SqlSpecTemp->FieldByName("old3max")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("old3min")->AsString!="no"){
                   old3min=DataModule2->SqlSpecTemp->FieldByName("old3min")->AsFloat;
                   }
                    if (DataModule2->SqlSpecTemp->FieldByName("C1_2C0max")->AsString!="no"){
                   C1_2C0max=DataModule2->SqlSpecTemp->FieldByName("C1_2C0max")->AsFloat;
                   }
                   if (DataModule2->SqlSpecTemp->FieldByName("C1_2C0min")->AsString!="no"){
                   C1_2C0min=DataModule2->SqlSpecTemp->FieldByName("C1_2C0min")->AsFloat;
                   }
  bool kl;
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                  kl=false;

                        if (DataModule2->SqlSpecTemp->FieldByName("Ft")->AsString=="True" || DataModule2->SqlSpecTemp->FieldByName("Ftgk")->AsString=="True"){
                  if (DataModule2->SqlSpecTemp->FieldByName("Ftgk")->AsString=="False"){
                           if (DataModule2->SqlSpecTemp->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("F")->AsFloat>Fmax-DataModule2->SqlSpecTemp->FieldByName("DopuskF")->AsFloat){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpecTemp->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("F")->AsFloat<Fmin+DataModule2->SqlSpecTemp->FieldByName("DopuskF")->AsFloat){
                                       kl=true;
                                  }
                            }
                     }
                     else {
                           if (DataModule2->SqlSpecTemp->FieldByName("Fmax")->AsString!="no"){

                                                  if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat>FnastrHz-FnastrHz*DataModule2->SqlSpecTemp->FieldByName("DopuskFtgk")->AsFloat/100){
                                                      kl=true;
                                                  }

                                             }
                          if (DataModule2->SqlSpecTemp->FieldByName("Fmin")->AsString!="no"){
                                 if(DataModule2->psiData->FieldByName("Ftgk")->AsFloat<-FnastrHz+FnastrHz*DataModule2->SqlSpecTemp->FieldByName("DopuskFtgk")->AsFloat/100){
                                       kl=true;
                                  }
                            }



                     }
                 }
            if (DataModule2->SqlSpecTemp->FieldByName("R")->AsString=="True" & DataModule2->SqlSpecTemp->FieldByName("Rtgk")->AsString!="True"){
                  if (DataModule2->SqlSpecTemp->FieldByName("Rtgk")->AsString!="False"){
             if (DataModule2->SqlSpecTemp->FieldByName("Rmax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpecTemp->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("R")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskR")->AsFloat/100)){
                                    kl=true;
                              }
                  }

               }
               else if(DataModule2->SqlSpecTemp->FieldByName("Rtgk")->AsString=="True") {
                    if (DataModule2->SqlSpecTemp->FieldByName("Rmax")->AsString!="no"){
                   if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat>Rmax-Rmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpecTemp->FieldByName("Rmin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Rtgk")->AsFloat<Rmin+Rmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskRtgk")->AsFloat/100)){
                                    kl=true;
                              }
                  }


               }
           }
               if (DataModule2->SqlSpecTemp->FieldByName("Smax")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat>Smax-DataModule2->SqlSpecTemp->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }
                if (DataModule2->SqlSpecTemp->FieldByName("Smin")->AsString!="no"){
                           if(DataModule2->psiData->FieldByName("Slope")->AsFloat<Smin+DataModule2->SqlSpecTemp->FieldByName("DopuskSlope")->AsFloat){
                                    kl=true;
                              }
                  }


              if (DataModule2->SqlSpecTemp->FieldByName("Qmin")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat<Qmin+Qmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
               if (DataModule2->SqlSpecTemp->FieldByName("Qmax")->AsString!="no"){
                          if(DataModule2->psiData->FieldByName("Q")->AsFloat>Qmax-Qmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskQ")->AsFloat/100)){
                               kl=true;
                              }
                }
                if (DataModule2->SqlSpecTemp->FieldByName("C0max")->AsString!="no"){
                            if(DataModule2->psiData->FieldByName("C0")->AsFloat>C0max-C0max*(DataModule2->SqlSpecTemp->FieldByName("DopuskC0")->AsFloat/100)){
                                kl=true;
                               }
                   }

                  if (DataModule2->SqlSpecTemp->FieldByName("C0min")->AsString!="no"){
                                      if(DataModule2->psiData->FieldByName("C0")->AsFloat<C0min+C0min*(DataModule2->SqlSpecTemp->FieldByName("DopuskC0")->AsFloat/100)){
                                             kl=true;
                                         }
                     }
                if (DataModule2->SqlSpecTemp->FieldByName("Cqmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Cq")->AsFloat>(Cqmax-Cqmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskCq")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpecTemp->FieldByName("Cqmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Cq")->AsFloat<(Cqmin+Cqmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskCq")->AsFloat/100))){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpecTemp->FieldByName("FTmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("FT")->AsFloat>(FTmax-DataModule2->SqlSpecTemp->FieldByName("DopuskFT")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpecTemp->FieldByName("FTmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("FT")->AsFloat<(FTmin+DataModule2->SqlSpecTemp->FieldByName("DopuskFT")->AsFloat)){
                                    kl=true;
                              }
                      }
              if (DataModule2->SqlSpecTemp->FieldByName("Rsp1")->AsString=="True"){
                 if (DataModule2->SqlSpecTemp->FieldByName("Rsp1max")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Spur")->AsFloat>(SRmax-DataModule2->SqlSpecTemp->FieldByName("DopuskSR")->AsFloat)){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpecTemp->FieldByName("Rsp1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Spur")->AsFloat<(SRmin+DataModule2->SqlSpecTemp->FieldByName("DopuskSR")->AsFloat)){
                                    kl=true;
                              }
                      }
                  }
                   if (DataModule2->SqlSpecTemp->FieldByName("Fmaxmax")->AsString!="no"){
                              if (DataModule2->SqlSpecTemp->FieldByName("DopuskFi")->AsFloat>0){
                                          if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-Fmaxmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskFi")->AsFloat/100))){
                                              kl=true;
                                            }
                                }
                               if (DataModule2->SqlSpecTemp->FieldByName("DopuskFi_Real")->AsFloat>0){
                                  if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)>(Fmaxmax-DataModule2->SqlSpecTemp->FieldByName("DopuskFi_Real")->AsFloat)){
                                              kl=true;
                                            }
                               }

                   }
               if (DataModule2->SqlSpecTemp->FieldByName("Fminmin")->AsString!="no"){
                       if (DataModule2->SqlSpecTemp->FieldByName("DopuskFi")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+Fminmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskFi")->AsFloat/100))){
                                    kl=true;
                              }
                           }
                        if (DataModule2->SqlSpecTemp->FieldByName("DopuskFi_Real")->AsFloat>0){
                              if(fabs(DataModule2->psiData->FieldByName("Fmaxm")->AsFloat)<(Fminmin+DataModule2->SqlSpecTemp->FieldByName("DopuskFi_Real")->AsFloat)){
                                    kl=true;
                              }
                           }

                      }

                   if (DataModule2->SqlSpecTemp->FieldByName("RRmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("R1R2")->AsFloat>(RRmax-RRmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskRR")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpecTemp->FieldByName("RRmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("R1R2")->AsFloat<(RRmin+RRmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskRR")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("Rmaxmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Rmax")->AsFloat>(Rmaxmax-Rmaxmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskRmax")->AsFloat/100))){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpecTemp->FieldByName("Rmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Rmax")->AsFloat<(Rmaxmin+Rmaxmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskRmax")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                 if (DataModule2->SqlSpecTemp->FieldByName("Mmax")->AsString!="no"){
                                          if(DataModule2->psiData->FieldByName("Mono")->AsFloat>Mmax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpecTemp->FieldByName("Mmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Mono")->AsFloat<Mmin){
                                    kl=true;
                              }
                      }

                 if (DataModule2->SqlSpecTemp->FieldByName("ShMax")->AsString!="no"){
                                          if(abs(DataModule2->psiData->FieldByName("Shum")->AsFloat)>ShMax){
                                              kl=true;
                                            }
                   }
               if (DataModule2->SqlSpecTemp->FieldByName("ShMin")->AsString!="no"){
                              if(abs(DataModule2->psiData->FieldByName("Shum")->AsFloat)<ShMin){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpecTemp->FieldByName("RR1max")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat>RR1max){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat>RR1max){

                                              kl=true;
                                            }
                   }
                if (DataModule2->SqlSpecTemp->FieldByName("RR1min")->AsString!="no"){
                                          //if(DataModule2->psiData->FieldByName("Rmax")->AsFloat-DataModule2->psiData->FieldByName("R")->AsFloat<RR1min){
                                          if(DataModule2->psiData->FieldByName("RR1")->AsFloat<RR1min){
                                              kl=true;
                                            }
                   }
                  if (DataModule2->SqlSpecTemp->FieldByName("Rc_Rbmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RcRb")->AsFloat>Rc_Rbmax){
                                    kl=true;
                              }
                      }
                  if (DataModule2->SqlSpecTemp->FieldByName("Tminmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat<Tminmin+DataModule2->SqlSpecTemp->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("Tminmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmin")->AsFloat>=Tminmax-DataModule2->SqlSpecTemp->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpecTemp->FieldByName("Tmaxmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat<Tmaxmin+DataModule2->SqlSpecTemp->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("Tmaxmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Tmax")->AsFloat>Tmaxmax-DataModule2->SqlSpecTemp->FieldByName("DopuskT")->AsFloat){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpecTemp->FieldByName("Fptpmin")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat<(Fptpmin+Fptpmin*(DataModule2->SqlSpecTemp->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("Fptpmax")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp")->AsFloat>(Fptpmax-Fptpmax*(DataModule2->SqlSpecTemp->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpecTemp->FieldByName("Fptp_2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat<(Fptp2min+Fptp2min*(DataModule2->SqlSpecTemp->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("Fptp_2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Fptp_2")->AsFloat>(Fptp2max-Fptp2max*(DataModule2->SqlSpecTemp->FieldByName("DopuskFptp")->AsFloat/100))){
                                    kl=true;
                              }
                      }
                    if (DataModule2->SqlSpecTemp->FieldByName("C0_C1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat<C0_C1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("C0_C1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C0_C1")->AsFloat>C0_C1max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpecTemp->FieldByName("old1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old")->AsFloat<old1min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("old1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Old")->AsFloat>old1max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpecTemp->FieldByName("RR2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat>RR2max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpecTemp->FieldByName("RR2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR2")->AsFloat<RR2min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpecTemp->FieldByName("RR3max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR3max){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("RR3min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat<RR3min){
                                    kl=true;
                              }
                      }

                         if (DataModule2->SqlSpecTemp->FieldByName("RR4max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat>RR4max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpecTemp->FieldByName("RR4min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR4")->AsFloat<RR4min){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpecTemp->FieldByName("RR5max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR3")->AsFloat>RR5max){
                                    kl=true;
                              }
                      }
                     if (DataModule2->SqlSpecTemp->FieldByName("RR5min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("RR5")->AsFloat<RR5min){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpecTemp->FieldByName("Ft1min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat<Ft1min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpecTemp->FieldByName("Ft1max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft1")->AsFloat>Ft1max){
                                    kl=true;
                              }
                      }
                       if (DataModule2->SqlSpecTemp->FieldByName("Ft2min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat<Ft2min){
                                    kl=true;
                              }
                      }
                         if (DataModule2->SqlSpecTemp->FieldByName("Ft2max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("Ft2")->AsFloat>Ft2max){
                                    kl=true;
                              }
                      }
                      if (DataModule2->SqlSpecTemp->FieldByName("C1_2C0min")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat<C1_2C0min){
                                    kl=true;
                              }
                      }
                   if (DataModule2->SqlSpecTemp->FieldByName("C1_2C0max")->AsString!="no"){
                              if(DataModule2->psiData->FieldByName("C1_2C0")->AsFloat>C1_2C0max){
                                    kl=true;
                              }
                      }

       if (kl==false & CheckBox2->Checked){
                     for (int l=0; l<PHNForm->viewNumber->Count; l++){
                            if (PHNForm->viewNumber->Items->Strings[l]==DataModule2->psiData->FieldByName("N")->AsString ){
                                if (PHNForm->viewNumber->ItemState[l]!=0){
                                    kl=false;
                                    break;
                                 }
                               else {
                                kl=true;
                                 }
                            }

                     }
                 }

             if(!kl){ //if(2)
             AnsiString sql1,sql2;
             DataModule2->UpdatePSI->SQL->Clear();
              sql1="Update psidatatemp set Measure_ID='"+Measure_ID+"', ";
              sql1=sql1+"Msk='"+edtMsk->Text+"' where Measure_ID='"+DataModule2->psiData->FieldByName("Measure_ID")->AsString+"' and ";
              sql1=sql1+"N='"+DataModule2->psiData->FieldByName("N")->AsString+"'";
             DataModule2->UpdatePSI->SQL->Add(sql1);
             DataModule2->UpdatePSI->Execute();
             DataModule2->psiData->Edit();
             DataModule2->psiData->FieldByName("Measure_ID")->AsString=Measure_ID;
             DataModule2->psiData->FieldByName("Spc")->AsString=edtSpc2->Text;
             DataModule2->psiData->FieldByName("Msk")->AsString=edtMsk->Text;
              DataModule2->psiData->FieldByName("PH_ID")->AsString=PHMeasure_ID;
              DataModule2->psiData->Post();
             DataModule2->PhazeNoise->First();
              for (int j=0; j<DataModule2->PhazeNoise->RecordCount;j++){  //for(2)
                  if (DataModule2->PhazeNoise->FieldByName("N")->AsString==DataModule2->psiData->FieldByName("N")->AsString){ //if(3)
                     DataModule2->UpdatePH->SQL->Clear();;
                    sql2="Update Phaze_Noise_Data set MeasureID='"+PHMeasure_ID+"',";
                    sql2=sql2+"Msk='"+edtMsk->Text+"' where MeasureID='"+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString+"' and ";
                    sql2=sql2+"N='"+DataModule2->PhazeNoise->FieldByName("N")->AsString+"'";
                   DataModule2->UpdatePH->SQL->Add(sql2);
                   DataModule2->UpdatePH->Execute();
                   DataModule2->PhazeNoise->Edit();
                   DataModule2->PhazeNoise->FieldByName("MSK")->AsString=edtMsk->Text;
                   DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString=PHMeasure_ID;
                   DataModule2->PhazeNoise->FieldByName("PSI_ID")->AsString=Measure_ID;
                   DataModule2->PhazeNoise->FieldByName("Spc")->AsString=edtSpc2->Text;
                   DataModule2->PhazeNoise->Post();
                   break;

                  } // if(3)





              DataModule2->PhazeNoise->Next();
              } //  for(2)


             }  //if (2)


      DataModule2->psiData->Next();
    }//for
     cmb_ID->Text=PHMeasure_ID;
     edtMeasure_ID->Text=Measure_ID;
  } //if (1)
}
//---------------------------------------------------------------------------



void __fastcall TPhazeNoiseForm::RzButton4Click(TObject *Sender)
{

PHNForm->Show();
}
//---------------------------------------------------------------------------




void __fastcall TPhazeNoiseForm::RzButton5Click(TObject *Sender)
{
 ProtokolForm->cmb_ID->Text=edtMeasure_ID->Text;
 ProtokolForm->Show();
 ProtokolForm->Action1->Execute();
 this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TPhazeNoiseForm::RzButton7Click(TObject *Sender)
{
AnsiString S,S1,S2,S4;
DataModule2->PhazeNoise->Active=false;
DataModule2->PhazeNoise->SQL->Clear();
AnsiString S3;
 S3="Select * from Phaze_Noise where ";
       if (edtMsk->Text!="" || !edtMsk->Text.IsEmpty()){
       S3=S3+"Msk='"+edtMsk->Text+"' ";
          if (cmb_ID->Text!="" || !cmb_ID->Text.IsEmpty()){

           S3=S3+" and  MeasureID='"+cmb_ID->Text+"'" ;
          }
       }
       else {
           if (cmb_ID->Text!="" || !cmb_ID->Text.IsEmpty()){

           S3=S3+"MeasureID='"+cmb_ID->Text+"'" ;
          }

       }

       S3=S3+"ORDER BY N";

DataModule2->PhazeNoise->SQL->Add(S3);
DataModule2->PhazeNoise->Active=true;
DataModule2->PhazeNoise->First();

DataModule2->PhazeNoise1->Active=false;
DataModule2->PhazeNoise1->SQL->Clear();
DataModule2->PhazeNoise1->SQL->Add(S3);
DataModule2->PhazeNoise1->Active=true;
DataModule2->PhazeNoise1->First();
int k;
 for (int i=0; i<DataModule2->PhazeNoise->RecordCount;i++){   //for(1)
          DataModule2->PhazeNoise1->First();
          k=0;
          for (int j=0;j<DataModule2->PhazeNoise1->RecordCount;j++){ //fro(2)

                if (DataModule2->PhazeNoise1->FieldByName("N")->AsString.Length()<6){  //if(1)
                     DataModule2->UpdatePH->SQL->Clear();
                     AnsiString sql="Delete from Phaze_Noise_Data where Measure_ID='"+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString+"' and N='"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+"'";
                     DataModule2->UpdatePH->SQL->Add(sql);
                     DataModule2->UpdatePH->Execute();
                     DataModule2->PhazeNoise->Edit();
                     DataModule2->PhazeNoise->FieldByName("Delete")->AsFloat=1;
                     DataModule2->PhazeNoise->Post();

                } //if(1)
                if (DataModule2->PhazeNoise1->FieldByName("N")->AsString==DataModule2->PhazeNoise->FieldByName("N")->AsString){ //if(2)
                   k++;

                }  //if (2)
            DataModule2->PhazeNoise1->Next();
           } //for(2)
           if (k>1){
              DataModule2->UpdatePH->SQL->Clear();
                     AnsiString sql="Delete from Phaze_Noise_Data where Measure_ID='"+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString+"' and N='"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+"'";
                     DataModule2->UpdatePH->SQL->Add(sql);
                     DataModule2->UpdatePH->Execute();
               DataModule2->UpdatePH->SQL->Clear();
               AnsiString sql1="Update Phaze_Noise set Delete='1' where MeasureID='"+DataModule2->PhazeNoise->FieldByName("MeasureID")->AsString+"' and N='"+DataModule2->PhazeNoise1->FieldByName("N")->AsString+"'";
               DataModule2->UpdatePH->SQL->Add(sql1);
                     DataModule2->UpdatePH->Execute();
           }
     DataModule2->PhazeNoise->Next();
   } //for(1)
   DataModule2->UpdatePH->SQL->Clear();
   DataModule2->UpdatePH->SQL->Add("Delete from Phaze_Noise where Delete='1'");
   DataModule2->UpdatePH->Execute();
}
//---------------------------------------------------------------------------


void __fastcall TPhazeNoiseForm::RzButton8Click(TObject *Sender)
{           AnsiString Code= edtMeasure_ID->Text;
        if (Code.SubString(0,3)=="801"){
                AnsiString sql="Select * from `Phase_Noise_Proverka` where `ProtokolID`='"+Code.SubString(4,Code.Length()-2)+"'";
                DataModule2->proverka_ph->Active=false;
                DataModule2->proverka_ph->SQL->Clear();
                DataModule2->proverka_ph->SQL->Add(sql);
                DataModule2->proverka_ph->Active=true;

                DataModule2->SqlSpec->Active=false;
                DataModule2->SqlSpec->SQL->Clear();
                DataModule2->SqlSpec->SQL->Add("Select * from specification where Name='"+edtSpc->Text+"'");
                DataModule2->SqlSpec->Active=true;

                DataModule2->Print_Files->Active=true;
                DataModule2->Print_Files->First();
                        for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
                             if (DataModule2->Print_Files->FieldByName("Name")->AsString=="PH_Proverka_Ver_1_0_0") {
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
                 DataModule2->SqlSpec->Active=false;
                 DataModule2->proverka_ph->Active=false;
        }

}
//---------------------------------------------------------------------------



