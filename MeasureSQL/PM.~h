//---------------------------------------------------------------------------

#ifndef PMH
#define PMH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzRadChk.hpp"
#include "VrControls.hpp"
#include "VrProgressBar.hpp"
#include <Mask.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportPDF.hpp"
#include "AdvGlassButton.hpp"
#include "RzCmboBx.hpp"
#include "frxBarcode.hpp"
#include "frxDCtrl.hpp"
#include "frxExportXLS.hpp"
#include "DBAccess.hpp"
#include "MyAccess.hpp"
#include <ActnList.hpp>
#include <ActnMan.hpp>


//---------------------------------------------------------------------------
class TPMForm : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TVrProgressBar *VrProgressBar1;
        TRzCheckBox *edt;
        TRzEdit *edtNewMsk;
        TLabel *Label4;
        TRzEdit *edtNewFile;
        TLabel *Label5;
        TAdvGlassButton *btnClose;
        TRzComboBox *edtMsk;
        TLabel *Label6;
        TRzComboBox *edtProtokol;
        TAdvGlassButton *btnPrint;
        TAdvGlassButton *btnRec;
        TRzCheckBox *edtAn;
        TAdvGlassButton *btnNum;
        TRzComboBox *edtSpc;
        TRzComboBox *edtType;
        TRzComboBox *edtM;
        TLabel *Label8;
        TRzComboBox *cmb_ID;
        TLabel *Label9;
        TAdvGlassButton *btnDetail;
        TfrxDBDataset *Lianoz;
        TfrxDBDataset *Spc;
        TfrxDBDataset *Psi;
        TfrxDBDataset *PsiData;
        TfrxDBDataset *psiDataTemp;
        TfrxDBDataset *Dopusk;
        TfrxDBDataset *Dopuski;
        TfrxDialogControls *frxDialogControls1;
        TfrxBarCodeObject *frxBarCodeObject1;
        TfrxXLSExport *frxXLSExport1;
        TfrxPDFExport *frxPDFExport1;
        TfrxReport *frxReport1;
        TLabel *Label10;
        TRzComboBox *cmb_Protokol_ID;
        TMyCommand *Command1;
        TfrxDBDataset *psi_stat_1;
        TActionManager *ActionManager1;
        TAction *Action1;
        TRzComboBox *MType;
        TRzComboBox *SN;
        TLabel *Label7;
        TLabel *Label11;
        TLabel *Label12;
        TRzComboBox *edtOperator;
        TActionList *ActionList1;
        TAction *ID_Change;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall edtSpcChange(TObject *Sender);
        void __fastcall RzButton1Click(TObject *Sender);
        void __fastcall btnRecClick(TObject *Sender);
        void __fastcall btnDetailClick(TObject *Sender);
        void __fastcall btnPrintClick(TObject *Sender);
        void __fastcall cmb_Protokol_IDChange(TObject *Sender);
        void __fastcall Action1Execute(TObject *Sender);
        void __fastcall cmb_IDKeyPress(TObject *Sender, char &Key);
        void __fastcall edtMskKeyPress(TObject *Sender, char &Key);
        void __fastcall edtProtokolChange(TObject *Sender);
        void __fastcall ID_ChangeExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPMForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPMForm *PMForm;
//---------------------------------------------------------------------------
#endif
