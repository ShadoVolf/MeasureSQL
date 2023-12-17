object TempDataModule: TTempDataModule
  OldCreateOrder = False
  Left = 397
  Top = 228
  Height = 255
  Width = 358
  object Chambers: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from machine_chambers')
    Left = 64
    Top = 80
  end
  object TermoDatchik: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from termo_datchik')
    Left = 128
    Top = 80
  end
  object Machine: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from machines')
    Left = 192
    Top = 80
  end
  object TermoDatchikData: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from termo_datchik_data')
    Left = 256
    Top = 80
  end
end
