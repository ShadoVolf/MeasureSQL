//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FileSelect.h"
#include "Main.h"
#include "Data.h"
#include "options.h"
#include "Tnumber.h"
#include "data1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzDBGrid"
#pragma link "RzPanel"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TFileSelectForm *FileSelectForm;
//---------------------------------------------------------------------------
__fastcall TFileSelectForm::TFileSelectForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFileSelectForm::btnCloseClick(TObject *Sender)
{
FileSelectForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TFileSelectForm::FormShow(TObject *Sender)
{
DataModule1->FileSelect->Active=true;
FileSelectForm->Color=OptionsForm->ColorBox1->Selected;
FileSelectForm->Font->Name=DataModule1->Options->FieldByName("Font")->AsString;
FileSelectForm->Font->Color=OptionsForm->ColorBox2->Selected;
FileSelectForm->btnSet->Brush->Color=OptionsForm->colorBTN->Selected;
FileSelectForm->btnClose->Brush->Color=OptionsForm->colorBTN->Selected;
FileSelectForm->RzPanel1->Color=OptionsForm->ColorBox1->Selected;
FileSelectForm->bxSelect->Color=OptionsForm->ColorBox1->Selected;
FileSelectForm->RzDBGrid1->FixedColor=OptionsForm->colorFixGrid->Selected;
FileSelectForm->RzDBGrid1->Columns->Items[0]->Title->Color=OptionsForm->ColorBox1->Selected;
FileSelectForm->Repaint();
DataModule2->Machine->Active=true;
DataModule2->Machine->First();
bxSelect->Items->Clear();
for (int i=0; i<DataModule2->Machine->RecordCount; i++){
bxSelect->Items->Add(DataModule2->Machine->FieldByName("IP")->AsString);
DataModule2->Machine->Next();

}
 DataModule2->Machine->Active=false;
}
//---------------------------------------------------------------------------

void __fastcall TFileSelectForm::btnSetClick(TObject *Sender)
{
MainForm->ListBox1->Clear();
MainForm->edtMachine->Text=bxSelect->Text;
MainForm->FileSelectShow->Text=DataModule1->FileSelect->FieldByName("FileName")->AsString;
DataModule2->Machine->Active=true;
DataModule2->Machine->First();
AnsiString MachineType;
for (int i=0; i<DataModule2->Machine->RecordCount; i++){
  if (DataModule2->Machine->FieldByName("IP")->AsString==bxSelect->Text){
     MachineType=DataModule2->Machine->FieldByName("Type")->AsString;
     break;
  }
DataModule2->Machine->Next();

}
 DataModule2->Machine->Active=false;

if (MachineType=="Saunders"){
 DataModule1->CreatePostProcessData->SQL->Clear();
DataModule1->DropPostProcessData->SQL->Clear();
DataModule1->DropPostProcessData->SQL->Add("Drop Table IF EXISTS `post_process_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropPostProcessData->Execute();
DataModule1->CreatePostProcessData->SQL->Add("CREATE TABLE `post_process_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CreatePostProcessData->SQL->Add("(`nCurveFitID` int(11) default NULL,`nSetupFileIndex` int(11) default NULL, ");
DataModule1->CreatePostProcessData->SQL->Add("`strCrystalID` varchar(4) default NULL,`strQCStatusCrystalData` varchar(20) default NULL,`strQCStatusSetupData` varchar(20) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strQCStatusCurveFitData` varchar(20) default NULL, `fReferenceFrequency` double default NULL, `fReferenceSetTemperature` double default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fReferenceActualTemperature` double default NULL,`fA0` double default NULL,`strQCStatusA0` varchar(1) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fA1` double default NULL,`strQCStatusA1` varchar(1) default NULL,`fA2` double default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strQCStatusA2` varchar(1) default NULL,`fA3` double default NULL,`strQCStatusA3` varchar(1) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fA4` double default NULL,`strQCStatusA4` varchar(1) default NULL,`fTP1` double default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strQCStatusTP1` varchar(1) default NULL,`fTP2` double default NULL,`strQCStatusTP2` varchar(1) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fTP3` double default NULL,`strQCStatusTP3` varchar(1) default NULL,`fIT1` double default NULL,`strQCStatusIT1` varchar(1) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fIT2` double default NULL,`strQCStatusIT2` varchar(1) default NULL,`fCrystalCut` double default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strQCStatusCrystalCut` varchar(20) default NULL,`fRelativeAngle` double default NULL,`strQCStatusRelativeAngle` varchar(1) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fWCD` double default NULL,`strQCStatusWCD` varchar(1) default NULL,`fWCDTemp` double default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strQCStatusWCDTemp` varchar(1) default NULL,`fRMin` double default NULL,`strQCStatusRMin` varchar(1) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fRMax` double default NULL,`strQCStatusRMax` varchar(1) default NULL,`fRDelta` double default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strQCStatusRDelta` varchar(1) default NULL,`nNumberOfCrystals` int(11) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strStartCrystalID` varchar(4) default NULL,`strStopCrystalID` varchar(4) default NULL,`fFMin` double default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strQCStatusFMin` varchar(1) default NULL,`fFMax` double default NULL,`strQCStatusFMax` varchar(1) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`fFDelta` double default NULL,`strQCStatusFDelta` varchar(1) default NULL,`nGroupNumber` int(11) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`Name` char(20) default NULL,`Size` int(11) default NULL,`Machine` char(20) default NULL,`oleCurveFitPlot` char(20) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`MD5` char(100) default NULL,`M_Type` int(11) default NULL,`File_ID` int(11) default NULL,");
DataModule1->CreatePostProcessData->SQL->Add("`strGroupDescription` varchar(30) default NULL, `RecordID` int(11) unsigned NOT NULL auto_increment,PRIMARY KEY  (`RecordID`),UNIQUE KEY `RecordID` USING BTREE (`RecordID`)");
DataModule1->CreatePostProcessData->SQL->Add(") ENGINE=MEMORY AUTO_INCREMENT=1 DEFAULT CHARSET=latin1;");
DataModule1->CreatePostProcessData->Execute();

DataModule1->CrystalDataCreate->SQL->Clear();
DataModule1->CrystalDataDrop->SQL->Clear();
DataModule1->CrystalDataDrop->SQL->Add("Drop Table IF EXISTS `crystal_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CrystalDataDrop->Execute();
DataModule1->CrystalDataCreate->SQL->Add("CREATE TABLE `crystal_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CrystalDataCreate->SQL->Add("(`nDataID` int(11) NOT NULL,`nSetupFileIndex` int(11) default NULL,`strCrystalID` varchar(4) default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`n3ColumnSort` int(11) default NULL,`n5ColumnSort` int(11) default NULL,`fSetTemperature` double default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`fActualTemperature` double default NULL,`fFrequencyPPM` double default NULL,`strQCStatusFrequency` varchar(1) default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`fCurveFitPPM` double default NULL,`strQCStatusCurveFit` varchar(1) default NULL,`fErrorPPM` double default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`strQCStatusError` varchar(1) default NULL,`fC0` double default NULL,`strQCStatusC0` varchar(1) default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`fC1` float default NULL,`strQCStatusC1` varchar(1) default NULL,`fL` double default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`strQCStatusL` varchar(1) default NULL,`fRr` double default NULL,`strQCStatusRr` varchar(1) default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`dtMeasurementTime` varchar(40) default NULL,`nTableLineNumber` int(11) default NULL,`nRepeatCounter` int(11) default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`Name` char(20) default NULL,`Size` int(11) default NULL,`Machine` char(20) default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`MD5` char(100) default NULL,`M_Type` int(11) default NULL,`File_ID` int(11) default NULL,");
DataModule1->CrystalDataCreate->SQL->Add("`RecordID` int(11) unsigned NOT NULL auto_increment,PRIMARY KEY  (`RecordID`),UNIQUE KEY `RecordID` USING BTREE (`RecordID`)");
DataModule1->CrystalDataCreate->SQL->Add(") ENGINE=MEMORY AUTO_INCREMENT=1 DEFAULT CHARSET=cp1251;");
DataModule1->CrystalDataCreate->Execute();

DataModule1->SetupDataCreate->SQL->Clear();
DataModule1->SetupDataDrop->SQL->Clear();
DataModule1->SetupDataDrop->SQL->Add("Drop Table IF EXISTS `setup_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupDataDrop->Execute();
DataModule1->SetupDataCreate->SQL->Add("CREATE TABLE `setup_data_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupDataCreate->SQL->Add("(`nDataID` int(11) default NULL,`nSetupFileIndex` int(11) default NULL,`strCrystalID` varchar(4) default NULL,`fSetTemperature` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`fActualTemperature` double default NULL,`strOverallQCStatus` varchar(20) default NULL,`strQCStatus1` varchar(20) default NULL,`fValue1` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus2` varchar(20) default NULL,`fValue2` double default NULL,`strQCStatus3` varchar(20) default NULL,`fValue3` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus4` varchar(20) default NULL,`fValue4` double default NULL,`strQCStatus5` varchar(20) default NULL,`fValue5` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus6` varchar(20) default NULL,`fValue6` double default NULL,`strQCStatus7` varchar(20) default NULL,`fValue7` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus8` varchar(20) default NULL,`fValue8` double default NULL,`strQCStatus9` varchar(20) default NULL,`fValue9` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus10` varchar(20) default NULL,`fValue10` double default NULL,`strQCStatus11` varchar(20) default NULL,`fValue11` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus12` varchar(20) default NULL,`fValue12` double default NULL,`strQCStatus13` varchar(20) default NULL,`fValue13` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus14` varchar(20) default NULL,`fValue14` double default NULL,`strQCStatus15` varchar(20) default NULL,`fValue15` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus16` varchar(20) default NULL,`fValue16` double default NULL,`strQCStatus17` varchar(20) default NULL,`fValue17` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus18` varchar(20) default NULL,`fValue18` double default NULL,`strQCStatus19` varchar(20) default NULL,`fValue19` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus20` varchar(20) default NULL,`fValue20` double default NULL,`strQCStatus21` varchar(20) default NULL,`fValue21` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus22` varchar(20) default NULL,`fValue22` double default NULL,`strQCStatus23` varchar(20) default NULL,`fValue23` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus24` varchar(20) default NULL,`fValue24` double default NULL,`strQCStatus25` varchar(20) default NULL,`fValue25` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus26` varchar(20) default NULL,`fValue26` double default NULL,`strQCStatus27` varchar(20) default NULL,`fValue27` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus28` varchar(20) default NULL,`fValue28` double default NULL,`strQCStatus29` varchar(20) default NULL,`fValue29` double default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`strQCStatus30` varchar(20) default NULL,`fValue30` double default NULL,`dtMeasurementTime` varchar(40) default NULL,`nTableLineNumber` int(11) default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`Name` char(20) default NULL,`Size` int(11) default NULL,`Machine` char(20) default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`MD5` char(100) default NULL,`M_Type` int(11) default NULL,`File_ID` int(11) default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`nRepeatCounter` int(11) default NULL,");
DataModule1->SetupDataCreate->SQL->Add("`RecordID` int(11) unsigned NOT NULL auto_increment,PRIMARY KEY  (`RecordID`),UNIQUE KEY `RecordID` USING BTREE (`RecordID`)");
DataModule1->SetupDataCreate->SQL->Add(") ENGINE=MEMORY AUTO_INCREMENT=1 DEFAULT CHARSET=latin1;");
DataModule1->SetupDataCreate->Execute();

DataModule1->ConfigurationCreate->SQL->Clear();
DataModule1->ConfigurationDrop->SQL->Clear();
DataModule1->ConfigurationDrop->SQL->Add("Drop Table IF EXISTS `configuration_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->ConfigurationDrop->Execute();
DataModule1->ConfigurationCreate->SQL->Add("CREATE TABLE `configuration_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->ConfigurationCreate->SQL->Add("(`nConfigurationID` int(11) default NULL,`nSetupFileIndex` int(11) default NULL,`strStartCrystalID` varchar(10) default NULL,");
DataModule1->ConfigurationCreate->SQL->Add("`strStopCrystalID` varchar(10) default NULL,`strStartingSerialNumber` varchar(15) default NULL,");
DataModule1->ConfigurationCreate->SQL->Add("`Name` char(20) default NULL,`Size` int(11) default NULL,`Machine` char(20) default NULL,");
DataModule1->ConfigurationCreate->SQL->Add("`MD5` char(100) default NULL,`M_Type` int(11) default NULL,`File_ID` int(11) default NULL,");
DataModule1->ConfigurationCreate->SQL->Add("`RecordID` int(11) unsigned NOT NULL auto_increment,PRIMARY KEY  (`RecordID`),UNIQUE KEY `RecordID` USING BTREE (`RecordID`)");
DataModule1->ConfigurationCreate->SQL->Add(") ENGINE=MEMORY AUTO_INCREMENT=1 DEFAULT CHARSET=cp1251;");
DataModule1->ConfigurationCreate->Execute();

DataModule1->SetupHeadersCreate->SQL->Clear();
DataModule1->SetupHeadersDrop->SQL->Clear();
DataModule1->SetupHeadersDrop->SQL->Add("Drop Table IF EXISTS `setup_file_headers_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupHeadersDrop->Execute();
DataModule1->SetupHeadersCreate->SQL->Add("CREATE TABLE `setup_file_headers_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->SetupHeadersCreate->SQL->Add("(`nSetupFilesID` int(11) default NULL,`nSetupFileIndex` int(11) default NULL,`fProgramVersion` double default NULL,`strFileName` varchar(255) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`dtFileDate` varchar(40) default NULL,`strFrequencyType` varchar(3) default NULL,`fOriginalReferenceFrequency` double default NULL,`fOriginalResistance` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fOriginalPower` double default NULL,`strOriginalBasePowerUnit` varchar(5) default NULL,`fOriginalReferenceCL` double default NULL,`fReferenceFrequency` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fResistance` double default NULL,`fPower` double default NULL,`strBasePowerUnit` varchar(5) default NULL,`fReferenceCL` double default NULL,`fPhysicalLoad` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDescription` varchar(50) default NULL,`strOriginator` varchar(50) default NULL,`dtOriginationDate` varchar(40) default NULL,`strModifier` varchar(50) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`dtModificationDate` varchar(40) default NULL,`strModification` varchar(50) default NULL,`strLoadType` varchar(20) default NULL,`fAlternateC0Frequency` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fSpurResistance1` double default NULL,`fSpurPower1` double default NULL,`strSpurPowerUnit1` varchar(5) default NULL,`fSpurSweepStart1` double default NULL,`fSpurSweepStop1` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strSpurSweepUnit1` varchar(5) default NULL,`fSpurResistance2` double default NULL,`fSpurPower2` double default NULL,`strSpurPowerUnit2` varchar(5) default NULL,`fSpurSweepStart2` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fSpurSweepStop2` double default NULL,`strSpurSweepUnit2` varchar(5) default NULL,`fSpurResistance3` double default NULL,`fSpurPower3` double default NULL,`strSpurPowerUnit3` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fSpurSweepStart3` double default NULL,`fSpurSweepStop3` double default NULL,`strSpurSweepUnit3` varchar(5) default NULL,`fSpurResistance4` double default NULL,`fSpurPower4` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strSpurPowerUnit4` varchar(5) default NULL,`fSpurSweepStart4` double default NULL,`fSpurSweepStop4` double default NULL,`strSpurSweepUnit4` varchar(5) default NULL,`fDLDResistance` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower1` double default NULL,`strDLDBeginPowerUnit1` varchar(5) default NULL,`fDLDEndPower1` double default NULL,`strDLDEndPowerUnit1` varchar(5) default NULL,`fDLDBeginPower2` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDBeginPowerUnit2` varchar(5) default NULL,`fDLDEndPower2` double default NULL,`strDLDEndPowerUnit2` varchar(5) default NULL,`fDLDBeginPower3` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDBeginPowerUnit3` varchar(5) default NULL,`fDLDEndPower3` double default NULL,`strDLDEndPowerUnit3` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower4` double default NULL,`strDLDBeginPowerUnit4` varchar(5) default NULL,`fDLDEndPower4` double default NULL,`strDLDEndPowerUnit4` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower5` double default NULL,`strDLDBeginPowerUnit5` varchar(5) default NULL,`fDLDEndPower5` double default NULL,`strDLDEndPowerUnit5` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower6` double default NULL,`strDLDBeginPowerUnit6` varchar(5) default NULL,`fDLDEndPower6` double default NULL,`strDLDEndPowerUnit6` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower7` double default NULL,`strDLDBeginPowerUnit7` varchar(5) default NULL,`fDLDEndPower7` double default NULL,`strDLDEndPowerUnit7` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower8` double default NULL,`strDLDBeginPowerUnit8` varchar(5) default NULL,`fDLDEndPower8` double default NULL,`strDLDEndPowerUnit8` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower9` double default NULL,`strDLDBeginPowerUnit9` varchar(5) default NULL,`fDLDEndPower9` double default NULL,`strDLDEndPowerUnit9` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower10` double default NULL,`strDLDBeginPowerUnit10` varchar(5) default NULL,`fDLDEndPower10` double default NULL,`strDLDEndPowerUnit10` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower11` double default NULL,`strDLDBeginPowerUnit11` varchar(5) default NULL,`fDLDEndPower11` double default NULL,`strDLDEndPowerUnit11` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower12` double default NULL,`strDLDBeginPowerUnit12` varchar(5) default NULL,`fDLDEndPower12` double default NULL,`strDLDEndPowerUnit12` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower13` double default NULL,`strDLDBeginPowerUnit13` varchar(5) default NULL,`fDLDEndPower13` double default NULL,`strDLDEndPowerUnit13` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower14` double default NULL,`strDLDBeginPowerUnit14` varchar(5) default NULL,`fDLDEndPower14` double default NULL,`strDLDEndPowerUnit14` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower15` double default NULL,`strDLDBeginPowerUnit15` varchar(5) default NULL,`fDLDEndPower15` double default NULL,`strDLDEndPowerUnit15` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower16` double default NULL,`strDLDBeginPowerUnit16` varchar(5) default NULL,`fDLDEndPower16` double default NULL,`strDLDEndPowerUnit16` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower17` double default NULL,`strDLDBeginPowerUnit17` varchar(5) default NULL,`fDLDEndPower17` double default NULL,`strDLDEndPowerUnit17` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower18` double default NULL,`strDLDBeginPowerUnit18` varchar(5) default NULL,`fDLDEndPower18` double default NULL,`strDLDEndPowerUnit18` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower19` double default NULL,`strDLDBeginPowerUnit19` varchar(5) default NULL,`fDLDEndPower19` double default NULL,`strDLDEndPowerUnit19` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower20` double default NULL,`strDLDBeginPowerUnit20` varchar(5) default NULL,`fDLDEndPower20` double default NULL,`strDLDEndPowerUnit20` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fSearchDelay` double default NULL,`fSearchSweepRange` double default NULL,`fSearchSweepStart` double default NULL,`fSearchSweepStop` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fSearchStepSize` double default NULL,`strSweepType` varchar(30) default NULL,`nAverages` smallint(6) default NULL,`nGraphA` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nGraphB` smallint(6) default NULL,`nGraphC` smallint(6) default NULL,`nSpurSweepSteps1` smallint(6) default NULL,`nSpurSweepSteps2` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nSpurSweepSteps3` smallint(6) default NULL,`nSpurSweepSteps4` smallint(6) default NULL,`nDLDSteps1` smallint(6) default NULL,`nDLDSteps2` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nDLDSteps3` smallint(6) default NULL,`nDLDSteps4` smallint(6) default NULL,`nDLDSteps5` smallint(6) default NULL,`nDLDSteps6` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nDLDSteps7` smallint(6) default NULL,`nDLDSteps8` smallint(6) default NULL,`nDLDSteps9` smallint(6) default NULL,`nDLDSteps10` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nDLDSteps11` smallint(6) default NULL,`nDLDSteps12` smallint(6) default NULL,`nDLDSteps13` smallint(6) default NULL,`nDLDSteps14` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nDLDSteps15` smallint(6) default NULL,`nDLDSteps16` smallint(6) default NULL,`nDLDSteps17` smallint(6) default NULL,`nDLDSteps18` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nDLDSteps19` smallint(6) default NULL,`nDLDSteps20` smallint(6) default NULL,`nCLIsUsed` smallint(6) default NULL,`nUseOriginalReferenceFR` int(11) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nUseOriginalReferenceCL` int(11) default NULL,`nUseOriginalPower` int(11) default NULL,`fPlatingOffset` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDResistanceMode` varchar(50) default NULL,`fDLDBeginPower21` double default NULL,`strDLDBeginPowerUnit21` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDEndPower21` double default NULL,`strDLDEndPowerUnit21` varchar(5) default NULL,`nDLDSteps21` smallint(6) default NULL,`fDLDBeginPower22` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDBeginPowerUnit22` varchar(5) default NULL,`fDLDEndPower22` double default NULL,`strDLDEndPowerUnit22` varchar(5) default NULL,`nDLDSteps22` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower23` double default NULL,`strDLDBeginPowerUnit23` varchar(5) default NULL,`fDLDEndPower23` double default NULL,`strDLDEndPowerUnit23` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nDLDSteps23` smallint(6) default NULL,`fDLDBeginPower24` double default NULL,`strDLDBeginPowerUnit24` varchar(5) default NULL,`fDLDEndPower24` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDEndPowerUnit24` varchar(5) default NULL,`nDLDSteps24` smallint(6) default NULL,`fDLDBeginPower25` double default NULL,`strDLDBeginPowerUnit25` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDEndPower25` double default NULL,`strDLDEndPowerUnit25` varchar(5) default NULL,`nDLDSteps25` smallint(6) default NULL,`fDLDBeginPower26` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDBeginPowerUnit26` varchar(5) default NULL,`fDLDEndPower26` double default NULL,`strDLDEndPowerUnit26` varchar(5) default NULL,`nDLDSteps26` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDBeginPower27` double default NULL,`strDLDBeginPowerUnit27` varchar(5) default NULL,`fDLDEndPower27` double default NULL,`strDLDEndPowerUnit27` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`nDLDSteps27` smallint(6) default NULL,`fDLDBeginPower28` double default NULL,`strDLDBeginPowerUnit28` varchar(5) default NULL,`fDLDEndPower28` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDEndPowerUnit28` varchar(5) default NULL,`nDLDSteps28` smallint(6) default NULL,`fDLDBeginPower29` double default NULL,`strDLDBeginPowerUnit29` varchar(5) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`fDLDEndPower29` double default NULL,`strDLDEndPowerUnit29` varchar(5) default NULL,`nDLDSteps29` smallint(6) default NULL,`fDLDBeginPower30` double default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`strDLDBeginPowerUnit30` varchar(5) default NULL,`fDLDEndPower30` double default NULL,`strDLDEndPowerUnit30` varchar(5) default NULL,`nDLDSteps30` smallint(6) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`Name` char(20) default NULL,`Size` int(11) default NULL,`Machine` char(20) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`MD5` char(100) default NULL,`M_Type` int(11) default NULL,`File_ID` int(11) default NULL,");
DataModule1->SetupHeadersCreate->SQL->Add("`RecordID` int(11) unsigned NOT NULL auto_increment,PRIMARY KEY  (`RecordID`),UNIQUE KEY `RecordID` USING BTREE (`RecordID`)");
DataModule1->SetupHeadersCreate->SQL->Add(") ENGINE=MEMORY AUTO_INCREMENT=1 DEFAULT CHARSET=latin1;");
DataModule1->SetupHeadersCreate->Execute();
AnsiString S,N,S1,S2,S3,s5;

DataModule1->SqlConfiguration->Active=false;
DataModule1->SqlConfiguration->SQL->Clear();
if (DataModule1->FileSelect->FieldByName("File_ID")->AsFloat>0){
 DataModule1->SqlConfiguration->SQL->Add("Select * from configuration WHERE File_ID='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'");
}
else {
DataModule1->SqlConfiguration->SQL->Add("Select * from configuration WHERE Name='"+DataModule1->FileSelect->FieldByName("FileName")->AsString+"' and Size='"+DataModule1->FileSelect->FieldByName("Size")->AsString+"' and Machine='"+bxSelect->Text+"'");
}
DataModule1->SqlConfiguration->Active=true;
DataModule1->SqlConfiguration->First();
AnsiString Configuration="configuration_"+DataModule1->Dostup->FieldByName("ID")->AsString;
DataModule1->ConfigurationDelete->SQL->Clear();
DataModule1->ConfigurationDelete->SQL->Add("TRUNCATE "+Configuration);
DataModule1->ConfigurationDelete->Execute();

TStringList * f = new TStringList();
DataModule1->SqlConfiguration->GetFieldNames(f);
DataModule1->SQLConfiguration_1->Active=false;
DataModule1->SQLConfiguration_1->SQL->Clear();

DataModule1->SQLConfiguration_1->SQL->Add("Select * from "+Configuration);
DataModule1->SQLConfiguration_1->Active=true;

AnsiString ff;
for (int j=0;j<DataModule1->SqlConfiguration->RecordCount;j++){
     DataModule1->SQLConfiguration_1->Append();
    for (int i=0; i<f->Count;i++){
                ff=f->Strings[i];
                DataModule1->SQLConfiguration_1->FieldByName(ff)->AsString=DataModule1->SqlConfiguration->FieldByName(ff)->AsString;

}
     DataModule1->SQLConfiguration_1->Post();
     DataModule1->SqlConfiguration->Next();
   }
DataModule1->SqlConfiguration->Active=false;
DataModule1->SQLConfiguration_1->Active=false;
delete f;

TStringList * f1 = new TStringList();
AnsiString SetupHeaders="setup_file_headers_"+DataModule1->Dostup->FieldByName("ID")->AsString;
DataModule1->SetupHeadersDelete->SQL->Clear();
DataModule1->SetupHeadersDelete->SQL->Add("TRUNCATE "+SetupHeaders);
DataModule1->SetupHeadersDelete->Execute();

DataModule1->SQLSetupFileHeaders_1->Active=false;
DataModule1->SQLSetupFileHeaders_1->SQL->Clear();
DataModule1->SQLSetupFileHeaders_1->SQL->Add("Select * from "+SetupHeaders);
DataModule1->SQLSetupFileHeaders_1->Active=true;


DataModule1->SqlSetupFileHeaders->Active=false;
DataModule1->SqlSetupFileHeaders->SQL->Clear();
if (DataModule1->FileSelect->FieldByName("File_ID")->AsFloat>0){
 DataModule1->SqlSetupFileHeaders->SQL->Add("Select * from `setup file headers` where File_ID='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'");
}
else {
DataModule1->SqlSetupFileHeaders->SQL->Add("Select * from `setup file headers` where Name='"+DataModule1->FileSelect->FieldByName("FileName")->AsString+"' and Size='"+DataModule1->FileSelect->FieldByName("Size")->AsString+"' and Machine='"+bxSelect->Text+"'");
}
DataModule1->SqlSetupFileHeaders->Active=true;
DataModule1->SqlSetupFileHeaders->First();
DataModule1->SqlSetupFileHeaders->GetFieldNames(f1);

for (int j=0;j<DataModule1->SqlSetupFileHeaders->RecordCount;j++){
     DataModule1->SQLSetupFileHeaders_1->Append();
    for (int i=0; i<f1->Count;i++){
                ff=f1->Strings[i];
                DataModule1->SQLSetupFileHeaders_1->FieldByName(ff)->AsString=DataModule1->SqlSetupFileHeaders->FieldByName(ff)->AsString;

}
     DataModule1->SQLSetupFileHeaders_1->Post();
     DataModule1->SqlSetupFileHeaders->Next();
   }

delete f1;
DataModule1->SqlSetupFileHeaders->Active=false;
DataModule1->SQLSetupFileHeaders_1->Active=false;

TStringList * f2 = new TStringList();

AnsiString CrystalData="crystal_data_"+DataModule1->Dostup->FieldByName("ID")->AsString;
DataModule1->CrystalDataDelete->SQL->Clear();
DataModule1->CrystalDataDelete->SQL->Add("TRUNCATE "+CrystalData);
DataModule1->CrystalDataDelete->Execute();

DataModule1->SQLCrystalData_1->Active=false;
DataModule1->SQLCrystalData_1->SQL->Clear();
DataModule1->SQLCrystalData_1->SQL->Add("Select * from "+CrystalData);
DataModule1->SQLCrystalData_1->Active=true;


DataModule1->SQLCrystalData->Active=false;
DataModule1->SQLCrystalData->SQL->Clear();
if (DataModule1->FileSelect->FieldByName("File_ID")->AsFloat>0){
DataModule1->SQLCrystalData->SQL->Add("Select * from `crystal data` where File_ID='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'");

}
else {
DataModule1->SQLCrystalData->SQL->Add("Select * from `crystal data` where Name='"+DataModule1->FileSelect->FieldByName("FileName")->AsString+"' and Size='"+DataModule1->FileSelect->FieldByName("Size")->AsString+"' and Machine='"+bxSelect->Text+"'");
}
DataModule1->SQLCrystalData->Active=true;
DataModule1->SQLCrystalData->First();
DataModule1->SQLCrystalData->GetFieldNames(f2);

for (int j=0;j<DataModule1->SQLCrystalData->RecordCount;j++){
     DataModule1->SQLCrystalData_1->Append();
    for (int i=0; i<f2->Count;i++){
                ff=f2->Strings[i];
                DataModule1->SQLCrystalData_1->FieldByName(ff)->AsString=DataModule1->SQLCrystalData->FieldByName(ff)->AsString;

}
     DataModule1->SQLCrystalData_1->Post();
     DataModule1->SQLCrystalData->Next();
   }

delete f2;
DataModule1->SQLCrystalData->Active=false;
DataModule1->SQLCrystalData_1->Active=false;

TStringList * f3 = new TStringList();

AnsiString PostProcess="post_process_data_"+DataModule1->Dostup->FieldByName("ID")->AsString;
DataModule1->PostProcessDataDelete->SQL->Clear();
DataModule1->PostProcessDataDelete->SQL->Add("TRUNCATE "+PostProcess);
DataModule1->PostProcessDataDelete->Execute();

DataModule1->SQLPostProcessData_1->Active=false;
DataModule1->SQLPostProcessData_1->SQL->Clear();
DataModule1->SQLPostProcessData_1->SQL->Add("Select * from "+PostProcess);
DataModule1->SQLPostProcessData_1->Active=true;


DataModule1->SQLPostProcessData->Active=false;
DataModule1->SQLPostProcessData->SQL->Clear();
if (DataModule1->FileSelect->FieldByName("File_ID")->AsFloat>0){
DataModule1->SQLPostProcessData->SQL->Add("Select * from `post process data` where File_ID='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'");
}
else {
DataModule1->SQLPostProcessData->SQL->Add("Select * from `post process data` where Name='"+DataModule1->FileSelect->FieldByName("FileName")->AsString+"' and Size='"+DataModule1->FileSelect->FieldByName("Size")->AsString+"' and Machine='"+bxSelect->Text+"'");
}
DataModule1->SQLPostProcessData->Active=true;
DataModule1->SQLPostProcessData->First();
DataModule1->SQLPostProcessData->GetFieldNames(f3);

for (int j=0;j<DataModule1->SQLPostProcessData->RecordCount;j++){
     DataModule1->SQLPostProcessData_1->Append();
    for (int i=0; i<f3->Count;i++){
                ff=f3->Strings[i];
                DataModule1->SQLPostProcessData_1->FieldByName(ff)->AsString=DataModule1->SQLPostProcessData->FieldByName(ff)->AsString;

}
     DataModule1->SQLPostProcessData_1->Post();
     DataModule1->SQLPostProcessData->Next();
   }

delete f3;
DataModule1->SQLPostProcessData->Active=false;
DataModule1->SQLPostProcessData_1->Active=false;

TStringList * f4 = new TStringList();

AnsiString SetupData="setup_data_"+DataModule1->Dostup->FieldByName("ID")->AsString;
DataModule1->SetupDataDelete->SQL->Clear();
DataModule1->SetupDataDelete->SQL->Add("TRUNCATE "+SetupData);
DataModule1->SetupDataDelete->Execute();

DataModule1->SQLSetupData_1->Active=false;
DataModule1->SQLSetupData_1->SQL->Clear();
DataModule1->SQLSetupData_1->SQL->Add("Select * from "+SetupData);
DataModule1->SQLSetupData_1->Active=true;


DataModule1->SQLSetupData->Active=false;
DataModule1->SQLSetupData->SQL->Clear();
if (DataModule1->FileSelect->FieldByName("File_ID")->AsFloat>0){
DataModule1->SQLSetupData->SQL->Add("Select * from `setup data` where File_ID='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'");

}
else {
DataModule1->SQLSetupData->SQL->Add("Select * from `setup data` where Name='"+DataModule1->FileSelect->FieldByName("FileName")->AsString+"' and Size='"+DataModule1->FileSelect->FieldByName("Size")->AsString+"' and Machine='"+bxSelect->Text+"'");
}
DataModule1->SQLSetupData->Active=true;
DataModule1->SQLSetupData->First();
DataModule1->SQLSetupData->GetFieldNames(f4);

for (int j=0;j<DataModule1->SQLSetupData->RecordCount;j++){
     DataModule1->SQLSetupData_1->Append();
    for (int i=0; i<f4->Count;i++){
                ff=f4->Strings[i];
                DataModule1->SQLSetupData_1->FieldByName(ff)->AsString=DataModule1->SQLSetupData->FieldByName(ff)->AsString;

}
     DataModule1->SQLSetupData_1->Post();
     DataModule1->SQLSetupData->Next();
   }

delete f4;
DataModule1->SQLSetupData->Active=false;
DataModule1->SQLSetupData_1->Active=false;

DataModule1->SqlConfiguration->SQL->Clear();
DataModule1->SqlSetupFileHeaders->SQL->Clear();
S="SELECT   * FROM "+Configuration+" order by nSetupFileIndex";
S2="SELECT  nSetupFileIndex,fReferenceFrequency FROM "+SetupHeaders+" order by nSetupFileIndex";


 DataModule1->SqlConfiguration->SQL->Add(S);
 DataModule1->SqlSetupFileHeaders->SQL->Add(S2);
 DataModule1->SqlConfiguration->Active=true;
 DataModule1->SqlSetupFileHeaders->Active=true;
 DataModule1->SqlConfiguration->First();
 DataModule1->SqlSetupFileHeaders->First();
 MainForm->RzCheckList1->Items->Clear();
 MainForm->ListBox1->Items->Clear();
 MainForm->ListBox2->Items->Clear();
              for (int i=0;i<=DataModule1->SqlConfiguration->RecordCount-1;i++){
                 s5="SELECT * FROM "+PostProcess+" WHERE nSetupFileIndex ='"+DataModule1->SqlConfiguration->FieldByName("nSetupFileIndex")->AsString+"'  ORDER BY `strCrystalID`";
                  DataModule1->SQLPostProcessData->Active=false;
                  DataModule1->SQLPostProcessData->SQL->Clear();
                  DataModule1->SQLPostProcessData->SQL->Add(s5);
                  DataModule1->SQLPostProcessData->Active=true;
                  N=DataModule1->SqlConfiguration->FieldByName("nSetupFileIndex")->AsString+"             "+DataModule1->SQLPostProcessData->FieldByName("fReferenceFrequency")->AsString+"            "+DataModule1->SqlConfiguration->FieldByName("strStartCrystalID")->AsString+"..."+DataModule1->SqlConfiguration->FieldByName("strStopCrystalID")->AsString+"  "+
                  DataModule1->SQLPostProcessData->RecordCount+"  шт.";
                  MainForm->RzCheckList1->Items->Add(N);
                  MainForm->ListBox1->Items->Add(IntToStr(DataModule1->SQLPostProcessData->RecordCount));
                  MainForm->ListBox2->Items->Add(DataModule1->SqlConfiguration->FieldByName("strStartCrystalID")->AsString+"..."+DataModule1->SqlConfiguration->FieldByName("strStopCrystalID")->AsString);
                  DataModule1->SqlConfiguration->Next();
                  DataModule1->SqlSetupFileHeaders->Next();
                 }
   MainForm->ledFile->Active=true;

   MainForm->ledSpc->Active=false;
   MainForm->ledNumbers->Active=false;
   MainForm->ledFinish->Active=false;
   MainForm->ledPrint->Active=false;

      FileSelectForm->Hide();
 }
 else if (MachineType=="Transat"){
  //Убираем таблицу если она существует
   DataModule1->DropTransatTemp->SQL->Clear();
   DataModule1->DropTransatTemp->SQL->Add("Drop Table IF EXISTS  `transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
   DataModule1->DropTransatTemp->Execute();

  // загружаем скрипт для создания новой
   DataModule1->TestTablesSQL->Active=false;
   DataModule1->TestTablesSQL->SQL->Clear();
   DataModule1->TestTablesSQL->SQL->Add("Select * from TestTablesSql where `Name`='TTS100'");
   DataModule1->TestTablesSQL->Active=true;
   DataModule1->TestTablesSQL->First();

   AnsiString sql_script=DataModule1->TestTablesSQL->FieldByName("Create")->AsString;
   AnsiString tableName="transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString;
   sql_script=StringReplace(sql_script,"TTS100",tableName,TReplaceFlags()<<rfReplaceAll);

   DataModule1->CreateTransatTemp->SQL->Clear();
   DataModule1->CreateTransatTemp->SQL->Add(sql_script);
   DataModule1->CreateTransatTemp->Execute();

   DataModule1->Transat_Copy->Active=false;
   DataModule1->Transat_Copy->SQL->Clear();
   DataModule1->Transat_Copy->SQL->Add("Select * from "+tableName);
   DataModule1->Transat_Copy->Active=true;

TStringList * ft = new TStringList();
   DataModule1->Transat->Active=false;
   DataModule1->Transat->SQL->Clear();
        if (DataModule1->FileSelect->FieldByName("File_ID")->AsFloat>0){
                DataModule1->Transat->SQL->Add("Select * from `transat` where File_ID='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'");
        }
        else {
                DataModule1->Transat->SQL->Add("Select * from `transat` where FileName='"+DataModule1->FileSelect->FieldByName("FileName")->AsString+"' and Size='"+DataModule1->FileSelect->FieldByName("Size")->AsString+"' and Machine='"+bxSelect->Text+"'");
        }
   DataModule1->Transat->Active=true;
   DataModule1->Transat->First();
   DataModule1->Transat->GetFieldNames(ft);
AnsiString ff;
for (int j=0;j<DataModule1->Transat->RecordCount;j++){
     DataModule1->Transat_Copy->Append();
    for (int i=0; i<ft->Count;i++){
                ff=ft->Strings[i];
                DataModule1->Transat_Copy->FieldByName(ff)->AsString=DataModule1->Transat->FieldByName(ff)->AsString;

}
     DataModule1->Transat_Copy->Post();
     DataModule1->Transat->Next();
   }

delete ft;
DataModule1->Transat->Active=false;
DataModule1->Transat_Copy->Active=false;
 /*
    //Копируем туда данные с основной таблицы
   AnsiString sql_script_copy="Insert into `"+tableName+"` Select * FROM `transat` WHERE `File_ID`='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'";
   DataModule1->TTS100_Temp_Copy->SQL->Clear();
   DataModule1->TTS100_Temp_Copy->SQL->Add(sql_script_copy);
   DataModule1->TTS100_Temp_Copy->Execute();
 */
   DataModule1->Transat_Temp->TableName="transat_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString;
    //Убираем таблицу если она существует
   DataModule1->DropTransatConfig->SQL->Clear();
   DataModule1->DropTransatConfig->SQL->Add("Drop Table IF EXISTS  `transatconfig_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
   DataModule1->DropTransatConfig->Execute();
   // загружаем скрипт для создания новой
   DataModule1->TestTablesSQL->Active=false;
   DataModule1->TestTablesSQL->SQL->Clear();
   DataModule1->TestTablesSQL->SQL->Add("Select * from TestTablesSql where `Name`='TTS100_Config'");
   DataModule1->TestTablesSQL->Active=true;
   DataModule1->TestTablesSQL->First();
   AnsiString sql_script_config=DataModule1->TestTablesSQL->FieldByName("Create")->AsString;
   AnsiString tableName_config="transatconfig_"+DataModule1->Dostup->FieldByName("ID")->AsString;
   sql_script_config=StringReplace(sql_script_config,"TTS100_Config",tableName_config,TReplaceFlags()<<rfReplaceAll);


   DataModule1->CreateTransatConfig->SQL->Clear();
   DataModule1->CreateTransatConfig->SQL->Add(sql_script_config);
   DataModule1->CreateTransatConfig->Execute();
/*DataModule1->CreateTransatConfig->SQL->Add("CREATE TABLE `transatconfig_"+DataModule1->Dostup->FieldByName("ID")->AsString+"` (");
DataModule1->CreateTransatConfig->SQL->Add("`SetupN` int(11) default NULL, `BeginRing` int(11) default NULL, `FirstPosition` int(11) default NULL, `EndRing` int(11) default NULL,");
DataModule1->CreateTransatConfig->SQL->Add("`LastPosition` int(11) default NULL, `Freq` float(9,3) default NULL, `Number` int(11) default NULL, `Temperature` char(255) default NULL,");
DataModule1->CreateTransatConfig->SQL->Add("`TempN` int(11) default NULL, `FirstTemp` int(11) default NULL, `ID` int(10) unsigned NOT NULL auto_increment, PRIMARY KEY  (`ID`)");
DataModule1->CreateTransatConfig->SQL->Add(") ENGINE=MEMORY AUTO_INCREMENT=0 DEFAULT CHARSET=cp1251 ROW_FORMAT=FIXED;");
DataModule1->CreateTransatConfig->Execute();
*/
DataModule1->Config->TableName="transatconfig_"+DataModule1->Dostup->FieldByName("ID")->AsString;
        AnsiString S;

         int setupn=0;
           int T;
           int Ta[200];
           int Tcount=1;
           int RingCount;
           int PositionCount[20];
           int Positions[249];
           int SetupCount=0;
           int Setup[20];
           float SetupFreq[20];
           int SetupPositions[20];
           int FirstPosition[20];
           int LastPosition[20];
           int BeginRing[20];
           int EndRing[20];
           int RingTemp;
           int PositionTemp;
        DataModule1->Transat_Temp->Active=true;
        DataModule1->Transat_Temp->Filtered=false;
         DataModule1->Transat_Temp->First();

             T=DataModule1->Transat_Temp->FieldByName("SETPOINT")->AsFloat;
              MainForm->RzCheckList1->Items->Clear();
              AnsiString Y=T;
              int FirstTemp=T;
              SetupCount=1;
              Setup[0]=1;

                FirstPosition[SetupCount-1]=DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsFloat;
                BeginRing[SetupCount-1]=DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat;
               AnsiString TT;
               TT=FloatToStrF(DataModule1->Transat_Temp->FieldByName("F0_MHZ")->AsFloat,ffFixed,5,3);
               SetupFreq[SetupCount-1]=StrToFloat(TT);
               PositionCount[SetupCount-1]=0;
               int ringtemp[20];
               int postemp[20];
               ringtemp[SetupCount-1]=-1;
               postemp[SetupCount-1]=-1;

               for (int i=0;i<DataModule1->Transat_Temp->RecordCount;i++){

                               if (DataModule1->Transat_Temp->FieldByName("SETPOINT")->AsFloat!=T){

                                              T=DataModule1->Transat_Temp->FieldByName("SETPOINT")->AsFloat;
                                             Ta[Tcount]=T;
                                             Tcount=Tcount+1;
                                             Y=Y+" , "+IntToStr(T);
                                          }
                              if (Tcount==1){
                                               int g=1;
                                             for (int j=0; j<SetupCount; j++){

                                                  if (DataModule1->Transat_Temp->FieldByName("SETUPNUM")->AsFloat==Setup[j]){
                                                   g=0;
                                                  if (DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsFloat!=ringtemp[j] || DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat!=postemp[j]){
                                                   PositionCount[j]++;
                                                     ringtemp[j]=DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsFloat;
                                                     postemp[j]=DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat;
                                                   }
                                                   else {

                                                   }

                                                 LastPosition[j]=DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsFloat;
                                                   EndRing[j]=DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat;
                                               
                                                 }


                                             }

                                             if (g==1){
                                                  Setup[SetupCount]=DataModule1->Transat_Temp->FieldByName("SETUPNUM")->AsFloat;
                                                  FirstPosition[SetupCount]=DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsFloat;
                                                  BeginRing[SetupCount]=DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat;
                                                   TT=FloatToStrF(DataModule1->Transat_Temp->FieldByName("F0_MHZ")->AsFloat,ffFixed,5,3);
                                                SetupFreq[SetupCount]=StrToFloat(TT);
                                                PositionCount[SetupCount]=1;
                                                   ringtemp[SetupCount]=DataModule1->Transat_Temp->FieldByName("RINGPOS")->AsFloat;
                                                postemp[SetupCount]=DataModule1->Transat_Temp->FieldByName("RINGID")->AsFloat;
                                                SetupCount++;

                                             }
                                           



                                       }

               DataModule1->Transat_Temp->Next();
           }


        AnsiString N;
        DataModule1->Config->Active=true;
        DataModule1->Config->EmptyTable();
           for (int l=0;l<SetupCount;l++){
                        AnsiString StartPosition;
                        AnsiString EndPosition;
                        if (BeginRing[l]==0){
                                          StartPosition="L"+IntToStr(FirstPosition[l]);
                                          }
                        if (BeginRing[l]==1){
                                          StartPosition="U"+IntToStr(FirstPosition[l]);
                                          }
                         if (EndRing[l]==0){
                                          EndPosition="L"+IntToStr(LastPosition[l]);
                                          }
                          if (EndRing[l]==1){
                                          EndPosition="U"+IntToStr(LastPosition[l]);
                                          }

                        DataModule1->Config->Active=true;

                        DataModule1->Config->Append();
                        DataModule1->Config->FieldByName("SetupN")->AsFloat=l+1;
                        DataModule1->Config->FieldByName("BeginRing")->AsFloat=BeginRing[l];
                        DataModule1->Config->FieldByName("EndRing")->AsFloat=EndRing[l];
                        DataModule1->Config->FieldByName("FirstPosition")->AsFloat=FirstPosition[l];
                        DataModule1->Config->FieldByName("LastPosition")->AsFloat=LastPosition[l];
                        DataModule1->Config->FieldByName("Freq")->AsFloat=SetupFreq[l];
                        DataModule1->Config->FieldByName("Number")->AsFloat=PositionCount[l];
                        DataModule1->Config->FieldByName("Temperature")->AsString=Y;
                        DataModule1->Config->FieldByName("TempN")->AsFloat=Tcount;
                        DataModule1->Config->FieldByName("FirstTemp")->AsFloat=FirstTemp;
                        DataModule1->Config->Post();

                        N=IntToStr(l+1)+"                     "+FloatToStrF(SetupFreq[l],ffFixed,5,3)+"Мгц                "+StartPosition+"..."+EndPosition+"        "+IntToStr(PositionCount[l])+"   шт.";
                        MainForm->RzCheckList1->Items->Add(N);
                        MainForm->ListBox1->Items->Add(IntToStr(PositionCount[l]));
                        MainForm->ListBox2->Items->Add(StartPosition+"..."+EndPosition);
                        }

        MainForm->ledFile->Active=true;
        MainForm->N23->Enabled=true;
       FileSelectForm->Hide();
       
        
       }
  else if(MachineType=="KH7700"){
     DataModule1->TestTablesSQL->Active=false;
     DataModule1->TestTablesSQL->SQL->Clear();
     DataModule1->TestTablesSQL->SQL->Add("Select * from TestTablesSql where `Name`='KH7700'");
     DataModule1->TestTablesSQL->Active=true;
     DataModule1->TestTablesSQL->First();
     AnsiString sql_script=DataModule1->TestTablesSQL->FieldByName("Create")->AsString;
     AnsiString tableName="KH7700_temp_"+DataModule1->Dostup->FieldByName("ID")->AsString;
 //Таблица данных
      //Убираем таблицу если она существует.
     DataModule1->KH7700_Temp_Drop->SQL->Clear();
     DataModule1->KH7700_Temp_Drop->SQL->Add("Drop Table IF EXISTS `"+tableName+"`");
     DataModule1->KH7700_Temp_Drop->Execute();


     sql_script=StringReplace(sql_script,"KH7700",tableName,TReplaceFlags()<<rfReplaceAll);
     //создаем таблицу
     DataModule1->KH7700_Temp_Create->SQL->Clear();
     DataModule1->KH7700_Temp_Create->SQL->Add(sql_script);
     DataModule1->KH7700_Temp_Create->Execute();
     //Копируем туда данные с основной таблицы
     AnsiString sql_script_copy="Insert into `"+tableName+"` Select * FROM `KH7700` WHERE `File_ID`='"+DataModule1->FileSelect->FieldByName("File_ID")->AsString+"'";
     DataModule1->KH7700_Temp_Copy->SQL->Clear();
     DataModule1->KH7700_Temp_Copy->SQL->Add(sql_script_copy);
     DataModule1->KH7700_Temp_Copy->Execute();

      DataModule1->KH7700_temp_Alter->SQL->Clear();
      DataModule1->KH7700_temp_Alter->SQL->Add("Alter  Table `"+tableName+"` add column SetupN INT;");
      DataModule1->KH7700_temp_Alter->Execute();

      DataModule1->KH7700_temp_Alter->SQL->Clear();
      DataModule1->KH7700_temp_Alter->SQL->Add("Update `"+tableName+"` set SetupN='1';");
      DataModule1->KH7700_temp_Alter->Execute();

  //Таблица конфигурации
    AnsiString tableName_config="KH7700_config_"+DataModule1->Dostup->FieldByName("ID")->AsString;
    //Убираем таблицу если она существует.
     DataModule1->KH7700_Config_Drop->SQL->Clear();
     DataModule1->KH7700_Config_Drop->SQL->Add("Drop Table IF EXISTS `"+tableName_config+"`");
     DataModule1->KH7700_Config_Drop->Execute();
    //Загружаем скрипт для создания
      DataModule1->TestTablesSQL->Active=false;
     DataModule1->TestTablesSQL->SQL->Clear();
     DataModule1->TestTablesSQL->SQL->Add("Select * from TestTablesSql where `Name`='KH7700_Config'");
     DataModule1->TestTablesSQL->Active=true;
     DataModule1->TestTablesSQL->First();
     AnsiString sql_script_config=DataModule1->TestTablesSQL->FieldByName("Create")->AsString;
     sql_script_config=StringReplace(sql_script_config,"KH7700_config",tableName_config,TReplaceFlags()<<rfReplaceAll);


     //создаем таблицу
     DataModule1->KH7700_Config_Create->SQL->Clear();
     DataModule1->KH7700_Config_Create->SQL->Add(sql_script_config);
     DataModule1->KH7700_Config_Create->Execute();

          int setupn=0;
           int T;
           int Ta[200];
           int Tcount=1;
           int PositionCount[20];
           int Positions[249];
           int SetupCount=0;
           int Setup[20];
           float SetupFreq[20];
           int SetupPositions[20];
           AnsiString FirstPosition[20];
           AnsiString LastPosition[20];
           int RingTemp;
           int PositionTemp;
    DataModule1->KH7700_Temp->Filtered=false;
    DataModule1->KH7700_Temp->Active=false;
   DataModule1->KH7700_Temp->TableName=tableName;
   DataModule1->KH7700_Temp->Active=true;

    DataModule1->KH7700_Config->Active=false;;
   DataModule1->KH7700_Config->TableName=tableName_config;
   DataModule1->KH7700_Config->Active=true;


    T=DataModule1->KH7700_Temp->FieldByName("Temp")->AsFloat;
    MainForm->RzCheckList1->Items->Clear();
    AnsiString Y=T;
    int FirstTemp=T;
    DataModule1->KH7700_Temp->First();
    FirstPosition[0]=DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString;
    AnsiString TT;
    double FreqTemp= DataModule1->KH7700_Temp->FieldByName("FS")->AsFloat;
    FreqTemp=FreqTemp/1000000;
    TT=FloatToStrF(FreqTemp,ffFixed,8,5);
    SetupFreq[0]=StrToFloat(TT);
    PositionCount[0]=0;
        for (int i=0; i<DataModule1->KH7700_Temp->RecordCount;i++){
        //Определяем количесвто темепературных точек
                   if (DataModule1->KH7700_Temp->FieldByName("Temp")->AsFloat!=T){
                         T=DataModule1->KH7700_Temp->FieldByName("Temp")->AsInteger;
                         Ta[Tcount]=T;
                         Tcount=Tcount+1;
                         Y=Y+" , "+IntToStr(T);
                         }
       //Ищем последнюю позицию
                     LastPosition[0]=DataModule1->KH7700_Temp->FieldByName("XTALROW")->AsString;
                   if (Tcount==1){
                      PositionCount[0]++;
                   }

          DataModule1->KH7700_Temp->Next();
        }
    //Активируем временную таблицу и ищем последнюю позицию
     DataModule1->KH7700_User_Config_Drop->SQL->Clear();
         DataModule1->KH7700_User_Config_Drop->SQL->Add("drop table if exists `KH7700_User_Config`");
         DataModule1->KH7700_User_Config_Drop->Execute();
         DataModule1->KH7700_User_Config_Create->Execute();

         DataModule1->KH7700_Temp->Filtered=false;
         DataModule1->KH7700_Temp->Filter="TEMP='"+FloatToStr(FirstTemp)+"'";
         DataModule1->KH7700_Temp->Filtered=true;
         DataModule1->KH7700_Temp->First();

         DataModule1->KH7700_User_Config->Active=false;
         DataModule1->KH7700_User_Config->SQL->Clear();
         DataModule1->KH7700_User_Config->SQL->Add("Select * from `KH7700_User_Config`");
         DataModule1->KH7700_User_Config->Active=true;
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

        DataModule1->KH7700_User_Config->Active=false;
         DataModule1->KH7700_User_Config->SQL->Clear();
         DataModule1->KH7700_User_Config->SQL->Add("Select * from `KH7700_User_Config` Order by `Pos_Str`");
         DataModule1->KH7700_User_Config->Active=true;
         DataModule1->KH7700_User_Config->Last();



     //Добавляем данные в таблицу конфигурации
    DataModule1->KH7700_Config->Append();
    DataModule1->KH7700_Config->FieldByName("SetupN")->AsString= "1";
    DataModule1->KH7700_Config->FieldByName("FirstPosition")->AsString= FirstPosition[0];
    DataModule1->KH7700_Config->FieldByName("LastPosition")->AsString= DataModule1->KH7700_User_Config->FieldByName("Position")->AsString;
    DataModule1->KH7700_Config->FieldByName("Freq")->AsString= SetupFreq[0];
    DataModule1->KH7700_Config->FieldByName("Number")->AsString= PositionCount[0];
    DataModule1->KH7700_Config->FieldByName("Temperature")->AsString= Y;
    DataModule1->KH7700_Config->FieldByName("TempN")->AsString= Tcount;
    DataModule1->KH7700_Config->FieldByName("FirstTemp")->AsString= FirstTemp;
    DataModule1->KH7700_Config->Post();
     AnsiString N=IntToStr(1)+"                     "+FloatToStrF(SetupFreq[0],ffFixed,5,3)+"Мгц                "+FirstPosition[0]+"..."+DataModule1->KH7700_User_Config->FieldByName("Position")->AsString+"        "+IntToStr(PositionCount[0])+"   шт.";
     MainForm->RzCheckList1->Items->Add(N);
     MainForm->ListBox1->Items->Add(IntToStr(PositionCount[0]));
     MainForm->ListBox2->Items->Add(FirstPosition[0]+"..."+DataModule1->KH7700_User_Config->FieldByName("Position")->AsString);
     MainForm->ledFile->Active=true;
     MainForm->N23->Enabled=true;
     FileSelectForm->Hide();
  }



}
//---------------------------------------------------------------------------

void __fastcall TFileSelectForm::btnRefreshClick(TObject *Sender)
{
DataModule1->FileSelect->Active=false;
DataModule1->FileSelect->Active=true;

}
//---------------------------------------------------------------------------

void __fastcall TFileSelectForm::bxSelectChange(TObject *Sender)
{
AnsiString sql="Select * from saunders where machine='"+bxSelect->Text+"' order by N";
                                 DataModule1->FileSelect->Active=false;
                                 DataModule1->FileSelect->SQL->Clear();
                                 DataModule1->FileSelect->SQL->Add(sql);
                                 DataModule1->FileSelect->Active=true;
                                 DataModule1->FileSelect->Last();


}
//---------------------------------------------------------------------------




