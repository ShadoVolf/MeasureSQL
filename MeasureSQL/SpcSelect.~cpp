//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SpcSelect.h"
#include "Main.h"
#include "data1.h"
#include "Data.h"
#include "GlobalValues.h"
#include "old.h"
#include "New_Data4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TSpcSelectForm *SpcSelectForm;
//---------------------------------------------------------------------------
__fastcall TSpcSelectForm::TSpcSelectForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSpcSelectForm::FormShow(TObject *Sender)
{
AnsiString Sql2="Select `КодНоменклатуры` from msk_rk where `мскРеал`='"+MainForm->MSK_Label->Caption+"'";
AnsiString MSK_NOM_Name;
AnsiString MSK_NOM_ID;
AnsiString sqlNomenklatura;
        if (MainForm->MSK_Label->Caption!=""){
                 New_Data->MSK_RQ->Active=false;
                 New_Data->MSK_RQ->SQL->Clear();
                 New_Data->MSK_RQ->SQL->Add(Sql2);
                 New_Data->MSK_RQ->Active=true;
                 New_Data->MSK_RQ->First();
               MSK_NOM_ID=New_Data->MSK_RQ->FieldByName("КодНоменклатуры")->AsString;

        }
        if (New_Data->MSK_RQ->RecordCount>0){
                /* New_Data->Spc_RQ->Active=false;
                 New_Data->Spc_RQ->SQL->Clear();
                 New_Data->Spc_RQ->SQL->Add("Select `наименование` from nomeklatura_rk where `номенклатура`='"+MSK_NOM_ID+"'");
                 New_Data->Spc_RQ->Active=true;
                 New_Data->Spc_RQ->First();
                 MSK_NOM_Name=New_Data->Spc_RQ->FieldByName("наименование")->AsString;
                 New_Data->Spc_RQ->Active=false;
                 */
                 New_Data->MSK_RQ->Active=false;

                 DataModule2->Nomenklatura_RK_PSI->Active=false;
                 DataModule2->Nomenklatura_RK_PSI->SQL->Clear();
                 sqlNomenklatura="Select * from nomeklatura_rk_psi where `NomenklaturaID`='"+MSK_NOM_ID+"'";
                 DataModule2->Nomenklatura_RK_PSI->SQL->Add(sqlNomenklatura);
                 DataModule2->Nomenklatura_RK_PSI->Active=true;
                 DataModule2->Nomenklatura_RK_PSI->First();
                      if (DataModule2->Nomenklatura_RK_PSI->RecordCount>0){
                                edtSpcV->Items->Clear();
                                for (int i=0; i<DataModule2->Nomenklatura_RK_PSI->RecordCount; i++){
                                        edtSpcV->Items->Add(DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString);
                                        DataModule2->Nomenklatura_RK_PSI->Next();

                                }
                        }
                 }
                   DataModule2->Nomenklatura_RK_PSI->Active=false;
            /*    AnsiString sqlNomenklatura;
                DataModule2->Nomenklatura_RK_PSI->Active=false;
                DataModule2->Nomenklatura_RK_PSI->SQL->Clear();
                sqlNomenklatura="Select * from nomeklatura_rk_psi where `NomenklaturaID`='"+FloatToStr(Global_Nom_ID)+"'";
                DataModule2->Nomenklatura_RK_PSI->SQL->Add(sqlNomenklatura);
                DataModule2->Nomenklatura_RK_PSI->Active=true;
                edtSpcV->Items->Clear();
                DataModule2->Nomenklatura_RK_PSI->First();
              for(int i=0;i<DataModule2->Nomenklatura_RK_PSI->RecordCount; i++){
                 edtSpcV->Items->Add(DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString);
                  DataModule2->Nomenklatura_RK_PSI->Next();
              }
    */
}
//---------------------------------------------------------------------------
void __fastcall TSpcSelectForm::btnCloseClick(TObject *Sender)
{
AnsiString S2;

AnsiString MachineType;
AnsiString sql="Select `Type` from  `machines` where `IP`='"+MainForm->edtMachine->Text+"'";
New_Data->MachineType->Active=false;
New_Data->MachineType->SQL->Clear();
New_Data->MachineType->SQL->Add(sql);
New_Data->MachineType->Active=true;
MachineType=New_Data->MachineType->FieldByName("Type")->AsString;
New_Data->MachineType->Active=false;

DataModule1->SqlSpecification->First();
     for (int i=0; i<DataModule1->SqlSpecification->RecordCount;i++){
          if (edtSpcV->Text==DataModule1->SqlSpecification->FieldByName("Name")->AsString){
                //MainForm->ledSpc->Active=true;
                MainForm->ActionList1->Actions[0]->Execute();
                 if (MachineType=="Transat"){
                 AnsiString sql_TR="Update `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"` set `Profile`='"+DataModule1->SqlSpecification->FieldByName("Profile")->AsString+"'";
                New_Data->Update_Transat->SQL->Clear();
                New_Data->Update_Transat->SQL->Add(sql_TR);
                New_Data->Update_Transat->Execute();
                 }
                break;
          }
            DataModule1->SqlSpecification->Next();
     }
AnsiString S;
AnsiString Measure_ID=MainForm->Edit1->Text;
        if (numberSelect==1){
                      /*  S="SELECT * from psi WHERE Measure_ID='"+Measure_ID+"'";
                        DataModule1->NumbersTemp->Active=false;
                        DataModule1->NumbersTemp->SQL->Clear();
                        DataModule1->NumbersTemp->SQL->Add(S);
                        DataModule1->NumbersTemp->Active=true;
                        DataModule1->NumbersTemp->Edit();
                        DataModule1->NumbersTemp->FieldByName("Spc1")->AsString=edtSpcV->Text;
                        DataModule1->NumbersTemp->Post();
                        DataModule1->NumbersTemp->Active=false;
                        */
                        S="Update `psi` set `Spc1`='"+edtSpcV->Text+"' where `Measure_ID`='"+Measure_ID+"'";
                        New_Data->Update_PSI->SQL->Clear();
                        New_Data->Update_PSI->SQL->Add(S);
                        New_Data->Update_PSI->Execute();
        }
        else if (numberSelect==2){
                        OldForm->cmb_ID->Items->Clear();
                        OldForm->edtSpc->Text=DataModule1->SqlSpecification->FieldByName("Name")->AsString;
                        OldForm->edtType->Text=DataModule1->SqlSpecification->FieldByName("NameR")->AsString;
                                if (OldForm->edtMeasure->Text=="[Замер 1]"){
                                        DataModule2->psiData->Active=false;
                                        DataModule2->psiData->SQL->Clear();
                                        DataModule2->psiData->SQL->Add("Select * from psidata where Msk='"+OldForm->edtMsk->Text+"' order by Measure_ID");
                                        DataModule2->psiData->Active=true;
                                        DataModule2->psiData->First();
                                        OldForm->VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
                                                for (int i=0;i<DataModule2->psiData->RecordCount;i++){
                                                        int p1=1;
                                                         S2=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
                                                                for (int j1=0;j1<OldForm->cmb_ID->Items->Count; j1++){
                                                                        if (S2==OldForm->cmb_ID->Items->Strings[j1]){
                                                                                p1=0;
                                                                               break;
                                                                               }
                                                                             p1=1;
                                                                  }
                                                                          if (p1==1 & !S2.IsEmpty()){
                                                                                   OldForm->cmb_ID->Items->Add(S2);
                                                                          }
                                                                 DataModule2->psiData->Next();
                                                                } //for
                                                 }
                                 else {
                                       DataModule2->old->Active=false;
                                        DataModule2->old->SQL->Clear();
                                        DataModule2->old->SQL->Add("Select * from old where Msk='"+OldForm->edtMsk->Text+"' ORDER BY N");
                                        DataModule2->old->Active=true;
                                        DataModule2->old->First();
                                        DataModule1->NumberCurrent->Active=true;
                                        DataModule1->NumberCurrent->EmptyTable();
                                        OldForm->VrProgressBar1->MaxValue=DataModule2->old->RecordCount;
                                                for (int i=0;i<DataModule2->old->RecordCount;i++){
                                                     S2=DataModule2->old->FieldByName("MeasureID")->AsString;
                                                     int p1=1;
                                                             for (int j1=0;j1<OldForm->cmb_ID->Items->Count; j1++){
                                                                       if (S2==OldForm->cmb_ID->Items->Strings[j1]){
                                                                               p1=0;
                                                                               break;
                                                                          }
                                                                   p1=1;
                                                                 }
                                                                         if (p1==1 &!S2.IsEmpty()){
                                                                                 OldForm->cmb_ID->Items->Add(S2);
                                                                              }
                                                              DataModule2->old->Next();
                                                              } //for
                                                }
                                }
          this->Hide();
}
//---------------------------------------------------------------------------
