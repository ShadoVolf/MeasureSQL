object DataModule2: TDataModule2
  OldCreateOrder = False
  Left = 226
  Top = 199
  Height = 726
  Width = 1022
  object SqlSpec: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from specification where ID='#39'15678'#39)
    AutoCalcFields = False
    Left = 88
    Top = 104
  end
  object ProtokolType: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from protokoltype')
    Left = 168
    Top = 104
  end
  object psi: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psi')
    Left = 232
    Top = 104
  end
  object psiData: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata where Measure_ID='#39'161359'#39' order by N')
    Options.FullRefresh = True
    Options.UpdateAllFields = True
    DetailFields = 'N'
    Left = 776
    Top = 152
  end
  object Print: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select SQL_NO_CACHE * from print_data')
    Left = 32
    Top = 168
  end
  object ResonatorType: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from resonatortype order by Type')
    Left = 96
    Top = 168
  end
  object Lianoz: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from lianoz_new_')
    RefreshOptions = [roAfterInsert, roAfterUpdate, roBeforeEdit]
    AutoCalcFields = False
    Options.FullRefresh = True
    Options.StrictUpdate = False
    Options.UpdateAllFields = True
    DetailFields = 'N'
    Left = 896
    Top = 168
  end
  object Profile: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from temperatureprofile order by name')
    Left = 216
    Top = 168
  end
  object SQLNominal: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from nominal')
    Left = 336
    Top = 104
  end
  object PsiData1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata')
    Left = 776
    Top = 208
  end
  object old: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from old where msk='#39'4-13-1312-3'#39)
    BeforePost = oldBeforePost
    Left = 232
    Top = 48
  end
  object OldSource: TMyDataSource
    DataSet = old
    Left = 280
    Top = 48
  end
  object psiDataTemp: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Filter = 'Status1 like '#39#1043#1086#1076#1077#1085#39
    MasterSource = psiDataSource
    MasterFields = 'N'
    DetailFields = 'N'
    Left = 496
    Top = 104
  end
  object psiDataSource: TMyDataSource
    DataSet = psiData
    Left = 96
    Top = 48
  end
  object psiDataTemp2: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidatatemp where msk='#39'ter1'#39)
    MasterSource = psiDataSource2
    MasterFields = 'N'
    Left = 560
    Top = 40
  end
  object psiData2: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata')
    DetailFields = 'N'
    Left = 784
    Top = 256
  end
  object psiDataSource2: TMyDataSource
    DataSet = psiData2
    Left = 472
    Top = 48
  end
  object psiDataTemp3: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidatatemp')
    Left = 568
    Top = 104
  end
  object psiData3: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata')
    BeforeDelete = psiData3BeforeDelete
    Left = 784
    Top = 104
  end
  object Source1: TMyDataSource
    DataSet = psiDataTemp3
    Left = 768
    Top = 352
  end
  object Source2: TMyDataSource
    DataSet = psiData3
    Left = 776
    Top = 400
  end
  object SetSqlDate: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 344
    Top = 48
  end
  object dopuski: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from dopuski')
    DetailFields = 'N'
    Left = 416
    Top = 168
  end
  object TU: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from tu')
    AutoCalcFields = False
    DetailFields = 'N'
    Left = 376
    Top = 168
  end
  object Comand: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 176
    Top = 48
  end
  object sqlssss: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata where msk='#39'ter1'#39)
    Left = 312
    Top = 232
  end
  object Protokol_Measure_ID: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select SQL_NO_CACHE * from psi_measure_protokol_id')
    DetailFields = 'N'
    Left = 416
    Top = 216
  end
  object Protokol_Archive: TMyQuery
    Connection = DataModule1.CoordinatorDB
    DetailFields = 'N'
    Left = 528
    Top = 216
  end
  object Temp_psiData5: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata where msk='#39'ter1'#39)
    DetailFields = 'N'
    Left = 40
    Top = 232
  end
  object Temp_psiData_Fields: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'SHOW COLUMNS FROM psidata')
    DetailFields = 'N'
    Left = 136
    Top = 232
  end
  object MeasureID: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_measure_id')
    Left = 248
    Top = 228
  end
  object psiData4: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata where msk='#39'5-13-43_1`'#39)
    DetailFields = 'N'
    Left = 280
    Top = 304
  end
  object Marker: TMyQuery
    Connection = DataModule1.CoordinatorDB
    DetailFields = 'N'
    Left = 336
    Top = 304
  end
  object Machine: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from machines where Function='#39'Measure'#39)
    DetailFields = 'N'
    Left = 216
    Top = 304
  end
  object MSK: TMyQuery
    Connection = DataModule1.CoordinatorDB
    DetailFields = 'N'
    Left = 384
    Top = 304
  end
  object Number_ID: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_number_id')
    DetailFields = 'N'
    Left = 440
    Top = 304
  end
  object Nomenklatura_RK_PSI: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from nomeklatura_rk_psi')
    MasterSource = DataModule1.CrystalDataSource
    DetailFields = 'N'
    Left = 576
    Top = 304
  end
  object Nomenklatura_RK: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from nomeklatura_rk_psi')
    DetailFields = 'N'
    Left = 592
    Top = 352
  end
  object Statistika: TMyQuery
    Connection = DataModule1.CoordinatorDB
    DetailFields = 'N'
    Left = 208
    Top = 400
  end
  object Parameters: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from spc_auto_norm_parameters')
    DetailFields = 'N'
    Left = 280
    Top = 400
  end
  object Coddificator: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_codificator')
    DetailFields = 'N'
    Left = 344
    Top = 400
  end
  object Journal: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_codificator')
    DetailFields = 'N'
    Left = 400
    Top = 400
  end
  object Ugol: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_codificator')
    DetailFields = 'N'
    Left = 448
    Top = 400
  end
  object Print_Files: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from print_files')
    DetailFields = 'N'
    Left = 208
    Top = 456
  end
  object Spc_Temp: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from specification where ID='#39'1306'#39)
    Left = 160
    Top = 312
  end
  object PhazeNoise: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from Phaze_Noise where MSK='#39'18-803'#39' order by N')
    DetailFields = 'N'
    Left = 280
    Top = 456
  end
  object PhazeNoiseData: TMyQuery
    Connection = DataModule1.CoordinatorDB
    DetailFields = 'N'
    Left = 368
    Top = 456
  end
  object PHUser: TMyQuery
    Connection = DataModule1.CoordinatorDB
    DetailFields = 'N'
    Left = 448
    Top = 456
  end
  object PhazeNoise1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from Phaze_Noise')
    DetailFields = 'N'
    Left = 504
    Top = 456
  end
  object Temp_psiDataTemp_FIelds: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'SHOW COLUMNS FROM psidatatemp')
    DetailFields = 'N'
    Left = 56
    Top = 296
  end
  object PhazeNoise_data: TMyDataSource
    DataSet = PhazeNoise
    Left = 576
    Top = 464
  end
  object psi_par_data_temp: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data_temp')
    DetailFields = 'N'
    Left = 120
    Top = 408
  end
  object psi_par_id: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_ID')
    DetailFields = 'N'
    Left = 120
    Top = 368
  end
  object psi_par_data: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data')
    DetailFields = 'N'
    Left = 32
    Top = 480
  end
  object psi_par_data_temp_1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data_temp')
    DetailFields = 'N'
    Left = 120
    Top = 480
  end
  object psi_par_data_1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data')
    DetailFields = 'N'
    Left = 32
    Top = 440
  end
  object psi_par_data_2: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data')
    DetailFields = 'N'
    Left = 32
    Top = 400
  end
  object psi_par_data_4: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data_2')
    DetailFields = 'N'
    Left = 32
    Top = 360
  end
  object psi_par_data_print: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data')
    DetailFields = 'N'
    Left = 256
    Top = 552
  end
  object psi_par_data_2_print: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psi_par_data_2')
    DetailFields = 'N'
    Left = 144
    Top = 552
  end
  object psi_stat_1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from Psi_stat_1')
    AutoCalcFields = False
    Left = 392
    Top = 552
  end
  object CreatePhazeNoise: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 528
    Top = 568
  end
  object CreatePhazeNoiseData: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 632
    Top = 568
  end
  object DropPhazeNoise: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 528
    Top = 624
  end
  object DropPhazeNoiseData: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 632
    Top = 624
  end
  object SqlSpecTemp: TMyQuery
    Connection = DataModule1.CoordinatorDB
    AutoCalcFields = False
    Left = 40
    Top = 568
  end
  object PhazeNoise_ID: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from Phaze_Noise_ID order by ID')
    DetailFields = 'N'
    Left = 264
    Top = 608
  end
  object UpdatePH: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 736
    Top = 568
  end
  object UpdatePSI: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 829
    Top = 582
  end
  object Factory: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select SQL_NO_CACHE * from Factory_name')
    Left = 672
    Top = 240
  end
  object psiDataTemp4: TMyQuery
    Connection = DataModule1.CoordinatorDB
    CachedUpdates = True
    Left = 632
    Top = 48
  end
  object psidataTCHGraph: TMyQuery
    Connection = DataModule1.CoordinatorDB
    CachedUpdates = True
    Left = 64
    Top = 656
  end
  object GR_TCH: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata_TCH_graphics')
    AutoCalcFields = False
    BeforeDelete = psiData3BeforeDelete
    Left = 352
    Top = 664
  end
  object ULN: TMyQuery
    Connection = DataModule1.CoordinatorDB
    AutoCalcFields = False
    BeforeDelete = psiData3BeforeDelete
    Left = 416
    Top = 664
  end
  object MyQuery2: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidata')
    AutoCalcFields = False
    BeforeDelete = psiData3BeforeDelete
    Left = 1000
    Top = 160
  end
  object OperatorLogin: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      
        'select ID,Name from `'#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1080'` where AccessLevel < '#39'6'#39' order' +
        ' by `Name`')
    MasterSource = psiDataSource2
    MasterFields = 'N'
    Left = 728
    Top = 48
  end
  object LianozDataSource: TMyDataSource
    DataSet = Lianoz
    Left = 840
    Top = 56
  end
  object psiDataTemp5: TMyQuery
    Connection = DataModule1.CoordinatorDB
    CachedUpdates = True
    MasterSource = LianozDataSource
    MasterFields = 'N'
    DetailFields = 'N'
    Left = 944
    Top = 56
  end
  object Protokol_Measure_ID_Edit: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psi_measure_protokol_id')
    DetailFields = 'N'
    Left = 936
    Top = 288
  end
  object proverka_ph: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from `Phase_Noise_Proverka`')
    Filter = 'Status1 like '#39#1043#1086#1076#1077#1085#39
    MasterSource = psiDataSource
    MasterFields = 'N'
    Left = 936
    Top = 344
  end
  object Protokol_Archive_1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from `Phase_Noise_Proverka`')
    Filter = 'Status1 like '#39#1043#1086#1076#1077#1085#39
    MasterSource = psiDataSource
    MasterFields = 'N'
    Left = 936
    Top = 392
  end
  object Protokol_Measure_ID_Read: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psi_measure_protokol_id')
    Left = 936
    Top = 456
  end
  object Protokol_Archive_Count: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from `Phase_Noise_Proverka`')
    Filter = 'Status1 like '#39#1043#1086#1076#1077#1085#39
    MasterSource = psiDataSource
    MasterFields = 'N'
    Left = 936
    Top = 528
  end
  object TU_Parameters: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from TU_Parameters where ID='#39'1'#39)
    Left = 1088
    Top = 288
  end
  object Notification: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from `'#1048#1079#1074#1077#1097#1077#1085#1080#1077'` where `Name`='#39'1046'#39)
    Left = 1168
    Top = 288
  end
  object Machines_Names: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from nominal')
    Left = 648
    Top = 168
  end
  object UpdattePsiDataMachine: TMyCommand
    Connection = DataModule1.CoordinatorDB
    Left = 917
    Top = 582
  end
end
