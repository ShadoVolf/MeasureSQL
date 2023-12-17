//---------------------------------------------------------------------------

#ifndef RecH
#define RecH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzGrids.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "ESBPCSDateTimeEdit.hpp"
#include "ESBPCSPanel.hpp"
//---------------------------------------------------------------------------
class TMRecForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TRzButton *btnClose;
        TRzStringGrid *RzStringGrid1;
        TRzButton *btnRec;
        TESBDateTimeEdit *edtDate;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall btnRecClick(TObject *Sender);
        void __fastcall RzStringGrid1Enter(TObject *Sender);
        void __fastcall FormHide(TObject *Sender);
        void __fastcall RzStringGrid1KeyPress(TObject *Sender, char &Key);
        void __fastcall RzStringGrid1SelectCell(TObject *Sender, int ACol,
          int ARow, bool &CanSelect);
private:	// User declarations
public:		// User declarations
        __fastcall TMRecForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMRecForm *MRecForm;
//---------------------------------------------------------------------------
#endif
