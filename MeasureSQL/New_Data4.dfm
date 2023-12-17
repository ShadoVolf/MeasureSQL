object New_Data: TNew_Data
  OldCreateOrder = False
  Left = 482
  Top = 307
  Height = 388
  Width = 518
  object MachineType: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from resonatortype')
    Left = 24
    Top = 24
  end
  object MSK_RQ: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 88
    Top = 24
  end
  object Spc_RQ: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 152
    Top = 24
  end
  object MSK_RQ_PSI: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 224
    Top = 24
  end
  object UpdateMSK_RQ: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 26
    Top = 104
  end
  object Update_Transat: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 146
    Top = 104
  end
  object Update_PSI: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 226
    Top = 104
  end
end
