object OptionsGraphForm: TOptionsGraphForm
  Left = 786
  Top = 356
  BorderStyle = bsNone
  Caption = 'OptionsGraphForm'
  ClientHeight = 460
  ClientWidth = 416
  Color = clSkyBlue
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 95
    Height = 13
    Caption = #1057#1090#1077#1087#1077#1085#1100' '#1087#1086#1083#1080#1085#1086#1084#1072
  end
  object btnClose: TRzButton
    Left = 318
    Top = 432
    Width = 91
    FrameColor = clRed
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Color = clSkyBlue
    HotTrack = True
    HotTrackColor = clRed
    TabOrder = 0
    OnClick = btnCloseClick
  end
  object RzSpinEdit1: TRzSpinEdit
    Left = 120
    Top = 8
    Width = 47
    Height = 21
    Max = 10
    Min = 1
    Value = 3
    FlatButtons = True
    FrameHotTrack = True
    FrameVisible = True
    TabOrder = 1
  end
  object RzRadioGroup1: TRzRadioGroup
    Left = 8
    Top = 40
    Width = 161
    Height = 113
    Caption = #1058#1080#1087' '#1072#1087#1087#1088#1086#1082#1089#1080#1084#1072#1094#1080#1080
    Color = clSkyBlue
    FlatColor = clLime
    TabOrder = 2
    object Polinom: TRzRadioButton
      Left = 6
      Top = 24
      Width = 115
      Height = 17
      Caption = #1055#1086#1083#1080#1085#1086#1084#1080#1072#1083#1100#1085#1072#1103
      Checked = True
      HotTrack = True
      TabOrder = 0
      TabStop = True
    end
    object Spline: TRzRadioButton
      Left = 6
      Top = 40
      Width = 147
      Height = 17
      Caption = #1050#1091#1073#1080#1095#1077#1089#1082#1080#1081' '#1089#1087#1083#1072#1081#1085
      HotTrack = True
      TabOrder = 1
    end
    object LSpline: TRzRadioButton
      Left = 6
      Top = 56
      Width = 115
      Height = 17
      Caption = #1051#1080#1085#1077#1081#1085#1099#1081' '#1089#1087#1083#1072#1081#1085
      HotTrack = True
      TabOrder = 2
    end
  end
  object RzCheckBox2: TRzCheckBox
    Left = 176
    Top = 48
    Width = 161
    Height = 17
    Caption = #1055#1077#1095#1072#1090#1100' '#1074#1089#1077#1093' '#1075#1088#1072#1092#1080#1082#1086#1074' '#1052#1057#1050
    Color = clSkyBlue
    ParentColor = False
    State = cbUnchecked
    TabOrder = 3
  end
  object AllInOne: TRzCheckBox
    Left = 176
    Top = 104
    Width = 169
    Height = 17
    Caption = #1042#1089#1077' '#1085#1086#1084#1077#1088#1072' '#1085#1072' '#1086#1076#1080#1085' '#1075#1088#1072#1092#1080#1082
    State = cbUnchecked
    TabOrder = 4
  end
  object RzCheckBox3: TRzCheckBox
    Left = 232
    Top = 72
    Width = 105
    Height = 17
    Caption = #1055#1077#1095#1072#1090#1100' '#1074' '#1092#1072#1081#1083
    Color = clSkyBlue
    ParentColor = False
    State = cbUnchecked
    TabOrder = 5
  end
  object RzGroupBox1: TRzGroupBox
    Left = 8
    Top = 160
    Width = 161
    Height = 169
    BorderColor = clRed
    Caption = #1055#1088#1077#1076#1077#1083#1099
    Color = clSkyBlue
    FlatColor = clRed
    TabOrder = 6
    object Label2: TLabel
      Left = 8
      Top = 24
      Width = 15
      Height = 13
      Caption = #1054#1058
    end
    object Label3: TLabel
      Left = 8
      Top = 64
      Width = 17
      Height = 13
      Caption = #1044#1054
    end
    object Label4: TLabel
      Left = 8
      Top = 112
      Width = 72
      Height = 13
      Caption = #1054#1090#1085#1086#1089#1080#1090#1077#1083#1100#1085#1086
    end
    object edtA: TRzComboBox
      Left = 64
      Top = 40
      Width = 81
      Height = 21
      Ctl3D = False
      FrameColor = clLime
      FrameHotTrack = True
      FrameVisible = True
      ItemHeight = 13
      ParentCtl3D = False
      TabOrder = 0
      OnChange = edtAChange
    end
    object edtB: TRzComboBox
      Left = 64
      Top = 80
      Width = 81
      Height = 21
      Ctl3D = False
      FrameColor = clRed
      FrameHotTrack = True
      FrameVisible = True
      ItemHeight = 13
      ParentCtl3D = False
      TabOrder = 1
      OnChange = edtBChange
    end
    object edtT: TRzComboBox
      Left = 64
      Top = 128
      Width = 81
      Height = 21
      Ctl3D = False
      FrameColor = clYellow
      FrameHotTrack = True
      FrameVisible = True
      ItemHeight = 13
      ParentCtl3D = False
      TabOrder = 2
    end
  end
  object edtMSK: TRzCheckBox
    Left = 176
    Top = 128
    Width = 169
    Height = 17
    Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1085#1086#1084#1077#1088' '#1052#1057#1050
    Checked = True
    State = cbChecked
    TabOrder = 7
  end
  object Mono: TRzCheckBox
    Left = 176
    Top = 152
    Width = 169
    Height = 17
    Caption = #1056#1072#1089#1095#1080#1090#1099#1074#1072#1090#1100' '#1084#1086#1085#1086#1090#1086#1085#1085#1086#1089#1090#1100
    Checked = True
    State = cbChecked
    TabOrder = 8
  end
  object Jump: TRzCheckBox
    Left = 176
    Top = 192
    Width = 169
    Height = 17
    Caption = #1056#1072#1089#1095#1080#1090#1099#1074#1072#1090#1100' '#1089#1082#1072#1095#1086#1082
    State = cbUnchecked
    TabOrder = 9
  end
  object RzCheckBox6: TRzCheckBox
    Left = 176
    Top = 232
    Width = 169
    Height = 17
    Caption = #1056#1072#1089#1095#1080#1090#1099#1074#1072#1090#1100' '#1085#1072#1082#1083#1086#1085
    State = cbUnchecked
    TabOrder = 10
  end
  object edtP: TRzCheckBox
    Left = 176
    Top = 304
    Width = 193
    Height = 17
    Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1087#1086#1088#1103#1076#1086#1082' '#1087#1086#1083#1080#1085#1086#1084#1072
    Checked = True
    State = cbChecked
    TabOrder = 11
  end
  object addMono: TRzCheckBox
    Left = 208
    Top = 168
    Width = 145
    Height = 17
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1072' '#1075#1088#1072#1092#1080#1082
    Color = clSkyBlue
    ParentColor = False
    State = cbUnchecked
    TabOrder = 12
  end
  object addJump: TRzCheckBox
    Left = 208
    Top = 208
    Width = 145
    Height = 17
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1072' '#1075#1088#1072#1092#1080#1082
    Color = clSkyBlue
    ParentColor = False
    State = cbUnchecked
    TabOrder = 13
  end
  object chk_coef: TRzCheckBox
    Left = 176
    Top = 328
    Width = 246
    Height = 17
    Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1082#1086#1101#1092#1092#1080#1094#1080#1077#1085#1090#1099' '#1087#1086#1083#1080#1085#1086#1084#1072
    State = cbUnchecked
    TabOrder = 14
  end
  object ShowApp: TRzCheckBox
    Left = 176
    Top = 352
    Width = 226
    Height = 17
    Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1072#1087#1088#1086#1082#1089#1080#1084#1072#1094#1080#1102
    Checked = True
    State = cbChecked
    TabOrder = 15
  end
  object ShowMeasure: TRzCheckBox
    Left = 176
    Top = 376
    Width = 226
    Height = 17
    Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1091#1079#1083#1099
    Checked = True
    State = cbChecked
    TabOrder = 16
  end
  object OnlyGood: TRzCheckBox
    Left = 178
    Top = 400
    Width = 226
    Height = 17
    Caption = #1058#1086#1083#1100#1082#1086' '#1075#1086#1076#1085#1099#1077
    Checked = True
    State = cbChecked
    TabOrder = 17
  end
  object TmaxCh: TRzCheckBox
    Left = 176
    Top = 256
    Width = 217
    Height = 17
    Caption = #1056#1072#1089#1095#1080#1090#1099#1074#1072#1090#1100' '#1074#1077#1088#1093#1085#1080#1081' '#1101#1082#1089#1090#1088#1077#1084#1091#1084
    State = cbUnchecked
    TabOrder = 18
  end
  object TminCh: TRzCheckBox
    Left = 176
    Top = 280
    Width = 217
    Height = 17
    Caption = #1056#1072#1089#1095#1080#1090#1099#1074#1072#1090#1100' '#1085#1080#1078#1085#1080#1081' '#1101#1082#1089#1090#1088#1077#1084#1091#1084
    State = cbUnchecked
    TabOrder = 19
  end
end
