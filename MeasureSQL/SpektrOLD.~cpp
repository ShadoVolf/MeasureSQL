//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SpektrOLD.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "VrControls"
#pragma link "VrProgressBar"
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MyAccess"
#include "Math.h"
#pragma link "RzDBEdit"
#pragma link "RzEdit"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TSpektrOLDForm *SpektrOLDForm;
//---------------------------------------------------------------------------
__fastcall TSpektrOLDForm::TSpektrOLDForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSpektrOLDForm::btnCloseClick(TObject *Sender)
{
this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TSpektrOLDForm::AdvGlassButton1Click(TObject *Sender)
{
int Old_ID;

 WorkProgress->Position=0;
  Measure_1->Active=false;
  Measure_1->SQL->Clear();
  Measure_1->SQL->Add("Select SQL_NO_CACHE N,MSK,F,R,Measure_ID,File,Spc from psidata where Measure_ID='"+ M_ID_1->Text+ "'");
  Measure_1->Active=true;
  WorkProgress->Position=10;
  AnsiString MSK,FileName1,FileName2;
  Measure_1->First();
  MSK=Measure_1->FieldByName("MSK")->AsString;
  FileName1=Measure_1->FieldByName("File")->AsString;
  Spc->Active=false;
  Spc->SQL->Clear();
  Spc->SQL->Add("Select SQL_NO_CACHE Name,old1max,old1min,Old2Max,old2min,PrintProfile,ID from specification where Name='"+Measure_1->FieldByName("Spc")->AsString+"'");
  Spc->Active=true;
  double F_Max=StrToFloat(Spc->FieldByName("old1max")->AsString);
  double R_Max=StrToFloat(Spc->FieldByName("Old2Max")->AsString);
  double F_Min=StrToFloat(Spc->FieldByName("old1min")->AsString);
  double R_Min=StrToFloat(Spc->FieldByName("old2min")->AsString);
  WorkProgress->Position=20;
  Measure_2->Active=false;
  Measure_2->SQL->Clear();
  Measure_2->SQL->Add("Select SQL_NO_CACHE N,MSK,F,R,Measure_ID,File,Spc from psidata where Measure_ID='"+ M_ID_2->Text+ "'");
  Measure_2->Active=true;
  Measure_2->First();
   WorkProgress->Position=25;

  FileName2=Measure_2->FieldByName("File")->AsString;
  DataModule1->Old_ID->Active=false;
  DataModule1->Old_ID->Active=true;
   DataModule1->Old_ID->Append();
   DataModule1->Old_ID->FieldByName("MSK")->AsString=MSK;
   DataModule1->Old_ID->FieldByName("Measure_ID")->AsString=M_ID_1->Text;
   DataModule1->Old_ID->FieldByName("File_1")->AsString=FileName1;
    DataModule1->Old_ID->FieldByName("File_2")->AsString=FileName2;
   DataModule1->Old_ID->FieldByName("Psi_Measure_ID")->AsString=M_ID_1->Text;
   DataModule1->Old_ID->Post();
   DataModule1->Old_ID->Last();
   Old_ID=DataModule1->Old_ID->FieldByName("ID")->AsFloat;
   DataModule1->Old_ID->Active=false;
   WorkProgress->Position=30;
   Old->Active=false;
   Old->SQL->Clear();
   Old->SQL->Add("Select SQL_NO_CACHE * from old where Old_ID='"+FloatToStr(Old_ID)+"' order by N");
   Old->Active=true;
   WorkProgress->Position=35;
   Spc_Report->Open();
   Old_Report->Open();
Print_Data->Active=false;
Print_Data->SQL->Clear();
Print_Data->SQL->Add("Select SQL_NO_CACHE * from print_data where ID='"+Spc->FieldByName("PrintProfile")->AsString+"'");
Print_Data->Active=true;

  Print_Files->Active=true;
   Print_Files->First();
           for (int i=0; i<Print_Files->RecordCount; i++){
               if (Print_Data->FieldByName("Old")->AsString==Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            Print_Files->Next();
           }

          TStream *FStream;
          FStream=Print_Files->CreateBlobStream(Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          Print_Files->Active=false;


   double step1;
   step1=65/(Measure_2->RecordCount)+1;
   for (int i=0;i<Measure_2->RecordCount;i++){
          Measure_1->First();
                    for (int j=0; j<Measure_1->RecordCount;j++){
                       if (Measure_2->FieldByName("N")->AsString==Measure_1->FieldByName("N")->AsString){
                           Old->Append();
                           Old->FieldByName("Msk")->AsString=MSK;
                           Old->FieldByName("N")->AsString=Measure_2->FieldByName("N")->AsString;
                           Old->FieldByName("Old_ID")->AsString=Old_ID;
                           Old->FieldByName("MeasureID")->AsString=Measure_2->FieldByName("Measure_ID")->AsString;
                           Old->FieldByName("Spc")->AsString=Measure_2->FieldByName("Spc")->AsString;
                           Old->FieldByName("File1")->AsString=FileName1;
                           Old->FieldByName("File2")->AsString=FileName2;
                           Old->FieldByName("Measure1")->AsFloat=Measure_1->FieldByName("F")->AsFloat;
                           Old->FieldByName("Measure2")->AsFloat=Measure_2->FieldByName("F")->AsFloat;
                           Old->FieldByName("Measure1_R")->AsFloat=Measure_1->FieldByName("R")->AsFloat;
                           Old->FieldByName("Measure2_R")->AsFloat=Measure_2->FieldByName("R")->AsFloat;
                            Old->FieldByName("old1")->AsString=Measure_2->FieldByName("F")->AsFloat-Measure_1->FieldByName("F")->AsFloat;
                            Old->FieldByName("old2")->AsString=fabs(Measure_2->FieldByName("R")->AsFloat-Measure_1->FieldByName("R")->AsFloat);
                            boolean tt=true;
                            if (Measure_2->FieldByName("F")->AsFloat-Measure_1->FieldByName("F")->AsFloat>F_Max || Measure_2->FieldByName("F")->AsFloat-Measure_1->FieldByName("F")->AsFloat<F_Min){
                             tt=false;
                            }
                            if (Measure_2->FieldByName("R")->AsFloat-Measure_1->FieldByName("R")->AsFloat>R_Max || Measure_2->FieldByName("R")->AsFloat-Measure_1->FieldByName("R")->AsFloat<R_Min){
                             tt=false;
                            }
                            if (tt){
                             Old->FieldByName("Status")->AsString="Годен";
                            }
                            else {
                              Old->FieldByName("Status")->AsString="Брак";
                            }
                             Old->FieldByName("Operator")->AsString=DataModule1->Dostup->FieldByName("Fname")->AsString;
                            Old->Post();
                           break;
                        }
                       Measure_1->Next();
                    }
     WorkProgress->Position= WorkProgress->Position+step1;
     Measure_2->Next();
   }

frxReport1->PrepareReport(true);
frxReport1->ShowPreparedReport();
Spc_Report->Close();
Old_Report->Close();
Old->Active=false;
Spc->Active=false;
}
//---------------------------------------------------------------------------
void __fastcall TSpektrOLDForm::AdvGlassButton2Click(TObject *Sender)
{
   Old->Active=false;
   Old->SQL->Clear();
   Old->SQL->Add("Select SQL_NO_CACHE * from old where Old_ID='"+Old_ID->Text+"' order by N");
   Old->Active=true;
   int n=Old->RecordCount;
   Old->First();
   AnsiString Spc_Name=Old->FieldByName("Spc")->AsString;
   Spc->Active=false;
  Spc->SQL->Clear();
  Spc->SQL->Add("Select SQL_NO_CACHE Name,old1max,old1min,Old2Max,old2min,PrintProfile,ID from specification where Name='"+Spc_Name+"'");
  Spc->Active=true;
  Spc_Report->Open();
  Old_Report->Open();
   Print_Data->Active=false;
Print_Data->SQL->Clear();
Print_Data->SQL->Add("Select SQL_NO_CACHE * from print_data where ID='"+Spc->FieldByName("PrintProfile")->AsString+"'");
Print_Data->Active=true;
  Print_Files->Active=true;
   Print_Files->First();
           for (int i=0; i<Print_Files->RecordCount; i++){
               if (Print_Data->FieldByName("Old")->AsString==Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            Print_Files->Next();
           }

          TStream *FStream;
          FStream=Print_Files->CreateBlobStream(Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          Print_Files->Active=false;
  frxReport1->PrepareReport(true);
frxReport1->ShowPreparedReport();
  Spc_Report->Close();
  Old_Report->Close();
}
//---------------------------------------------------------------------------

