//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BarCodeMsk.h"
#include "Main.h"
#include "Data.h"
#include "data1.h"
#include "NumberM.h"
#include "Modif.h"
#include "dialog1.h"
#include "SpcSelect.h"
#include "GlobalValues.h"
#include "old.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzRadChk"
#pragma resource "*.dfm"
TBarCodeMskForm *BarCodeMskForm;
//---------------------------------------------------------------------------
__fastcall TBarCodeMskForm::TBarCodeMskForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBarCodeMskForm::btnCloseClick(TObject *Sender)
{
BarCodeMskForm->Hide();
if  (numberSelect==1){
MainForm->Show();
}
else if (numberSelect==2){
 OldForm->Show();
}
}
//---------------------------------------------------------------------------
void __fastcall TBarCodeMskForm::AdvGlassButton1Click(TObject *Sender)
{
  AnsiString MSK;
  Integer MSK_Base;
  int l;
  AnsiString beginStr;
  AnsiString endStr;
  AnsiString NomenklaturaID;
  int Number_ID;
  AnsiString Measure_ID;
  AnsiString sql1;

                DataModule2->MSK->Active=false;
                DataModule2->MSK->SQL->Clear();
                 if (chkMSK->Checked){
                  sql1="Select * from msk_rk where `мскРеал`='"+edtCode->Text+"'";
                  }
                  else {
                  sql1="Select * from msk_rk where `мск`='"+edtCode->Text+"'";
                      }
                DataModule2->MSK->SQL->Add(sql1);
                DataModule2->MSK->Active=true;
                NomenklaturaID=DataModule2->MSK->FieldByName("КодНоменклатуры")->AsString;
                MSK=DataModule2->MSK->FieldByName("мскРеал")->AsString;

                DataModule2->Nomenklatura_RK->Active=false;
                DataModule2->Nomenklatura_RK->SQL->Clear();
                AnsiString sqlNomenklatura="Select * from nomeklatura_rk where `номенклатура`='"+NomenklaturaID+"'";
                DataModule2->Nomenklatura_RK->SQL->Add(sqlNomenklatura);
                DataModule2->Nomenklatura_RK->Active=true;
                Global_Nom_ID=StrToFloat(NomenklaturaID);
               if (numberSelect==1){
                DataModule1->MeasureID->Active=true;
                DataModule1->MeasureID->Append();
                DataModule1->MeasureID->FieldByName("MSK")->AsString=MSK;
                DataModule1->MeasureID->FieldByName("File")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;;
                DataModule1->MeasureID->Post();
                DataModule1->MeasureID->Last();
                }
                  if (numberSelect==2){
                  if (OldForm->edtMeasure->Text=="[Замер 1]"){
                DataModule1->MeasureID->Active=true;
                DataModule1->MeasureID->Append();
                DataModule1->MeasureID->FieldByName("MSK")->AsString=MSK;
                DataModule1->MeasureID->FieldByName("File")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;;
                DataModule1->MeasureID->Post();
                DataModule1->MeasureID->Last();
                Measure_ID=DataModule1->MeasureID->FieldByName("MeasureID")->AsString;
                }
                 else {
                 Measure_ID=OldForm->cmb_ID->Text;
                 }
                }


                Global_Measure_ID=StrToFloat(Measure_ID);

if (!chkNumbers->Checked){
                for(int i=0; i<MainForm->RzCheckList1->Count;i++){
                 if(MainForm->RzCheckList1->ItemState[i]!=0){
                                 l=i+1;
                                 break;
                   }
                 }


                DataModule2->Marker->Active=false;
                DataModule2->Marker->SQL->Clear();
                AnsiString sql="Select * from marker where MSK='"+DataModule2->MSK->FieldByName("мскРеал")->AsString+"'";
                DataModule2->Marker->SQL->Add(sql);
                DataModule2->Marker->Active=true;

                 DataModule2->Nomenklatura_RK_PSI->Active=false;
                DataModule2->Nomenklatura_RK_PSI->SQL->Clear();
                AnsiString sqlNomenklatura_PSI="Select * from nomeklatura_rk_psi where `NomenklaturaID`='"+NomenklaturaID+"'";
                DataModule2->Nomenklatura_RK_PSI->SQL->Add(sqlNomenklatura_PSI);
                DataModule2->Nomenklatura_RK_PSI->Active=true;
                MSK_Base=DataModule2->MSK->FieldByName("мск")->AsFloat;

                if (DataModule2->Marker->RecordCount>0){
                if (DataModule2->Marker->FieldByName("Number")->AsFloat!=NumberMForm->gridNumbers->RowCount-1){
                 ShowMessage("Внимание число замеренных резонаторов не совпадает с числом отмаркированных");
                    }
                beginStr=DataModule2->Marker->FieldByName("Begin")->AsString;
                endStr=DataModule2->Marker->FieldByName("End")->AsString;
                DataModule2->Marker->Active=false;
                int begin=StrToFloat(beginStr.SubString(3,4));
                 int end=StrToFloat(endStr.SubString(3,4));
                 AnsiString beginSr=beginStr.SubString(0,2);
                 AnsiString endSr=endStr.SubString(0,2);
                if (beginSr==endSr){
                  for (int i=0; i<NumberMForm->gridNumbers->RowCount-1; i++){
                   AnsiString N;
                                if (begin+i<10){
                                         N="000"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=10 & begin+i<100){
                                         N="00"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=100 & begin+i<1000){
                                        N="0"+FloatToStr(begin+i);
                                        }
                                else {
                                        N=FloatToStr(begin+i);
                                        }
                                        NumberMForm->gridNumbers->Cells[2][i+1]=beginSr+N;
                   }
                }
                else {
                int j=0;
                   for (int i=0; i<NumberMForm->gridNumbers->RowCount-1; i++){
                      AnsiString N;
                       if (begin+i<=9999){

                                if (begin+i<10){
                                         N="000"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=10 & begin+i<100){
                                         N="00"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=100 & begin+i<1000){
                                        N="0"+FloatToStr(begin+i);
                                        }
                                else {
                                        N=FloatToStr(begin+i);
                                        }
                                        NumberMForm->gridNumbers->Cells[2][i+1]=beginSr+N;
                                        }
                      else {


                                if (j+1<10){
                                         N="000"+FloatToStr(j+1);
                                        }
                                 else if (j+1>=10 & j+1<100){
                                         N="00"+FloatToStr(j+1);
                                        }
                                 else if (j+1>=100 & j+1<1000){
                                        N="0"+FloatToStr(j+1);
                                        }
                                else {
                                        N=FloatToStr(j+1);
                                        }
                          NumberMForm->gridNumbers->Cells[1][i+1]=endSr+N;              
                             }
                          }

                                         j++;


                }
               }
            else {

                 ShowMessage("Номера для данной МСК не найдены, пожалуйста установите их вручную");

               }
   DataModule2->Number_ID->Active=true;
 DataModule2->Number_ID->Append();
 DataModule2->Number_ID->FieldByName("MSK")->AsString=MSK;
 DataModule2->Number_ID->FieldByName("FileName")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;;
 DataModule2->Number_ID->FieldByName("MSK_Base")->AsFloat=MSK_Base;
 DataModule2->Number_ID->Post();
 DataModule2->Number_ID->Last();
 Number_ID=DataModule2->Number_ID->FieldByName("ID")->AsInteger;
 DataModule2->Number_ID->Active=false;

 AnsiString sqlNumberAll="Select * from numberall where Number_ID='"+FloatToStr(Number_ID)+"'";
 DataModule1->Numberall->Active=false;
DataModule1->Numberall->SQL->Clear();
DataModule1->Numberall->SQL->Add(sqlNumberAll);
DataModule1->Numberall->Active=true;

 DataModule1->NumberCurrent->Active=true;
 DataModule1->NumberCurrent->EmptyTable();

 MainForm->Edit1->Text=Measure_ID;
                for (int i=0; i<NumberMForm->gridNumbers->RowCount-1;i++){
                                 DataModule1->NumberCurrent->Append();
                                 DataModule1->NumberCurrent->FieldByName("Position")->AsString=NumberMForm->gridNumbers->Cells[1][i+1];
                                 DataModule1->NumberCurrent->FieldByName("SNumber")->AsString=NumberMForm->gridNumbers->Cells[2][i+1];
                                 DataModule1->NumberCurrent->FieldByName("N")->AsString=NumberMForm->gridNumbers->Cells[0][i+1];
                                 DataModule1->Numberall->Append();
                                 DataModule1->Numberall->FieldByName("Position")->AsString=NumberMForm->gridNumbers->Cells[1][i+1];
                                 DataModule1->Numberall->FieldByName("SNumber")->AsString=NumberMForm->gridNumbers->Cells[2][i+1];
                                 DataModule1->Numberall->FieldByName("MSK")->AsString=MSK;
                                 DataModule1->Numberall->FieldByName("File")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;
                                 DataModule1->Numberall->FieldByName("Size")->AsString=DataModule1->FileSelect->FieldByName("Size")->AsString;
                                 DataModule1->Numberall->FieldByName("Machine")->AsString=DataModule1->FileSelect->FieldByName("Machine")->AsString;
                                 DataModule1->Numberall->FieldByName("Number_ID")->AsString=Number_ID;
                                 DataModule1->Numberall->FieldByName("Measure_ID")->AsString=Measure_ID;
                                 DataModule1->Numberall->Post();
                                 DataModule1->NumberCurrent->Post();
     }
  if (numberSelect==1) {
  AnsiString S;
S="SELECT * from psi WHERE Measure_ID='"+Measure_ID+"'";
DataModule1->NumbersTemp->Active=false;
DataModule1->NumbersTemp->SQL->Clear();
DataModule1->NumbersTemp->SQL->Add(S);
DataModule1->NumbersTemp->Active=true;
DataModule1->NumbersTemp->Append();
DataModule1->NumbersTemp->FieldByName("MSK")->AsString=MSK;
DataModule1->NumbersTemp->FieldByName("Measure_ID")->AsString=Measure_ID;
DataModule1->NumbersTemp->FieldByName("Number_ID")->AsString=Number_ID;
DataModule1->NumbersTemp->FieldByName("Begin")->AsString=beginStr;
DataModule1->NumbersTemp->FieldByName("End")->AsString=endStr;
DataModule1->NumbersTemp->FieldByName("Name")->AsString=DataModule2->Nomenklatura_RK->FieldByName("наименование")->AsString;

Double ff=DataModule2->Nomenklatura_RK->FieldByName("Частота")->AsFloat;
if (DataModule2->Nomenklatura_RK->FieldByName("Гармоника")->AsFloat>1){
 ff=ff/1000;
}
DataModule1->NumbersTemp->FieldByName("Nominal")->AsString=FloatToStr(ff);
DataModule1->NumbersTemp->FieldByName("Number")->AsString=NumberMForm->gridNumbers->RowCount-1;

if(DataModule2->Nomenklatura_RK_PSI->RecordCount>0){
 DataModule1->NumbersTemp->FieldByName("Spc1")->AsString=DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString;
}
 DataModule1->NumbersTemp->FieldByName("transatN")->AsString=DataModule1->FileSelect->FieldByName("Machine")->AsString;
}

DataModule1->Numberall->Active=false;
MainForm->ledNumbers->Active=true;
DataModule1->SqlSpecification->First();
        if(DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcID")->AsFloat>0){
           if (DataModule2->Nomenklatura_RK_PSI->RecordCount>1){
               SpcSelectForm->Show();

           }
           else {
                for(int k=1;k<DataModule1->SqlSpecification->RecordCount; k++){
                        if (DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString==DataModule1->SqlSpecification->FieldByName("Name")->AsString){
                          MainForm->ledSpc->Active=true;
                          DataModule1->Transat_Temp->Active=true;
                          DataModule1->Transat_Temp->Filtered=false;
                          DataModule1->Transat_Temp->First();
                     for (int i=0;i<DataModule1->Transat_Temp->RecordCount;i++){
                           DataModule1->Transat_Temp->Edit();
                           DataModule1->Transat_Temp->FieldByName("Profile")->AsString=DataModule1->SqlSpecification->FieldByName("Profile")->AsString;
                           DataModule1->Transat_Temp->Post();
                           DataModule1->Transat_Temp->Next();
                            }
                          break;
                        }
                       DataModule1->SqlSpecification->Next();
                }
                if (numberSelect==1) {
              DataModule1->NumbersTemp->FieldByName("Type")->AsString=DataModule1->SqlSpecification->FieldByName("Type")->AsString;
                }
                else if(numberSelect==2){
                 OldForm->edtType->Text=DataModule1->SqlSpecification->FieldByName("NameR")->AsString;
                 OldForm->edtSpc->Text=DataModule1->SqlSpecification->FieldByName("Name")->AsString;
                }
               }
             }
          else {
            Dialog1Form->edtNom->Text=NomenklaturaID;
            Dialog1Form->Nomenklatura->Text=DataModule2->Nomenklatura_RK_PSI->FieldByName("NomenklaturaName")->AsString;
            Dialog1Form->edtSpcV->Items->Clear();
            if (DataModule2->Nomenklatura_RK_PSI->RecordCount>0){
            DataModule2->Nomenklatura_RK_PSI->First();
                for (int i=0; i<DataModule2->Nomenklatura_RK_PSI->RecordCount; i++){
                        Dialog1Form->edtSpcV->Items->Add(DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString);
                       DataModule2->Nomenklatura_RK_PSI->Next();
                }
             }

              Dialog1Form->Show();
          }
        if (DataModule2->MSK->FieldByName("ПМИ")->AsFloat==1){
                ModifForm->chkPmi->Checked=true;
        }
          if (DataModule2->Nomenklatura_RK->FieldByName("Cn(pF)")->AsFloat>0){
                ModifForm->chkCn->Checked=true;
                ModifForm->edtCn->Text=DataModule2->Nomenklatura_RK->FieldByName("Cn(pF)")->AsString;
        }
         if (DataModule2->MSK->FieldByName("Cn")->AsFloat>0){
                ModifForm->chkCn->Checked=true;
                ModifForm->edtCn->Text=DataModule2->MSK->FieldByName("Cn")->AsString;
        }
    if (numberSelect==1) {
   DataModule1->NumbersTemp->Post();
   }
  if (chkSpc->Checked){

   Dialog1Form->Show();
  }
 edtCode->FrameColor=clLime;
edtCode->FrameHotColor=clLime;
edtCode->Font->Color=clLime;
edtCode->Repaint();
  if (numberSelect==1) {
   MainForm->btnWork->Enabled=true;
   }

 }
 else {

   edtCode->FrameColor=clYellow;
 edtCode->FrameHotColor=clYellow;
 edtCode->Font->Color=clYellow;
 edtCode->Repaint();

 }
 BarCodeMskForm->Hide();
  if (numberSelect==1) {
MainForm->Show();
}
else if (numberSelect==2){
 OldForm->Show();
 OldForm->edtMsk->Text=MSK;

}
 NumberMForm->edtMSK->Text=MSK;
 NumberMForm->edtID->Text=Measure_ID;
}
//---------------------------------------------------------------------------
void __fastcall TBarCodeMskForm::chkMSKClick(TObject *Sender)
{
if (chkMSK->Checked){
     Label1->Caption="Номер МСК";

}
else {
    Label1->Caption="Штрих код МСК";
}
}
//---------------------------------------------------------------------------

void __fastcall TBarCodeMskForm::edtCodeKeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
   AnsiString MSK;
  Integer MSK_Base;
  int l;
  AnsiString beginStr;
  AnsiString endStr;
  AnsiString NomenklaturaID;
  int Number_ID;
  AnsiString Measure_ID;
  AnsiString sql1;

                DataModule2->MSK->Active=false;
                DataModule2->MSK->SQL->Clear();
                 if (chkMSK->Checked){
                  sql1="Select * from msk_rk where `мскРеал`='"+edtCode->Text+"'";
                  }
                  else {
                  sql1="Select * from msk_rk where `мск`='"+edtCode->Text+"'";
                      }
                DataModule2->MSK->SQL->Add(sql1);
                DataModule2->MSK->Active=true;
                NomenklaturaID=DataModule2->MSK->FieldByName("КодНоменклатуры")->AsString;
                MSK=DataModule2->MSK->FieldByName("мскРеал")->AsString;

                DataModule2->Nomenklatura_RK->Active=false;
                DataModule2->Nomenklatura_RK->SQL->Clear();
                AnsiString sqlNomenklatura="Select * from nomeklatura_rk where `номенклатура`='"+NomenklaturaID+"'";
                DataModule2->Nomenklatura_RK->SQL->Add(sqlNomenklatura);
                DataModule2->Nomenklatura_RK->Active=true;
                Global_Nom_ID=StrToFloat(NomenklaturaID);
               if (numberSelect==1){
                DataModule1->MeasureID->Active=true;
                DataModule1->MeasureID->Append();
                DataModule1->MeasureID->FieldByName("MSK")->AsString=MSK;
                DataModule1->MeasureID->FieldByName("File")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;;
                DataModule1->MeasureID->Post();
                DataModule1->MeasureID->Last();
                }
                  if (numberSelect==2){
                  if (OldForm->edtMeasure->Text=="[Замер 1]"){
                DataModule1->MeasureID->Active=true;
                DataModule1->MeasureID->Append();
                DataModule1->MeasureID->FieldByName("MSK")->AsString=MSK;
                DataModule1->MeasureID->FieldByName("File")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;;
                DataModule1->MeasureID->Post();
                DataModule1->MeasureID->Last();
                Measure_ID=DataModule1->MeasureID->FieldByName("MeasureID")->AsString;
                }
                else {
                 Measure_ID=OldForm->cmb_ID->Text;
                }
                }

                Global_Measure_ID=StrToFloat(Measure_ID);

if (!chkNumbers->Checked){
                for(int i=0; i<MainForm->RzCheckList1->Count;i++){
                 if(MainForm->RzCheckList1->ItemState[i]!=0){
                                 l=i+1;
                                 break;
                   }
                 }


                DataModule2->Marker->Active=false;
                DataModule2->Marker->SQL->Clear();
                AnsiString sql="Select * from marker where MSK='"+DataModule2->MSK->FieldByName("мскРеал")->AsString+"'";
                DataModule2->Marker->SQL->Add(sql);
                DataModule2->Marker->Active=true;

                 DataModule2->Nomenklatura_RK_PSI->Active=false;
                DataModule2->Nomenklatura_RK_PSI->SQL->Clear();
                AnsiString sqlNomenklatura_PSI="Select * from nomeklatura_rk_psi where `NomenklaturaID`='"+NomenklaturaID+"'";
                DataModule2->Nomenklatura_RK_PSI->SQL->Add(sqlNomenklatura_PSI);
                DataModule2->Nomenklatura_RK_PSI->Active=true;
                MSK_Base=DataModule2->MSK->FieldByName("мск")->AsFloat;

                if (DataModule2->Marker->RecordCount>0){
                if (DataModule2->Marker->FieldByName("Number")->AsFloat!=NumberMForm->gridNumbers->RowCount-1){
                 ShowMessage("Внимание число замеренных резонаторов не совпадает с числом отмаркированных");
                    }
                beginStr=DataModule2->Marker->FieldByName("Begin")->AsString;
                endStr=DataModule2->Marker->FieldByName("End")->AsString;
                DataModule2->Marker->Active=false;
                int begin=StrToFloat(beginStr.SubString(3,4));
                 int end=StrToFloat(endStr.SubString(3,4));
                 AnsiString beginSr=beginStr.SubString(0,2);
                 AnsiString endSr=endStr.SubString(0,2);
                if (beginSr==endSr){
                  for (int i=0; i<NumberMForm->gridNumbers->RowCount-1; i++){
                   AnsiString N;
                                if (begin+i<10){
                                         N="000"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=10 & begin+i<100){
                                         N="00"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=100 & begin+i<1000){
                                        N="0"+FloatToStr(begin+i);
                                        }
                                else {
                                        N=FloatToStr(begin+i);
                                        }
                                        NumberMForm->gridNumbers->Cells[2][i+1]=beginSr+N;
                   }
                }
                else {
                int j=0;
                   for (int i=0; i<NumberMForm->gridNumbers->RowCount-1; i++){
                      AnsiString N;
                       if (begin+i<=9999){

                                if (begin+i<10){
                                         N="000"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=10 & begin+i<100){
                                         N="00"+FloatToStr(begin+i);
                                        }
                                 else if (begin+i>=100 & begin+i<1000){
                                        N="0"+FloatToStr(begin+i);
                                        }
                                else {
                                        N=FloatToStr(begin+i);
                                        }
                                        NumberMForm->gridNumbers->Cells[2][i+1]=beginSr+N;
                                        }
                      else {


                                if (j+1<10){
                                         N="000"+FloatToStr(j+1);
                                        }
                                 else if (j+1>=10 & j+1<100){
                                         N="00"+FloatToStr(j+1);
                                        }
                                 else if (j+1>=100 & j+1<1000){
                                        N="0"+FloatToStr(j+1);
                                        }
                                else {
                                        N=FloatToStr(j+1);
                                        }
                          NumberMForm->gridNumbers->Cells[1][i+1]=endSr+N;              
                             }
                          }

                                         j++;


                }
               }
            else {

                 ShowMessage("Номера для данной МСК не найдены, пожалуйста установите их вручную");

               }
   DataModule2->Number_ID->Active=true;
 DataModule2->Number_ID->Append();
 DataModule2->Number_ID->FieldByName("MSK")->AsString=MSK;
 DataModule2->Number_ID->FieldByName("FileName")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;;
 DataModule2->Number_ID->FieldByName("MSK_Base")->AsFloat=MSK_Base;
 DataModule2->Number_ID->Post();
 DataModule2->Number_ID->Last();
 Number_ID=DataModule2->Number_ID->FieldByName("ID")->AsInteger;
 DataModule2->Number_ID->Active=false;

 AnsiString sqlNumberAll="Select * from numberall where Number_ID='"+FloatToStr(Number_ID)+"'";
 DataModule1->Numberall->Active=false;
DataModule1->Numberall->SQL->Clear();
DataModule1->Numberall->SQL->Add(sqlNumberAll);
DataModule1->Numberall->Active=true;

 DataModule1->NumberCurrent->Active=true;
 DataModule1->NumberCurrent->EmptyTable();

 MainForm->Edit1->Text=Measure_ID;
                for (int i=0; i<NumberMForm->gridNumbers->RowCount-1;i++){
                                 DataModule1->NumberCurrent->Append();
                                 DataModule1->NumberCurrent->FieldByName("Position")->AsString=NumberMForm->gridNumbers->Cells[1][i+1];
                                 DataModule1->NumberCurrent->FieldByName("SNumber")->AsString=NumberMForm->gridNumbers->Cells[2][i+1];
                                 DataModule1->NumberCurrent->FieldByName("N")->AsString=NumberMForm->gridNumbers->Cells[0][i+1];
                                 DataModule1->Numberall->Append();
                                 DataModule1->Numberall->FieldByName("Position")->AsString=NumberMForm->gridNumbers->Cells[1][i+1];
                                 DataModule1->Numberall->FieldByName("SNumber")->AsString=NumberMForm->gridNumbers->Cells[2][i+1];
                                 DataModule1->Numberall->FieldByName("MSK")->AsString=MSK;
                                 DataModule1->Numberall->FieldByName("File")->AsString=DataModule1->FileSelect->FieldByName("FileName")->AsString;
                                 DataModule1->Numberall->FieldByName("Size")->AsString=DataModule1->FileSelect->FieldByName("Size")->AsString;
                                 DataModule1->Numberall->FieldByName("Machine")->AsString=DataModule1->FileSelect->FieldByName("Machine")->AsString;
                                 DataModule1->Numberall->FieldByName("Number_ID")->AsString=Number_ID;
                                 DataModule1->Numberall->FieldByName("Measure_ID")->AsString=Measure_ID;
                                 DataModule1->Numberall->Post();
                                 DataModule1->NumberCurrent->Post();
     }
  if (numberSelect==1) {
  AnsiString S;
S="SELECT * from psi WHERE Measure_ID='"+Measure_ID+"'";
DataModule1->NumbersTemp->Active=false;
DataModule1->NumbersTemp->SQL->Clear();
DataModule1->NumbersTemp->SQL->Add(S);
DataModule1->NumbersTemp->Active=true;
DataModule1->NumbersTemp->Append();
DataModule1->NumbersTemp->FieldByName("MSK")->AsString=MSK;
DataModule1->NumbersTemp->FieldByName("Measure_ID")->AsString=Measure_ID;
DataModule1->NumbersTemp->FieldByName("Number_ID")->AsString=Number_ID;
DataModule1->NumbersTemp->FieldByName("Begin")->AsString=beginStr;
DataModule1->NumbersTemp->FieldByName("End")->AsString=endStr;
DataModule1->NumbersTemp->FieldByName("Name")->AsString=DataModule2->Nomenklatura_RK->FieldByName("наименование")->AsString;

Double ff=DataModule2->Nomenklatura_RK->FieldByName("Частота")->AsFloat;
if (DataModule2->Nomenklatura_RK->FieldByName("Гармоника")->AsFloat>1){
 ff=ff/1000;
}
DataModule1->NumbersTemp->FieldByName("Nominal")->AsString=FloatToStr(ff);
DataModule1->NumbersTemp->FieldByName("Number")->AsString=NumberMForm->gridNumbers->RowCount-1;

if(DataModule2->Nomenklatura_RK_PSI->RecordCount>0){
 DataModule1->NumbersTemp->FieldByName("Spc1")->AsString=DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString;
}
 DataModule1->NumbersTemp->FieldByName("transatN")->AsString=DataModule1->FileSelect->FieldByName("Machine")->AsString;
}

DataModule1->Numberall->Active=false;
MainForm->ledNumbers->Active=true;
DataModule1->SqlSpecification->First();
        if(DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcID")->AsFloat>0){
           if (DataModule2->Nomenklatura_RK_PSI->RecordCount>1){
               SpcSelectForm->Show();

           }
           else {
                for(int k=1;k<DataModule1->SqlSpecification->RecordCount; k++){
                        if (DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString==DataModule1->SqlSpecification->FieldByName("Name")->AsString){
                          MainForm->ledSpc->Active=true;
                          DataModule1->Transat_Temp->Active=true;
                          DataModule1->Transat_Temp->Filtered=false;
                          DataModule1->Transat_Temp->First();
                     for (int i=0;i<DataModule1->Transat_Temp->RecordCount;i++){
                           DataModule1->Transat_Temp->Edit();
                           DataModule1->Transat_Temp->FieldByName("Profile")->AsString=DataModule1->SqlSpecification->FieldByName("Profile")->AsString;
                           DataModule1->Transat_Temp->Post();
                           DataModule1->Transat_Temp->Next();
                            }
                          break;
                        }
                       DataModule1->SqlSpecification->Next();
                }
                if (numberSelect==1) {
              DataModule1->NumbersTemp->FieldByName("Type")->AsString=DataModule1->SqlSpecification->FieldByName("Type")->AsString;
                }
                else if(numberSelect==2){
                 OldForm->edtType->Text=DataModule1->SqlSpecification->FieldByName("NameR")->AsString;
                 OldForm->edtSpc->Text=DataModule1->SqlSpecification->FieldByName("Name")->AsString;
                }
               }
             }
          else {
            Dialog1Form->edtNom->Text=NomenklaturaID;
            Dialog1Form->Nomenklatura->Text=DataModule2->Nomenklatura_RK_PSI->FieldByName("NomenklaturaName")->AsString;
            Dialog1Form->edtSpcV->Items->Clear();
            if (DataModule2->Nomenklatura_RK_PSI->RecordCount>0){
            DataModule2->Nomenklatura_RK_PSI->First();
                for (int i=0; i<DataModule2->Nomenklatura_RK_PSI->RecordCount; i++){
                        Dialog1Form->edtSpcV->Items->Add(DataModule2->Nomenklatura_RK_PSI->FieldByName("SpcName")->AsString);
                       DataModule2->Nomenklatura_RK_PSI->Next();
                }
             }

              Dialog1Form->Show();
          }
        if (DataModule2->MSK->FieldByName("ПМИ")->AsFloat==1){
                ModifForm->chkPmi->Checked=true;
        }
          if (DataModule2->Nomenklatura_RK->FieldByName("Cn(pF)")->AsFloat>0){
                ModifForm->chkCn->Checked=true;
                ModifForm->edtCn->Text=DataModule2->Nomenklatura_RK->FieldByName("Cn(pF)")->AsString;
        }
         if (DataModule2->MSK->FieldByName("Cn")->AsFloat>0){
                ModifForm->chkCn->Checked=true;
                ModifForm->edtCn->Text=DataModule2->MSK->FieldByName("Cn")->AsString;
        }
    if (numberSelect==1) {
   DataModule1->NumbersTemp->Post();
   }
  if (chkSpc->Checked){

   Dialog1Form->Show();
  }
 edtCode->FrameColor=clLime;
edtCode->FrameHotColor=clLime;
edtCode->Font->Color=clLime;
edtCode->Repaint();
  if (numberSelect==1) {
   MainForm->btnWork->Enabled=true;
   }

 }
 else {

   edtCode->FrameColor=clYellow;
 edtCode->FrameHotColor=clYellow;
 edtCode->Font->Color=clYellow;
 edtCode->Repaint();

 }
 BarCodeMskForm->Hide();
  if (numberSelect==1) {
MainForm->Show();
}
else if (numberSelect==2){
 OldForm->Show();
 OldForm->edtMsk->Text=MSK;

}
 NumberMForm->edtMSK->Text=MSK;
 NumberMForm->edtID->Text=Measure_ID;


}
}
//---------------------------------------------------------------------------


