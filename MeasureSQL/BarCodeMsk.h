//---------------------------------------------------------------------------

#ifndef BarCodeMskH
#define BarCodeMskH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzRadChk.hpp"
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TBarCodeMskForm : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TRzEdit *edtCode;
        TAdvGlassButton *btnClose;
        TRzCheckBox *chkNumbers;
        TAdvGlassButton *AdvGlassButton1;
        TRzCheckBox *chkSpc;
        TRzCheckBox *chkMSK;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall AdvGlassButton1Click(TObject *Sender);
        void __fastcall chkMSKClick(TObject *Sender);
        void __fastcall edtCodeKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
        __fastcall TBarCodeMskForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBarCodeMskForm *BarCodeMskForm;
//---------------------------------------------------------------------------
#endif
