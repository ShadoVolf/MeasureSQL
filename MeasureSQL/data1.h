//---------------------------------------------------------------------------

#ifndef data1H
#define data1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "MyAccess.hpp"
#include <DB.hpp>
//---------------------------------------------------------------------------
class TDataModule2 : public TDataModule
{
__published:	// IDE-managed Components
        TMyQuery *SqlSpec;
        TMyQuery *ProtokolType;
        TMyQuery *psi;
        TMyQuery *psiData;
        TMyQuery *Print;
        TMyQuery *ResonatorType;
        TMyQuery *Lianoz;
        TMyQuery *Profile;
        TMyQuery *SQLNominal;
        TMyQuery *PsiData1;
        TMyQuery *old;
        TMyDataSource *OldSource;
        TMyQuery *psiDataTemp;
        TMyDataSource *psiDataSource;
        TMyQuery *psiDataTemp2;
        TMyQuery *psiData2;
        TMyDataSource *psiDataSource2;
        TMyQuery *psiDataTemp3;
        TMyQuery *psiData3;
        TMyDataSource *Source1;
        TMyDataSource *Source2;
        TMyCommand *SetSqlDate;
        TMyQuery *dopuski;
        TMyQuery *TU;
        TMyCommand *Comand;
        TMyQuery *sqlssss;
        TMyQuery *Protokol_Measure_ID;
        TMyQuery *Protokol_Archive;
        TMyQuery *Temp_psiData5;
        TMyQuery *Temp_psiData_Fields;
        TMyQuery *MeasureID;
        TMyQuery *psiData4;
        TMyQuery *Marker;
        TMyQuery *Machine;
        TMyQuery *MSK;
        TMyQuery *Number_ID;
        TMyQuery *Nomenklatura_RK_PSI;
        TMyQuery *Nomenklatura_RK;
        TMyQuery *Statistika;
        TMyQuery *Parameters;
        TMyQuery *Coddificator;
        TMyQuery *Journal;
        TMyQuery *Ugol;
        TMyQuery *Print_Files;
        TMyQuery *Spc_Temp;
        TMyQuery *PhazeNoise;
        TMyQuery *PhazeNoiseData;
        TMyQuery *PHUser;
        TMyQuery *PhazeNoise1;
        TMyQuery *Temp_psiDataTemp_FIelds;
        TMyDataSource *PhazeNoise_data;
        TMyQuery *psi_par_data_temp;
        TMyQuery *psi_par_id;
        TMyQuery *psi_par_data;
        TMyQuery *psi_par_data_temp_1;
        TMyQuery *psi_par_data_1;
        TMyQuery *psi_par_data_2;
        TMyQuery *psi_par_data_4;
        TMyQuery *psi_par_data_print;
        TMyQuery *psi_par_data_2_print;
        TMyQuery *psi_stat_1;
        TMyCommand *CreatePhazeNoise;
        TMyCommand *CreatePhazeNoiseData;
        TMyCommand *DropPhazeNoise;
        TMyCommand *DropPhazeNoiseData;
        TMyQuery *SqlSpecTemp;
        TMyQuery *PhazeNoise_ID;
        TMyCommand *UpdatePH;
        TMyCommand *UpdatePSI;
        TMyQuery *Factory;
        TMyQuery *psiDataTemp4;
        TMyQuery *psidataTCHGraph;
        TMyQuery *GR_TCH;
        TMyQuery *ULN;
        TMyQuery *MyQuery2;
        TMyQuery *OperatorLogin;
        TMyDataSource *LianozDataSource;
        TMyQuery *psiDataTemp5;
        TMyQuery *Protokol_Measure_ID_Edit;
        TMyQuery *proverka_ph;
        TMyQuery *Protokol_Archive_1;
        TMyQuery *Protokol_Measure_ID_Read;
        TMyQuery *Protokol_Archive_Count;
        TMyQuery *TU_Parameters;
        TMyQuery *Notification;
        void __fastcall oldBeforePost(TDataSet *DataSet);
        void __fastcall psiData3BeforeDelete(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
        __fastcall TDataModule2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
#endif
