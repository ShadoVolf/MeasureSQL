object archivedata: Tarchivedata
  OldCreateOrder = False
  Left = 774
  Top = 431
  Height = 201
  Width = 336
  object PSIData: TMyQuery
    Connection = DataModule1.CoordinatorDB
    DetailFields = 'N'
    Left = 96
    Top = 24
  end
  object PSIDataTemp: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from psidatatemp where Measure_ID='#39'91468'#39)
    MasterSource = MyDataSource1
    MasterFields = 'N'
    DetailFields = 'N'
    Left = 184
    Top = 24
    ParamData = <
      item
        DataType = ftUnknown
        Name = 'N'
      end>
  end
  object MyDataSource1: TMyDataSource
    DataSet = PSIData1
    Left = 24
    Top = 72
  end
  object PSIData1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from psidata where Measure_ID='#39'9899'#39)
    Left = 24
    Top = 24
  end
end
