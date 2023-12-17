//---------------------------------------------------------------------------

#ifndef WriteTableH
#define WriteTableH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
//---------------------------------------------------------------------------
class TWriteTableForm : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *Table;
        TPanel *Panel1;
        TVrShadowButton *btnClose;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TWriteTableForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWriteTableForm *WriteTableForm;
//---------------------------------------------------------------------------
#endif
