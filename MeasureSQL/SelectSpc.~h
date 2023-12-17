//---------------------------------------------------------------------------

#ifndef SelectSpcH
#define SelectSpcH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "AdvGlassButton.hpp"
#include "RzCmboBx.hpp"
//---------------------------------------------------------------------------
class TSelectSpcForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *AdvGlassButton2;
        TLabel *Label1;
        TLabel *Label2;
        TRzComboBox *edtSpc;
        TRzComboBox *edtType;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall AdvGlassButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSelectSpcForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSelectSpcForm *SelectSpcForm;
//---------------------------------------------------------------------------
#endif
