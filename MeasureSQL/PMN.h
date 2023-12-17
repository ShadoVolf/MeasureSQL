//---------------------------------------------------------------------------

#ifndef PMNH
#define PMNH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TPMNameForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TRzButton *btnClose;
        TRzCheckList *viewNumber;
        TRzButton *RzButton1;
        TRzButton *RzButton2;
        TLabel *lCount;
        TLabel *Label7;
        TPopupMenu *PopupMenu1;
        TMenuItem *N1;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall viewNumberChange(TObject *Sender, int Index,
          TCheckBoxState NewState);
        void __fastcall RzButton1Click(TObject *Sender);
        void __fastcall RzButton2Click(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPMNameForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPMNameForm *PMNameForm;
//---------------------------------------------------------------------------
#endif
