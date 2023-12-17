//---------------------------------------------------------------------------

#ifndef addNormH
#define addNormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "DBAccess.hpp"
#include "MyAccess.hpp"
//---------------------------------------------------------------------------
class TAddNormForm : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TRzEdit *edtFmax;
        TRzEdit *edtFmin;
        TLabel *Label4;
        TRzEdit *edtR;
        TLabel *Label5;
        TRzEdit *edtF;
        TAdvGlassButton *btnClose;
        TRzEdit *edtSpc;
        TRzEdit *SpcID;
        TMyCommand *MyCommand1;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAddNormForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddNormForm *AddNormForm;
//---------------------------------------------------------------------------
#endif
