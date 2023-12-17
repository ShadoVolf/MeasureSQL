//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "data2.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MyAccess"
#pragma resource "*.dfm"
TDataModule3 *DataModule3;
//---------------------------------------------------------------------------
__fastcall TDataModule3::TDataModule3(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
