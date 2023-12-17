//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Dostup.h"
#include "Data.h"
#include "Main.h"
#include "spc.h"
#include "number.h"
#include "options.h"
#include "data1.h"
#include "Data_MeasureModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzCmboBx"
#pragma link "RzDBCmbo"
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TDostupForm *DostupForm;
//---------------------------------------------------------------------------
__fastcall TDostupForm::TDostupForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDostupForm::FormShow(TObject *Sender)
{
MainForm->Hide();
DataModule1->Dostup->Active=true;
DataModule1->Dostup->First();
for(int i=0; i<DataModule1->Dostup->RecordCount; i++){
     edtLogin->Items->Add(DataModule1->Dostup->FieldByName("Name")->AsString);
     DataModule1->Dostup->Next();
   }
DataModule1->SqlSpecification->Active=true;
Data_Measure->SqlSpecification->Active=true;
}
//---------------------------------------------------------------------------
void __fastcall TDostupForm::btnCloseClick(TObject *Sender)
{
DostupForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TDostupForm::edtLoginChange(TObject *Sender)
{
DataModule1->Dostup->Filtered=false;
DataModule1->Dostup->Filter="Name like '"+edtLogin->Text+"'";
DataModule1->Dostup->Filtered=true;
edtLastname->Text=DataModule1->Dostup->FieldByName("Fname")->AsString;
edtName->Text=DataModule1->Dostup->FieldByName("NName")->AsString;
edtRod->Text=DataModule1->Dostup->FieldByName("PName")->AsString;
edtAccess->Text=DataModule1->Dostup->FieldByName("Допуск")->AsString;
}
//---------------------------------------------------------------------------
void __fastcall TDostupForm::btnEnterClick(TObject *Sender)
{
AnsiString H;
if (DataModule1->Dostup->FieldByName("Password")->AsString==edtPassword->Text){
          if (DataModule1->Dostup->FieldByName("AccessLevel")->AsString==0){
              MainForm->btnOptions->Visible=true;
              MainForm->btnFile->Enabled=true;
              MainForm->btnWork->Enabled=true;
              MainForm->btnSpc->Enabled=true;
              MainForm->btnNumbers->Enabled=true;
              MainForm->btnResult->Enabled=true;
              SpcForm->gridSpc->ReadOnly=false;
              SpcForm->navigatorSpc->Enabled=true;
              SpcForm->btnDetail->Visible=true;
              NumberForm->navigatorNumber->Enabled=true;
              DataModule1->Transat_Temp->Active=false;
              DataModule1->NumberCurrent->Active=false;
              DataModule1->Config->Active=false;
              MainForm->admin->Visible=true;

                 }
          if (DataModule1->Dostup->FieldByName("AccessLevel")->AsString==3){
              MainForm->btnFile->Enabled=true;
              MainForm->btnWork->Enabled=true;
              MainForm->btnSpc->Enabled=true;
              MainForm->btnNumbers->Enabled=true;
              MainForm->btnResult->Enabled=true;
              MainForm->btnOptions->Visible=true;
              DataModule1->Transat_Temp->Active=false;
              DataModule1->NumberCurrent->Active=false;
              DataModule1->Config->Active=false;

              }
            else {
                    if (DataModule1->Dostup->FieldByName("Допуск")->AsString!="Администратор"){
                  ShowMessage("Программа работает в режиме просмотра архива");
                  }
                  }
 AnsiString S;
S="Select *  from `programs_options` where ID ='"+DataModule1->Dostup->FieldByName("SaundersID")->AsString+"'";
DataModule1->Options->Active=false;
DataModule1->Options->SQL->Clear();;
DataModule1->Options->SQL->Add(S);
DataModule1->Options->Active=true;
H="SELECT  SETUPNUM, RINGID, RINGPOS, TEMP, SETPOINT, F0_MHZ, Q_K, R_OHMS, C0_PF, C1_FF, W_UW, L1_MH, F0L_MHZ, FL_MHZ, profiledata.ProfileIndex, profiledata.Temperature FROM `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`, profiledata WHERE  Profile = profiledata.Name AND  SETPOINT = profiledata.Temperature ORDER BY  SETPOINT";
DataModule1->Transat_Temp_Q->SQL->Clear();
DataModule1->Transat_Temp_Q->SQL->Add(H);
DataModule1->DropTransatConfig->SQL->Clear();
DataModule1->DropTransatConfig->SQL->Add("Drop Table IF EXISTS  `transatconfig_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropTransatConfig->Execute();

DataModule1->DropNumberCurrent->SQL->Clear();
DataModule1->DropNumberCurrent->SQL->Add("Drop Table IF EXISTS  `numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropNumberCurrent->Execute();
DataModule1->CreateNumberCurrent->SQL->Clear();
DataModule1->CreateNumberCurrent->SQL->Add("CREATE TABLE `numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString+"` (");
DataModule1->CreateNumberCurrent->SQL->Add("`Position` char(20) default NULL, `SNumber` char(20) default NULL, `N` int(11) unsigned NOT NULL auto_increment,");
DataModule1->CreateNumberCurrent->SQL->Add(" PRIMARY KEY  (`N`)) ENGINE=MEMORY AUTO_INCREMENT=41 DEFAULT CHARSET=cp1251 ROW_FORMAT=FIXED;");
DataModule1->CreateNumberCurrent->Execute();
DataModule1->NumberCurrent->TableName="numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString;

DataModule1->DropTransatTemp->SQL->Clear();
DataModule1->DropTransatTemp->SQL->Add("Drop Table IF EXISTS  `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropTransatTemp->Execute();

DataModule1->DropLianozTable->SQL->Clear();
DataModule1->DropLianozTable->SQL->Add("Drop Table IF EXISTS  `lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropLianozTable->Execute();

ActionList1->Actions[0]->Execute();      // Создание таблицы lianoz


DataModule1->DropPostProcessData->SQL->Clear();
DataModule1->DropPostProcessData->SQL->Add("Drop Table IF EXISTS `post_process_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropPostProcessData->Execute();


DataModule1->CrystalDataDrop->SQL->Clear();
DataModule1->CrystalDataDrop->SQL->Add("Drop Table IF EXISTS `crystal_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CrystalDataDrop->Execute();


DataModule1->SetupDataDrop->SQL->Clear();
DataModule1->SetupDataDrop->SQL->Add("Drop Table IF EXISTS `setup_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupDataDrop->Execute();


DataModule1->ConfigurationDrop->SQL->Clear();
DataModule1->ConfigurationDrop->SQL->Add("Drop Table IF EXISTS `configuration_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->ConfigurationDrop->Execute();

DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop Table IF EXISTS  `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();

DataModule1->SetupHeadersCreate->SQL->Clear();
DataModule1->SetupHeadersDrop->SQL->Clear();
DataModule1->SetupHeadersDrop->SQL->Add("Drop Table IF EXISTS `setup_file_headers_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupHeadersDrop->Execute();

DataModule2->Lianoz->SQL->Clear();
DataModule2->Lianoz->SQL->Add("select SQL_NO_CACHE * from lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+" order by N");
OptionsForm->ColorBox1->ItemIndex=DataModule1->Options->FieldByName("Color")->AsFloat;
OptionsForm->ColorBox2->ItemIndex=DataModule1->Options->FieldByName("FontColor")->AsFloat;
OptionsForm->colorBTN->ItemIndex=DataModule1->Options->FieldByName("btnColor")->AsFloat;
OptionsForm->colorBtnFont->ItemIndex=DataModule1->Options->FieldByName("btnFont")->AsFloat;
OptionsForm->colorFixGrid->ItemIndex=DataModule1->Options->FieldByName("FixedColor")->AsFloat;

MainForm->Color=OptionsForm->ColorBox1->Selected;
MainForm->Font->Color=OptionsForm->ColorBox2->Selected;
MainForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
MainForm->btnOptions->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnSpc->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnNumbers->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnFile->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnResult->Brush->Color=OptionsForm->colorBTN->Selected;
DostupForm->Repaint();
    MainForm->Show();
MainForm->Repaint();

        DostupForm->Hide();
    }
    else{
      edtPassword->Text="Доступ запрещен";
      edtPassword->FrameColor=clRed;
      }
}
//---------------------------------------------------------------------------
void __fastcall TDostupForm::edtPasswordKeyPress(TObject *Sender,
      char &Key)
{
if (Key==13){
       AnsiString H;
 if (DataModule1->Dostup->FieldByName("Password")->AsString==edtPassword->Text){
    if (DataModule1->Dostup->FieldByName("AccessLevel")->AsString==0){
          MainForm->btnOptions->Visible=true;
          MainForm->btnFile->Enabled=true;
              MainForm->btnWork->Enabled=true;
              MainForm->btnSpc->Enabled=true;
              MainForm->btnNumbers->Enabled=true;
              MainForm->btnResult->Enabled=true;
              SpcForm->gridSpc->ReadOnly=false;
              SpcForm->navigatorSpc->Enabled=true;
              SpcForm->btnDetail->Visible=true;
              NumberForm->navigatorNumber->Enabled=true;

              DataModule1->Transat_Temp->Active=false;
              DataModule1->NumberCurrent->Active=false;
              DataModule1->Config->Active=false;
              MainForm->admin->Visible=true;

          }
     if (DataModule1->Dostup->FieldByName("AccessLevel")->AsString==3){
              MainForm->btnFile->Enabled=true;
              MainForm->btnWork->Enabled=true;
              MainForm->btnSpc->Enabled=true;
              MainForm->btnNumbers->Enabled=true;
              MainForm->btnResult->Enabled=true;
              MainForm->btnOptions->Visible=true;
              DataModule1->Transat_Temp->Active=false;
              DataModule1->NumberCurrent->Active=false;
              DataModule1->Config->Active=false;

              }
            else {
                 if (DataModule1->Dostup->FieldByName("Допуск")->AsString!="Администратор"){
                  ShowMessage("Программа работает в режиме просмотра архива");
                  }
                  }


 AnsiString S;
S="Select *  from `programs_options` where ID ='"+DataModule1->Dostup->FieldByName("SaundersID")->AsString+"'";
DataModule1->Options->Active=false;
DataModule1->Options->SQL->Clear();;
DataModule1->Options->SQL->Add(S);
DataModule1->Options->Active=true;

H="SELECT  SETUPNUM, RINGID, RINGPOS, TEMP, SETPOINT, F0_MHZ, Q_K, R_OHMS, C0_PF, C1_FF, W_UW, L1_MH, F0L_MHZ, FL_MHZ, profiledata.ProfileIndex, profiledata.Temperature FROM `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`, profiledata WHERE  Profile = profiledata.Name AND  SETPOINT = profiledata.Temperature ORDER BY  SETPOINT";
DataModule1->Transat_Temp_Q->SQL->Clear();
DataModule1->Transat_Temp_Q->SQL->Add(H);

DataModule1->DropTransatConfig->SQL->Clear();
DataModule1->DropTransatConfig->SQL->Add("Drop Table IF EXISTS  `transatconfig_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropTransatConfig->Execute();

DataModule1->DropNumberCurrent->SQL->Clear();
DataModule1->DropNumberCurrent->SQL->Add("Drop Table IF EXISTS  `numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropNumberCurrent->Execute();
DataModule1->CreateNumberCurrent->SQL->Clear();
DataModule1->CreateNumberCurrent->SQL->Add("CREATE TABLE `numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString+"` (");
DataModule1->CreateNumberCurrent->SQL->Add("`Position` char(20) default NULL, `SNumber` char(20) default NULL, `N` int(11) unsigned NOT NULL auto_increment,");
DataModule1->CreateNumberCurrent->SQL->Add(" PRIMARY KEY  (`N`)) ENGINE=MEMORY AUTO_INCREMENT=41 DEFAULT CHARSET=cp1251 ROW_FORMAT=FIXED;");
DataModule1->CreateNumberCurrent->Execute();
DataModule1->NumberCurrent->TableName="numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString;

DataModule1->DropTransatTemp->SQL->Clear();
DataModule1->DropTransatTemp->SQL->Add("Drop Table IF EXISTS  `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropTransatTemp->Execute();

DataModule1->DropLianozTable->SQL->Clear();
DataModule1->DropLianozTable->SQL->Add("Drop Table IF EXISTS `lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropLianozTable->Execute();

ActionList1->Actions[0]->Execute();  // Создание таблицы lianoz


DataModule1->DropPostProcessData->SQL->Clear();
DataModule1->DropPostProcessData->SQL->Add("Drop Table IF EXISTS `post_process_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropPostProcessData->Execute();


DataModule1->CrystalDataDrop->SQL->Clear();
DataModule1->CrystalDataDrop->SQL->Add("Drop Table IF EXISTS `crystal_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CrystalDataDrop->Execute();


DataModule1->SetupDataDrop->SQL->Clear();
DataModule1->SetupDataDrop->SQL->Add("Drop Table IF EXISTS `setup_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupDataDrop->Execute();


DataModule1->ConfigurationDrop->SQL->Clear();
DataModule1->ConfigurationDrop->SQL->Add("Drop Table IF EXISTS `configuration_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->ConfigurationDrop->Execute();


DataModule1->SetupHeadersDrop->SQL->Clear();
DataModule1->SetupHeadersDrop->SQL->Add("Drop Table IF EXISTS `setup_file_headers_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupHeadersDrop->Execute();

DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop Table IF EXISTS  `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();

DataModule2->Lianoz->SQL->Clear();
DataModule2->Lianoz->SQL->Add("select SQL_NO_CACHE * from lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+" order by N");
//DataModule1->CreateLianozTable->Execute();
OptionsForm->ColorBox1->ItemIndex=DataModule1->Options->FieldByName("Color")->AsFloat;
OptionsForm->ColorBox2->ItemIndex=DataModule1->Options->FieldByName("FontColor")->AsFloat;
OptionsForm->colorBTN->ItemIndex=DataModule1->Options->FieldByName("btnColor")->AsFloat;
OptionsForm->colorBtnFont->ItemIndex=DataModule1->Options->FieldByName("btnFont")->AsFloat;
OptionsForm->colorFixGrid->ItemIndex=DataModule1->Options->FieldByName("FixedColor")->AsFloat;
MainForm->Color=OptionsForm->ColorBox1->Selected;
MainForm->Font->Color=OptionsForm->ColorBox2->Selected;
MainForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
MainForm->btnOptions->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnSpc->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnNumbers->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnFile->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnResult->Brush->Color=OptionsForm->colorBTN->Selected;
DostupForm->Repaint();
    MainForm->Show();
        DostupForm->Hide();



    }
    else{
      edtLogin->Text="Доступ запрещен";
      edtPassword->FrameColor=clRed;
      edtLogin->FrameColor=clRed;
      }
}
}
//---------------------------------------------------------------------------


void __fastcall TDostupForm::setBarCodeChange(TObject *Sender)
{

DataModule1->Dostup->Filtered=false;
DataModule1->Dostup->First();
AnsiString H;
 for (int i=0;i<DataModule1->Dostup->RecordCount;i++){
          if (setBarCode->Text==DataModule1->Dostup->FieldByName("BarCodeData")->AsString){
               edtLogin->Text=DataModule1->Dostup->FieldByName("Name")->AsString;


               if (DataModule1->Dostup->FieldByName("AccessLevel")->AsString==0){
          MainForm->btnOptions->Visible=true;
          MainForm->btnFile->Enabled=true;
              MainForm->btnWork->Enabled=true;
              MainForm->btnSpc->Enabled=true;
              MainForm->btnNumbers->Enabled=true;
              MainForm->btnResult->Enabled=true;
              SpcForm->gridSpc->ReadOnly=false;
              SpcForm->navigatorSpc->Enabled=true;
              SpcForm->btnDetail->Visible=true;
              NumberForm->navigatorNumber->Enabled=true;
              DataModule1->Transat_Temp->Active=false;
              DataModule1->NumberCurrent->Active=false;
              DataModule1->Config->Active=false;
              MainForm->admin->Visible=true;

          }
     if (DataModule1->Dostup->FieldByName("AccessLevel")->AsString==3){
              MainForm->btnFile->Enabled=true;
              MainForm->btnWork->Enabled=true;
              MainForm->btnSpc->Enabled=true;
              MainForm->btnNumbers->Enabled=true;
              MainForm->btnResult->Enabled=true;
              MainForm->btnOptions->Visible=true;
              DataModule1->Transat_Temp->Active=false;
              DataModule1->NumberCurrent->Active=false;
              DataModule1->Config->Active=false;

              }
            else {
                 if (DataModule1->Dostup->FieldByName("Допуск")->AsString!="Администратор"){
                  ShowMessage("Программа работает в режиме просмотра архива");
                  }
                  }


 AnsiString S;
S="Select *  from `programs_options` where ID ='"+DataModule1->Dostup->FieldByName("SaundersID")->AsString+"'";
DataModule1->Options->Active=false;
DataModule1->Options->SQL->Clear();;
DataModule1->Options->SQL->Add(S);
DataModule1->Options->Active=true;

H="SELECT  SETUPNUM, RINGID, RINGPOS, TEMP, SETPOINT, F0_MHZ, Q_K, R_OHMS, C0_PF, C1_FF, W_UW, L1_MH, F0L_MHZ, FL_MHZ, profiledata.ProfileIndex, profiledata.Temperature FROM `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`, profiledata WHERE  Profile = profiledata.Name AND  SETPOINT = profiledata.Temperature ORDER BY  SETPOINT";
DataModule1->Transat_Temp_Q->SQL->Clear();
DataModule1->Transat_Temp_Q->SQL->Add(H);
DataModule1->DropTransatConfig->SQL->Clear();
DataModule1->DropTransatConfig->SQL->Add("Drop Table IF EXISTS  `transatconfig_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropTransatConfig->Execute();

DataModule1->DropNumberCurrent->SQL->Clear();
DataModule1->DropNumberCurrent->SQL->Add("Drop Table IF EXISTS  `numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropNumberCurrent->Execute();
DataModule1->CreateNumberCurrent->SQL->Clear();
DataModule1->CreateNumberCurrent->SQL->Add("CREATE TABLE `numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString+"` (");
DataModule1->CreateNumberCurrent->SQL->Add("`Position` char(20) default NULL, `SNumber` char(20) default NULL, `N` int(11) unsigned NOT NULL auto_increment,");
DataModule1->CreateNumberCurrent->SQL->Add(" PRIMARY KEY  (`N`)) ENGINE=MEMORY AUTO_INCREMENT=41 DEFAULT CHARSET=cp1251 ROW_FORMAT=FIXED;");
DataModule1->CreateNumberCurrent->Execute();
DataModule1->NumberCurrent->TableName="numbercurrent_"+DataModule1->Dostup->FieldByName("ID")->AsString;


DataModule1->DropTransatTemp->SQL->Clear();
DataModule1->DropTransatTemp->SQL->Add("Drop Table IF EXISTS  `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropTransatTemp->Execute();



DataModule1->DropLianozTable->SQL->Clear();
DataModule1->DropLianozTable->SQL->Add("Drop Table IF EXISTS  `lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropLianozTable->Execute();
ActionList1->Actions[0]->Execute();   // Создание таблицы lianoz

//DataModule1->CreateLianozTable->Execute();


DataModule1->DropPostProcessData->SQL->Clear();
DataModule1->DropPostProcessData->SQL->Add("Drop Table IF EXISTS `post_process_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropPostProcessData->Execute();


DataModule1->CrystalDataDrop->SQL->Clear();
DataModule1->CrystalDataDrop->SQL->Add("Drop Table IF EXISTS `crystal_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CrystalDataDrop->Execute();


DataModule1->SetupDataDrop->SQL->Clear();
DataModule1->SetupDataDrop->SQL->Add("Drop Table IF EXISTS `setup_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupDataDrop->Execute();


DataModule1->ConfigurationDrop->SQL->Clear();
DataModule1->ConfigurationDrop->SQL->Add("Drop Table IF EXISTS `configuration_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->ConfigurationDrop->Execute();


DataModule1->SetupHeadersDrop->SQL->Clear();
DataModule1->SetupHeadersDrop->SQL->Add("Drop Table IF EXISTS `setup_file_headers_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupHeadersDrop->Execute();

DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop Table IF EXISTS  `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();

DataModule2->Lianoz->SQL->Clear();
DataModule2->Lianoz->SQL->Add("select SQL_NO_CACHE * from lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+" order by N");
OptionsForm->ColorBox1->ItemIndex=DataModule1->Options->FieldByName("Color")->AsFloat;
OptionsForm->ColorBox2->ItemIndex=DataModule1->Options->FieldByName("FontColor")->AsFloat;
OptionsForm->colorBTN->ItemIndex=DataModule1->Options->FieldByName("btnColor")->AsFloat;
OptionsForm->colorBtnFont->ItemIndex=DataModule1->Options->FieldByName("btnFont")->AsFloat;
OptionsForm->colorFixGrid->ItemIndex=DataModule1->Options->FieldByName("FixedColor")->AsFloat;
MainForm->Color=OptionsForm->ColorBox1->Selected;
MainForm->Font->Color=OptionsForm->ColorBox2->Selected;
MainForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
MainForm->btnOptions->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnSpc->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnNumbers->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnFile->Brush->Color=OptionsForm->colorBTN->Selected;
MainForm->btnResult->Brush->Color=OptionsForm->colorBTN->Selected;
DostupForm->Repaint();
    MainForm->Show();
        DostupForm->Hide();
              break;
            }

        DataModule1->Dostup->Next();
       }

   

}
//---------------------------------------------------------------------------

void __fastcall TDostupForm::Action1Execute(TObject *Sender)
{
DataModule1->CreateLianozTable->SQL->Clear();
DataModule1->CreateLianozTable->SQL->Add("CREATE TABLE `lianoz_new_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CreateLianozTable->SQL->Add("(`ID` int(11) unsigned NOT NULL auto_increment,`N` char(20) default NULL,`Msk` char(20) default NULL,");
DataModule1->CreateLianozTable->SQL->Add(" `Operator` char(50) default NULL, `Spc` char(50) default NULL, `F` float(9,3) default NULL, `R` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add(" `C0` float(9,3) default NULL,   `Cq` float(9,3) default NULL,  `RR` float(9,3) default NULL,  `Fmaxm` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Q` float(9,3) default NULL,  `Intervalfg` char(30) default NULL,  `FT` float(9,3) default NULL,  `Spur` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Slope` float(9,3) default NULL,  `Rmax` float(9,3) default NULL,  `Mono` float(9,3) default NULL,  `Shum` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `RR1` float(9,3) default NULL,  `Fptp` float(9,3) default NULL,  `L` float(9,3) default NULL,  `Tmin` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Rc_Rb` float(9,3) default NULL,  `Tmax` float(9,3) default NULL,  `C0_C1` float(9,3) default NULL,  `Old` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Date` char(20) default NULL,  `NN` char(20) default NULL,  `Date1` char(20) default NULL,  `Fmax` float(9,3) default NULL,`IT` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Fmin` float(9,3) default NULL,  `Ftgk` float(9,3) default NULL,  `Rtgk` float(9,3) default NULL,  `Measure_Protokol_ID` int(11) default NULL, `Measure_ID` int(11) default NULL,`PMI` tinyint(1) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Ft1` float(9,3) default NULL,  `Ft2` float(9,3) default NULL,  `Ft3` float(9,3) default NULL, `C1_2C0` float(9,3) default NULL, `Shum_1` float(9,3) default NULL,`G` float(9,4) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Variant` char(50) default NULL,`Fn` float(9,3) default NULL,`PH_OCS` char(50) default NULL,`PH_Analyser` char(50) default NULL,`PH_Analyser_SN` char(50) default NULL,`TurnOver` float(9,3) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   `Customer` varchar(100) default NULL,`Dogovor` varchar(10) default NULL,");
DataModule1->CreateLianozTable->SQL->Add("   PRIMARY KEY  (`ID`),  UNIQUE KEY `ID` USING BTREE (`ID`)) ENGINE=MEMORY AUTO_INCREMENT=3 DEFAULT CHARSET=cp1251 MAX_ROWS=1000 ROW_FORMAT=FIXED;");
}
//---------------------------------------------------------------------------

