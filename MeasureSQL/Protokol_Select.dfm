object Protokol_Select_Form: TProtokol_Select_Form
  Left = 786
  Top = 106
  BorderStyle = bsSingle
  Caption = #1055#1086#1076#1073#1086#1088' '#1087#1088#1086#1090#1086#1082#1086#1083#1086#1074
  ClientHeight = 629
  ClientWidth = 389
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
  object Label1: TLabel
    Left = 24
    Top = 16
    Width = 61
    Height = 13
    Caption = #1048#1084#1103' '#1085#1072#1073#1086#1088#1072
  end
  object Label2: TLabel
    Left = 24
    Top = 88
    Width = 108
    Height = 13
    Caption = #1055#1088#1086#1090#1086#1082#1086#1083' '#1080#1079#1084#1077#1088#1077#1085#1080#1081
  end
  object Label3: TLabel
    Left = 24
    Top = 112
    Width = 74
    Height = 13
    Caption = #1055#1088#1086#1090#1086#1082#1086#1083' '#1054#1058#1050
  end
  object Label4: TLabel
    Left = 24
    Top = 144
    Width = 59
    Height = 13
    Caption = #1056#1072#1089#1087#1077#1095#1072#1090#1082#1072
  end
  object Label5: TLabel
    Left = 24
    Top = 176
    Width = 67
    Height = 13
    Caption = #1055#1088#1086#1090#1086#1082#1086#1083' '#1042#1055
  end
  object Label6: TLabel
    Left = 24
    Top = 208
    Width = 130
    Height = 13
    Caption = #1055#1088#1086#1090#1086#1082#1086#1083' '#1042#1055'  '#1073#1077#1079' '#1079#1072#1087#1072#1089#1072
  end
  object Label8: TLabel
    Left = 24
    Top = 240
    Width = 48
    Height = 13
    Caption = #1057#1090#1072#1088#1077#1085#1080#1077
  end
  object Label9: TLabel
    Left = 24
    Top = 272
    Width = 71
    Height = 13
    Caption = #1055#1072#1089#1087#1086#1088#1090' '#1055#1052#1048
  end
  object Label10: TLabel
    Left = 24
    Top = 304
    Width = 43
    Height = 13
    Caption = #1055#1072#1089#1087#1086#1088#1090
  end
  object Label11: TLabel
    Left = 24
    Top = 336
    Width = 90
    Height = 13
    Caption = #1055#1088#1086#1090#1086#1082#1086#1083' '#1042#1055' ('#1056#1050')'
  end
  object Label12: TLabel
    Left = 24
    Top = 368
    Width = 114
    Height = 13
    Caption = #1055#1072#1089#1087#1086#1088#1090' ('#1087#1088#1080#1083#1086#1078#1077#1085#1080#1077')'
  end
  object Label13: TLabel
    Left = 24
    Top = 400
    Width = 99
    Height = 13
    Caption = #1055#1088#1086#1090#1086#1082#1086#1083' '#1042#1055' ('#1055#1057#1048')'
  end
  object Label14: TLabel
    Left = 24
    Top = 432
    Width = 91
    Height = 13
    Caption = #1056#1072#1089#1087#1077#1095#1072#1090#1082#1072' ('#1055#1057#1048')'
  end
  object Label15: TLabel
    Left = 24
    Top = 464
    Width = 47
    Height = 13
    Caption = #1069#1090#1080#1082#1077#1090#1082#1072
  end
  object Label16: TLabel
    Left = 24
    Top = 496
    Width = 64
    Height = 13
    Caption = #1069#1090#1080#1082#1077#1090#1082#1072' '#1056#1050
  end
  object Label7: TLabel
    Left = 24
    Top = 528
    Width = 73
    Height = 13
    Caption = #1056#1072#1076#1080#1091#1089' '#1089#1092#1077#1088#1099
  end
  object btnClose: TAdvGlassButton
    Left = 288
    Top = 584
    Width = 84
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
  object edtName: TRzComboBox
    Left = 16
    Top = 40
    Width = 353
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 1
    OnChange = edtNameChange
  end
  object RzComboBox1: TRzComboBox
    Left = 192
    Top = 80
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 2
  end
  object RzComboBox2: TRzComboBox
    Left = 192
    Top = 112
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 3
  end
  object RzComboBox3: TRzComboBox
    Left = 192
    Top = 144
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 4
  end
  object RzComboBox4: TRzComboBox
    Left = 192
    Top = 176
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 5
  end
  object RzComboBox5: TRzComboBox
    Left = 192
    Top = 208
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 6
  end
  object RzComboBox7: TRzComboBox
    Left = 192
    Top = 240
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 7
  end
  object RzComboBox8: TRzComboBox
    Left = 192
    Top = 272
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 8
  end
  object RzComboBox9: TRzComboBox
    Left = 192
    Top = 304
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 9
  end
  object RzComboBox10: TRzComboBox
    Left = 192
    Top = 336
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 10
  end
  object RzComboBox11: TRzComboBox
    Left = 192
    Top = 368
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 11
  end
  object RzComboBox12: TRzComboBox
    Left = 192
    Top = 400
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 12
  end
  object RzComboBox13: TRzComboBox
    Left = 192
    Top = 432
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 13
  end
  object RzComboBox14: TRzComboBox
    Left = 192
    Top = 464
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 14
  end
  object RzComboBox15: TRzComboBox
    Left = 192
    Top = 496
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 15
  end
  object AdvGlassButton1: TAdvGlassButton
    Left = 24
    Top = 584
    Width = 84
    Height = 32
    BackColor = clTeal
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
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
    TabOrder = 16
    Version = '1.2.3.0'
    OnClick = AdvGlassButton1Click
  end
  object RzComboBox6: TRzComboBox
    Left = 192
    Top = 528
    Width = 177
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 17
  end
end
