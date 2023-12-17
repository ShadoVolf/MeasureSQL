object SortResultForm: TSortResultForm
  Left = 427
  Top = 40
  BorderIcons = []
  BorderStyle = bsNone
  Caption = 'SortResult'
  ClientHeight = 535
  ClientWidth = 590
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
  object Label1: TLabel
    Left = 16
    Top = 24
    Width = 416
    Height = 20
    Caption = #1057#1086#1074#1084#1077#1097#1077#1085#1080#1077' '#1088#1077#1079#1091#1083#1100#1090#1072#1090#1086#1074' '#1080#1079#1084#1077#1088#1077#1085#1080#1081' '#1074' '#1086#1076#1080#1085' '#1087#1088#1086#1090#1086#1082#1086#1083
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 96
    Width = 160
    Height = 13
    Caption = #1047#1072#1084#1077#1088' '#1074' '#1080#1085#1090#1077#1088#1074#1072#1083#1077' '#1090#1077#1084#1087#1077#1088#1072#1090#1091#1088
  end
  object Label3: TLabel
    Left = 16
    Top = 248
    Width = 172
    Height = 13
    Caption = #1047#1072#1084#1077#1088' '#1085#1072' '#1090#1077#1084#1087#1077#1088#1072#1090#1091#1088#1077' '#1085#1072#1089#1090#1088#1086#1081#1082#1080
  end
  object Label4: TLabel
    Left = 16
    Top = 384
    Width = 48
    Height = 13
    Caption = #1057#1090#1072#1088#1077#1085#1080#1077
  end
  object Label6: TLabel
    Left = 16
    Top = 120
    Width = 75
    Height = 13
    Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
  end
  object Label7: TLabel
    Left = 16
    Top = 168
    Width = 23
    Height = 13
    Caption = #1052#1057#1050
  end
  object Label9: TLabel
    Left = 16
    Top = 264
    Width = 75
    Height = 13
    Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
  end
  object Label10: TLabel
    Left = 16
    Top = 312
    Width = 23
    Height = 13
    Caption = #1052#1057#1050
  end
  object Label12: TLabel
    Left = 16
    Top = 408
    Width = 23
    Height = 13
    Caption = #1052#1057#1050
  end
  object VrProgressBar1: TVrProgressBar
    Left = 16
    Top = 472
    Width = 561
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
  object Label13: TLabel
    Left = 296
    Top = 176
    Width = 121
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
  end
  object Label14: TLabel
    Left = 296
    Top = 320
    Width = 121
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
  end
  object Label15: TLabel
    Left = 360
    Top = 408
    Width = 121
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
  end
  object Label5: TLabel
    Left = 16
    Top = 48
    Width = 81
    Height = 13
    Caption = #1058#1080#1087' '#1088#1077#1079#1086#1085#1072#1090#1086#1088#1072
  end
  object Label8: TLabel
    Left = 360
    Top = 440
    Width = 133
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088'  '#1089#1090#1072#1088#1077#1085#1080#1103
  end
  object Panel1: TPanel
    Left = -8
    Top = 232
    Width = 601
    Height = 1
    Color = clRed
    TabOrder = 0
  end
  object Panel2: TPanel
    Left = -3
    Top = 376
    Width = 596
    Height = 1
    Color = clRed
    TabOrder = 1
  end
  object Panel3: TPanel
    Left = -3
    Top = 464
    Width = 593
    Height = 3
    Color = clRed
    TabOrder = 2
  end
  object RadioGroup1: TRadioGroup
    Left = 192
    Top = 384
    Width = 161
    Height = 73
    Caption = #1057#1090#1072#1088#1077#1085#1080#1077
    TabOrder = 3
  end
  object edtS1: TRadioButton
    Left = 208
    Top = 400
    Width = 113
    Height = 17
    Caption = #1057#1090#1072#1088#1077#1085#1080#1077' 1'
    Checked = True
    TabOrder = 4
    TabStop = True
  end
  object edtS2: TRadioButton
    Left = 208
    Top = 416
    Width = 113
    Height = 17
    Caption = #1057#1090#1072#1088#1077#1085#1080#1077' 2'
    TabOrder = 5
  end
  object edtS3: TRadioButton
    Left = 208
    Top = 432
    Width = 113
    Height = 17
    Caption = #1057#1090#1072#1088#1077#1085#1080#1077' 3'
    TabOrder = 6
  end
  object chkUse1: TCheckBox
    Left = 488
    Top = 240
    Width = 97
    Height = 17
    Caption = #1048#1089#1087#1086#1083#1100#1079#1086#1074#1072#1090#1100
    TabOrder = 7
  end
  object chkUse2: TCheckBox
    Left = 488
    Top = 384
    Width = 97
    Height = 17
    Caption = #1048#1089#1087#1086#1083#1100#1079#1086#1074#1072#1090#1100
    TabOrder = 8
  end
  object cmb_ID: TRzComboBox
    Left = 296
    Top = 192
    Width = 129
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
    TabOrder = 9
    OnKeyPress = cmb_IDKeyPress
  end
  object cmb_ID1: TRzComboBox
    Left = 296
    Top = 336
    Width = 129
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
    TabOrder = 10
    OnKeyPress = cmb_ID1KeyPress
  end
  object cmb_ID2: TRzComboBox
    Left = 504
    Top = 408
    Width = 81
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
    TabOrder = 11
    OnKeyPress = cmb_ID2KeyPress
  end
  object edtType: TRzComboBox
    Left = 16
    Top = 72
    Width = 105
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
    OnChange = edtTypeChange
  end
  object edtSpc: TRzComboBox
    Left = 16
    Top = 136
    Width = 265
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
    OnChange = edtSpcChange
  end
  object edtMsk: TRzComboBox
    Left = 16
    Top = 192
    Width = 169
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
    OnKeyPress = edtMskKeyPress
  end
  object edtSpc1: TRzComboBox
    Left = 16
    Top = 288
    Width = 265
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
    OnChange = edtSpc1Change
  end
  object edtMsk1: TRzComboBox
    Left = 16
    Top = 336
    Width = 169
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
    TabOrder = 16
    OnChange = edtMsk1Change
    OnKeyPress = edtMsk1KeyPress
  end
  object edtMsk2: TRzComboBox
    Left = 16
    Top = 432
    Width = 169
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
    OnChange = edtMsk2Change
    OnKeyPress = edtMsk2KeyPress
  end
  object btnClose: TAdvGlassButton
    Left = 480
    Top = 496
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
    TabOrder = 18
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object AdvGlassButton1: TAdvGlassButton
    Left = 16
    Top = 495
    Width = 100
    Height = 32
    BackColor = clLime
    Caption = #1057#1086#1074#1084#1077#1089#1090#1080#1090#1100
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
    TabOrder = 19
    Version = '1.2.3.0'
    OnClick = btnSetClick
  end
  object cmb_id3: TRzComboBox
    Left = 504
    Top = 440
    Width = 81
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
    TabOrder = 20
    OnKeyPress = cmb_id3KeyPress
  end
end
