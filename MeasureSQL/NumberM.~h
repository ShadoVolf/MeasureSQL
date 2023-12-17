//---------------------------------------------------------------------------

#ifndef NumberMH
#define NumberMH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzButton.hpp"
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include "RzGrids.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include "VrProgressBar.hpp"
#include "AdvGlassButton.hpp"
#include <ActnList.hpp>
//---------------------------------------------------------------------------
class TNumberMForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TRzPanel *RzPanel2;
        TRzPanel *RzPanel3;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TRzComboBox *edtFirstPosition;
        TRzComboBox *edtEndPosition;
        TRzEdit *edtSerial;
        TRzEdit *edtBegin;
        TRzEdit *edtMSK;
        TRzEdit *edtAll;
        TRzStringGrid *gridNumbers;
        TRzButton *btnSerial;
        TRzButton *btnNumber;
        TLabel *Label3;
        TRzEdit *edtFile;
        TVrProgressBar *VrProgressBar1;
        TRzComboBox *edtM;
        TRzEdit *edtID;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *btnClear;
        TAdvGlassButton *btnSet;
        TAdvGlassButton *btnLoad;
        TAdvGlassButton *btnCurrent;
        TLabel *Label9;
        TLabel *Label8;
        TLabel *Label10;
        TRzEdit *edtKonvert;
        TLabel *Label11;
        TRzComboBox *edtFactory;
        TCheckBox *iiBox;
        TActionList *ActionList1;
        TAction *BarCode_MSK;
        TAction *Get_MSK_NUMBERS;
        TAction *SetNumbers;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall btnLoadClick(TObject *Sender);
        void __fastcall btnCurrentClick(TObject *Sender);
        void __fastcall btnSetClick(TObject *Sender);
        void __fastcall btnSerialClick(TObject *Sender);
        void __fastcall btnNumberClick(TObject *Sender);
        void __fastcall btnClearClick(TObject *Sender);
        void __fastcall gridNumbersKeyPress(TObject *Sender, char &Key);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtMSKKeyPress(TObject *Sender, char &Key);
        void __fastcall BarCode_MSKExecute(TObject *Sender);
        void __fastcall Get_MSK_NUMBERSExecute(TObject *Sender);
        void __fastcall SetNumbersExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TNumberMForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNumberMForm *NumberMForm;
//---------------------------------------------------------------------------
#endif
