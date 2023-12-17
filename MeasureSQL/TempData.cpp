//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TempData.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MyAccess"
#pragma resource "*.dfm"
TTempDataModule *TempDataModule;
//---------------------------------------------------------------------------
__fastcall TTempDataModule::TTempDataModule(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
