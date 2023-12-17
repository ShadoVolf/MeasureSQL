//---------------------------------------------------------------------------

#ifndef LoadNumbersH
#define LoadNumbersH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzDBGrid.hpp"
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DB.hpp>
#include "RzListVw.hpp"
#include <ComCtrls.hpp>
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include "AdvStickyPopupMenu.hpp"
#include "RzButton.hpp"
#include <Menus.hpp>
#include "AdvMenus.hpp"
//---------------------------------------------------------------------------
class TLoadNumbersForm : public TForm
{
__published:	// IDE-managed Components
        TVrShadowButton *btnClose;
        TRzCheckList *viewLoad;
        TLabel *Label1;
        TRzMenuButton *btnSort;
        TRzCheckList *viewLoad1;
        TLabel *Label2;
        TAdvPopupMenu *AdvPopupMenu1;
        TMenuItem *menuMSK;
        TMenuItem *menuFile;
        TLabel *Label3;
        TLabel *Label4;
        TRzListBox *viewPosition;
        TVrShadowButton *btnLoad;
        TVrShadowButton *btnDelete;
        TRzCheckList *viewNumbers;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall menuMSKClick(TObject *Sender);
        void __fastcall menuFileClick(TObject *Sender);
        void __fastcall viewLoadClick(TObject *Sender);
        void __fastcall btnLoadClick(TObject *Sender);
        void __fastcall btnDeleteClick(TObject *Sender);
        void __fastcall viewLoad1Click(TObject *Sender);
private:	// User declarations

public:		// User declarations
        __fastcall TLoadNumbersForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoadNumbersForm *LoadNumbersForm;
//---------------------------------------------------------------------------
#endif
