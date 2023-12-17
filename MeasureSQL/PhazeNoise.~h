//---------------------------------------------------------------------------

#ifndef PhazeNoiseH
#define PhazeNoiseH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzButton.hpp"
#include "RzCmboBx.hpp"
#include "RzPanel.hpp"
#include "TeeComma.hpp"
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <ActnList.hpp>
#include <math.h>
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "VrControls.hpp"
#include "VrLeds.hpp"
#include "frxBarcode.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportPDF.hpp"
#include "frxExportXLS.hpp"
#include <Buttons.hpp>
#include "RzSpnEdt.hpp"
#include "frxExportImage.hpp"
#include "frxExportRTF.hpp"
#include "frxExportXML.hpp"
#include "clFtp.hpp"
#include "clTcpClient.hpp"
#include "clMailMessage.hpp"
#include "clMC.hpp"
#include "clSmtp.hpp"


//---------------------------------------------------------------------------
class TPhazeNoiseForm : public TForm
{
__published:	// IDE-managed Components
        TChart *Chart1;
        TLineSeries *Series1;
        TPointSeries *Series2;
        TLineSeries *Series3;
        TTeeCommander *TeeCommander1;
        TRzPanel *RzPanel1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label5;
        TLabel *Label4;
        TRzButton *RzButton1;
        TComboBox *edtType;
        TComboBox *edtSpc;
        TComboBox *edtMsk;
        TComboBox *edtNumber;
        TRzButton *btnMake;
        TRzButton *btnApp;
        TComboBox *cmb_ID;
        TLabel *Label6;
        TLabel *Label7;
        TRzEdit *edtMeasure_ID;
        TLabel *Label8;
        TRzButton *RzButton2;
        TVrLed *VrLed1;
        TfrxReport *frxReport1;
        TfrxDBDataset *PhazeNoise;
        TfrxXLSExport *frxXLSExport1;
        TfrxPDFExport *frxPDFExport1;
        TfrxBarCodeObject *frxBarCodeObject1;
        TfrxDBDataset *Spc;
        TRzButton *RzButton3;
        TCheckBox *edt;
        TRzToolbarButton *RzToolbarButton1;
        TRzToolbarButton *RzToolbarButton2;
        TLineSeries *Series4;
        TLineSeries *Series5;
        TLineSeries *Series6;
        TVrLed *VrLed3;
        TVrLed *VrLed2;
        TCheckBox *CheckBox1;
        TRzButton *RzButton4;
        TComboBox *edtSpc2;
        TRzButton *RzButton5;
        TRzButton *RzButton6;
        TRzButton *RzButton7;
        TCheckBox *CheckBox2;
        TfrxJPEGExport *frxJPEGExport1;
        TfrxRTFExport *frxRTFExport1;
        TfrxXMLExport *frxXMLExport1;
        TclFtp *clFtp1;
        TCheckBox *CheckBox3;
        TclMailMessage *clMailMessage1;
        TclSmtp *clSmtp1;
        TRzButton *RzButton8;
        TfrxDBDataset *Proverka;
        TfrxDBDataset *Dostup;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtSpcChange(TObject *Sender);
        void __fastcall edtNumberChange(TObject *Sender);
        void __fastcall btnMakeClick(TObject *Sender);
        void __fastcall btnAppClick(TObject *Sender);
        void __fastcall edtMeasure_IDChange(TObject *Sender);
        void __fastcall RzButton2Click(TObject *Sender);
        void __fastcall RzButton3Click(TObject *Sender);
        void __fastcall RzToolbarButton1Click(TObject *Sender);
        void __fastcall edtMskKeyPress(TObject *Sender, char &Key);
        void __fastcall RzToolbarButton2Click(TObject *Sender);
        void __fastcall cmb_IDKeyPress(TObject *Sender, char &Key);
        void __fastcall RzButton6Click(TObject *Sender);
        void __fastcall RzButton4Click(TObject *Sender);
        void __fastcall RzButton5Click(TObject *Sender);
        void __fastcall RzButton7Click(TObject *Sender);
        void __fastcall RzButton8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPhazeNoiseForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPhazeNoiseForm *PhazeNoiseForm;
//---------------------------------------------------------------------------
#endif
