//---------------------------------------------------------------------------

#ifndef PassportNumbersH
#define PassportNumbersH
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
class TPNForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TLabel *lCount;
        TLabel *Label7;
        TRzButton *btnClose;
        TRzButton *RzButton1;
        TRzButton *RzButton2;
        TRzCheckList *viewNumber;
        void __fastcall RzButton1Click(TObject *Sender);
        void __fastcall RzButton2Click(TObject *Sender);
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall viewNumberChange(TObject *Sender, int Index,
          TCheckBoxState NewState);
private:	// User declarations
public:		// User declarations
        __fastcall TPNForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPNForm *PNForm;
//---------------------------------------------------------------------------
#endif
