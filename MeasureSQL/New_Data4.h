//---------------------------------------------------------------------------

#ifndef New_Data4H
#define New_Data4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "MyAccess.hpp"
#include <DB.hpp>
#include "DAScript.hpp"
#include "MyScript.hpp"
//---------------------------------------------------------------------------
class TNew_Data : public TDataModule
{
__published:	// IDE-managed Components
        TMyQuery *MachineType;
        TMyQuery *MSK_RQ;
        TMyQuery *Spc_RQ;
        TMyQuery *MSK_RQ_PSI;
        TMyScript *UpdateMSK_RQ;
        TMyScript *Update_Transat;
        TMyScript *Update_PSI;
private:	// User declarations
public:		// User declarations
        __fastcall TNew_Data(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNew_Data *New_Data;
//---------------------------------------------------------------------------
#endif
