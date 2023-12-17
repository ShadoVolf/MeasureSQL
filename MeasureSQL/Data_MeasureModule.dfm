object Data_Measure: TData_Measure
  OldCreateOrder = False
  Left = 549
  Top = 350
  Height = 363
  Width = 474
  object Insert_PSI: TMyScript
    Connection = DataModule1.CoordinatorDB
    UseOptimization = True
    Left = 42
    Top = 24
  end
  object SqlSpecification: TMyTable
    TableName = 'specification'
    OrderFields = 'Name'
    Connection = DataModule1.CoordinatorDB
    Left = 272
    Top = 24
  end
end
