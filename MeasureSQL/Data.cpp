//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Data.h"
#include "Main.h"
#include "data1.h"
#include "Data_MeasureModule.h"
#include "spc_spur_.h"
#include "spc.h"
#include "Spcdetail.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MyAccess"
#pragma link "MyDacVcl"
#pragma link "DAScript"
#pragma link "MyScript"
#pragma resource "*.dfm"
TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TDataModule1::ProfileDataBeforePost(TDataSet *DataSet)
{

DataModule1->ProfileData->FieldByName("ProfileIndex")->AsInteger=DataModule1->Profile->FieldByName("ID")->AsInteger;
DataModule1->ProfileData->FieldByName("Name")->AsString=DataModule1->Profile->FieldByName("Name")->AsString;
}
//---------------------------------------------------------------------------






void __fastcall TDataModule1::DataModuleCreate(TObject *Sender)
{
AnsiString IP;
TRegistry& regKey =*new TRegistry();
regKey.OpenKey("SOFTWARE\\MORION\\MeasureSQL",false);
IP=regKey.ReadString("IP");
AnsiString Port =  regKey.ReadString("Port");
AnsiString Login =  regKey.ReadString("Login");
AnsiString Password =  regKey.ReadString("Password");

regKey.CloseKey();
CoordinatorDB->Server=IP;
CoordinatorDB->Username = Login;
CoordinatorDB->Port = StrToFloat(Port);
CoordinatorDB->Password = Password;
CoordinatorDB->Connected=true;
 

}
//---------------------------------------------------------------------------








