//---------------------------------------------------------------------------

#ifndef BarCodeEnterH
#define BarCodeEnterH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TBarCodeEnterForm : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnClose;
        TRzEdit *edtBar;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TBarCodeEnterForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBarCodeEnterForm *BarCodeEnterForm;
//---------------------------------------------------------------------------
#endif
