//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddMskReal.h"
#include "SelectSpc.h"
#include "Data_RQ.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzPanel"
#pragma link "AdvGlassButton"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TAddMskForm *AddMskForm;
//---------------------------------------------------------------------------
__fastcall TAddMskForm::TAddMskForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAddMskForm::btnCloseClick(TObject *Sender)
{
this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TAddMskForm::AdvGlassButton1Click(TObject *Sender)
{
 SelectSpcForm->Visible=true;

}
//---------------------------------------------------------------------------




void __fastcall TAddMskForm::FormShow(TObject *Sender)
{
SaveButton->Caption="Сохранить";
ReSaveButton->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::SaveButtonClick(TObject *Sender)
{
if (SaveButton->Caption=="Сохранить"){
        ActionList1->Actions[0]->Execute();
    }
    else {
       ActionList1->Actions[1]->Execute();
       ActionList1->Actions[0]->Execute();
    }
    this->Hide();
  ActionList1->Actions[6]->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::NewMSK_RQExecute(TObject *Sender)
{
 AnsiString BeginN,EndN,Marker_ID;
AnsiString MSK_ID, MSK_NOM_ID;
AnsiString Marker    ;
AnsiString Marker_Serial="";
int Marker_Begin, Marker_End;
boolean Num_True=true;
Char* Nums;
Char* Numbers;
Char* temp1;
Char* temp2;
 if (edtSpcN->Text!=""){
        RQ_Data->Spc_RQ->Active=false;
        RQ_Data->Spc_RQ->SQL->Clear();
        RQ_Data->Spc_RQ->SQL->Add("Select `номенклатура` from nomeklatura_rk where `наименование`='"+edtSpcN->Text+"'");
        RQ_Data->Spc_RQ->Active=true;
        RQ_Data->Spc_RQ->First();
        MSK_NOM_ID=RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString;
        if (RQ_Data->Spc_RQ->RecordCount>0){
                AnsiString sql="Select * from `MSK_Join` where  `Msk_Name`='"+edtFile->Text+"' and `MSK_NOM_ID`='"+RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString+"'";
                RQ_Data->MSK_JOIN->Active=false;
                RQ_Data->MSK_JOIN->SQL->Clear();
                RQ_Data->MSK_JOIN->SQL->Add(sql);
                RQ_Data->MSK_JOIN->Active=true;
                RQ_Data->MSK_JOIN->First();
                Nums=RQ_Data->MSK_JOIN->FieldByName("PSI_Numbers")->AsString.c_str();

                if (RQ_Data->MSK_JOIN->RecordCount>0){


                }
                else{

                    AnsiString Sql1="Select `N`,`Begin`,`End` from marker where `MSK`='"+edtFile->Text+"'";
                    RQ_Data->Marker->Active=false;
                    RQ_Data->Marker->SQL->Clear();
                    RQ_Data->Marker->SQL->Add(Sql1);
                    RQ_Data->Marker->Active=true;
                    RQ_Data->Marker->First();

                    BeginN=RQ_Data->Marker->FieldByName("Begin")->AsString;
                    EndN=RQ_Data->Marker->FieldByName("End")->AsString;
                    if (BeginN.Length()>5){
                     Marker_Serial=BeginN.SubString(1,2);
                     AnsiString Num_marker_temp=BeginN.SubString(3,BeginN.Length()-1);
                     Marker_Begin=StrToFloat(Num_marker_temp);
                      Num_marker_temp=EndN.SubString(3,BeginN.Length()-1);
                     Marker_End=StrToFloat(Num_marker_temp);
                    }
                    Marker_ID=RQ_Data->Marker->FieldByName("N")->AsString;
                    RQ_Data->Marker->Active=false;
                    AnsiString Sql2="Select `мск` from msk_rk where `мскРеал`='"+edtFile->Text+"'";
                    RQ_Data->MSK_RQ->Active=false;
                    RQ_Data->MSK_RQ->SQL->Clear();
                    RQ_Data->MSK_RQ->SQL->Add(Sql2);
                    RQ_Data->MSK_RQ->Active=true;
                    RQ_Data->MSK_RQ->First();
                    MSK_ID=RQ_Data->MSK_RQ->FieldByName("мск")->AsString;
                    AnsiString Sql3="Select `N` from `psidata` where `Measure_ID`='"+Protokol_ID->Caption+"' and Status='Годен'";
                    RQ_Data->Psi_Numbers->Active=false;
                    RQ_Data->Psi_Numbers->SQL->Clear();
                    RQ_Data->Psi_Numbers->SQL->Add(Sql3);
                    RQ_Data->Psi_Numbers->Active=true;
                    RQ_Data->Psi_Numbers->First();
                    AnsiString rt=BeginN+"..."+EndN;
                    RQ_Data->InsertMSKJoin->SQL->Clear();
                    RQ_Data->InsertMSKJoin->SQL->Add("Insert into `MSK_Join` (`Msk_ID`,`MSK_NOM_ID`,`Msk_Name`,`Marker_ID`,`Psi_Protokol_ID`,`Marker_Numbers`,`PSI_Numbers`)");
                    RQ_Data->InsertMSKJoin->SQL->Add("Values ('"+MSK_ID+"','"+MSK_NOM_ID+"','"+edtFile->Text+"','"+Marker_ID+"','"+Protokol_ID->Caption+"','"+rt+"',");
                     // int count=0;
                      int countAll=0;
                      AnsiString NumTemp;
                    for (int i=0; i<RQ_Data->Psi_Numbers->RecordCount;i++){
                      AnsiString temp=RQ_Data->Psi_Numbers->FieldByName("N")->AsString;
                      if (temp.Length()>5){
                         AnsiString Num_PSI_serial=temp.SubString(1,2);
                         if (Num_PSI_serial!=Marker_Serial){
                          Num_True=false;
                         }
                         AnsiString Num_PSI_temp=temp.SubString(3,temp.Length()-1);
                         int num_int=StrToFloat(Num_PSI_temp);
                         if (num_int<Marker_Begin || num_int>Marker_End){
                          Num_True=false;
                         }
                      }
                      //temp2=RQ_Data->Psi_Numbers->FieldByName("N")->AsString.c_str();
                      //strcat(Numbers,temp2);
                     if (Num_True){
                     // if (count<12){
                        // if (count==0){
                            if (countAll==0){
                             NumTemp="'"+temp+", ";
                            }
                            else {
                            NumTemp=NumTemp+temp+", ";
                                }
                        // }
                        // else {
                        //   NumTemp=NumTemp+", "+temp;
                        // }

                     // }
                     // else if (count==12){
                        //NumTemp=NumTemp+", "+temp+", ";
                       // RQ_Data->InsertMSKJoin->SQL->Add(NumTemp);
                       // count=-1;
                       // NumTemp="";
                      //  }
                      RQ_Data->Psi_Numbers->Next();
                      //count++;
                      countAll++;
                      }
                      else {
                       ShowMessage("Номера резонаторов в протоколе не соответсвуют номерам с МСК");
                       break;
                      }
                    }
                   if (Num_True){
                         if (countAll>0){
                                  RQ_Data->InsertMSKJoin->SQL->Add(NumTemp.SubString(1,NumTemp.Length()-2));
                                  RQ_Data->InsertMSKJoin->SQL->Add("');");
                                  RQ_Data->InsertMSKJoin->Execute();
                                  }

                   }
                }
        }
   }
}
//---------------------------------------------------------------------------


void __fastcall TAddMskForm::DelMSK_RQExecute(TObject *Sender)
{
 RQ_Data->Spc_RQ->Active=false;
        RQ_Data->Spc_RQ->SQL->Clear();
        RQ_Data->Spc_RQ->SQL->Add("Select `номенклатура` from nomeklatura_rk where `наименование`='"+edtSpcN->Text+"'");
        RQ_Data->Spc_RQ->Active=true;
        RQ_Data->Spc_RQ->First();

        if (RQ_Data->Spc_RQ->RecordCount>0){
                AnsiString sql="Delete from `MSK_Join` where  `Msk_Name`='"+edtFile->Text+"' and `MSK_NOM_ID`='"+RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString+"'";

                RQ_Data->DeleteMSK_RQ->SQL->Clear();
                RQ_Data->DeleteMSK_RQ->SQL->Add(sql);
                RQ_Data->DeleteMSK_RQ->Execute();
          }
}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::AddMSK_RQExecute(TObject *Sender)
{
AnsiString BeginN,EndN,Marker_ID;
AnsiString MSK_ID, MSK_NOM_ID;
AnsiString Marker    ;
AnsiString Marker_Serial="";
int Marker_Begin, Marker_End;
boolean Num_True=true;
AnsiString Psi_Protokol_ID;
AnsiString Numbers_OLD;

 if (edtSpcN->Text!=""){
        RQ_Data->Spc_RQ->Active=false;
        RQ_Data->Spc_RQ->SQL->Clear();
        RQ_Data->Spc_RQ->SQL->Add("Select `номенклатура` from nomeklatura_rk where `наименование`='"+edtSpcN->Text+"'");
        RQ_Data->Spc_RQ->Active=true;
        RQ_Data->Spc_RQ->First();
        MSK_NOM_ID=RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString;
        if (RQ_Data->Spc_RQ->RecordCount>0){
                AnsiString sql="Select * from `MSK_Join` where  `Msk_Name`='"+edtFile->Text+"' and `MSK_NOM_ID`='"+RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString+"'";
                RQ_Data->MSK_JOIN->Active=false;
                RQ_Data->MSK_JOIN->SQL->Clear();
                RQ_Data->MSK_JOIN->SQL->Add(sql);
                RQ_Data->MSK_JOIN->Active=true;
                RQ_Data->MSK_JOIN->First();
                Numbers_OLD=RQ_Data->MSK_JOIN->FieldByName("PSI_Numbers")->AsString;
                Psi_Protokol_ID=RQ_Data->MSK_JOIN->FieldByName("Psi_protokol_ID")->AsString;

       }
       if (RQ_Data->MSK_JOIN->RecordCount>0 & Psi_Protokol_ID!=Protokol_ID->Caption){
              TStringList * MyList = new TStringList();
              MyList->Delimiter=', ';
              MyList->DelimitedText=Numbers_OLD;

              TStringList * Numbers = new TStringList();
             for (int i=0;i<MyList->Count;i++){
                 AnsiString t=MyList->Strings[i];
                 int S_pos=t.AnsiPos(",");
                 if (S_pos>0){
                  t[S_pos]=' ';
                  t=t.Trim();
                 }
                 Numbers->Add(t);
             }
             delete MyList;
              AnsiString Sql1="Select `N`,`Begin`,`End` from marker where `MSK`='"+edtFile->Text+"'";
                    RQ_Data->Marker->Active=false;
                    RQ_Data->Marker->SQL->Clear();
                    RQ_Data->Marker->SQL->Add(Sql1);
                    RQ_Data->Marker->Active=true;
                    RQ_Data->Marker->First();

                    BeginN=RQ_Data->Marker->FieldByName("Begin")->AsString;
                    EndN=RQ_Data->Marker->FieldByName("End")->AsString;
                    if (BeginN.Length()>5){
                          Marker_Serial=BeginN.SubString(1,2);
                          AnsiString Num_marker_temp=BeginN.SubString(3,BeginN.Length()-1);
                         Marker_Begin=StrToFloat(Num_marker_temp);
                         Num_marker_temp=EndN.SubString(3,BeginN.Length()-1);
                         Marker_End=StrToFloat(Num_marker_temp);
                    }
                    RQ_Data->Marker->Active=false;
                    AnsiString Sql2="Select `мск` from msk_rk where `мскРеал`='"+edtFile->Text+"'";
                    RQ_Data->MSK_RQ->Active=false;
                    RQ_Data->MSK_RQ->SQL->Clear();
                    RQ_Data->MSK_RQ->SQL->Add(Sql2);
                    RQ_Data->MSK_RQ->Active=true;
                    RQ_Data->MSK_RQ->First();
                    MSK_ID=RQ_Data->MSK_RQ->FieldByName("мск")->AsString;
                    AnsiString Sql3="Select `N` from `psidata` where `Measure_ID`='"+Protokol_ID->Caption+"' and Status='Годен'";
                    RQ_Data->Psi_Numbers->Active=false;
                    RQ_Data->Psi_Numbers->SQL->Clear();
                    RQ_Data->Psi_Numbers->SQL->Add(Sql3);
                    RQ_Data->Psi_Numbers->Active=true;
                    RQ_Data->Psi_Numbers->First();
                 RQ_Data->UpdateMSK_RQ->SQL->Clear();
                 RQ_Data->UpdateMSK_RQ->SQL->Add("Update `MSK_Join` set `Psi_protokol_ID`='"+Psi_Protokol_ID+" "+Protokol_ID->Caption+"',`PSI_Numbers`=");
                 int count=0;
                 for (int i=0; i<RQ_Data->Psi_Numbers->RecordCount;i++){
                         AnsiString temp=RQ_Data->Psi_Numbers->FieldByName("N")->AsString;
                      if (temp.Length()>5){
                                AnsiString Num_PSI_serial=temp.SubString(1,2);
                                        if (Num_PSI_serial!=Marker_Serial){
                                                Num_True=false;
                                        }
                                 AnsiString Num_PSI_temp=temp.SubString(3,temp.Length()-1);
                                 int num_int=StrToFloat(Num_PSI_temp);
                                        if (num_int<Marker_Begin || num_int>Marker_End){
                                                Num_True=false;
                                        }
                                     }
                      if (Num_True){
                                 boolean exist=false;
                                for (int j=0;j<Numbers->Count;j++){
                                        if (temp==Numbers->Strings[j]){
                                           exist=true;
                                            break;
                                        }
                                 }
                                if (!exist){
                                    Numbers->Add(temp);
                                    count++;
                                }

                      }
                        else {

                          ShowMessage("Номера резонаторов в протоколе не соответсвуют номерам с МСК");
                           break;

                        }
                     RQ_Data->Psi_Numbers->Next();
                 }
               int countAll=0;
               if (count>0){
               AnsiString NumTemp="";
                        for (int i=0; i<Numbers->Count; i++){
                                if (countAll==0){
                                   NumTemp="'"+Numbers->Strings[i]+", ";
                                }
                                else {
                                  NumTemp=NumTemp+Numbers->Strings[i]+", ";
                                }
                            countAll++;
                        }
                       RQ_Data->UpdateMSK_RQ->SQL->Add(NumTemp.SubString(1,NumTemp.Length()-2));
                       RQ_Data->UpdateMSK_RQ->SQL->Add("' where `Msk_Name`='"+edtFile->Text+"' and `MSK_NOM_ID`='"+MSK_NOM_ID+"'");
                       RQ_Data->UpdateMSK_RQ->Execute();
                      delete Numbers;
               }

       }

    }

}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::ReSaveButtonClick(TObject *Sender)
{
ActionList1->Actions[2]->Execute();
ActionList1->Actions[6]->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::TestMSK_RQExecute(TObject *Sender)
{
if (edtSpcN->Text!=""){
        RQ_Data->Spc_RQ->Active=false;
        RQ_Data->Spc_RQ->SQL->Clear();
        RQ_Data->Spc_RQ->SQL->Add("Select `номенклатура` from nomeklatura_rk where `наименование`='"+edtSpcN->Text+"'");
        RQ_Data->Spc_RQ->Active=true;
        RQ_Data->Spc_RQ->First();
        if (RQ_Data->Spc_RQ->RecordCount>0){
                AnsiString sql="Select * from `MSK_Join` where  `Msk_Name`='"+edtFile->Text+"' and `MSK_NOM_ID`='"+RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString+"'";
                RQ_Data->MSK_JOIN->Active=false;
                RQ_Data->MSK_JOIN->SQL->Clear();
                RQ_Data->MSK_JOIN->SQL->Add(sql);
                RQ_Data->MSK_JOIN->Active=true;
                RQ_Data->MSK_JOIN->First();
                if (RQ_Data->MSK_JOIN->RecordCount>0){
                   SaveButton->Caption="Перезаписать";
                   ReSaveButton->Visible=true;
                }
         }
  }        
}
//---------------------------------------------------------------------------


void __fastcall TAddMskForm::Get_Default_Spc_RQExecute(TObject *Sender)
{
 AnsiString Sql2="Select `мск`,`КодНоменклатуры` from msk_rk where `мскРеал`='"+edtFile->Text+"'";
 RQ_Data->MSK_RQ->Active=false;
 RQ_Data->MSK_RQ->SQL->Clear();
 RQ_Data->MSK_RQ->SQL->Add(Sql2);
 RQ_Data->MSK_RQ->Active=true;
 RQ_Data->MSK_RQ->First();
 if (RQ_Data->MSK_RQ->RecordCount>0){
        AnsiString Nom_Code=RQ_Data->MSK_RQ->FieldByName("КодНоменклатуры")->AsString;
        RQ_Data->Spc_RQ->Active=false;
        RQ_Data->Spc_RQ->SQL->Clear();
        RQ_Data->Spc_RQ->SQL->Add("Select `наименование` from nomeklatura_rk where `номенклатура`='"+Nom_Code+"'");
        RQ_Data->Spc_RQ->Active=true;
        RQ_Data->Spc_RQ->First();
        edtSpcN->Text=RQ_Data->Spc_RQ->FieldByName("наименование")->AsString;
        }
 else {

   ShowMessage("МСК не найдена в базе данных");
 }

}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::BarCode_MSK_RQExecute(TObject *Sender)
{
  AnsiString Sql2="Select `мскРеал`,`КодНоменклатуры` from msk_rk where `мск`='"+edtFile->Text+"'";
 RQ_Data->MSK_RQ->Active=false;
 RQ_Data->MSK_RQ->SQL->Clear();
 RQ_Data->MSK_RQ->SQL->Add(Sql2);
 RQ_Data->MSK_RQ->Active=true;
 RQ_Data->MSK_RQ->First();
   if (RQ_Data->MSK_RQ->RecordCount>0){
     AnsiString Nom_Code=RQ_Data->MSK_RQ->FieldByName("КодНоменклатуры")->AsString;
     AnsiString Msk_Name=RQ_Data->MSK_RQ->FieldByName("мскРеал")->AsString;
     RQ_Data->Spc_RQ->Active=false;
     RQ_Data->Spc_RQ->SQL->Clear();
     RQ_Data->Spc_RQ->SQL->Add("Select `наименование` from nomeklatura_rk where `номенклатура`='"+Nom_Code+"'");
     RQ_Data->Spc_RQ->Active=true;
     RQ_Data->Spc_RQ->First();
     edtSpcN->Text=RQ_Data->Spc_RQ->FieldByName("наименование")->AsString;
     edtFile->Text=Msk_Name;

   }
  else {

   ShowMessage("МСК не найдена в базе данных");
 }
}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::edtFileKeyPress(TObject *Sender, char &Key)
{
if (Key==13){
   int pos=edtFile->Text.AnsiPos("-");
 if (pos>0){
  ActionList1->Actions[4]->Execute();
  ActionList1->Actions[3]->Execute();
 }
 else {
   ActionList1->Actions[5]->Execute();
   ActionList1->Actions[3]->Execute();
 }

}
}
//---------------------------------------------------------------------------

void __fastcall TAddMskForm::JournalExecute(TObject *Sender)
{
SYSTEMTIME st;
          GetLocalTime(&st);
          AnsiString stD,stMn,stY,stH,stM,stS;
          stD=st.wDay;
          stMn=st.wMonth;
          stY=st.wYear;
          stH=st.wHour;
          stM=st.wMinute;
          stS=st.wSecond;
   RQ_Data->Psi->Active=false;
   RQ_Data->Psi->SQL->Clear();
   RQ_Data->Psi->SQL->Add("Select `MSK`,`Name`,`Number`,`Bad`,`Good`,`Nezamer`,`Anomal`,`DateEnd`,`Operator`,`transatN` from psi where Measure_ID='"+Protokol_ID->Caption+"'");
   RQ_Data->Psi->Active=true;

   RQ_Data->Stat->Active=false;
   RQ_Data->Stat->SQL->Clear();
   RQ_Data->Stat->SQL->Add("Select * from psi_statistika where Measure_ID='"+Protokol_ID->Caption+"'");
   RQ_Data->Stat->Active=true;
   RQ_Data->Stat->First();




   RQ_Data->Spc_RQ->Active=false;
   RQ_Data->Spc_RQ->SQL->Clear();
   RQ_Data->Spc_RQ->SQL->Add("Select `РКНомер`,`номенклатура` from nomeklatura_rk where `наименование`='"+edtSpcN->Text+"'");
   RQ_Data->Spc_RQ->Active=true;
   RQ_Data->Spc_RQ->First();
   AnsiString type=RQ_Data->Spc_RQ->FieldByName("РКНомер")->AsString;
   AnsiString Nom_Code=RQ_Data->Spc_RQ->FieldByName("номенклатура")->AsString;

   RQ_Data->Insert_PSI_Journal->SQL->Clear();
   RQ_Data->Insert_PSI_Journal->SQL->Add("Insert into `psi_journal` (`MSK`,`Spc`,`alln`,`Good`,`Bad`,`Dater`,`Operator`,`yearrr`,`mounth`,`Per`,`Machine`,`Measure_ID`,`Type`,`Anomal`,`Nezamer`,`PSI_MSK`,`PSI_SPC`,");
   AnsiString temp;
   int count=0;
   for (int i=0; i<RQ_Data->Stat->RecordCount; i++){

       if (count==0){
        temp="`N"+FloatToStr(i+1)+"`,`Count"+FloatToStr(i+1)+"`,`";
       }
       else {
        temp=temp+"N"+FloatToStr(i+1)+"`,`Count"+FloatToStr(i+1)+"`,`";
       }
     count++;
    RQ_Data->Stat->Next();
   }
  RQ_Data->Insert_PSI_Journal->SQL->Add(temp.SubString(1,temp.Length()-2));
  RQ_Data->Insert_PSI_Journal->SQL->Add(") ");
  AnsiString all=RQ_Data->Psi->FieldByName("Number")->AsString;
  AnsiString bad=RQ_Data->Psi->FieldByName("Bad")->AsString;
  AnsiString good=RQ_Data->Psi->FieldByName("Good")->AsString;
  AnsiString nezamer=RQ_Data->Psi->FieldByName("Nezamer")->AsString;
  AnsiString anomal=RQ_Data->Psi->FieldByName("Anomal")->AsString;
  AnsiString date=RQ_Data->Psi->FieldByName("DateEnd")->AsString;
  AnsiString msk_psi=RQ_Data->Psi->FieldByName("MSK")->AsString;
  AnsiString spc_psi=RQ_Data->Psi->FieldByName("Name")->AsString;
  AnsiString opr=RQ_Data->Psi->FieldByName("Operator")->AsString;
  AnsiString machine=RQ_Data->Psi->FieldByName("transatN")->AsString;

  RQ_Data->User->Active=false;
   RQ_Data->User->SQL->Clear();
   RQ_Data->User->SQL->Add("Select `ID` from `пользователи` where Name='"+opr+"'");
   RQ_Data->User->Active=true;
   RQ_Data->User->First();
   AnsiString opr_code=RQ_Data->User->FieldByName("ID")->AsString;
   RQ_Data->User->Active=false;

   RQ_Data->Machines->Active=false;
   RQ_Data->Machines->SQL->Clear();
   RQ_Data->Machines->SQL->Add("Select `ID` from `machines` where Name='"+machine+"'");
   RQ_Data->Machines->Active=true;
   RQ_Data->Machines->First();
   AnsiString machine_code=RQ_Data->Machines->FieldByName("ID")->AsString;
   RQ_Data->Machines->Active=false;


  AnsiString Per="";
  if (StrToFloat(all)>0){
        int per=int((StrToFloat(good)/StrToFloat(all))*100);
        Per=FloatToStr(per);
        }
  RQ_Data->Insert_PSI_Journal->SQL->Add("Values ('"+edtFile->Text+"','"+Nom_Code+"','"+all+"','"+good+"','"+bad+"','"+date+"','"+opr_code+"','"+stY+"','"+stMn+"','"+Per+"','"+machine_code+"','"+Protokol_ID->Caption+"','"+type+"','"+anomal+"','"+nezamer+"','"+msk_psi+"','"+spc_psi+"',");
  count=0;
  RQ_Data->Stat->First();
  temp="";
  for (int i=0; i<RQ_Data->Stat->RecordCount; i++){
     if (count==0){
      temp="'"+RQ_Data->Stat->FieldByName("Parametr_ID")->AsString+"','"+RQ_Data->Stat->FieldByName("Badn")->AsString+"','";
     }
      else {
       temp=temp+RQ_Data->Stat->FieldByName("Parametr_ID")->AsString+"','"+RQ_Data->Stat->FieldByName("Badn")->AsString+"','";
      }
   count++;
    RQ_Data->Stat->Next();
  }
 RQ_Data->Insert_PSI_Journal->SQL->Add(temp.SubString(1,temp.Length()-2));
 RQ_Data->Insert_PSI_Journal->SQL->Add(");");
 RQ_Data->Insert_PSI_Journal->Execute();
}
//---------------------------------------------------------------------------


