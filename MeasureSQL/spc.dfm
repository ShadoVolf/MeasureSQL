object SpcForm: TSpcForm
  Left = 249
  Top = 110
  Width = 1026
  Height = 678
  Caption = #1057#1087#1080#1089#1086#1082' '#1089#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1081
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
  object gridSpc: TRzDBGrid
    Left = 0
    Top = 0
    Width = 1010
    Height = 584
    Align = alClient
    Color = clBlack
    DataSource = DataModule1.SpecificationSource
    FixedColor = clBlack
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clLime
    Font.Height = -11
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = True
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWhite
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnDblClick = btnDetailClick
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    FixedLineColor = clLime
    LineColor = clRed
    Columns = <
      item
        Expanded = False
        FieldName = 'Name'
        Title.Caption = #1053#1072#1079#1074#1072#1085#1080#1077
        Title.Color = clLime
        Width = 159
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'NameR'
        Title.Caption = #1058#1080#1087
        Title.Color = clLime
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Type'
        Title.Caption = #1050#1086#1088#1087#1091#1089
        Title.Color = clLime
        Width = 88
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Nominal'
        Title.Color = clLime
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'LoadType'
        Title.Caption = #1058#1080#1087' '#1080#1079#1084#1077#1088#1077#1085#1080#1081
        Title.Color = clLime
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Loadvalue'
        Title.Caption = #1047#1085#1072#1095#1077#1085#1080#1077' '#1077#1084#1082#1086#1089#1090#1080
        Title.Color = clLime
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Profile'
        Title.Caption = #1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1099
        Title.Color = clLime
        Width = 104
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Power'
        Title.Caption = #1052#1086#1097#1085#1086#1089#1090#1100
        Title.Color = clLime
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'String'
        Title.Caption = #1059#1089#1090#1072#1085#1086#1074#1086#1095#1085#1099#1081' '#1092#1072#1081#1083
        Title.Color = clLime
        Width = 112
        Visible = True
      end>
  end
  object RzPanel1: TRzPanel
    Left = 0
    Top = 584
    Width = 1010
    Height = 55
    Align = alBottom
    BorderColor = clLime
    BorderHighlight = clLime
    BorderWidth = 2
    Color = clBlack
    TabOrder = 1
    object btnClose: TAdvGlassButton
      Left = 929
      Top = 15
      Width = 72
      Height = 32
      BackColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ForeColor = clWhite
      GlowColor = 16760205
      InnerBorderColor = clBlack
      OuterBorderColor = clWhite
      ParentFont = False
      ShineColor = clWhite
      TabOrder = 0
      Version = '1.2.3.0'
      OnClick = btnCloseClick
    end
    object btnNew: TAdvGlassButton
      Left = 633
      Top = 15
      Width = 72
      Height = 32
      BackColor = clAqua
      Caption = #1053#1086#1074#1072#1103' '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ForeColor = clWhite
      GlowColor = 16760205
      InnerBorderColor = clBlack
      OuterBorderColor = clWhite
      ParentFont = False
      ShineColor = clWhite
      TabOrder = 1
      Version = '1.2.3.0'
      OnClick = btnNewClick
    end
    object btnSet: TAdvGlassButton
      Left = 849
      Top = 15
      Width = 72
      Height = 32
      BackColor = clLime
      Caption = #1059#1089#1090#1072#1085#1086#1074#1080#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ForeColor = clWhite
      GlowColor = 16760205
      InnerBorderColor = clBlack
      OuterBorderColor = clWhite
      ParentFont = False
      ShineColor = clWhite
      TabOrder = 2
      Version = '1.2.3.0'
      OnClick = btnSetClick
    end
    object btnSearch: TAdvGlassButton
      Left = 713
      Top = 15
      Width = 72
      Height = 32
      BackColor = clYellow
      Caption = #1055#1086#1080#1089#1082
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ForeColor = clWhite
      GlowColor = 16760205
      InnerBorderColor = clBlack
      OuterBorderColor = clWhite
      ParentFont = False
      ShineColor = clWhite
      TabOrder = 3
      Version = '1.2.3.0'
      OnClick = btnSearchClick
    end
    object btnDetail: TAdvGlassButton
      Left = 537
      Top = 15
      Width = 88
      Height = 32
      BackColor = clPurple
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ForeColor = clWhite
      GlowColor = 16760205
      InnerBorderColor = clBlack
      OuterBorderColor = clWhite
      ParentFont = False
      ShineColor = clWhite
      TabOrder = 4
      Version = '1.2.3.0'
      OnClick = btnDetailClick
    end
    object btnRefresh: TAdvGlassButton
      Left = 457
      Top = 15
      Width = 72
      Height = 32
      BackColor = clYellow
      Caption = #1054#1073#1085#1086#1074#1080#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ForeColor = clWhite
      GlowColor = 16760205
      InnerBorderColor = clBlack
      OuterBorderColor = clWhite
      ParentFont = False
      ShineColor = clWhite
      TabOrder = 5
      Version = '1.2.3.0'
      OnClick = btnRefreshClick
    end
    object btnTemperature: TAdvGlassButton
      Left = 361
      Top = 15
      Width = 88
      Height = 32
      BackColor = clPurple
      Caption = #1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1099
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ForeColor = clWhite
      GlowColor = 16760205
      InnerBorderColor = clBlack
      OuterBorderColor = clWhite
      ParentFont = False
      ShineColor = clWhite
      TabOrder = 6
      Version = '1.2.3.0'
      OnClick = btnTemperatureClick
    end
    object navigatorSpc: TDBAdvNavigator
      Left = 16
      Top = 14
      Width = 330
      Height = 27
      AutoThemeAdapt = False
      DataSource = DataModule1.SpecificationSource
      VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbEdit, nbPost, nbCancel, nbRefresh, nbSetBookmark, nbGotoBookMark]
      BorderColor = clRed
      BorderHotColor = clRed
      Color = clBlack
      ColorTo = clNone
      ColorDown = clLime
      ColorDownTo = clLime
      ColorHot = clRed
      ColorHotTo = clRed
      DeleteDisabled = False
      InsertDisabled = False
      GlyphSize = gsSmall
      GlyphCustomSize = 0
      Orientation = noHorizontal
      TabOrder = 7
      Version = '1.3.1.1'
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 176
    Top = 176
    object Set1: TMenuItem
      Caption = 'Set'
      OnClick = btnSetClick
    end
  end
end
