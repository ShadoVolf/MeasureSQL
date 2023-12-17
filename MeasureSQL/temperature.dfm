object TemperatureForm: TTemperatureForm
  Left = 355
  Top = 304
  BorderStyle = bsNone
  Caption = 'TemperatureForm'
  ClientHeight = 401
  ClientWidth = 522
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object btnClose: TVrShadowButton
    Left = 376
    Top = 366
    Width = 129
    Height = 30
    Pen.Color = clRed
    Caption = 'Close'
    ParentFont = True
    OnClick = btnCloseClick
  end
  object btnNew: TVrShadowButton
    Left = 376
    Top = 323
    Width = 129
    Height = 30
    Pen.Color = clYellow
    Caption = 'New'
    ParentFont = True
    Visible = False
    OnClick = btnNewClick
  end
  object btnClear: TVrShadowButton
    Left = 376
    Top = 291
    Width = 129
    Height = 30
    Pen.Color = clYellow
    Caption = 'Clear'
    ParentFont = True
    Visible = False
    OnClick = btnClearClick
  end
  object RzDBGrid1: TRzDBGrid
    Left = 0
    Top = 0
    Width = 361
    Height = 401
    Align = alLeft
    Color = clBlack
    DataSource = DataModule1.ProfileDataSource
    FixedColor = clBlack
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clLime
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    FixedLineColor = clRed
    LineColor = clRed
    Columns = <
      item
        Expanded = False
        FieldName = 'ProfileIndex'
        Title.Caption = 'ID'
        Width = 66
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'N'
        Title.Caption = #1053#1086#1084#1077#1088' '#1090#1086#1095#1082#1080
        Width = 79
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Temperature'
        Title.Caption = #1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1072
        Width = 75
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Time'
        Title.Caption = #1042#1099#1076#1077#1088#1078#1082#1072', '#1084#1080#1085
        Width = 100
        Visible = True
      end>
  end
  object RzDBEdit1: TRzDBEdit
    Left = 376
    Top = 8
    Width = 121
    Height = 21
    DataSource = DataModule1.ProfileDataSource
    DataField = 'Name'
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    FrameColor = clLime
    FrameHotColor = clGreen
    FrameHotTrack = True
    FrameVisible = True
    ParentFont = False
    TabOrder = 1
  end
  object RzDBNavigator1: TRzDBNavigator
    Left = 376
    Top = 40
    Width = 120
    Height = 25
    DataSource = DataModule1.ProfileDataSource
    VisibleButtons = [nbInsert, nbDelete, nbEdit, nbPost, nbCancel, nbRefresh]
    TabOrder = 2
    Visible = False
    Color = clBlack
  end
  object RzMemo1: TRzMemo
    Left = 376
    Top = 80
    Width = 129
    Height = 201
    Color = clBlack
    TabOrder = 3
    Visible = False
    FrameColor = clTeal
    FrameHotColor = clLime
    FrameHotTrack = True
    FrameVisible = True
  end
end
