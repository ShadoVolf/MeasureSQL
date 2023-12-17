//---------------------------------------------------------------------------

#ifndef PHNH
#define PHNH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TPHNForm : public TForm
{
__published:	// IDE-managed Components
        TRzCheckList *viewNumber;
        TRzPanel *RzPanel1;
        TLabel *Label7;
        TRzButton *btnClose;
        TRzButton *RzButton1;
        TRzButton *RzButton2;
        TLabel *Label1;
        TLabel *lCount;
        void __fastcall viewNumberChange(TObject *Sender, int Index,
          TCheckBoxState NewState);
        void __fastcall RzButton1Click(TObject *Sender);
        void __fastcall RzButton2Click(TObject *Sender);
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPHNForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPHNForm *PHNForm;
//---------------------------------------------------------------------------
#endif
