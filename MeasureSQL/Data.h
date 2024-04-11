//---------------------------------------------------------------------------

#ifndef DataH
#define DataH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "MyAccess.hpp"
#include <DB.hpp>
#include "MyDacVcl.hpp"
#include "DAScript.hpp"
#include "MyScript.hpp"
#include "Registry.hpp"
//---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published:	// IDE-managed Components
        TMyConnection *CoordinatorDB;
        TMyQuery *FileSelect;
        TMyDataSource *FileSelectSource;
        TMyQuery *SqlConfiguration;
        TMyQuery *SqlSetupFileHeaders;
        TMyQuery *Numbers;
        TMyDataSource *NumbersSource;
        TMyQuery *sp;
        TMyQuery *SQLCrystalData;
        TMyQuery *SQLPostProcessData;
        TMyQuery *Numberall;
        TMyQuery *NumberBD;
        TMyTable *SqlSpecification;
        TMyTable *NumberCurrent;
        TMyDataSource *SpecificationSource;
        TMyQuery *SQLPSIData;
        TMyDataSource *NumberAllSource;
        TMyQuery *NumbersTemp;
        TMyQuery *MarkerText;
        TMyQuery *MarkerTextTemp;
        TMyQuery *Dostup;
        TMyQuery *SQLPSIDataT;
        TMyQuery *SQLPSI;
        TMyQuery *SQLPSIDataTemp;
        TMyQuery *NumberAllTemp;
        TMyQuery *Options;
        TMyQuery *Print;
        TMyQuery *Profile;
        TMyQuery *ProfileData;
        TMyDataSource *ProfileDataSource;
        TMyQuery *Transat;
        TMyDataSource *TransatSource;
        TMyTable *Config;
        TMyQuery *Transat_Temp_Q;
        TMyQuery *MeasureType;
        TMyQuery *Termo;
        TMyQuery *SQLSetupData;
        TMyQuery *ResonatorType;
        TMyQuery *TU;
        TMyQuery *Dopuski;
        TMyQuery *Korpus;
        TMyDataSource *SqlPsiDataTempSource;
        TMyQuery *SpcTemp;
        TMyQuery *rnorm;
        TMyQuery *TProfile;
        TMyQuery *TU1;
        TMyQuery *fnorm;
        TMyQuery *dopuski1;
        TMyQuery *fnNorm;
        TMyQuery *SQLPSIDataT1;
        TMyConnectDialog *MyConnectDialog1;
        TMyQuery *fnastrnorm;
        TMyScript *CreateLianozTable;
        TMyScript *DropLianozTable;
        TMyQuery *MeasureID;
        TMyTable *Transat_Temp;
        TMyScript *CreateTransatTemp;
        TMyScript *DropTransatTemp;
        TMyScript *CreateNumberCurrent;
        TMyScript *DropNumberCurrent;
        TMyScript *CreateTransatConfig;
        TMyScript *DropTransatConfig;
        TMyDataSource *SetupDataSource;
        TMyDataSource *CrystalDataSource;
        TMyDataSource *PostProcessSource;
        TMyDataSource *TransatConfigSource;
        TMyQuery *Specification_Temp;
        TMyTable *Transat_Temp1;
        TMyQuery *Old_ID;
        TMyQuery *nomeklatura_rk;
        TMyQuery *nomeklatura_rk_psi;
        TMyQuery *spc_not_inbase;
        TMyQuery *tch_measure_type;
        TMyQuery *ProfileData1;
        TMyQuery *TCH_Approx_Type;
        TMyQuery *TCH_Interval_Type;
        TMyQuery *temperatureprofile;
        TMyQuery *psi_stat_1;
        TMyScript *CreateStatTable;
        TMyScript *DropStatTable;
        TMyQuery *spc_variant;
        TMyQuery *spc_variant_data;
        TMyCommand *UpdatePsiDatatemp;
        TMyScript *CreatePostProcessData;
        TMyScript *DropPostProcessData;
        TMyScript *CrystalDataCreate;
        TMyScript *CrystalDataDrop;
        TMyScript *SetupDataCreate;
        TMyScript *SetupDataDrop;
        TMyScript *ConfigurationCreate;
        TMyScript *ConfigurationDrop;
        TMyScript *SetupHeadersCreate;
        TMyScript *SetupHeadersDrop;
        TMyQuery *SQLConfiguration_1;
        TMyScript *ConfigurationDelete;
        TMyScript *SetupHeadersDelete;
        TMyQuery *SQLSetupFileHeaders_1;
        TMyScript *CrystalDataDelete;
        TMyQuery *SQLCrystalData_1;
        TMyScript *PostProcessDataDelete;
        TMyQuery *SQLPostProcessData_1;
        TMyScript *SetupDataDelete;
        TMyQuery *SQLSetupData_1;
        TMyTable *Version;
        TMyCommand *Update_LOG;
        TMyQuery *Oversight;
        TMyScript *InsertExportReport;
        TMyQuery *Email;
        TMyQuery *OSM_Solve;
        TMyQuery *TestTablesSQL;
        TMyScript *KH7700_Temp_Copy;
        TMyScript *KH7700_Temp_Create;
        TMyScript *KH7700_Temp_Drop;
        TMyScript *TTS100_Temp_Copy;
        TMyScript *KH7700_Config_Create;
        TMyScript *KH7700_Config_Drop;
        TMyTable *KH7700_Temp;
        TMyTable *KH7700_Config;
        TMyScript *TTS100_Alter;
        TMyScript *KH7700_User_Config_Create;
        TMyScript *KH7700_User_Config_Drop;
        TMyTable *KH7700_User_Config;
        TMyDataSource *KH7700_Temp_Source;
        TMyDataSource *KH7700_Config_Source;
        TMyScript *KH7700_temp_Alter;
        TMyScript *PsiData_temp_Table_Create;
        TMyScript *PsiData_temp_Table_Drop;
        void __fastcall ProfileDataBeforePost(TDataSet *DataSet);
        void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDataModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
