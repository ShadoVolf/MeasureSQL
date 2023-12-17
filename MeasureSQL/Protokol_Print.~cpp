//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Protokol_Print.h"
#include "data1.h"
#include "Data.h"
#include "ProtokolData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzButton"
#pragma link "RzChkLst"
#pragma link "RzEdit"
#pragma link "RzLstBox"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TProtokol_Print_Form *Protokol_Print_Form;
//---------------------------------------------------------------------------
__fastcall TProtokol_Print_Form::TProtokol_Print_Form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TProtokol_Print_Form::RzButton2Click(TObject *Sender)
{
AnsiString Code=edtMeasure_ID->Text;
        if (Code.SubString(0,3)=="801"){
                Protokol1->Add(Code.SubString(4,Code.Length()-2));
           }
  edtMeasure_ID->Text="";        
}
//---------------------------------------------------------------------------
void __fastcall TProtokol_Print_Form::btnPrintClick(TObject *Sender)
{
AnsiString ProtokolID;
 for (int i=0; i<Protokol1->Items->Count;i++){
        ProtokolID=Protokol1->Items->Strings[i];
        if (Protokol1->ItemChecked[i]){
             DataModule2->Protokol_Archive->Active=false;
             DataModule2->Protokol_Archive->SQL->Clear();
             AnsiString sql1="Select SQL_NO_CACHE * from `psi_protokol_archive` where `Measure_Protokol_ID`='"+ ProtokolID+"' order by N";
             DataModule2->Protokol_Archive->SQL->Add(sql1);
             DataModule2->Protokol_Archive->Active=true;
             DataModule2->Protokol_Archive->First();

             DataModule1->DropLianozTable->Execute();
             DataModule1->CreateLianozTable->Execute();
             Lianoz->Open();
             Lianoz->OpenDataSource;
             DataModule2->SqlSpec->Active=false;
             DataModule2->SqlSpec->SQL->Clear();
             AnsiString sql="Select SQL_NO_CACHE * from `specification` where `Name`='" + DataModule2->Protokol_Archive->FieldByName("Spc")->AsString+"'";
             DataModule2->SqlSpec->SQL->Add(sql);
             DataModule2->SqlSpec->Active=true;

             DataModule2->Lianoz->Active=true;
             DataModule2->Lianoz->First();

             for (int j=0;j<DataModule2->Protokol_Archive->RecordCount;j++){

                        DataModule2->Lianoz->Append();
                     DataModule2->Lianoz->FieldByName("N")->AsString=DataModule2->Protokol_Archive->FieldByName("N")->AsString;
                     DataModule2->Lianoz->FieldByName("F")->AsFloat=DataModule2->Protokol_Archive->FieldByName("F")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0")->AsFloat=DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Cq")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Q")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat;
                     DataModule2->Lianoz->FieldByName("RR")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat;
                     DataModule2->Lianoz->FieldByName("R")->AsFloat=DataModule2->Protokol_Archive->FieldByName("R")->AsFloat;
                     DataModule2->Lianoz->FieldByName("FT")->AsFloat=DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft1")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ft2")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_ID")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Measure_Protokol_ID")->AsFloat=(DataModule2->Protokol_Archive->FieldByName("Measure_Protokol_ID")->AsFloat-1);
                     DataModule2->Lianoz->FieldByName("Rmax")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat;
                      DataModule2->Lianoz->FieldByName("IT")->AsFloat=DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmax")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Mono")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spur")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C1_2C0")->AsFloat=DataModule2->Protokol_Archive->FieldByName("C1_2C0")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Slope")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Shum")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Shum_1")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Shum_1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("G")->AsFloat=DataModule2->Protokol_Archive->FieldByName("G")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Fptp")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat;
                     DataModule2->Lianoz->FieldByName("L")->AsFloat=DataModule2->Protokol_Archive->FieldByName("L")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Rc_Rb")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Tmin")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmax")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmin")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Rtgk")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Rtgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Ftgk")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Ftgk")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Fmaxm")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat;
                     DataModule2->Lianoz->FieldByName("Spc")->AsString=DataModule2->Protokol_Archive->FieldByName("Spc")->AsString;
                     DataModule2->Lianoz->FieldByName("Operator")->AsString=DataModule2->Protokol_Archive->FieldByName("Operator")->AsString;
                     DataModule2->Lianoz->FieldByName("Msk")->AsString=DataModule2->Protokol_Archive->FieldByName("Msk")->AsString;
                     DataModule2->Lianoz->FieldByName("intervalfg")->AsString=DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString;
                     DataModule2->Lianoz->FieldByName("RR1")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat;
                     DataModule2->Lianoz->FieldByName("C0_C1")->AsFloat=DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat;
                      DataModule2->Lianoz->FieldByName("Old")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat;
                      DataModule2->Lianoz->FieldByName("PH_OCS")->AsString=DataModule2->Protokol_Archive->FieldByName("PH_OCS")->AsString;
                     DataModule2->Lianoz->FieldByName("PH_Analyser")->AsString=DataModule2->Protokol_Archive->FieldByName("PH_Analyser")->AsString;
                     DataModule2->Lianoz->FieldByName("PH_Analyser_SN")->AsString=DataModule2->Protokol_Archive->FieldByName("PH_Analyser_SN")->AsString;
                     DataModule2->Lianoz->Post();
                    DataModule2->Protokol_Archive->Next();

             }

          Protokol_Data->Protokol_Types->Active=false;
          Protokol_Data->Protokol_Types->SQL->Clear();
          Protokol_Data->Protokol_Types->SQL->Add("Select * from `print_protokol_types` where `Name`='Протокол ВП без запаса'");
          Protokol_Data->Protokol_Types->Active=true;
          Protokol_Data->Protokol_Types->First();
          AnsiString FieldName;
          FieldName=Protokol_Data->Protokol_Types->FieldByName("Print_Field")->AsString;
          Protokol_Data->Protokol_Types->Active=false;

             DataModule2->Print->Active=false;
             DataModule2->Print->SQL->Clear();
             DataModule2->Print->SQL->Add("Select `"+FieldName+"` from `print_data` where `ID`='"+DataModule2->SqlSpec->FieldByName("PrintProfile")->AsString+"'");
             DataModule2->Print->Active=true;
             DataModule2->Print->First();
           AnsiString PrintFileName=DataModule2->Print->FieldByName(FieldName)->AsString;
              DataModule2->Print->Active=false;

          DataModule2->Print_Files->Active=false;
          DataModule2->Print_Files->SQL->Clear();
          DataModule2->Print_Files->SQL->Add("Select * from `print_files` where `Name`='"+PrintFileName+"'");
          DataModule2->Print_Files->Active=true;
          DataModule2->Print_Files->First();

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
          frxReport1->PrepareReport(true);
          frxReport1->ShowPreparedReport();
          Lianoz->CloseDataSource;
          Lianoz->Close();
        }
 }
}
//---------------------------------------------------------------------------
void __fastcall TProtokol_Print_Form::btnCloseClick(TObject *Sender)
{
this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TProtokol_Print_Form::RzButton6Click(TObject *Sender)
{
Protokol1->Items->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TProtokol_Print_Form::RzButton3Click(TObject *Sender)
{
int Count_all=0;
        for (int i=0; i<Protokol1->Items->Count; i++){

             AnsiString Protokol_ID= Protokol1->Items->Strings[i];

             DataModule2->Protokol_Archive_Count->Active=false;
             DataModule2->Protokol_Archive_Count->SQL->Clear();
             AnsiString sql2="Select SQL_NO_CACHE Count(*) from `psi_protokol_archive` where `Measure_Protokol_ID`='"+ Protokol_ID+"'";
             DataModule2->Protokol_Archive_Count->SQL->Add(sql2);
             DataModule2->Protokol_Archive_Count->Active=true;
             Count_all=Count_all+ DataModule2->Protokol_Archive_Count->FieldByName("Count(*)")->AsFloat;
             if (DataModule2->Protokol_Archive_Count->FieldByName("Count(*)")->AsFloat>0){
             Protokol1->ItemChecked[i]=true;
             }


        }
       Label3->Caption=FloatToStr(Count_all);

}
//---------------------------------------------------------------------------

void __fastcall TProtokol_Print_Form::RzButton4Click(TObject *Sender)
{
int Count_Rev=StrToFloat(Protokol_Count->Text);
int Count=0;
AnsiString New_Measure_Protokol_ID;
        DataModule2->Protokol_Measure_ID->Active=true;
        DataModule2->Protokol_Measure_ID->Last();
int Protokol_N = DataModule2->Protokol_Measure_ID->FieldByName("ProtokolN")->AsFloat;
AnsiString ProtokolID;
int k=0;
        for (int i=0; i<Protokol1->Items->Count;i++){       //for1
                if (Protokol1->ItemChecked[i]){   //if 1
                        ProtokolID=Protokol1->Items->Strings[i];
                             if (Count_Rev>0){
                                         DataModule2->Protokol_Measure_ID_Read->Active=false;
                                         DataModule2->Protokol_Measure_ID_Read->SQL->Clear();
                                         AnsiString sql4="Select * from `psi_measure_protokol_id` where `Measure_Protokol_ID`='"+ ProtokolID+"'";
                                         DataModule2->Protokol_Measure_ID_Read->SQL->Add(sql4);
                                         DataModule2->Protokol_Measure_ID_Read->Active=true;
                                         DataModule2->Protokol_Measure_ID_Read->First();

                                         if (i==0){
                                                  Protokol_N=Protokol_N+1;
                                                DataModule2->Protokol_Measure_ID->Active=true;
                                                DataModule2->Protokol_Measure_ID->Append();
                                                DataModule2->Protokol_Measure_ID->FieldByName("MSK")->AsString=DataModule2->Protokol_Measure_ID_Read->FieldByName("MSK")->AsString;
                                                DataModule2->Protokol_Measure_ID->FieldByName("File")->AsString=DataModule2->Protokol_Measure_ID_Read->FieldByName("File")->AsString;
                                                DataModule2->Protokol_Measure_ID->FieldByName("Measure_ID")->AsFloat=DataModule2->Protokol_Measure_ID_Read->FieldByName("Measure_ID")->AsFloat;
                                                DataModule2->Protokol_Measure_ID->FieldByName("Spc")->AsString=DataModule2->Protokol_Measure_ID_Read->FieldByName("Spc")->AsString;
                                                DataModule2->Protokol_Measure_ID->FieldByName("dataR")->AsString=Now().DateString();
                                                DataModule2->Protokol_Measure_ID->FieldByName("ProtokolN")->AsFloat=Protokol_N;
                                                DataModule2->Protokol_Measure_ID->Post();
                                                DataModule2->Protokol_Measure_ID->Last();
                                                New_Measure_Protokol_ID=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsString;
                                                Protokol2->Items->Add(New_Measure_Protokol_ID);
                                                k=1;
                                         }
                                        }
                                        else {
                                               DataModule2->Protokol_Measure_ID_Edit->Active=false;
                                               DataModule2->Protokol_Measure_ID_Edit->SQL->Clear();
                                               AnsiString sql5="Select * from `psi_measure_protokol_id` where `Measure_Protokol_ID`='"+ New_Measure_Protokol_ID+"'";
                                               DataModule2->Protokol_Measure_ID_Edit->SQL->Add(sql5);
                                               DataModule2->Protokol_Measure_ID_Edit->Active=true;
                                               DataModule2->Protokol_Measure_ID_Edit->Edit();
                                               DataModule2->Protokol_Measure_ID_Edit->FieldByName("Count")->AsFloat=Count;
                                               DataModule2->Protokol_Measure_ID_Edit->Post();


                                                Protokol_N=Protokol_N+1;
                                                DataModule2->Protokol_Measure_ID->Active=true;
                                                DataModule2->Protokol_Measure_ID->Append();
                                                DataModule2->Protokol_Measure_ID->FieldByName("MSK")->AsString=DataModule2->Protokol_Measure_ID_Read->FieldByName("MSK")->AsString;
                                                DataModule2->Protokol_Measure_ID->FieldByName("File")->AsString=DataModule2->Protokol_Measure_ID_Read->FieldByName("File")->AsString;
                                                DataModule2->Protokol_Measure_ID->FieldByName("Measure_ID")->AsFloat=DataModule2->Protokol_Measure_ID_Read->FieldByName("Measure_ID")->AsFloat;
                                                DataModule2->Protokol_Measure_ID->FieldByName("Spc")->AsString=DataModule2->Protokol_Measure_ID_Read->FieldByName("Spc")->AsString;
                                                DataModule2->Protokol_Measure_ID->FieldByName("dataR")->AsString=Now().DateString();
                                                DataModule2->Protokol_Measure_ID->FieldByName("ProtokolN")->AsFloat=Protokol_N;
                                                DataModule2->Protokol_Measure_ID->Post();
                                                DataModule2->Protokol_Measure_ID->Last();
                                                New_Measure_Protokol_ID=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsString;
                                                Protokol2->Items->Add(New_Measure_Protokol_ID);

                                               Count_Rev=StrToFloat(Protokol_Count->Text);
                                               Count=0;
                                               k=1;

                                        }


                                         DataModule2->Protokol_Archive->Active=false;
                                         DataModule2->Protokol_Archive->SQL->Clear();
                                         AnsiString sql1="Select * from `psi_protokol_archive` where `Measure_Protokol_ID`='"+ ProtokolID+"' order by N";
                                         DataModule2->Protokol_Archive->SQL->Add(sql1);
                                         DataModule2->Protokol_Archive->Active=true;
                                         DataModule2->Protokol_Archive->First();

                                         DataModule2->Protokol_Archive_1->Active=false;
                                         DataModule2->Protokol_Archive_1->SQL->Clear();
                                         AnsiString sql2="Select * from `psi_protokol_archive` where `Measure_Protokol_ID`='"+ New_Measure_Protokol_ID+"'";
                                         DataModule2->Protokol_Archive_1->SQL->Add(sql2);
                                         DataModule2->Protokol_Archive_1->Active=true;


                                            for (int j=0;j< DataModule2->Protokol_Archive->RecordCount;j++){
                                               if (Count_Rev>0){
                                                }
                                                  else {

                                                         DataModule2->Protokol_Measure_ID_Edit->Active=false;
                                                         DataModule2->Protokol_Measure_ID_Edit->SQL->Clear();
                                                         AnsiString sql5="Select * from `psi_measure_protokol_id` where `Measure_Protokol_ID`='"+ New_Measure_Protokol_ID+"'";
                                                         DataModule2->Protokol_Measure_ID_Edit->SQL->Add(sql5);
                                                         DataModule2->Protokol_Measure_ID_Edit->Active=true;
                                                         DataModule2->Protokol_Measure_ID_Edit->Edit();
                                                         DataModule2->Protokol_Measure_ID_Edit->FieldByName("Count")->AsFloat=Count;
                                                         DataModule2->Protokol_Measure_ID_Edit->Post();

                                                         Protokol_N=Protokol_N+1;
                                                         DataModule2->Protokol_Measure_ID->Active=true;
                                                         DataModule2->Protokol_Measure_ID->Append();
                                                         DataModule2->Protokol_Measure_ID->FieldByName("MSK")->AsString=DataModule2->Protokol_Measure_ID_Edit->FieldByName("MSK")->AsString;
                                                         DataModule2->Protokol_Measure_ID->FieldByName("File")->AsString=DataModule2->Protokol_Measure_ID_Edit->FieldByName("File")->AsString;
                                                         DataModule2->Protokol_Measure_ID->FieldByName("Measure_ID")->AsFloat=DataModule2->Protokol_Measure_ID_Edit->FieldByName("Measure_ID")->AsFloat;
                                                         DataModule2->Protokol_Measure_ID->FieldByName("Spc")->AsString=DataModule2->Protokol_Measure_ID_Edit->FieldByName("Spc")->AsString;
                                                         DataModule2->Protokol_Measure_ID->FieldByName("dataR")->AsString=Now().DateString();
                                                         DataModule2->Protokol_Measure_ID->FieldByName("ProtokolN")->AsFloat=Protokol_N;
                                                         DataModule2->Protokol_Measure_ID->Post();
                                                         DataModule2->Protokol_Measure_ID->Last();
                                                         New_Measure_Protokol_ID=DataModule2->Protokol_Measure_ID->FieldByName("Measure_protokol_ID")->AsString;

                                                         Protokol2->Items->Add(New_Measure_Protokol_ID);
                                                        Count_Rev=StrToFloat(Protokol_Count->Text);
                                                        Count=0;
                                                  }

                                                   if (Count==0 & k==0){
                                                         Protokol_N=Protokol_N+1;

                                                     }
                                                     else if (Count==0 & k==1){
                                                      k=0;
                                                     }

                                                  DataModule2->Protokol_Archive_1->Append();
                                                       if (DataModule2->Protokol_Archive->FieldByName("N")->AsString==DataModule2->proverka_ph->FieldByName("Serial")->AsString){
                                                                 DataModule2->Protokol_Archive_1->FieldByName("ProtokolType_ID")->AsString="1";
                                                                 DataModule2->Protokol_Archive_1->FieldByName("N")->AsString=DataModule2->proverka_ph->FieldByName("Serial")->AsString;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("File")->AsString=DataModule2->Protokol_Archive->FieldByName("File")->AsString;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("F")->AsFloat=DataModule2->Protokol_Archive->FieldByName("F")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("C0")->AsFloat=DataModule2->Protokol_Archive->FieldByName("C0")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Cq")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Cq")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Q")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Q")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("RR")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("C1_2C0")->AsFloat=DataModule2->Protokol_Archive->FieldByName("C1_2C0")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("R")->AsFloat=DataModule2->Protokol_Archive->FieldByName("R")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("FT")->AsFloat=DataModule2->Protokol_Archive->FieldByName("FT")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Measure_ID")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Measure_ID")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Measure_Protokol_ID")->AsString=New_Measure_Protokol_ID;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Rmax")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Rmax")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("IT")->AsFloat=DataModule2->Protokol_Archive->FieldByName("IT")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Tmax")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Tmax")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Mono")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Mono")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Spur")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Spur")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Slope")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Slope")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Shum")->AsFloat=DataModule2->proverka_ph->FieldByName("First_Shum1")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Shum_1")->AsFloat=DataModule2->proverka_ph->FieldByName("First_Shum2")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("G")->AsFloat=DataModule2->Protokol_Archive->FieldByName("G")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Fptp")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fptp")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("L")->AsFloat=DataModule2->Protokol_Archive->FieldByName("L")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Rc_Rb")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Rc_Rb")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Rtgk")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Rtgk")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Ftgk")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Ftgk")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Ft1")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Ft1")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Ft2")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Ft2")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Tmin")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Tmin")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Fmax")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fmax")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Fmin")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fmin")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("PH_ID")->AsFloat=DataModule2->proverka_ph->FieldByName("First_PH_ID")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Date")->AsString=DataModule2->Protokol_Archive->FieldByName("Date")->AsString;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Date1")->AsString=Now().DateString();
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Fmaxm")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Fmaxm")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Spc")->AsString=DataModule2->Protokol_Archive->FieldByName("Spc")->AsString;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Operator")->AsString=DataModule1->Dostup->FieldByName("Name")->AsString;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Msk")->AsString=DataModule2->Protokol_Archive->FieldByName("Msk")->AsString;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("intervalfg")->AsString=DataModule2->Protokol_Archive->FieldByName("intervalfg")->AsString;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("RR1")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR1")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("RR2")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR2")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("RR3")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR3")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("RR4")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR4")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("RR5")->AsFloat=DataModule2->Protokol_Archive->FieldByName("RR5")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("C0_C1")->AsFloat=DataModule2->Protokol_Archive->FieldByName("C0_C1")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->FieldByName("Old")->AsFloat=DataModule2->Protokol_Archive->FieldByName("Old")->AsFloat;
                                                                 DataModule2->Protokol_Archive_1->Post();
                                                                 Count_Rev=Count_Rev-1;
                                                                 Count++;
                                                           }
                                                  DataModule2->Protokol_Archive->Next();

                                              }

                }     //if 1

           Protokol1->ItemChecked[i]=false;
        } //for1
            if (Count>0){
                                               DataModule2->Protokol_Measure_ID_Edit->Active=false;
                                               DataModule2->Protokol_Measure_ID_Edit->SQL->Clear();
                                               AnsiString sql5="Select * from `psi_measure_protokol_id` where `Measure_Protokol_ID`='"+ New_Measure_Protokol_ID+"'";
                                               DataModule2->Protokol_Measure_ID_Edit->SQL->Add(sql5);
                                               DataModule2->Protokol_Measure_ID_Edit->Active=true;
                                               DataModule2->Protokol_Measure_ID_Edit->Edit();
                                               DataModule2->Protokol_Measure_ID_Edit->FieldByName("Count")->AsFloat=Count;
                                               DataModule2->Protokol_Measure_ID_Edit->Post();



            }        
}
//---------------------------------------------------------------------------

