//---------------------------------------------------------------------------

#ifndef ParH
#define ParH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzChkLst.hpp"
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include "RzLstBox.hpp"
#include <Mask.hpp>
#include "VrControls.hpp"
#include "VrProgressBar.hpp"
#include "frxBarcode.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportPDF.hpp"
#include "frxExportXLS.hpp"
//---------------------------------------------------------------------------
class TPar_Form : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnClose;
        TLabel *Label1;
        TRzComboBox *edtType;
        TLabel *Label2;
        TRzComboBox *edtSpc;
        TLabel *Label3;
        TRzComboBox *edtMsk;
        TLabel *Label9;
        TRzComboBox *cmb_ID;
        TRzCheckList *viewMSK;
        TLabel *Label4;
        TAdvGlassButton *addButton;
        TAdvGlassButton *AdvGlassButton2;
        TAdvGlassButton *AdvGlassButton3;
        TLabel *Label5;
        TRzCheckList *viewNumber;
        TLabel *Label6;
        TRzCheckList *viewPar;
        TCheckBox *edt;
        TCheckBox *CheckBox1;
        TLabel *Label7;
        TRzEdit *edtR2;
        TLabel *Label8;
        TRzEdit *edtF2;
        TAdvGlassButton *AdvGlassButton4;
        TAdvGlassButton *AdvGlassButton5;
        TLabel *Label10;
        TRzComboBox *RzComboBox1;
        TVrProgressBar *VrProgressBar1;
        TRzCheckList *viewMeasureID;
        TRzEdit *RzEdit2;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TAdvGlassButton *AdvGlassButton1;
        TRzCheckList *viewPar2;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TRzEdit *edtR4;
        TRzEdit *edtF4;
        TfrxDBDataset *psi_par_data;
        TfrxReport *frxReport1;
        TfrxPDFExport *frxPDFExport1;
        TfrxXLSExport *frxXLSExport1;
        TfrxBarCodeObject *frxBarCodeObject1;
        TfrxDBDataset *psi_par_data_temp;
        TfrxDBDataset *Dopusk;
        TLabel *Label21;
        TfrxDBDataset *Spc;
        TRzComboBox *par_id;
        TfrxDBDataset *psi_par_data_2;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtSpcChange(TObject *Sender);
        void __fastcall FormHide(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall addButtonClick(TObject *Sender);
        void __fastcall cmb_IDChange(TObject *Sender);
        void __fastcall edtMskChange(TObject *Sender);
        void __fastcall viewMSKChange(TObject *Sender, int Index,
          TCheckBoxState NewState);
        void __fastcall AdvGlassButton1Click(TObject *Sender);
        void __fastcall AdvGlassButton4Click(TObject *Sender);
        void __fastcall AdvGlassButton5Click(TObject *Sender);
        void __fastcall AdvGlassButton2Click(TObject *Sender);
        void __fastcall viewNumberChange(TObject *Sender, int Index,
          TCheckBoxState NewState);
        void __fastcall AdvGlassButton3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPar_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPar_Form *Par_Form;
//---------------------------------------------------------------------------
#endif
