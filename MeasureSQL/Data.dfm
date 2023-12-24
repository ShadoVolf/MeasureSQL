object DataModule1: TDataModule1
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Left = 281
  Top = 97
  Height = 927
  Width = 1465
  object CoordinatorDB: TMyConnection
    Database = 'coordinator'
    Options.Compress = True
    Options.Charset = 'cp1251'
    Options.Protocol = mpTCP
    Username = 'root'
    Password = 'arcanum'
    Server = '172.16.20.30'
    Connected = True
    ConnectDialog = MyConnectDialog1
    LoginPrompt = False
    Left = 128
    Top = 32
  end
  object FileSelect: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from saunders where Machine='#39'Saunders'#39' order by N')
    Left = 32
    Top = 104
  end
  object FileSelectSource: TMyDataSource
    DataSet = FileSelect
    Left = 32
    Top = 160
  end
  object SqlConfiguration: TMyQuery
    Connection = CoordinatorDB
    Left = 104
    Top = 104
  end
  object SqlSetupFileHeaders: TMyQuery
    Connection = CoordinatorDB
    Left = 200
    Top = 104
  end
  object Numbers: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'SELECT DISTINCT '
      ' *'
      'FROM'
      '  psi'
      'WHERE'
      '  Status = '#39#1055#1077#1088#1077#1076#1072#1085#1086#39
      'Order by'
      '  msk')
    Left = 288
    Top = 104
  end
  object NumbersSource: TMyDataSource
    DataSet = Numbers
    Left = 312
    Top = 168
  end
  object sp: TMyQuery
    Connection = CoordinatorDB
    AfterCancel = ProfileDataBeforePost
    Left = 400
    Top = 104
  end
  object SQLCrystalData: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from `Crystal Data` where Name='#39'020611ch1.mdb'#39)
    Left = 496
    Top = 104
  end
  object SQLPostProcessData: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from `post process data` where Name='#39'020611ch1.mdb'#39)
    Left = 592
    Top = 104
  end
  object Numberall: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from numberall')
    Left = 688
    Top = 104
  end
  object NumberBD: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'SELECT DISTINCT '
      '  numberbd.MSK,'
      '  numberbd.`File`,'
      '  numberbd.ID'
      'FROM'
      '  numberbd')
    Left = 816
    Top = 104
  end
  object SqlSpecification: TMyTable
    TableName = 'specification'
    OrderFields = 'Name'
    Connection = CoordinatorDB
    Left = 896
    Top = 104
  end
  object NumberCurrent: TMyTable
    TableName = 'numbercurrent'
    Connection = CoordinatorDB
    Left = 752
    Top = 88
  end
  object SpecificationSource: TMyDataSource
    DataSet = SqlSpecification
    Left = 896
    Top = 152
  end
  object SQLPSIData: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from psidata')
    Left = 400
    Top = 160
  end
  object NumberAllSource: TMyDataSource
    DataSet = Numberall
    Left = 696
    Top = 152
  end
  object NumbersTemp: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from psi')
    Left = 288
    Top = 224
  end
  object MarkerText: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from markertext')
    Left = 784
    Top = 336
  end
  object MarkerTextTemp: TMyQuery
    Connection = CoordinatorDB
    Left = 960
    Top = 208
  end
  object Dostup: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1080)
    Left = 1064
    Top = 104
  end
  object SQLPSIDataT: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from psidatatemp')
    MasterSource = SqlPsiDataTempSource
    MasterFields = 'N'
    DetailFields = 'N'
    Left = 1064
    Top = 160
    ParamData = <
      item
        DataType = ftFixedChar
        Name = 'N'
        ParamType = ptInput
        Value = 'TC7628'
      end>
  end
  object SQLPSI: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'SELECT DISTINCT '
      '  psi.MSK,'
      '  psi.Nominal,'
      '  psi.Name,'
      '  psi.Begin,'
      '  psi.`End`,'
      '  psi.Number,'
      '  psi.`Type`,'
      '  psi.`Status`'
      'FROM'
      '  psi'
      'WHERE'
      '  psi.`Status` = '#39#1055#1077#1088#1077#1076#1072#1085#1086#39
      'Order by'
      '  msk')
    Left = 1064
    Top = 264
  end
  object SQLPSIDataTemp: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from psidata where msk='#39'030613`'#39)
    DetailFields = 'N'
    Left = 400
    Top = 224
  end
  object NumberAllTemp: TMyQuery
    Connection = CoordinatorDB
    Left = 696
    Top = 216
  end
  object Options: TMyQuery
    Connection = CoordinatorDB
    AfterCancel = ProfileDataBeforePost
    Left = 32
    Top = 232
  end
  object Print: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from print_data')
    Left = 112
    Top = 224
  end
  object Profile: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from temperatureprofile order by name')
    Left = 552
    Top = 336
  end
  object ProfileData: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from profiledata')
    BeforePost = ProfileDataBeforePost
    Left = 720
    Top = 336
  end
  object ProfileDataSource: TMyDataSource
    DataSet = ProfileData
    Left = 720
    Top = 384
  end
  object Transat: TMyQuery
    Connection = CoordinatorDB
    Left = 32
    Top = 328
  end
  object TransatSource: TMyDataSource
    DataSet = Transat_Temp
    Left = 88
    Top = 384
  end
  object Config: TMyTable
    TableName = 'transatconfig'
    Connection = CoordinatorDB
    Left = 176
    Top = 328
  end
  object Transat_Temp_Q: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'SELECT '
      '  transat_temp.SETUPNUM,'
      '  transat_temp.RINGID,'
      '  transat_temp.RINGPOS,'
      '  transat_temp.TEMP,'
      '  transat_temp.SETPOINT,'
      '  transat_temp.F0_MHZ,'
      '  transat_temp.Q_K,'
      '  transat_temp.R_OHMS,'
      '  transat_temp.C0_PF,'
      '  transat_temp.C1_FF,'
      '  transat_temp.W_UW,'
      '  transat_temp.L1_MH,'
      '  transat_temp.F0L_MHZ,'
      '  transat_temp.FL_MHZ,'
      '  profiledata.ProfileIndex,'
      '  profiledata.Temperature'
      'FROM'
      '  transat_temp,'
      '  profiledata'
      'WHERE'
      '  transat_temp.SETPOINT = profiledata.Temperature'
      'ORDER BY'
      '  transat_temp.SETPOINT')
    Left = 256
    Top = 328
  end
  object MeasureType: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select'
      '     *'
      'From measuremode')
    Left = 472
    Top = 336
  end
  object Termo: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select'
      '     *'
      'From termo')
    Left = 280
    Top = 280
  end
  object SQLSetupData: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from `Setup Data` where Name='#39'020611ch1.mdb'#39)
    Left = 496
    Top = 152
  end
  object ResonatorType: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from resonatortype')
    Left = 640
    Top = 336
  end
  object TU: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from tu')
    Left = 840
    Top = 336
  end
  object Dopuski: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from dopuski')
    Left = 880
    Top = 336
  end
  object Korpus: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from korpus')
    Left = 936
    Top = 336
  end
  object SqlPsiDataTempSource: TMyDataSource
    DataSet = SQLPSIDataTemp
    Left = 400
    Top = 280
  end
  object SpcTemp: TMyQuery
    Connection = CoordinatorDB
    Left = 88
    Top = 480
  end
  object rnorm: TMyQuery
    Connection = CoordinatorDB
    Left = 152
    Top = 480
  end
  object TProfile: TMyQuery
    Connection = CoordinatorDB
    Left = 216
    Top = 480
  end
  object TU1: TMyQuery
    Connection = CoordinatorDB
    Left = 304
    Top = 480
  end
  object fnorm: TMyQuery
    Connection = CoordinatorDB
    Left = 368
    Top = 592
  end
  object dopuski1: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from dopuski')
    Left = 416
    Top = 592
  end
  object fnNorm: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from dopuski')
    Left = 464
    Top = 592
  end
  object SQLPSIDataT1: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from psidatatemp')
    MasterSource = SqlPsiDataTempSource
    Left = 1064
    Top = 208
  end
  object MyConnectDialog1: TMyConnectDialog
    DatabaseLabel = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093
    PortLabel = #1055#1086#1088#1090
    SavePassword = True
    Caption = #1057#1086#1077#1076#1080#1085#1077#1085#1080#1077
    UsernameLabel = #1048#1084#1103
    PasswordLabel = #1055#1072#1088#1086#1083#1100
    ServerLabel = #1057#1077#1088#1074#1077#1088
    ConnectButton = #1057#1086#1077#1076#1080#1085#1080#1090#1100
    CancelButton = #1054#1090#1084#1077#1085#1072
    LabelSet = lsRussian
    Left = 208
    Top = 24
  end
  object fnastrnorm: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from fnastrnorm')
    Left = 512
    Top = 592
  end
  object CreateLianozTable: TMyScript
    SQL.Strings = (
      'CREATE TABLE `lianoz_new1` ('
      '  `ID` int(11) unsigned NOT NULL auto_increment,'
      '  `N` char(20) default NULL,'
      '  `Msk` char(20) default NULL,'
      '  `Operator` char(50) default NULL,'
      '  `Spc` char(50) default NULL,'
      '  `F` float(9,3) default NULL,'
      '  `R` float(9,3) default NULL,'
      '  `C0` float(9,3) default NULL,'
      '  `Cq` float(9,3) default NULL,'
      '  `RR` float(9,3) default NULL,'
      '  `Fmaxm` float(9,3) default NULL,'
      '  `Q` float(9,3) default NULL,'
      '  `Intervalfg` char(30) default NULL,'
      '  `FT` float(9,3) default NULL,'
      '  `Spur` float(9,3) default NULL,'
      '  `Slope` float(9,3) default NULL,'
      '  `Rmax` float(9,3) default NULL,'
      '  `Mono` float(9,3) default NULL,'
      '  `Shum` float(9,3) default NULL,'
      '  `RR1` float(9,3) default NULL,'
      '  `Fptp` float(9,3) default NULL,'
      '  `L` float(9,3) default NULL,'
      '  `Tmin` float(9,3) default NULL,'
      '  `Rc_Rb` float(9,3) default NULL,'
      '  `Tmax` float(9,3) default NULL,'
      '  `C0_C1` float(9,3) default NULL,'
      '  `Old` float(9,3) default NULL,'
      '  `Date` char(20) default NULL,'
      '  `NN` char(20) default NULL,'
      '  `Date1` char(20) default NULL,'
      '  `Fmax` float(9,3) default NULL,'
      '  `Fmin` float(9,3) default NULL,'
      '  `Ftgk` float(9,3) default NULL,'
      '  `Rtgk` float(9,3) default NULL,'
      '  `Measure_Protokol_ID` int(11) default NULL,'
      '  PRIMARY KEY  (`ID`),'
      '  UNIQUE KEY `ID` USING BTREE (`ID`)'
      
        ') ENGINE=MEMORY AUTO_INCREMENT=3 DEFAULT CHARSET=cp1251 MAX_ROWS' +
        '=1000 ROW_FORMAT=FIXED;')
    Connection = CoordinatorDB
    Left = 968
    Top = 456
  end
  object DropLianozTable: TMyScript
    Connection = CoordinatorDB
    Left = 1036
    Top = 456
  end
  object MeasureID: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from psi_measure_id')
    Left = 584
    Top = 592
  end
  object Transat_Temp: TMyTable
    OrderFields = 'SETPOINT,RINGID,SETUPNUM,RINGPOS'
    Connection = CoordinatorDB
    AfterCancel = ProfileDataBeforePost
    Left = 104
    Top = 328
  end
  object CreateTransatTemp: TMyScript
    Connection = CoordinatorDB
    Left = 624
    Top = 720
  end
  object DropTransatTemp: TMyScript
    Connection = CoordinatorDB
    Left = 716
    Top = 720
  end
  object CreateNumberCurrent: TMyScript
    Connection = CoordinatorDB
    Left = 968
    Top = 560
  end
  object DropNumberCurrent: TMyScript
    Connection = CoordinatorDB
    Left = 1044
    Top = 560
  end
  object CreateTransatConfig: TMyScript
    Connection = CoordinatorDB
    Left = 624
    Top = 784
  end
  object DropTransatConfig: TMyScript
    Connection = CoordinatorDB
    Left = 716
    Top = 786
  end
  object SetupDataSource: TMyDataSource
    DataSet = SQLSetupData
    Left = 496
    Top = 208
  end
  object CrystalDataSource: TMyDataSource
    DataSet = SQLCrystalData
    Left = 496
    Top = 264
  end
  object PostProcessSource: TMyDataSource
    DataSet = SQLPostProcessData
    Left = 592
    Top = 200
  end
  object TransatConfigSource: TMyDataSource
    DataSet = Config
    Left = 176
    Top = 384
  end
  object Specification_Temp: TMyQuery
    Connection = CoordinatorDB
    Left = 832
    Top = 256
  end
  object Transat_Temp1: TMyTable
    OrderFields = 'RINGID,RINGPOS,SETPOINT'
    Connection = CoordinatorDB
    AfterCancel = ProfileDataBeforePost
    Left = 104
    Top = 280
  end
  object Old_ID: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from psi_measure_old_id')
    Left = 656
    Top = 592
  end
  object nomeklatura_rk: TMyQuery
    Connection = CoordinatorDB
    Left = 376
    Top = 480
  end
  object nomeklatura_rk_psi: TMyQuery
    Connection = CoordinatorDB
    Left = 488
    Top = 480
  end
  object spc_not_inbase: TMyQuery
    Connection = CoordinatorDB
    Left = 592
    Top = 480
  end
  object tch_measure_type: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from tch_measure_type')
    Left = 104
    Top = 576
  end
  object ProfileData1: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from profiledata')
    BeforePost = ProfileDataBeforePost
    Left = 712
    Top = 480
  end
  object TCH_Approx_Type: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from spc_approx_type')
    Left = 208
    Top = 576
  end
  object TCH_Interval_Type: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from spc_interval_type')
    Left = 296
    Top = 576
  end
  object temperatureprofile: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from temperatureprofile')
    BeforePost = ProfileDataBeforePost
    Left = 536
    Top = 408
  end
  object psi_stat_1: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'select * from Psi_stat_1')
    Left = 776
    Top = 480
  end
  object CreateStatTable: TMyScript
    Connection = CoordinatorDB
    Left = 968
    Top = 416
  end
  object DropStatTable: TMyScript
    Connection = CoordinatorDB
    Left = 1012
    Top = 352
  end
  object spc_variant: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from Spc_Variant')
    Left = 728
    Top = 592
  end
  object spc_variant_data: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from spc_variant_data')
    Left = 808
    Top = 592
  end
  object UpdatePsiDatatemp: TMyCommand
    Connection = CoordinatorDB
    Left = 880
    Top = 424
  end
  object CreatePostProcessData: TMyScript
    Connection = CoordinatorDB
    Left = 1120
    Top = 416
  end
  object DropPostProcessData: TMyScript
    Connection = CoordinatorDB
    Left = 1120
    Top = 472
  end
  object CrystalDataCreate: TMyScript
    Connection = CoordinatorDB
    Left = 1208
    Top = 416
  end
  object CrystalDataDrop: TMyScript
    Connection = CoordinatorDB
    Left = 1208
    Top = 472
  end
  object SetupDataCreate: TMyScript
    Connection = CoordinatorDB
    Left = 1120
    Top = 528
  end
  object SetupDataDrop: TMyScript
    Connection = CoordinatorDB
    Left = 1120
    Top = 584
  end
  object ConfigurationCreate: TMyScript
    Connection = CoordinatorDB
    Left = 1208
    Top = 528
  end
  object ConfigurationDrop: TMyScript
    Connection = CoordinatorDB
    Left = 1208
    Top = 584
  end
  object SetupHeadersCreate: TMyScript
    Connection = CoordinatorDB
    Left = 1120
    Top = 632
  end
  object SetupHeadersDrop: TMyScript
    Connection = CoordinatorDB
    Left = 1208
    Top = 632
  end
  object SQLConfiguration_1: TMyQuery
    Connection = CoordinatorDB
    Left = 104
    Top = 160
  end
  object ConfigurationDelete: TMyScript
    Connection = CoordinatorDB
    Left = 1280
    Top = 528
  end
  object SetupHeadersDelete: TMyScript
    Connection = CoordinatorDB
    Left = 1288
    Top = 632
  end
  object SQLSetupFileHeaders_1: TMyQuery
    Connection = CoordinatorDB
    Left = 216
    Top = 168
  end
  object CrystalDataDelete: TMyScript
    Connection = CoordinatorDB
    Left = 1296
    Top = 472
  end
  object SQLCrystalData_1: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from `Crystal Data` where Name='#39'020611ch1.mdb'#39)
    Left = 1240
    Top = 112
  end
  object PostProcessDataDelete: TMyScript
    Connection = CoordinatorDB
    Left = 1120
    Top = 368
  end
  object SQLPostProcessData_1: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from `post process data` where Name='#39'020611ch1.mdb'#39)
    Left = 1248
    Top = 160
  end
  object SetupDataDelete: TMyScript
    Connection = CoordinatorDB
    Left = 1296
    Top = 584
  end
  object SQLSetupData_1: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from `Setup Data` where Name='#39'020611ch1.mdb'#39)
    Left = 1248
    Top = 224
  end
  object Version: TMyTable
    TableName = 'softversion'
    OrderFields = 'ID'
    Connection = CoordinatorDB
    Left = 296
    Top = 32
  end
  object Update_LOG: TMyCommand
    Connection = CoordinatorDB
    Left = 352
    Top = 40
  end
  object Oversight: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from ReportExport')
    Left = 1344
    Top = 112
  end
  object InsertExportReport: TMyScript
    Connection = CoordinatorDB
    Left = 1344
    Top = 168
  end
  object Email: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from ReportExport')
    Left = 1344
    Top = 232
  end
  object OSM_Solve: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select distinct(Solve_Date) from OSM_Solve')
    Left = 1192
    Top = 296
  end
  object TestTablesSQL: TMyQuery
    Connection = CoordinatorDB
    SQL.Strings = (
      'Select * from TestTablesSql')
    Left = 104
    Top = 712
  end
  object KH7700_Temp_Copy: TMyScript
    Connection = CoordinatorDB
    Left = 208
    Top = 720
  end
  object KH7700_Temp_Create: TMyScript
    Connection = CoordinatorDB
    Left = 328
    Top = 720
  end
  object KH7700_Temp_Drop: TMyScript
    Connection = CoordinatorDB
    Left = 448
    Top = 720
  end
  object TTS100_Temp_Copy: TMyScript
    Connection = CoordinatorDB
    Left = 820
    Top = 720
  end
  object KH7700_Config_Create: TMyScript
    Connection = CoordinatorDB
    Left = 320
    Top = 776
  end
  object KH7700_Config_Drop: TMyScript
    Connection = CoordinatorDB
    Left = 448
    Top = 776
  end
  object KH7700_Temp: TMyTable
    OrderFields = 'TEMP, XTALROW'
    Connection = CoordinatorDB
    AfterCancel = ProfileDataBeforePost
    Left = 928
    Top = 712
  end
  object KH7700_Config: TMyTable
    Connection = CoordinatorDB
    AfterCancel = ProfileDataBeforePost
    Left = 928
    Top = 768
  end
  object TTS100_Alter: TMyScript
    SQL.Strings = (
      'ALTER TABLE transat_temp_1'
      'ADD `Profile` VARCHAR(50) NULL;')
    Connection = CoordinatorDB
    Left = 796
    Top = 749
  end
  object KH7700_User_Config_Create: TMyScript
    SQL.Strings = (
      'CREATE TEMPORARY TABLE `KH7700_User_Config` ('
      '  `Position` VARCHAR(20) COLLATE cp1251_general_ci NOT NULL,'
      '  `Pos_Str` VARCHAR(20) COLLATE cp1251_general_ci DEFAULT NULL,'
      '  `Setup_N` INTEGER(11) DEFAULT NULL,'
      '  PRIMARY KEY USING HASH (`Position`)'
      ') ENGINE=MEMORY'
      'CHARACTER SET '#39'cp1251'#39' COLLATE '#39'cp1251_general_ci'#39';')
    Connection = CoordinatorDB
    Left = 48
    Top = 784
  end
  object KH7700_User_Config_Drop: TMyScript
    SQL.Strings = (
      'drop table if exists `KH7700_User_Config`;')
    Connection = CoordinatorDB
    Left = 192
    Top = 784
  end
  object KH7700_User_Config: TMyTable
    Connection = CoordinatorDB
    AfterCancel = ProfileDataBeforePost
    Left = 1032
    Top = 768
  end
  object KH7700_Temp_Source: TMyDataSource
    AutoEdit = False
    DataSet = KH7700_Temp
    Left = 1024
    Top = 712
  end
  object KH7700_Config_Source: TMyDataSource
    AutoEdit = False
    DataSet = KH7700_Config
    Left = 1136
    Top = 712
  end
end
