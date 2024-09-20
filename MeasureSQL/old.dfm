object OldForm: TOldForm
  Left = 601
  Top = 355
  BorderStyle = bsSingle
  Caption = #1056#1072#1089#1095#1077#1090' '#1091#1093#1086#1076#1086#1074'  '#1095#1072#1089#1090#1086#1090#1099
  ClientHeight = 414
  ClientWidth = 435
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
  object Label2: TLabel
    Left = 16
    Top = 48
    Width = 81
    Height = 13
    Caption = #1058#1080#1087' '#1088#1077#1079#1086#1085#1072#1090#1086#1088#1072
  end
  object Label1: TLabel
    Left = 24
    Top = 96
    Width = 75
    Height = 13
    Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
  end
  object Label3: TLabel
    Left = 312
    Top = 96
    Width = 23
    Height = 13
    Caption = #1052#1057#1050
  end
  object Label4: TLabel
    Left = 56
    Top = 8
    Width = 33
    Height = 13
    Caption = #1047#1072#1084#1077#1088
  end
  object VrProgressBar1: TVrProgressBar
    Left = 16
    Top = 328
    Width = 417
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
    Smooth = True
  end
  object Label5: TLabel
    Left = 16
    Top = 264
    Width = 160
    Height = 13
    Caption = #1058#1080#1087' '#1090#1077#1084#1087#1077#1088#1072#1090#1091#1088#1085#1086#1075#1086' '#1080#1085#1090#1077#1088#1074#1072#1083#1072
  end
  object Label6: TLabel
    Left = 16
    Top = 288
    Width = 104
    Height = 13
    Caption = #1045#1076#1080#1085#1080#1094#1099' '#1080#1079#1084#1077#1088#1077#1085#1080#1103
  end
  object Label9: TLabel
    Left = 16
    Top = 160
    Width = 121
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
  end
  object edtType: TRzComboBox
    Left = 16
    Top = 64
    Width = 97
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtons = True
    FrameColor = clAqua
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    TabOrder = 0
    OnChange = edtTypeChange
  end
  object edtSpc: TRzComboBox
    Left = 16
    Top = 112
    Width = 273
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtons = True
    FrameColor = clFuchsia
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    TabOrder = 1
    OnChange = edtSpcChange
  end
  object edtMsk: TRzComboBox
    Left = 304
    Top = 112
    Width = 121
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    TabOrder = 2
    OnChange = edtMskChange
  end
  object edtMeasure: TRzComboBox
    Left = 16
    Top = 24
    Width = 121
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    TabOrder = 3
    OnChange = edtMeasureChange
    Items.Strings = (
      '['#1047#1072#1084#1077#1088' 1]'
      #1047#1072#1084#1077#1088' 2'
      #1047#1072#1084#1077#1088' 3'
      #1047#1072#1084#1077#1088' 4'
      #1047#1072#1084#1077#1088' 5')
  end
  object edTemp: TRzComboBox
    Left = 224
    Top = 256
    Width = 73
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    TabOrder = 4
    Text = '1*T1,n*T2'
    OnChange = edtMeasureChange
    Items.Strings = (
      '1*T1,n*T2'
      'n*T1')
    ItemIndex = 0
  end
  object edtEdMes: TRzComboBox
    Left = 224
    Top = 288
    Width = 73
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentCtl3D = False
    TabOrder = 5
    Text = 'ppm'
    OnChange = edtMeasureChange
    Items.Strings = (
      'ppm'
      '1E7'
      '1E8'
      'ppb')
    ItemIndex = 0
  end
  object btnClose: TAdvGlassButton
    Left = 328
    Top = 358
    Width = 100
    Height = 32
    BackColor = clRed
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
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
    OnClick = btnCloseClick
  end
  object btnRec: TAdvGlassButton
    Left = 16
    Top = 358
    Width = 100
    Height = 32
    BackColor = clLime
    Caption = #1047#1072#1087#1080#1089#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 7
    Version = '1.2.3.0'
    OnClick = btnRecClick
  end
  object cmb_ID: TRzComboBox
    Left = 16
    Top = 176
    Width = 97
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
    TabOrder = 8
    OnKeyPress = cmb_IDKeyPress
  end
  object btnBarCode: TAdvGlassButton
    Left = 312
    Top = 166
    Width = 113
    Height = 32
    BackColor = clPurple
    Caption = #1064#1090#1088#1080#1093' '#1082#1086#1076' '#1052#1057#1050
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
    TabOrder = 9
    Version = '1.2.3.0'
    OnClick = btnBarCodeClick
  end
  object btnLoad: TAdvGlassButton
    Left = 224
    Top = 214
    Width = 113
    Height = 32
    BackColor = clYellow
    Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1076#1072#1085#1085#1099#1077
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
    TabOrder = 10
    Version = '1.2.3.0'
    OnClick = btnLoadClick
  end
  object btnView: TAdvGlassButton
    Left = 344
    Top = 214
    Width = 81
    Height = 32
    BackColor = clLime
    Caption = #1055#1088#1086#1089#1084#1086#1090#1088
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
    TabOrder = 11
    Version = '1.2.3.0'
    OnClick = btnViewClick
  end
  object btnNumbers: TAdvGlassButton
    Left = 16
    Top = 214
    Width = 81
    Height = 32
    BackColor = clRed
    Caption = #1053#1086#1084#1077#1088#1072
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
    TabOrder = 12
    Version = '1.2.3.0'
    OnClick = btnNumbersClick
  end
  object RadioGroup1: TRadioGroup
    Left = 272
    Top = 16
    Width = 161
    Height = 73
    Caption = #1056#1072#1089#1087#1086#1083#1086#1078#1077#1085#1080#1077' '#1088#1077#1079#1086#1085#1072#1090#1086#1088#1086#1074
    ItemIndex = 0
    Items.Strings = (
      #1050#1072#1082' '#1085#1072' '#1055#1057#1048
      #1055#1086' '#1087#1086#1088#1103#1076#1082#1091)
    TabOrder = 13
    Visible = False
  end
  object btnPsi: TRzCheckBox
    Left = 152
    Top = 24
    Width = 115
    Height = 17
    Caption = #1055#1086#1089#1083#1077' '#1055#1057#1048
    State = cbUnchecked
    TabOrder = 14
    OnClick = RzCheckBox1Click
  end
  object btnGood: TRzCheckBox
    Left = 152
    Top = 48
    Width = 115
    Height = 17
    Caption = #1058#1086#1083#1100#1082#1086' '#1043#1086#1076#1085#1099#1077
    State = cbUnchecked
    TabOrder = 15
    Visible = False
  end
  object btnRecPsi: TAdvGlassButton
    Left = 328
    Top = 278
    Width = 100
    Height = 32
    BackColor = clFuchsia
    Caption = #1047#1072#1087#1080#1089#1100' '#1074' '#1055#1057#1048
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 16
    Version = '1.2.3.0'
    OnClick = btnRecPsiClick
  end
end
