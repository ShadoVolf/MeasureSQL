//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NewSpc.h"
#include "Data.h"
#include "addNorm.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzEdit"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TNewSpcForm *NewSpcForm;
//---------------------------------------------------------------------------
__fastcall TNewSpcForm::TNewSpcForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TNewSpcForm::btnCloseClick(TObject *Sender)
{
NewSpcForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TNewSpcForm::btnCreateClick(TObject *Sender)
{
AnsiString F=edtSpcName->Text;


AnsiString t;
AnsiString Type;
AnsiString Temp;
AnsiString Text;
AnsiString metod;
double f;
AnsiString G;
double NormF;
int l;
int l1;
int l2;

AnsiString osm,nastr,norm,nominal,Cn,V,cod,C,suf;
cutString(F,osm,Type,Temp,nastr,norm,nominal,Cn,V,cod,C,suf);


try {
    changeDelimeter(nominal);
    f=StrToFloat(nominal);
        if (suf=="К"){
         f=StrToFloat(f)/1000;
        }
        else if (suf=="М"){
         f=StrToFloat(f);
        }
        else {
          ShowMessage("Ошибка создания спецификации");
        }
        if (Cn=="П" & Type!="РК386М" & Type!="РК386ММ"){
           metod="EqReact";
        }
        else if (!Cn.IsEmpty()){
             if (StrToFloat(Cn)>0){
              metod="Saunders (FR+FL)";
             }
        }
        else {
            metod="Series";
        }
       
   }
   catch (Exception *ex) {
   ShowMessage("Ошибка создания спецификации");

   }


DataModule1->SpcTemp->Active=false;
DataModule1->SpcTemp->SQL->Clear();
DataModule1->SpcTemp->SQL->Add("Select * from specification where Name='"+F+"'");
DataModule1->SpcTemp->Active=true;

if (DataModule1->SpcTemp->RecordCount>0){
    ShowMessage("Спецификация уже существует, для использования воспользуйтесь поиском");
    DataModule1->SpcTemp->Active=false;
}
else {
     if (Type!="РК731"){

      DataModule1->rnorm->Active=false;
      DataModule1->rnorm->SQL->Clear();
      DataModule1->rnorm->SQL->Add("Select * from rnorm where `Type`='"+Type+"' and `G`='"+suf+"' and `F(A)`<='"+f+"' and `F(B)`>='"+f+"'");
      DataModule1->rnorm->Active=true;
        if (DataModule1->rnorm->RecordCount>0){
                DataModule1->SqlSpecification->Append();
                if (Type!="РК566"){
                DataModule1->SqlSpecification->FieldByName("Name")->AsString=F;
                }
                Text="";
                if (osm=="ОСМ"){
                   Text=osm;
                   Text=Text+" ";
                }
                 Text=Text+Type;
                if (!C.IsEmpty()){
                 Text=Text+"-"+C;

                }
                 if (!Cn.IsEmpty()){
                  if (Type!="РК566"){
                        Text=Text+"-"+Cn;
                   }

                }
                if (Type!="РК566"){
                 Text=Text+"-"+nastr+Temp+norm;
                 }

                 if (!cod.IsEmpty()){
                   if (Type!="РК566"){
                   Text=Text+"-"+cod;
                   }
                 }
                 Text=Text+"-"+nominal+suf;
                 if (Type=="РК566"){
                 Text=Text+"-"+Temp;
                 }
                 if (!V.IsEmpty()){
                 if (Type!="РК566"){
                    Text=Text+"-"+V;
                    }
                 }
                 if (Type=="РК566"){
                 DataModule1->SqlSpecification->FieldByName("Name")->AsString=Text;
                 }
                DataModule1->SqlSpecification->FieldByName("Text")->AsString=Text;
                DataModule1->SqlSpecification->FieldByName("Ftgk_Measure")->AsString="False";
                    DataModule1->rnorm->First();


                                           if (DataModule1->rnorm->FieldByName("R25")->AsFloat>0){
                                               DataModule1->SqlSpecification->FieldByName("R")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Tpar")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                               DataModule1->SqlSpecification->FieldByName("Rmin")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("Rmax")->AsString=DataModule1->rnorm->FieldByName("R25")->AsString;
                                           }
                                           if (DataModule1->rnorm->FieldByName("Rmax")->AsFloat>0){
                                               DataModule1->SqlSpecification->FieldByName("Rmx")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Rmaxmin")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("Rmaxmax")->AsString=DataModule1->rnorm->FieldByName("Rmax")->AsString;
                                           }
                                          if (DataModule1->rnorm->FieldByName("dr")->AsFloat>0){
                                               DataModule1->SqlSpecification->FieldByName("RR2")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("RR2min")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("RR2max")->AsString=DataModule1->rnorm->FieldByName("dr")->AsString;
                                               DataModule1->SqlSpecification->FieldByName("RR3")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("RR3min")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("RR3max")->AsString=DataModule1->rnorm->FieldByName("dr")->AsString;
                                           }
                                            if (Type=="РК426"){
                                               DataModule1->SqlSpecification->FieldByName("RR2")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("RR2min")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("RR2max")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("RR3")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("RR3min")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("RR3max")->AsString="no";
                                           }
                                          if (DataModule1->rnorm->FieldByName("C0")->AsFloat>0){
                                               DataModule1->SqlSpecification->FieldByName("C0")->AsString="True";
                                               if (DataModule1->rnorm->FieldByName("C0min")->AsFloat>0){

                                               DataModule1->SqlSpecification->FieldByName("C0min")->AsString=DataModule1->rnorm->FieldByName("C0min")->AsString;
                                               }
                                               else {
                                               DataModule1->SqlSpecification->FieldByName("C0min")->AsString="no";
                                               }
                                               DataModule1->SqlSpecification->FieldByName("Tc0")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                               DataModule1->SqlSpecification->FieldByName("C0max")->AsString=DataModule1->rnorm->FieldByName("C0")->AsString;
                                           }
                                           else {
                                               DataModule1->SqlSpecification->FieldByName("C0max")->AsString="no";
                                               DataModule1->SqlSpecification->FieldByName("Tc0")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                           }
                                           if (Type=="РК379М" || Type=="РК379ММ" || Type=="РК379Б"){
                                                 DataModule1->SqlSpecification->FieldByName("C0")->AsString="True";
                                                 DataModule1->SqlSpecification->FieldByName("C0min")->AsString="no" ;
                                                 DataModule1->SqlSpecification->FieldByName("C0max")->AsString="no";
                                                 DataModule1->SqlSpecification->FieldByName("Tc0")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                                 DataModule1->SqlSpecification->FieldByName("Cq")->AsString="True";
                                                 DataModule1->SqlSpecification->FieldByName("Cqmin")->AsString="no";
                                                 DataModule1->SqlSpecification->FieldByName("Cqmax")->AsString="no";
                                                 DataModule1->SqlSpecification->FieldByName("Cqmax")->AsString="no";

                                           }

                                            if (DataModule1->rnorm->FieldByName("Cq")->AsFloat>0){
                                               DataModule1->SqlSpecification->FieldByName("Cq")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Cqmin")->AsString=DataModule1->rnorm->FieldByName("Cq")->AsString;
                                               DataModule1->SqlSpecification->FieldByName("Tcq")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                               DataModule1->SqlSpecification->FieldByName("Cqmax")->AsString="no";
                                           }
                                              if (DataModule1->rnorm->FieldByName("Mono")->AsFloat>0){
                                               DataModule1->SqlSpecification->FieldByName("M")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Mmax")->AsString=DataModule1->rnorm->FieldByName("Mono")->AsString;
                                               DataModule1->SqlSpecification->FieldByName("Mmin")->AsString="-"+DataModule1->rnorm->FieldByName("Mono")->AsString;
                                           }
                                             if (DataModule1->rnorm->FieldByName("dIT")->AsFloat>0){
                                               DataModule1->SqlSpecification->FieldByName("TurnOver")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Tomax")->AsString=DataModule1->rnorm->FieldByName("Tpar")->AsFloat+DataModule1->rnorm->FieldByName("dIT")->AsFloat;
                                               DataModule1->SqlSpecification->FieldByName("Tomin")->AsString=DataModule1->rnorm->FieldByName("Tpar")->AsFloat-DataModule1->rnorm->FieldByName("dIT")->AsFloat;
                                           }

                                           if (Type=="РК408ЭБ"){
                                                DataModule1->SqlSpecification->FieldByName("C0_C1")->AsString="True";

                                                DataModule1->SqlSpecification->FieldByName("C0_C1max")->AsString="333";
                                                DataModule1->SqlSpecification->FieldByName("C0_C1_T")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                                DataModule1->SqlSpecification->FieldByName("C0_C1min")->AsString="no";
                                                DataModule1->SqlSpecification->FieldByName("Cq")->AsString="True";
                                                DataModule1->SqlSpecification->FieldByName("Cqmax")->AsString="no";
                                                DataModule1->SqlSpecification->FieldByName("Tcq")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                                DataModule1->SqlSpecification->FieldByName("Cqmin")->AsString="no";
                                           }

                                        DataModule1->SqlSpecification->FieldByName("Power")->AsString=DataModule1->rnorm->FieldByName("power")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("MetalAu")->AsString=DataModule1->rnorm->FieldByName("MetalAu")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("MetalAg")->AsString=DataModule1->rnorm->FieldByName("MetalAg")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("MinNar")->AsString=DataModule1->rnorm->FieldByName("MinNar")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("Hran")->AsString=DataModule1->rnorm->FieldByName("Hran")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("TGK")->AsString=DataModule1->rnorm->FieldByName("TGK")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("DopuskFtgk")->AsString=DataModule1->rnorm->FieldByName("DopuskFtgk")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("DopuskRtgk")->AsString=DataModule1->rnorm->FieldByName("DopuskRtgk")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("Ftgk")->AsString=DataModule1->rnorm->FieldByName("Ftgk")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("Rtgk")->AsString=DataModule1->rnorm->FieldByName("Rtgk")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("TCHType")->AsString=DataModule1->rnorm->FieldByName("TCHType")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("TCH_Approx_type")->AsString="по узлам";
                                        DataModule1->SqlSpecification->FieldByName("TCH_interval_Type")->AsString=DataModule1->rnorm->FieldByName("MeasureType")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("polinom")->AsString=DataModule1->rnorm->FieldByName("Polinom")->AsString;
                                        DataModule1->SqlSpecification->FieldByName("TCH_Approx_Type")->AsString=DataModule1->rnorm->FieldByName("TCH_Approx_Type")->AsString;
                                         if (Type=="РК566"){
                                         DataModule1->SqlSpecification->FieldByName("AltAppprox")->AsString="True";
                                         DataModule1->SqlSpecification->FieldByName("Type")->AsString="V";

                                         }
                  DataModule1->fnorm->Active=false;
                  DataModule1->fnorm->SQL->Clear();
                  DataModule1->fnorm->SQL->Add("Select * from fnorm where Code='"+norm+"'");
                  DataModule1->fnorm->Active=true;

                                             if (DataModule1->fnorm->RecordCount>0){
                                                if (DataModule1->rnorm->FieldByName("Fptp")->AsString=="False"){
                                                  DataModule1->SqlSpecification->FieldByName("Fmx")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Fmaxmin")->AsString="-"+DataModule1->fnorm->FieldByName("Norm")->AsString;
                                               DataModule1->SqlSpecification->FieldByName("Fmaxmax")->AsString=DataModule1->fnorm->FieldByName("Norm")->AsString;
                                                 DataModule1->SqlSpecification->FieldByName("Fmn")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Fminmin")->AsString="-"+DataModule1->fnorm->FieldByName("Norm")->AsString;
                                               DataModule1->SqlSpecification->FieldByName("Fminmax")->AsString=DataModule1->fnorm->FieldByName("Norm")->AsString;

                                               }
                                               else if (DataModule1->rnorm->FieldByName("Fptp")->AsString=="True"){
                                                 DataModule1->SqlSpecification->FieldByName("Fptp")->AsString="True";
                                               DataModule1->SqlSpecification->FieldByName("Fptpmin")->AsString="-"+DataModule1->fnorm->FieldByName("Norm")->AsString;
                                               DataModule1->SqlSpecification->FieldByName("Fptpmax")->AsString=DataModule1->fnorm->FieldByName("Norm")->AsString;

                                               }
                                               DataModule1->SqlSpecification->FieldByName("NameR")->AsString=Type;
                                                  DataModule1->SqlSpecification->FieldByName("Nominal")->AsString=f;
                                                 DataModule1->SqlSpecification->FieldByName("Position")->AsString="True";
                                                 DataModule1->SqlSpecification->FieldByName("SNumber")->AsString="True";
                                                 DataModule1->SqlSpecification->FieldByName("Status")->AsString="True";
                                                  DataModule1->SqlSpecification->FieldByName("Data")->AsString="True";
                                                  DataModule1->SqlSpecification->FieldByName("Stat")->AsString="True";

                                                  DataModule1->SqlSpecification->FieldByName("AnomalR")->AsString="True";
                                                  if (suf=="К"){
                                                   DataModule1->SqlSpecification->FieldByName("Garmonica")->AsString=1;
                                                  }
                                                  else {
                                                    DataModule1->SqlSpecification->FieldByName("Garmonica")->AsString=3;
                                                  }

                                                 DataModule1->SqlSpecification->FieldByName("Norm")->AsString="True";
                                                 DataModule1->SqlSpecification->FieldByName("BD")->AsString="True";
                                                 DataModule1->SqlSpecification->FieldByName("Number")->AsString="True";

                                                 DataModule1->SqlSpecification->FieldByName("PrintProtokol")->AsString="True";

                                                 DataModule1->fnorm->Active=false;

                                                        DataModule1->TU1->Active=false;
                                                        DataModule1->TU1->SQL->Clear();
                                                         DataModule1->TU1->SQL->Add("Select * from tu where TUIndex='"+DataModule1->rnorm->FieldByName("TU")->AsString+"'");
                                                         DataModule1->TU1->Active=true;
                                                         DataModule1->SqlSpecification->FieldByName("TU")->AsString=DataModule1->TU1->FieldByName("TUName")->AsString;

                                                        DataModule1->TProfile->Active=false;
                                                        DataModule1->TProfile->SQL->Clear();
                                                         if (Type=="РК408ЭБ"||Type=="РК76М"||Type=="РК76ЭБ"|| Type=="РК426"){


                                                         DataModule1->TProfile->SQL->Add("Select * from temperatureprofile where code='"+Temp+"(5)'");
                                                         }
                                                         else {

                                                          DataModule1->TProfile->SQL->Add("Select * from temperatureprofile where code='"+Temp+"'");
                                                         }
                                                         DataModule1->TProfile->Active=true;
                                                                if (DataModule1->TProfile->RecordCount>0){
                                                                    DataModule1->SqlSpecification->FieldByName("Profile")->AsString=DataModule1->TProfile->FieldByName("Name")->AsString;
                                                                    DataModule1->SqlSpecification->FieldByName("IntervalName")->AsString=DataModule1->TProfile->FieldByName("IntervalName")->AsString;
                                                                    DataModule1->SqlSpecification->FieldByName("LoadType")->AsString=metod;

                                                                    if (Type=="РК566"){
                                                                     DataModule1->SqlSpecification->FieldByName("String")->AsString="SMD";
                                                                    }
                                                                    else {
                                                                     DataModule1->SqlSpecification->FieldByName("String")->AsString="00000";
                                                                    }
                                                                    if (Cn!=0){
                                                                    DataModule1->SqlSpecification->FieldByName("LoadValue")->AsString=Cn;
                                                                    }
                                                                    else {
                                                                    DataModule1->SqlSpecification->FieldByName("LoadValue")->AsFloat=0;
                                                                    }
                                                                    DataModule1->TProfile->Active=false;
                                                                              DataModule1->ResonatorType->Active=false;
                                                                                DataModule1->ResonatorType->SQL->Clear();
                                                                                 DataModule1->ResonatorType->SQL->Add("Select * from resonatortype where Type='"+Type+"'");
                                                                                 DataModule1->ResonatorType->Active=true;
                                                                                 AnsiString ky=DataModule1->ResonatorType->FieldByName("korpus")->AsString;
                                                                                 DataModule1->SqlSpecification->FieldByName("type")->AsString=DataModule1->ResonatorType->FieldByName("korpus")->AsString;
                                                                                DataModule1->ResonatorType->Active=false;
                                                                                DataModule1->SqlSpecification->FieldByName("Print")->AsString=DataModule1->rnorm->FieldByName("PrintID")->AsString;
                                                                                if (osm=="ОСМ"){
                                                                                DataModule1->SqlSpecification->FieldByName("PrintProfile")->AsString="41";

                                                                                }
                                                                                else {
                                                                                DataModule1->SqlSpecification->FieldByName("PrintProfile")->AsString=DataModule1->rnorm->FieldByName("PrintID")->AsString;
                                                                                 }
                                                                                           DataModule1->dopuski1->Active=false;
                                                                                          DataModule1->dopuski1->SQL->Clear();
                                                                                          DataModule1->dopuski1->SQL->Add("Select * from dopuski where TUID='"+DataModule1->TU1->FieldByName("TUIndex")->AsString+"'");
                                                                                        DataModule1->dopuski1->Active=true;
                                                                                       DataModule1->SqlSpecification->FieldByName("DopuskR")->AsFloat=DataModule1->dopuski1->FieldByName("R")->AsFloat;
                                                                                       if (Temp+norm=="ДР"){
                                                                                         DataModule1->SqlSpecification->FieldByName("DopuskFi")->AsFloat=2;
                                                                                       }
                                                                                       else {
                                                                                    DataModule1->SqlSpecification->FieldByName("DopuskFi")->AsFloat=DataModule1->dopuski1->FieldByName("Fm")->AsFloat;
                                                                                    }
                                                                                    DataModule1->SqlSpecification->FieldByName("DopuskC0")->AsFloat=DataModule1->dopuski1->FieldByName("C0")->AsFloat;
                                                                                    DataModule1->SqlSpecification->FieldByName("DopuskCq")->AsFloat=DataModule1->dopuski1->FieldByName("Cq")->AsFloat;
                                                                                    DataModule1->SqlSpecification->FieldByName("DopuskFi_Real")->AsFloat=DataModule1->dopuski1->FieldByName("Fm_Real")->AsFloat;
                                                                                      DataModule1->fnNorm->Active=false;
                                                                                       if (Type=="РК566"){
                                                                                        nastr="5";
                                                                                       }
                                                                                          DataModule1->fnNorm->SQL->Clear();
                                                                                          DataModule1->fnNorm->SQL->Add("Select * from fnastrnorm where ID='"+nastr+"'");
                                                                                        DataModule1->fnNorm->Active=true;

                                                                                                if (DataModule1->fnNorm->RecordCount>0){

                                                                                                          if (DataModule1->rnorm->FieldByName("F")->AsString=="True"){

                                                                                                              DataModule1->SqlSpecification->FieldByName("Ft")->AsString="True";
                                                                                                              DataModule1->SqlSpecification->FieldByName("Tnastr")->AsFloat=DataModule1->rnorm->FieldByName("Tpar")->AsFloat;
                                                                                                              DataModule1->SqlSpecification->FieldByName("Fmin")->AsString="-"+DataModule1->fnNorm->FieldByName("Norm")->AsString;
                                                                                                              DataModule1->SqlSpecification->FieldByName("Fmax")->AsString=DataModule1->fnNorm->FieldByName("Norm")->AsString;
                                                                                                              DataModule1->SqlSpecification->FieldByName("FnastrHZ")->AsString=f*DataModule1->fnNorm->FieldByName("Norm")->AsFloat;


                                                                                                             }
                                                                                                             else {
                                                                                                             DataModule1->SqlSpecification->FieldByName("Ft")->AsString="False";
                                                                                                              DataModule1->SqlSpecification->FieldByName("Fmin")->AsString="-"+DataModule1->fnNorm->FieldByName("Norm")->AsString;
                                                                                                              DataModule1->SqlSpecification->FieldByName("Fmax")->AsString=DataModule1->fnNorm->FieldByName("Norm")->AsString;
                                                                                                              DataModule1->SqlSpecification->FieldByName("FnastrHZ")->AsString=f*DataModule1->fnNorm->FieldByName("Norm")->AsFloat;
                                                                                                              DataModule1->SqlSpecification->FieldByName("Tnastr")->AsString=DataModule1->rnorm->FieldByName("Tpar")->AsString;

                                                                                                             }
                                                                                                             DataModule1->SqlSpecification->Post();
                                                                                                           DataModule1->nomeklatura_rk->Active=false;
                                                                                                         DataModule1->nomeklatura_rk->SQL->Clear();
                                                                                                         DataModule1->nomeklatura_rk->SQL->Add("Select * from nomeklatura_rk where наименование='"+Text+"'");
                                                                                                         DataModule1->nomeklatura_rk->Active=true;
                                                                                                          if (DataModule1->nomeklatura_rk->RecordCount>0){

                                                                                                                 DataModule1->SpcTemp->Active=false;
                                                                                                                DataModule1->SpcTemp->SQL->Clear();
                                                                                                                DataModule1->SpcTemp->SQL->Add("Select * from specification where Name='"+F+"'");
                                                                                                                DataModule1->SpcTemp->Active=true;
                                                                                                                DataModule1->nomeklatura_rk_psi->Active=false;
                                                                                                                  DataModule1->nomeklatura_rk_psi->SQL->Clear();
                                                                                                                  DataModule1->nomeklatura_rk_psi->SQL->Add("Select * from nomeklatura_rk_psi where NomenklaturaName='"+Text+"'");
                                                                                                                 DataModule1->nomeklatura_rk_psi->Active=true;
                                                                                                              if (DataModule1->nomeklatura_rk_psi->RecordCount>0){
                                                                                                              DataModule1->nomeklatura_rk_psi->First();
                                                                                                                         for (int i=0; i<DataModule1->nomeklatura_rk_psi->RecordCount; i++){
                                                                                                                              DataModule1->nomeklatura_rk_psi->Edit();
                                                                                                                              DataModule1->nomeklatura_rk_psi->FieldByName("SpcID")->AsString=DataModule1->SpcTemp->FieldByName("ID")->AsString;
                                                                                                                              DataModule1->nomeklatura_rk_psi->FieldByName("SpcName")->AsString=Text;
                                                                                                                             DataModule1->nomeklatura_rk_psi->Post();
                                                                                                                             DataModule1->nomeklatura_rk_psi->Next();
                                                                                                                        }
                                                                                                               }
                                                                                                               else {
                                                                                                                   DataModule1->nomeklatura_rk_psi->Append();
                                                                                                                    DataModule1->nomeklatura_rk_psi->FieldByName("SpcID")->AsString=DataModule1->SpcTemp->FieldByName("ID")->AsString;
                                                                                                                    DataModule1->nomeklatura_rk_psi->FieldByName("SpcName")->AsString=Text;
                                                                                                                    DataModule1->nomeklatura_rk_psi->FieldByName("NomenklaturaName")->AsString=Text;
                                                                                                                    DataModule1->nomeklatura_rk_psi->FieldByName("NomenklaturaID")->AsString=DataModule1->nomeklatura_rk->FieldByName("номенклатура")->AsString;
                                                                                                                  DataModule1->nomeklatura_rk_psi->Post();
                                                                                                                }
                                                                                                          }


                                                                                                           DataModule1->rnorm->Active=false;

                                                                                                         DataModule1->MarkerText->Active=false;
                                                                                                         DataModule1->MarkerText->SQL->Clear();
                                                                                                         DataModule1->MarkerText->SQL->Add("Select * from markertext");
                                                                                                         DataModule1->MarkerText->Active=true;
                                                                                                         DataModule1->MarkerText->Append();
                                                                                                         DataModule1->MarkerText->FieldByName("ResonatorName")->AsString=F;
                                                                                                         DataModule1->MarkerText->FieldByName("TypeName")->AsString=Type;

                                                                                                         if (suf=="К"){
                                                                                                                  DataModule1->MarkerText->FieldByName("Text")->AsString=nominal+"K";



                                                                                                                   }
                                                                                                           if(suf=="М"){

                                                                                                                DataModule1->MarkerText->FieldByName("Text")->AsString=nominal+"M";

                                                                                                           }
                                                                                                         DataModule1->MarkerText->FieldByName("Type")->AsString=ky;
                                                                                                         DataModule1->MarkerText->Post();
                                                                                                         DataModule1->MarkerText->Active=false;
                                                                                                         if (osm=="ОСМ"){

                                                                                                          DataModule1->SpcTemp->Active=false;
                                                                                                           DataModule1->SpcTemp->SQL->Clear();
                                                                                                           DataModule1->SpcTemp->SQL->Add("Select * from specification where Name='"+F+"'");
                                                                                                           DataModule1->SpcTemp->Active=true;
                                                                                                           AddNormForm->edtSpc->Text=DataModule1->SpcTemp->FieldByName("Name")->AsString;
                                                                                                           AddNormForm->SpcID->Text=DataModule1->SpcTemp->FieldByName("ID")->AsString;
                                                                                                          AddNormForm->Show();
                                                                                                          this->Hide();
                                                                                                         }
                                                                                                        DataModule1->SpcTemp->Active=false;
                                                                                                                DataModule1->SpcTemp->SQL->Clear();
                                                                                                                DataModule1->SpcTemp->SQL->Add("Select * from specification");
                                                                                                                DataModule1->SpcTemp->Active=true;
                                                                                                }
                                                                                                else {
                                                                                                       ShowMessage("Не задана точность настройки");

                                                                                                }
                                                                                    DataModule1->TU1->Active=false;




                                                                       }

                                                                else {
                                                                   ShowMessage("Температурный  интервал отсутствует");

                                                                }


                                             }
                                             else{
                                                   ShowMessage("Нормы отсутствуют");

                                             }



        }
        else {
          DataModule1->nomeklatura_rk->Active=false;
          DataModule1->nomeklatura_rk->SQL->Clear();
          DataModule1->nomeklatura_rk->SQL->Add("Select * from nomeklatura_rk where наименование='"+F+"'");
          DataModule1->nomeklatura_rk->Active=true;
        ShowMessage("Данные для создания спецификации не найдены, отправлено сообщение администратору(тел. 228)");
         DataModule1->spc_not_inbase->Active=false;
          DataModule1->spc_not_inbase->SQL->Clear();
          DataModule1->spc_not_inbase->SQL->Add("Select * from spc_not_inbase");
          DataModule1->spc_not_inbase->Active=true;
          DataModule1->spc_not_inbase->Append();
          DataModule1->spc_not_inbase->FieldByName("Name")->AsString=F;
          if (DataModule1->nomeklatura_rk->RecordCount>0){
             DataModule1->spc_not_inbase->FieldByName("Nomenklature")->AsString=DataModule1->nomeklatura_rk->FieldByName("наименование")->AsString;


          }
          DataModule1->spc_not_inbase->Post();
          DataModule1->nomeklatura_rk->Active=false;
          DataModule1->spc_not_inbase->Active=false;


        }
         this->Hide();
         }
         else {
            DataModule1->SqlSpecification->Append();
                DataModule1->SqlSpecification->FieldByName("Name")->AsString=F;
                DataModule1->SqlSpecification->FieldByName("Text")->AsString=F;
                DataModule1->SqlSpecification->FieldByName("Ftgk_Measure")->AsString="False";
                 DataModule1->SqlSpecification->FieldByName("Power")->AsString="50";
                 DataModule1->SqlSpecification->FieldByName("TU")->AsString="Спецификация";
                 DataModule1->SqlSpecification->FieldByName("TGK")->AsString="TTS100,W2200";
                 DataModule1->SqlSpecification->FieldByName("TCHType")->AsString="по замеру";
                 DataModule1->SqlSpecification->FieldByName("TCH_Approx_type")->AsString="по узлам";
                 DataModule1->SqlSpecification->FieldByName("TCH_interval_Type")->AsString="По интервалу замера";
                 DataModule1->SqlSpecification->FieldByName("Ft")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Tnastr")->AsFloat=25;
                 DataModule1->SqlSpecification->FieldByName("R")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Tpar")->AsFloat=25;
                 DataModule1->SqlSpecification->FieldByName("C0")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Tc0")->AsFloat=25;
                 DataModule1->SqlSpecification->FieldByName("Cq")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Tcq")->AsFloat=25;
                 DataModule1->SqlSpecification->FieldByName("type")->AsString="HC45";
                 DataModule1->SqlSpecification->FieldByName("Fmx")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Fmn")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Print")->AsString="6";
                 DataModule1->SqlSpecification->FieldByName("PrintProfile")->AsString="6";
                 DataModule1->SqlSpecification->FieldByName("Profile")->AsString="-10...+40(РК731)";
                 DataModule1->SqlSpecification->FieldByName("IntervalName")->AsString="-10...+40";
                 DataModule1->SqlSpecification->FieldByName("LoadType")->AsString="Series";
                 DataModule1->SqlSpecification->FieldByName("String")->AsString="SPEKTR(00000)";
                 DataModule1->SqlSpecification->FieldByName("NameR")->AsString=Type;
                 DataModule1->SqlSpecification->FieldByName("Nominal")->AsString=f;
                 DataModule1->SqlSpecification->FieldByName("Position")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("SNumber")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Status")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Data")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Stat")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("TCH_approx_ist")->AsString="True";

                 DataModule1->SqlSpecification->FieldByName("AnomalR")->AsString="True";
                 if (suf=="К"){
                 DataModule1->SqlSpecification->FieldByName("Garmonica")->AsString=1;
                 }
                 else {
                 DataModule1->SqlSpecification->FieldByName("Garmonica")->AsString=3;
                 }
                 DataModule1->SqlSpecification->FieldByName("Norm")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("BD")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("Number")->AsString="True";
                 DataModule1->SqlSpecification->FieldByName("PrintProtokol")->AsString="True";
                 DataModule1->SqlSpecification->Post();

         }

}

}
//---------------------------------------------------------------------------
