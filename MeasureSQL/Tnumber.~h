//---------------------------------------------------------------------------

#ifndef TnumberH
#define TnumberH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "RzCmboBx.hpp"
//---------------------------------------------------------------------------
class TTnumberForm : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnClose;
        TLabel *Label10;
        TRzEdit *edtTNumber;
        TLabel *Label1;
        TRzComboBox *edtChamber;
        TLabel *Label2;
        TRzEdit *lCount;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtTNumberKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
        __fastcall TTnumberForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTnumberForm *TnumberForm;
//---------------------------------------------------------------------------
#endif
