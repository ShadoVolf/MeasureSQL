//---------------------------------------------------------------------------

#ifndef DataArchiveH
#define DataArchiveH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include "RzButton.hpp"
#include <Menus.hpp>
#include "RzRadChk.hpp"
#include "RzCmboBx.hpp"
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include "RzEdit.hpp"
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TArchiveForm : public TForm
{
__published:	// IDE-managed Components
        TVrShadowButton *btnClose;
        TRzCheckList *viewType;
        TRzCheckList *viewFile;
        TRzCheckList *viewMSK;
        TRzCheckList *viewNumbers;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TRzMenuButton *btnSort;
        TPopupMenu *PopupMenu1;
        TMenuItem *menuDate;
        TMenuItem *menuMSK;
        TMenuItem *menuType;
        TMenuItem *menuFile;
        TRzButton *btnMSK;
        TRzButton *btnType;
        TRzButton *btnSortByDate;
        TRzButton *RzButton3;
        TVrShadowButton *btnTable;
        TRzCheckList *viewDate;
        TVrShadowButton *btnSearch;
        TVrShadowButton *btnDelete;
        TRzCheckBox *edtAnomal;
        TRzComboBox *edtM;
        TLabel *Label9;
        TVrShadowButton *btnDelete2;
        TPanel *PanelData;
        TProgressBar *ProgressBar;
        TPanel *MskPanel;
        TPanel *TypePanel;
        TPanel *FilePanel;
        TPanel *NumbersPanel;
        TPanel *OptionsPanel;
        TRzEdit *edtSearch;
        TRzButton *btnSeacrh;
        TRzEdit *edtSearchType;
        TRzButton *btnSearchType;
        TRzEdit *edtSearchData;
        TRzButton *btnSearchData;
        TRzEdit *edtSearchFile;
        TRzButton *btnSearchFile;
        TRzEdit *edtSearchNumber;
        TRzButton *btnSearchNumber;
        TRzCheckBox *chkDeleteNumbers;
        TLabel *Label6;
        TRzComboBox *cmb_ID;
        TPanel *Panel1;
        TRzCheckBox *allMeasureChk;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall menuDateClick(TObject *Sender);
        void __fastcall menuMSKClick(TObject *Sender);
        void __fastcall menuTypeClick(TObject *Sender);
        void __fastcall menuFileClick(TObject *Sender);
        void __fastcall btnMSKClick(TObject *Sender);
        void __fastcall btnTypeClick(TObject *Sender);
        void __fastcall btnSortByDateClick(TObject *Sender);
        void __fastcall RzButton3Click(TObject *Sender);
        void __fastcall viewMSKClick(TObject *Sender);
        void __fastcall viewTypeClick(TObject *Sender);
        void __fastcall btnTableClick(TObject *Sender);
        void __fastcall btnSearchClick(TObject *Sender);
        void __fastcall btnDeleteClick(TObject *Sender);
        void __fastcall btnDelete2Click(TObject *Sender);
        void __fastcall btnSeacrhClick(TObject *Sender);
        void __fastcall btnSearchTypeClick(TObject *Sender);
        void __fastcall btnSearchDataClick(TObject *Sender);
        void __fastcall btnSearchFileClick(TObject *Sender);
        void __fastcall btnSearchNumberClick(TObject *Sender);
        void __fastcall viewNumbersClick(TObject *Sender);
        void __fastcall viewFileClick(TObject *Sender);
        void __fastcall edtSearchNumberKeyPress(TObject *Sender,
          char &Key);
        void __fastcall edtSearchFileKeyPress(TObject *Sender, char &Key);
        void __fastcall edtSearchDataKeyPress(TObject *Sender, char &Key);
        void __fastcall edtSearchTypeKeyPress(TObject *Sender, char &Key);
        void __fastcall edtSearchKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
        __fastcall TArchiveForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TArchiveForm *ArchiveForm;
//---------------------------------------------------------------------------
#endif
