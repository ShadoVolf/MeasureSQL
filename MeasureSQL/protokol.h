//---------------------------------------------------------------------------

#ifndef protokolH
#define protokolH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "VrProgressBar.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <stdio.h>
#include <math.h>
#include "frxExportPDF.hpp"
#include "RzCmboBx.hpp"
#include "RzButton.hpp"
#include "frxGradient.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "frxDCtrl.hpp"
#include "frxExportXLS.hpp"
#include <DBCtrls.hpp>
#include "frxBarcode.hpp"
#include "AdvGlassButton.hpp"
#include <ActnList.hpp>
#include <ActnMan.hpp>
#include <Math.hpp>
#include "frxExportRTF.hpp"
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>





//---------------------------------------------------------------------------
class TProtokolForm : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TVrProgressBar *VrProgressBar1;
        TfrxReport *frxReport1;
        TfrxDBDataset *Lianoz;
        TfrxDBDataset *Spc;
        TfrxDBDataset *Psi;
        TfrxDBDataset *PsiData;
        TLabel *Label5;
        TfrxDBDataset *psiDataTemp;
        TCheckBox *edtAn;
        TfrxPDFExport *frxPDFExport1;
        TRzComboBox *edtM;
        TLabel *Label6;
        TCheckBox *edt;
        TLabel *Label7;
        TVrShadowButton *setDate;
        TRzEdit *edtDate;
        TVrShadowButton *setDate1;
        TRzEdit *edtDate1;
        TLabel *Label8;
        TfrxDBDataset *Dopuski;
        TfrxDialogControls *frxDialogControls1;
        TfrxXLSExport *frxXLSExport1;
        TfrxBarCodeObject *frxBarCodeObject1;
        TAdvGlassButton *RzButton1;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *btnPrint;
        TAdvGlassButton *AdvGlassButton1;
        TRzComboBox *cmb_ID;
        TLabel *Label9;
        TRzComboBox *cmb_Protokol_ID;
        TLabel *Label10;
        TAdvGlassButton *btnNum;
        TRzComboBox *edtProtokolN;
        TRzComboBox *edtProtokol;
        TRzComboBox *edtMsk;
        TRzComboBox *edtSpc;
        TRzComboBox *edtType;
        TAdvGlassButton *AdvGlassButton3;
        TfrxDBDataset *Dopusk;
        TfrxDBDataset *frxDBDataset1;
        TActionManager *ActionManager1;
        TAction *Action1;
        TfrxDBDataset *PhazeNoise;
        TfrxDBDataset *psi_stat_1;
        TCheckBox *CheckBox1;
        TfrxRTFExport *frxRTFExport1;
        TAdvGlassButton *AdvGlassButton2;
        TChart *Chart1;
        TLineSeries *Series1;
        TPointSeries *Series2;
        TLineSeries *Series3;
        TfrxDBDataset *frxDBDataset2;
        TChart *Chart2;
        TLineSeries *LineSeries1;
        TPointSeries *PointSeries1;
        TfrxDBDataset *psiDataTemp_P;
        TRzComboBox *Protokol_Count;
        TLabel *Label11;
        TRzComboBox *LotNumber;
        TLabel *Label12;
        TLabel *Label13;
        TRzComboBox *LotSpc;
        TLabel *Label14;
        TRzComboBox *LotMSK;
        TActionList *ActionList1;
        TAction *Create_LOT_RQ;
        TCheckBox *Lot;
        TAction *SetNumbers;
        TAction *MskSelect;
        TAction *Print;
        TAction *ExportProtokol;
        TAction *CreateNorm;
        TAction *Create_ID;
        TAction *InsertArchive;
        TAction *InsertLianoz;
        TAction *Razbrakovka;
        TAction *Razbrakovka_bez_ZP;
        TAction *Razbrakovka_ZP;
        TAction *Razbrakovka_RK;
        TAction *NumbersSelect;
        TAction *CreateStatTable;
        TAction *WriteStat;
        TAction *AddCount;
        TAction *PrintAll;
        TAction *LoadProtokolTypes;
        TAction *ID_Change;
        TAction *LotChange;
        TAction *SpcChangeLot;
        TfrxDBDataset *TU_Parameters;
        TAction *GetCustomer;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall edtSpcChange(TObject *Sender);
        void __fastcall btnPrintClick(TObject *Sender);
        void __fastcall VrShadowButton1Click(TObject *Sender);
        void __fastcall edtProtokolNChange(TObject *Sender);
        void __fastcall edtProtokolChange(TObject *Sender);
        void __fastcall btnNumClick(TObject *Sender);
        void __fastcall setDateClick(TObject *Sender);
        void __fastcall edtClick(TObject *Sender);
        void __fastcall setDate1Click(TObject *Sender);
        void __fastcall RzButton1Click(TObject *Sender);
        void __fastcall RzButton2Click(TObject *Sender);
        void __fastcall cmb_Protokol_IDChange(TObject *Sender);
        void __fastcall Action1Execute(TObject *Sender);
        void __fastcall cmb_IDKeyPress(TObject *Sender, char &Key);
        void __fastcall edtMskKeyPress(TObject *Sender, char &Key);
        void __fastcall AdvGlassButton2Click(TObject *Sender);
        void __fastcall edtMskChange(TObject *Sender);
        void __fastcall LotNumberChange(TObject *Sender);
        void __fastcall LotSpcChange(TObject *Sender);
        void __fastcall Create_LOT_RQExecute(TObject *Sender);
        void __fastcall SetNumbersExecute(TObject *Sender);
        void __fastcall LotMSKChange(TObject *Sender);
        void __fastcall MskSelectExecute(TObject *Sender);
        void __fastcall PrintExecute(TObject *Sender);
        void __fastcall ExportProtokolExecute(TObject *Sender);
        void __fastcall CreateNormExecute(TObject *Sender);
        void __fastcall Create_IDExecute(TObject *Sender);
        void __fastcall InsertArchiveExecute(TObject *Sender);
        void __fastcall InsertLianozExecute(TObject *Sender);
        void __fastcall RazbrakovkaExecute(TObject *Sender);
        void __fastcall Razbrakovka_bez_ZPExecute(TObject *Sender);
        void __fastcall Razbrakovka_ZPExecute(TObject *Sender);
        void __fastcall Razbrakovka_RKExecute(TObject *Sender);
        void __fastcall NumbersSelectExecute(TObject *Sender);
        void __fastcall CreateStatTableExecute(TObject *Sender);
        void __fastcall WriteStatExecute(TObject *Sender);
        void __fastcall AddCountExecute(TObject *Sender);
        void __fastcall PrintAllExecute(TObject *Sender);
        void __fastcall LoadProtokolTypesExecute(TObject *Sender);
        void __fastcall ID_ChangeExecute(TObject *Sender);
        void __fastcall LotChangeExecute(TObject *Sender);
        void __fastcall SpcChangeLotExecute(TObject *Sender);
        void __fastcall GetCustomerExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TProtokolForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TProtokolForm *ProtokolForm;
//---------------------------------------------------------------------------
#endif
