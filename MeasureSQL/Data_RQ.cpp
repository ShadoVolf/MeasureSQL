//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Data_RQ.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MyAccess"
#pragma link "DAScript"
#pragma link "MyScript"
#pragma resource "*.dfm"
TRQ_Data *RQ_Data;
//---------------------------------------------------------------------------
__fastcall TRQ_Data::TRQ_Data(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
