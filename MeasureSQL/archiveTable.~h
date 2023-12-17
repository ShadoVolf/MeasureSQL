//---------------------------------------------------------------------------

#ifndef archiveTableH
#define archiveTableH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzDBGrid.hpp"
#include "RzPanel.hpp"
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include <Menus.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportPDF.hpp"
#include "RzRadChk.hpp"
//---------------------------------------------------------------------------
class TArchiveTableForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TRzDBGrid *RzDBGrid1;
        TVrShadowButton *btnClose;
        TLabel *Label2;
        TRzEdit *edtMSK;
        TLabel *Label1;
        TRzEdit *edtFile;
        TLabel *Label3;
        TRzEdit *edtSpc;
        TRzMenuButton *RzMenuButton1;
        TPopupMenu *PopupMenu1;
        TMenuItem *Print1;
        TLabel *Label4;
        TRzEdit *edtDate;
        TLabel *Label5;
        TRzEdit *edtTime;
        TLabel *Label6;
        TRzEdit *edtNominal;
        TfrxReport *frxReport1;
        TfrxDBDataset *PsiData;
        TfrxDBDataset *Psi;
        TfrxDBDataset *Spc;
        TfrxDBDataset *Dopusk;
        TRzEdit *edt1;
        TMenuItem *Excel;
        TfrxPDFExport *frxPDFExport1;
        TfrxDBDataset *Dopuski;
        TfrxDBDataset *Lianoz;
        TfrxDBDataset *psiDataTemp;
        TMenuItem *N1;
        TMenuItem *N2;
        TfrxDBDataset *psi_stat_1;
        TCheckBox *coeff;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall Print1Click(TObject *Sender);
        void __fastcall ExcelClick(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TArchiveTableForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TArchiveTableForm *ArchiveTableForm;
//---------------------------------------------------------------------------
#endif
