//---------------------------------------------------------------------------

#ifndef Data_RQH
#define Data_RQH
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
class TRQ_Data : public TDataModule
{
__published:	// IDE-managed Components
        TMyTable *ResonatorTypes;
        TMyQuery *Spc_RQ;
        TMyQuery *ResType;
        TMyQuery *MSK_JOIN;
        TMyQuery *Marker;
        TMyQuery *MSK_RQ;
        TMyQuery *Psi_Numbers;
        TMyScript *InsertMSKJoin;
        TMyScript *DeleteMSK_RQ;
        TMyScript *UpdateMSK_RQ;
        TMyScript *Insert_PSI_Journal;
        TMyQuery *Psi;
        TMyQuery *Stat;
        TMyQuery *User;
        TMyQuery *Machines;
        TMyQuery *LotNumbers;
        TMyScript *Insert_LOT_RQ;
private:	// User declarations
public:		// User declarations
        __fastcall TRQ_Data(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRQ_Data *RQ_Data;
//---------------------------------------------------------------------------
#endif
