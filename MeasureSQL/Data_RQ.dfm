object RQ_Data: TRQ_Data
  OldCreateOrder = False
  Left = 2402
  Top = 275
  Height = 339
  Width = 1083
  object ResonatorTypes: TMyTable
    TableName = 'resonatorType_RQ'
    Connection = DataModule1.CoordinatorDB
    Left = 48
    Top = 24
  end
  object Spc_RQ: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 128
    Top = 24
  end
  object ResType: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 184
    Top = 24
  end
  object MSK_JOIN: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 264
    Top = 24
  end
  object Marker: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 40
    Top = 96
  end
  object MSK_RQ: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 128
    Top = 96
  end
  object Psi_Numbers: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 208
    Top = 96
  end
  object InsertMSKJoin: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 290
    Top = 96
  end
  object DeleteMSK_RQ: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 42
    Top = 160
  end
  object UpdateMSK_RQ: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 290
    Top = 152
  end
  object Insert_PSI_Journal: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 458
    Top = 32
  end
  object Psi: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 536
    Top = 32
  end
  object Stat: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 584
    Top = 32
  end
  object User: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 624
    Top = 32
  end
  object Machines: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 664
    Top = 32
  end
  object LotNumbers: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 816
    Top = 32
  end
  object Insert_LOT_RQ: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 890
    Top = 32
  end
end
