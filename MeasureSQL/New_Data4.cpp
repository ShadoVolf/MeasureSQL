//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "New_Data4.h"
#include "Data.h"
#include "Dostup.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MyAccess"
#pragma link "DAScript"
#pragma link "MyScript"
#pragma resource "*.dfm"
TNew_Data *New_Data;
//---------------------------------------------------------------------------
__fastcall TNew_Data::TNew_Data(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
