//---------------------------------------------------------------------------

#ifndef Protokol_Proverke_PHH
#define Protokol_Proverke_PHH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzChkLst.hpp"
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include "RzLstBox.hpp"
#include <Mask.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <ActnList.hpp>
#include <ActnMan.hpp>
//---------------------------------------------------------------------------
class TProverka_PH_Form : public TForm
{
__published:	// IDE-managed Components
        TRzButton *RzButton1;
        TRzEdit *edtMeasure_ID;
        TRzButton *RzButton2;
        TRzCheckList *Protokol1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TRzButton *RzButton3;
        TRzComboBox *Protokol_Count;
        TLabel *Label4;
        TRzButton *RzButton4;
        TRzCheckList *Protokol2;
        TLabel *Label5;
        TRzButton *RzButton5;
        TRzButton *RzButton6;
        TfrxDBDataset *Lianoz;
        TfrxReport *frxReport1;
        TActionManager *ActionManager1;
        TAction *Action1;
        TfrxDBDataset *Spc;
        void __fastcall RzButton1Click(TObject *Sender);
        void __fastcall RzButton2Click(TObject *Sender);
        void __fastcall RzButton6Click(TObject *Sender);
        void __fastcall RzButton3Click(TObject *Sender);
        void __fastcall RzButton4Click(TObject *Sender);
        void __fastcall RzButton5Click(TObject *Sender);
        void __fastcall edtMeasure_IDEnter(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TProverka_PH_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TProverka_PH_Form *Proverka_PH_Form;
//---------------------------------------------------------------------------
#endif
