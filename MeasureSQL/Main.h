//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <math.h>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrControls.hpp"
#include "VrDeskTop.hpp"
#include "VrCompass.hpp"
#include "VrScope.hpp"
#include "VrLcd.hpp"
#include "VrMatrix.hpp"
#include "VrScanner.hpp"
#include "VrSystem.hpp"
#include "VrTrayGauge.hpp"
#include "VrSwitch.hpp"
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include "VrButtons.hpp"
#include "VrLeds.hpp"
#include "VrProgressBar.hpp"
#include "VrFormShape.hpp"
#include "ESBPCSEdit.hpp"
#include "ESBPCSEdit2.hpp"
#include "ESBPCSDateTimeEdit.hpp"
#include "ESBPCSPanel.hpp"
#include <ExtCtrls.hpp>
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "RzButton.hpp"
#include <Menus.hpp>
#include "AdvGlassButton.hpp"
#include "AdvMenus.hpp"
#include "AdvMenuStylers.hpp"
#include "RzBckgnd.hpp"
#include "Registry.hpp"
#include <ActnList.hpp>

//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TVrMatrix *FileSelectShow;
        TVrClock *VrClock1;
        TVrScanner *VrScanner1;
        TVrProgressBar *WorkProgress;
        TRzCheckList *RzCheckList1;
        TVrUserLed *ledSpc;
        TVrUserLed *ledFile;
        TVrUserLed *ledNumbers;
        TVrUserLed *ledFinish;
        TVrUserLed *ledPrint;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TESBSuperEdit *SEdit1;
        TESBDateTimeEdit *ESBDateTimeEdit1;
        TRzEdit *edtMachine;
        TRzEdit *ver;
        TLabel *Label6;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *btnWork;
        TAdvGlassButton *btnOptions;
        TAdvGlassButton *btnResult;
        TAdvMainMenu *AdvMainMenu1;
        TMenuItem *N10;
        TMenuItem *N11;
        TMenuItem *N14;
        TMenuItem *N15;
        TMenuItem *N16;
        TMenuItem *N17;
        TMenuItem *N18;
        TMenuItem *N19;
        TAdvMenuOfficeStyler *AdvMenuOfficeStyler1;
        TAdvGlassButton *btnNumbers;
        TRzSeparator *RzSeparator1;
        TMenuItem *N23;
        TAdvGlassButton *btnSpc;
        TAdvGlassButton *btnFile;
        TMenuItem *N1;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N2;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N12;
        TMenuItem *N13;
        TAdvGlassButton *btnTempD;
        TAdvGlassButton *btnEtalon;
        TMenuItem *N9;
        TMenuItem *N21;
        TMenuItem *N22;
        TMenuItem *N24;
        TMenuItem *N25;
        TMenuItem *N26;
        TMenuItem *N27;
        TMenuItem *N28;
        TListBox *ListBox1;
        TEdit *Edit1;
        TListBox *ListBox2;
        TESBSuperEdit *edtNom;
        TMenuItem *admin;
        TMenuItem *addProtokol;
        TMenuItem *N31;
        TMenuItem *N20;
        TMenuItem *N29;
        TMenuItem *N30;
        TMenuItem *N32;
        TMenuItem *selProverka;
        TMenuItem *N33;
        TLabel *Label7;
        TLabel *SpcLabel;
        TActionList *ActionList1;
        TAction *Set_Measure_SPC;
        TAdvGlassButton *AdvGlassButton1;
        TLabel *MSK_Label1;
        TLabel *MSK_Label;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall btnFileClick(TObject *Sender);
        void __fastcall btnNumbersClick(TObject *Sender);
        void __fastcall btnSpcClick(TObject *Sender);
        void __fastcall RzCheckList1Change(TObject *Sender, int Index,
          TCheckBoxState NewState);
        void __fastcall btnResultClick(TObject *Sender);
        void __fastcall btnWorkClick(TObject *Sender);
        void __fastcall btnArchiveClick(TObject *Sender);
        void __fastcall btnOptionsClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnDataClick(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N6Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
        void __fastcall PMClick(TObject *Sender);
        void __fastcall DataClick(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall N23Click(TObject *Sender);
        void __fastcall N17Click(TObject *Sender);
        void __fastcall N21Click(TObject *Sender);
        void __fastcall N12Click(TObject *Sender);
        void __fastcall N13Click(TObject *Sender);
        void __fastcall N14Click(TObject *Sender);
        void __fastcall N15Click(TObject *Sender);
        void __fastcall N18Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall btnTempDClick(TObject *Sender);
        void __fastcall N22Click(TObject *Sender);
        void __fastcall barCodeButtonClick(TObject *Sender);
        void __fastcall AdvGlassButton1Click(TObject *Sender);
        void __fastcall addProtokolClick(TObject *Sender);
        void __fastcall N31Click(TObject *Sender);
        void __fastcall N20Click(TObject *Sender);
        void __fastcall N29Click(TObject *Sender);
        void __fastcall N30Click(TObject *Sender);
        void __fastcall N32Click(TObject *Sender);
        void __fastcall selProverkaClick(TObject *Sender);
        void __fastcall N33Click(TObject *Sender);
        void __fastcall Set_Measure_SPCExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
