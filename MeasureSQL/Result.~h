//---------------------------------------------------------------------------

#ifndef ResultH
#define ResultH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzGrids.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "TeeChartGrid.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "RzButton.hpp"
#include <Menus.hpp>
#include "fs_igraphicsrtti.hpp"
#include "RzRadChk.hpp"
#include "frxBarcode.hpp"
#include "AdvGlassButton.hpp"
#include "frxExportPDF.hpp"
#include "clFtp.hpp"
#include "clTcpClient.hpp"
#include "frxExportImage.hpp"
#include "frxExportRTF.hpp"
#include "frxExportXML.hpp"
#include "frxExportXLS.hpp"
#include "clMailMessage.hpp"
#include "clMC.hpp"
#include "clSmtp.hpp"
#include <iostream>
//---------------------------------------------------------------------------
class TResultForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TRzStringGrid *ResultGrid;
        TLabel *Label2;
        TRzEdit *edtMSK;
        TLabel *Label1;
        TRzEdit *edtFile;
        TLabel *Label3;
        TRzEdit *edtSpc;
        TRzMenuButton *RzMenuButton1;
        TPopupMenu *PopupMenu1;
        TMenuItem *Print1;
        TfrxReport *frxReport1;
        TfrxDBDataset *PsiData;
        TfrxDBDataset *Psi;
        TfrxDBDataset *Spc;
        TfrxDBDataset *Dopusk;
        TfrxReport *frxReport2;
        TfrxDBDataset *psiDataTemp;
        TRzCheckBox *edtAnomal;
        TfrxBarCodeObject *frxBarCodeObject1;
        TfrxDBDataset *Dopuski;
        TfrxDBDataset *Lianoz;
        TMenuItem *Excel1;
        TMenuItem *N1;
        TMenuItem *N2;
        TLabel *Label4;
        TRzEdit *Measure_ID;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *btnJournal;
        TfrxPDFExport *frxPDFExport1;
        TclFtp *clFtp1;
        TMenuItem *N3;
        TfrxDBDataset *psi_stat_1;
        TfrxRTFExport *frxRTFExport1;
        TfrxXMLExport *frxXMLExport1;
        TfrxJPEGExport *frxJPEGExport1;
        TfrxXLSExport *frxXLSExport1;
        TclSmtp *clSmtp1;
        TclMailMessage *clMailMessage1;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall ResultGridDrawCell(TObject *Sender, int ACol,
          int ARow, TRect &Rect, TGridDrawState State);
        void __fastcall Print1Click(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall Excel1Click(TObject *Sender);
        void __fastcall btnJournalClick(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TResultForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TResultForm *ResultForm;
//---------------------------------------------------------------------------
#endif
