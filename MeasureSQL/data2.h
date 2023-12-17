//---------------------------------------------------------------------------

#ifndef data2H
#define data2H
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
class TDataModule3 : public TDataModule
{
__published:	// IDE-managed Components
        TMyQuery *psi_measure_parameters;
private:	// User declarations
public:		// User declarations
        __fastcall TDataModule3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule3 *DataModule3;
//---------------------------------------------------------------------------
#endif
