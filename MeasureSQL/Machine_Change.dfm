object Machine_Change_Form: TMachine_Change_Form
  Left = 739
  Top = 309
  Width = 343
  Height = 410
  Caption = #1047#1072#1084#1077#1085#1072' '#1085#1086#1084#1077#1088#1072' '#1091#1089#1090#1072#1085#1086#1074#1082#1080
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label11: TLabel
    Left = 8
    Top = 192
    Width = 88
    Height = 13
    Caption = #1042#1099#1073#1086#1088' '#1091#1089#1090#1072#1085#1086#1074#1082#1080
  end
  object Label12: TLabel
    Left = 8
    Top = 260
    Width = 89
    Height = 13
    Caption = #1042#1099#1073#1086#1088' '#1086#1087#1077#1088#1072#1090#1086#1088#1072
  end
  object Label9: TLabel
    Left = 8
    Top = 16
    Width = 121
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
  end
  object Label3: TLabel
    Left = 8
    Top = 72
    Width = 23
    Height = 13
    Caption = #1052#1057#1050
  end
  object Label2: TLabel
    Left = 8
    Top = 120
    Width = 75
    Height = 13
    Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
  end
  object btnRec: TAdvGlassButton
    Left = 8
    Top = 329
    Width = 73
    Height = 32
    BackColor = clLime
    Caption = #1047#1072#1087#1080#1089#1100
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
    Visible = False
    OnClick = btnRecClick
  end
  object btnClose: TAdvGlassButton
    Left = 240
    Top = 329
    Width = 79
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
    TabOrder = 1
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object SN: TRzComboBox
    Left = 8
    Top = 216
    Width = 249
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 2
    Items.Strings = (
      '599571'
      '599614'
      '599642'
      '72739'
      '73179'
      '76648')
  end
  object edtOperator: TRzComboBox
    Left = 8
    Top = 284
    Width = 305
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 3
    Items.Strings = (
      '599571'
      '599614'
      '599642'
      '72739'
      '73179'
      '76648')
  end
  object cmb_ID: TRzComboBox
    Left = 8
    Top = 40
    Width = 121
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 4
    OnKeyPress = cmb_IDKeyPress
  end
  object edtMsk: TRzComboBox
    Left = 8
    Top = 88
    Width = 169
    Height = 21
    Color = clInactiveCaption
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    ReadOnly = True
    Sorted = True
    TabOrder = 5
  end
  object edtSpc: TRzComboBox
    Left = 6
    Top = 144
    Width = 233
    Height = 21
    Color = clInactiveCaption
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clActiveCaption
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    ReadOnly = True
    Sorted = True
    TabOrder = 6
  end
end
