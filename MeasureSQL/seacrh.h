//---------------------------------------------------------------------------

#ifndef seacrhH
#define seacrhH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
//---------------------------------------------------------------------------
class TSearchForm : public TForm
{
__published:	// IDE-managed Components
        TVrShadowButton *btnClose;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSearchForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSearchForm *SearchForm;
//---------------------------------------------------------------------------
#endif
