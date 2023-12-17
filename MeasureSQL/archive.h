//---------------------------------------------------------------------------

#ifndef archiveH
#define archiveH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "MyAccess.hpp"
#include <DB.hpp>
//---------------------------------------------------------------------------
class Tarchivedata : public TDataModule
{
__published:	// IDE-managed Components
        TMyQuery *PSIData;
        TMyQuery *PSIDataTemp;
        TMyDataSource *MyDataSource1;
        TMyQuery *PSIData1;
private:	// User declarations
public:		// User declarations
        __fastcall Tarchivedata(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tarchivedata *archivedata;
//---------------------------------------------------------------------------
#endif
