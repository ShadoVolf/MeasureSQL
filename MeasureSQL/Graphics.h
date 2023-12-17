//---------------------------------------------------------------------------

#ifndef GraphicsH
#define GraphicsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "TeeComma.hpp"
#include "TeeEdit.hpp"
#include <Chart.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
//---------------------------------------------------------------------------
class TGForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TRzPanel *RzPanel2;
        TRzButton *btnClose;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TGForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGForm *GForm;
//---------------------------------------------------------------------------
#endif
