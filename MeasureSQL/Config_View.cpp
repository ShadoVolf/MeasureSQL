//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Config_View.h"
#include "Data.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "AdvGlassButton"
#pragma link "RzChkLst"
#pragma link "RzCmboBx"
#pragma link "RzLstBox"
#pragma resource "*.dfm"
TConfig_View_Form *Config_View_Form;
//---------------------------------------------------------------------------
__fastcall TConfig_View_Form::TConfig_View_Form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TConfig_View_Form::btnCloseClick(TObject *Sender)
{

Config_View_Form->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TConfig_View_Form::FormShow(TObject *Sender)
{
DataModule1->KH7700_Config->Active=true;
DataModule1->KH7700_Config->First();
view->Items->Clear();
edtFirstPosition->Items->Clear();
edtLastPosition->Items->Clear();
edtNom->Items->Clear();
        for (int i=0;i<DataModule1->KH7700_Config->RecordCount;i++){
                 AnsiString result;
                 result= DataModule1->KH7700_Config->FieldByName("SetupN")->AsString+"     "+DataModule1->KH7700_Config->FieldByName("Freq")->AsString;
                 result= result+"    "+DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString;
                 result= result+"..."+DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString;
                 result= result+"      ("+DataModule1->KH7700_Config->FieldByName("Temperature")->AsString+")";
                 view->Items->Add(result);
                 DataModule1->KH7700_Config->Next();
        }
DataModule1->KH7700_Temp->Filtered=false;
DataModule1->KH7700_Temp->Filter="TEMP='"+DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString+"'";
DataModule1->KH7700_Temp->Filtered=true;
DataModule1->KH7700_Temp->First();
        for (int i=0;i<DataModule1->KH7700_Temp->RecordCount;i++){
           edtFirstPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           edtLastPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           AnsiString TT;
           double FreqTemp= DataModule1->KH7700_Temp->FieldByName("FS")->AsFloat;
           FreqTemp=FreqTemp/1000000;
           TT=FloatToStrF(FreqTemp,ffFixed,8,5);
           edtNom->Items->Add(TT);
           DataModule1->KH7700_Temp->Next();
        }
 DataModule1->KH7700_Temp->First();

}
//---------------------------------------------------------------------------
void __fastcall TConfig_View_Form::viewChange(TObject *Sender, int Index,
      TCheckBoxState NewState)
{
int l=0;
for(int i=0; i<view->Count;i++){
                 if(view->ItemState[i]!=0){
                                 break;
                   }
                  l=i+1;
             }

DataModule1->KH7700_Config->First();
        for (int  i=0; i<DataModule1->KH7700_Config->RecordCount;i++){
             if (DataModule1->KH7700_Config->FieldByName("SetupN")->AsString==FloatToStr(l+1)){
                 break;
             }
             DataModule1->KH7700_Config->Next();
        }


edtFirstPosition->Text=DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString;
edtLastPosition->Text=DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString;
edtNom->Text=DataModule1->KH7700_Config->FieldByName("Freq")->AsString;
Label4->Caption=FloatToStr(l+1);

}
//---------------------------------------------------------------------------
void __fastcall TConfig_View_Form::AdvGlassButton1Click(TObject *Sender)
{
int l=0;
for(int i=0; i<view->Count;i++){
                 if(view->ItemState[i]!=0){
                                 break;
                   }
                  l=i+1;
             }
DataModule1->KH7700_Config->First();
        for (int  i=0; i<DataModule1->KH7700_Config->RecordCount;i++){
             if (DataModule1->KH7700_Config->FieldByName("SetupN")->AsString==FloatToStr(l+1)){
                 DataModule1->KH7700_Config->Edit();
                 DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString=edtFirstPosition->Text;
                 DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString=edtLastPosition->Text;
                 DataModule1->KH7700_Config->FieldByName("Freq")->AsFloat=StrToFloat(edtNom->Text);
                 DataModule1->KH7700_Config->Post();
                 break;
             }
             DataModule1->KH7700_Config->Next();
        }
  DataModule1->KH7700_Config->First();
view->Items->Clear();
edtFirstPosition->Items->Clear();
edtLastPosition->Items->Clear();
edtNom->Items->Clear();
        for (int i=0;i<DataModule1->KH7700_Config->RecordCount;i++){
                 AnsiString result;
                 result= DataModule1->KH7700_Config->FieldByName("SetupN")->AsString+"     "+DataModule1->KH7700_Config->FieldByName("Freq")->AsString;
                 result= result+"    "+DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString;
                 result= result+"..."+DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString;
                 result= result+"      ("+DataModule1->KH7700_Config->FieldByName("Temperature")->AsString+")";
                 view->Items->Add(result);
                 DataModule1->KH7700_Config->Next();
        }
DataModule1->KH7700_Temp->Filtered=false;
DataModule1->KH7700_Temp->Filter="TEMP='"+DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString+"'";
DataModule1->KH7700_Temp->Filtered=true;
DataModule1->KH7700_Temp->First();
        for (int i=0;i<DataModule1->KH7700_Temp->RecordCount;i++){
           edtFirstPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           edtLastPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           AnsiString TT;
           double FreqTemp= DataModule1->KH7700_Temp->FieldByName("FS")->AsFloat;
           FreqTemp=FreqTemp/1000000;
           TT=FloatToStrF(FreqTemp,ffFixed,8,5);
           edtNom->Items->Add(TT);
           DataModule1->KH7700_Temp->Next();
        }
 DataModule1->KH7700_Temp->First();



}
//---------------------------------------------------------------------------
void __fastcall TConfig_View_Form::AdvGlassButton2Click(TObject *Sender)
{
 int k = DataModule1->KH7700_Config->RecordCount;
  k=k+1;
 DataModule1->KH7700_Config->First();
 AnsiString temp =  DataModule1->KH7700_Config->FieldByName("Temperature")->AsString;
 AnsiString tempN =  DataModule1->KH7700_Config->FieldByName("TempN")->AsString;
 AnsiString FirstTemp =  DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString;

 DataModule1->KH7700_Config->Append();
 DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString = edtFirstPosition->Text;
 DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString = edtLastPosition->Text;
 DataModule1->KH7700_Config->FieldByName("Freq")->AsString = edtNom->Text;
 DataModule1->KH7700_Config->FieldByName("SetupN")->AsString = FloatToStr(k);
 DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString = FirstTemp;
 DataModule1->KH7700_Config->FieldByName("Temperature")->AsString = temp;
 DataModule1->KH7700_Config->FieldByName("TempN")->AsString = tempN;
 DataModule1->KH7700_Config->Post();

 DataModule1->KH7700_Config->First();
view->Items->Clear();
edtFirstPosition->Items->Clear();
edtLastPosition->Items->Clear();
edtNom->Items->Clear();
        for (int i=0;i<DataModule1->KH7700_Config->RecordCount;i++){
                 AnsiString result;
                 result= DataModule1->KH7700_Config->FieldByName("SetupN")->AsString+"     "+DataModule1->KH7700_Config->FieldByName("Freq")->AsString;
                 result= result+"    "+DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString;
                 result= result+"..."+DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString;
                 result= result+"      ("+DataModule1->KH7700_Config->FieldByName("Temperature")->AsString+")";
                 view->Items->Add(result);
                 DataModule1->KH7700_Config->Next();
        }
DataModule1->KH7700_Temp->Filtered=false;
DataModule1->KH7700_Temp->Filter="TEMP='"+DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString+"'";
DataModule1->KH7700_Temp->Filtered=true;
DataModule1->KH7700_Temp->First();
        for (int i=0;i<DataModule1->KH7700_Temp->RecordCount;i++){
           edtFirstPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           edtLastPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           AnsiString TT;
           double FreqTemp= DataModule1->KH7700_Temp->FieldByName("FS")->AsFloat;
           FreqTemp=FreqTemp/1000000;
           TT=FloatToStrF(FreqTemp,ffFixed,8,5);
           edtNom->Items->Add(TT);
           DataModule1->KH7700_Temp->Next();
        }
 DataModule1->KH7700_Temp->First();


}
//---------------------------------------------------------------------------
void __fastcall TConfig_View_Form::AdvGlassButton3Click(TObject *Sender)
{
 int l=0;
        for(int i=0; i<view->Count;i++){
                 if(view->ItemState[i]!=0){
                                 break;
                   }
                  l=i+1;
        }
 DataModule1->KH7700_Config->First();
        for (int  i=0; i<DataModule1->KH7700_Config->RecordCount;i++){
             if (DataModule1->KH7700_Config->FieldByName("SetupN")->AsString==FloatToStr(l+1)){
                 DataModule1->KH7700_Config->Delete();
                 break;
             }
             DataModule1->KH7700_Config->Next();
        }
 DataModule1->KH7700_Config->First();
view->Items->Clear();
edtFirstPosition->Items->Clear();
edtLastPosition->Items->Clear();
edtNom->Items->Clear();
        for (int i=0;i<DataModule1->KH7700_Config->RecordCount;i++){
                 AnsiString result;
                 result= DataModule1->KH7700_Config->FieldByName("SetupN")->AsString+"     "+DataModule1->KH7700_Config->FieldByName("Freq")->AsString;
                 result= result+"    "+DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString;
                 result= result+"..."+DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString;
                 result= result+"      ("+DataModule1->KH7700_Config->FieldByName("Temperature")->AsString+")";
                 view->Items->Add(result);
                 DataModule1->KH7700_Config->Next();
        }
DataModule1->KH7700_Temp->Filtered=false;
DataModule1->KH7700_Temp->Filter="TEMP='"+DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString+"'";
DataModule1->KH7700_Temp->Filtered=true;
DataModule1->KH7700_Temp->First();
        for (int i=0;i<DataModule1->KH7700_Temp->RecordCount;i++){
           edtFirstPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           edtLastPosition->Items->Add(DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString);
           AnsiString TT;
           double FreqTemp= DataModule1->KH7700_Temp->FieldByName("FS")->AsFloat;
           FreqTemp=FreqTemp/1000000;
           TT=FloatToStrF(FreqTemp,ffFixed,8,5);
           edtNom->Items->Add(TT);
           DataModule1->KH7700_Temp->Next();
        }
 DataModule1->KH7700_Temp->First();

}
//---------------------------------------------------------------------------
void __fastcall TConfig_View_Form::AdvGlassButton4Click(TObject *Sender)
{


   DataModule1->KH7700_User_Config_Drop->SQL->Clear();
         DataModule1->KH7700_User_Config_Drop->SQL->Add("drop table if exists `KH7700_User_Config`");
         DataModule1->KH7700_User_Config_Drop->Execute();
         DataModule1->KH7700_User_Config_Create->Execute();

         DataModule1->KH7700_User_Config->Active=false;
         DataModule1->KH7700_User_Config->SQL->Clear();
         DataModule1->KH7700_User_Config->SQL->Add("Select * from `KH7700_User_Config`");
         DataModule1->KH7700_User_Config->Active=true;
          DataModule1->KH7700_Temp->Filtered=false;
          DataModule1->KH7700_Temp->Filter="TEMP='"+DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString;
         DataModule1->KH7700_Temp->Filtered=true;
         DataModule1->KH7700_Temp->First();

         for (int i=0;i<DataModule1->KH7700_Temp->RecordCount;i++){
            DataModule1->KH7700_User_Config->Append();
            DataModule1->KH7700_User_Config->FieldByName("Position")->AsString=DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString;
            AnsiString Pos=DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString;
            AnsiString Row=Pos.SubString(0,1);
            AnsiString Pos_N=Pos.SubString(2,Pos.Length()-1);
            if (Pos_N.Length()==1){
             Pos_N="00"+Pos_N;
            }
            else if(Pos_N.Length()==2){
              Pos_N="0"+Pos_N;
            }
            DataModule1->KH7700_User_Config->FieldByName("Pos_Str")->AsString=Row+Pos_N;
            DataModule1->KH7700_User_Config->FieldByName("Setup_N")->AsString="1";
            DataModule1->KH7700_User_Config->Post();
            DataModule1->KH7700_Temp->Next();
         }
         DataModule1->KH7700_Temp->First();

        int kk=0;
        DataModule1->KH7700_User_Config->Active=false;
         DataModule1->KH7700_User_Config->SQL->Clear();
         DataModule1->KH7700_User_Config->SQL->Add("Select * from `KH7700_User_Config` Order by `Pos_Str`");
         DataModule1->KH7700_User_Config->Active=true;
         DataModule1->KH7700_User_Config->First();

   DataModule1->KH7700_Config->First();
  for (int i=0;i<DataModule1->KH7700_Config->RecordCount;i++){
           DataModule1->KH7700_User_Config->First();
           bool rec=false;
           int count=0;
             for (int j=0; j<DataModule1->KH7700_User_Config->RecordCount;j++){
                  if (DataModule1->KH7700_User_Config->FieldByName("Position")->AsString == DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString){
                       rec=true;
                  }
                  if (rec){
                     DataModule1->KH7700_User_Config->Edit();
                     DataModule1->KH7700_User_Config->FieldByName("Setup_N")->AsString = DataModule1->KH7700_Config->FieldByName("SetupN")->AsString;
                     DataModule1->KH7700_User_Config->Post();
                     DataModule1->KH7700_Temp->Filtered=false;
                     DataModule1->KH7700_Temp->Filter="XTALROW='"+DataModule1->KH7700_User_Config->FieldByName("Position")->AsString+"'";
                     DataModule1->KH7700_Temp->Filtered=true;
                     DataModule1->KH7700_Temp->First();
                        for (int ll=0;ll<DataModule1->KH7700_Temp->RecordCount;ll++){
                            DataModule1->KH7700_Temp->Edit();
                            DataModule1->KH7700_Temp->FieldByName("SetupN")->AsString = DataModule1->KH7700_Config->FieldByName("SetupN")->AsString;
                            DataModule1->KH7700_Temp->Post();
                        }
                     count++;


                  }
                if (DataModule1->KH7700_User_Config->FieldByName("Position")->AsString == DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString){
                       rec=false;
                  }
                DataModule1->KH7700_User_Config->Next();
             }
                DataModule1->KH7700_Config->Edit();
                DataModule1->KH7700_Config->FieldByName("Number")->AsString=FloatToStr(count);
                DataModule1->KH7700_Config->Post();
                 DataModule1->KH7700_Config->Next();
        }

 DataModule1->KH7700_Temp->Filtered=false;
         DataModule1->KH7700_Config->First();
         MainForm->RzCheckList1->Items->Clear();
     for (int i=0;i<DataModule1->KH7700_Config->RecordCount;i++){
         AnsiString N=DataModule1->KH7700_Config->FieldByName("SetupN")->AsString+
         "                     "+DataModule1->KH7700_Config->FieldByName("Freq")->AsString+"Ìדצ                "+
         DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString+"..."+DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString+
         "        "+DataModule1->KH7700_Config->FieldByName("Number")->AsString+"   רע.";
         MainForm->RzCheckList1->Items->Add(N);
         MainForm->ListBox1->Items->Clear();
         MainForm->ListBox2->Items->Clear();
         MainForm->ListBox1->Items->Add(DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString);
         MainForm->ListBox2->Items->Add(DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString+"..."+DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString);

        DataModule1->KH7700_Config->Next();
        }

     MainForm->ledFile->Active=true;
     MainForm->N23->Enabled=true;



}
//---------------------------------------------------------------------------
