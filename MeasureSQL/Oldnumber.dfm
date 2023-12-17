object OldNForm: TOldNForm
  Left = 178
  Top = 206
  BorderStyle = bsNone
  Caption = 'OldNForm'
  ClientHeight = 612
  ClientWidth = 1001
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clYellow
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object gridNumbers: TRzDBGrid
    Left = 0
    Top = 0
    Width = 1001
    Height = 520
    Align = alClient
    Color = clBlack
    DataSource = DataModule1.NumbersSource
    FixedColor = clBlack
    ParentColor = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clYellow
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    FrameColor = clLime
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    FixedLineColor = clGreen
    LineColor = clRed
    Columns = <
      item
        Expanded = False
        FieldName = 'MSK'
        Title.Caption = #1052#1057#1050
        Width = 83
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Nominal'
        Title.Caption = #1053#1086#1084#1080#1085#1072#1083
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Name'
        Title.Caption = #1058#1080#1087' '#1080#1079#1076#1077#1083#1080#1103
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Begin'
        Title.Caption = #1053#1072#1095#1072#1083#1100#1085#1099#1081' '#1085#1086#1084#1077#1088
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'End'
        Title.Caption = #1050#1086#1085#1077#1095#1085#1099#1081' '#1085#1086#1084#1077#1088
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Number'
        Title.Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Type'
        Title.Caption = #1057#1077#1088#1080#1103
        Visible = True
      end>
  end
  object RzPanel1: TRzPanel
    Left = 0
    Top = 520
    Width = 1001
    Height = 92
    Align = alBottom
    BorderColor = clLime
    BorderHighlight = clRed
    BorderShadow = clLime
    FlatColor = clLime
    ParentColor = True
    TabOrder = 1
    object btnClose: TVrShadowButton
      Left = 897
      Top = 59
      Width = 97
      Height = 30
      Pen.Color = clRed
      Caption = 'Close'
      ParentFont = True
      OnClick = btnCloseClick
    end
    object Label1: TLabel
      Left = 608
      Top = 8
      Width = 63
      Height = 13
      Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clLime
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object btnSet: TVrShadowButton
      Left = 9
      Top = 22
      Width = 97
      Height = 30
      Caption = 'Set'
      ParentFont = True
    end
    object btnNew: TVrShadowButton
      Left = 113
      Top = 22
      Width = 97
      Height = 30
      Pen.Color = clYellow
      Caption = 'New'
      ParentFont = True
      OnClick = btnNewClick
    end
    object btnRefresh: TVrShadowButton
      Left = 217
      Top = 22
      Width = 97
      Height = 30
      Pen.Color = clYellow
      Caption = 'Refresh'
      ParentFont = True
      OnClick = btnRefreshClick
    end
    object VrProgressBar1: TVrProgressBar
      Left = 8
      Top = 64
      Width = 881
      Height = 16
      Bevel.InnerShadow = clBtnShadow
      Bevel.InnerHighlight = clBtnHighlight
      Bevel.InnerWidth = 1
      Bevel.InnerStyle = bsNone
      Bevel.InnerSpace = 0
      Bevel.InnerColor = clBtnFace
      Bevel.OuterShadow = clBtnShadow
      Bevel.OuterHighlight = clBtnHighlight
      Bevel.OuterStyle = bsLowered
      Bevel.OuterOutline = osNone
      Position = 0
    end
    object btnF1: TVrPowerButton
      Left = 736
      Top = 24
      Width = 125
      Height = 25
      Palette.Low = clMaroon
      Palette.High = clLime
      OutlineColor = clLime
      HighlightColor = clLime
      ShadowColor = clLime
      Caption = #1048#1079#1084#1077#1088#1077#1085#1085#1099#1077'    '
      ParentColor = True
      TabOrder = 0
      OnClick = btnF1Click
    end
    object btnF2: TVrPowerButton
      Left = 872
      Top = 24
      Width = 125
      Height = 25
      Active = True
      Palette.Low = clMaroon
      Palette.High = clLime
      OutlineColor = clLime
      HighlightColor = clLime
      ShadowColor = clLime
      Caption = #1053#1077' '#1080#1079#1084#1077#1088#1077#1085#1085#1099#1077
      ParentColor = True
      TabOrder = 1
      OnClick = btnF2Click
    end
    object btnF3: TVrPowerButton
      Left = 600
      Top = 24
      Width = 125
      Height = 25
      Palette.Low = clMaroon
      Palette.High = clLime
      OutlineColor = clLime
      HighlightColor = clLime
      ShadowColor = clLime
      Caption = #1042#1089#1077'                    '
      Color = clBlack
      TabOrder = 2
      OnClick = btnF3Click
    end
    object navigatorNumber: TRzDBNavigator
      Left = 328
      Top = 22
      Width = 250
      Height = 25
      DataSource = DataModule1.NumbersSource
      Enabled = False
      TabOrder = 3
      Color = clBlack
    end
  end
end
