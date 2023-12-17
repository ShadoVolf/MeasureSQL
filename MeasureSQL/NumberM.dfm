object NumberMForm: TNumberMForm
  Left = 676
  Top = 248
  Width = 479
  Height = 805
  Caption = #1053#1086#1084#1077#1088#1072
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
  object Label9: TLabel
    Left = 150
    Top = 24
    Width = 53
    Height = 13
    Caption = 'ID '#1047#1072#1084#1077#1088#1072
  end
  object RzPanel1: TRzPanel
    Left = 0
    Top = 121
    Width = 265
    Height = 645
    Align = alLeft
    BorderColor = clLime
    BorderHighlight = clHighlight
    Color = clBlack
    TabOrder = 0
    object gridNumbers: TRzStringGrid
      Left = 2
      Top = 2
      Width = 261
      Height = 641
      Align = alClient
      Color = clBlack
      ColCount = 3
      FixedColor = clBlack
      FixedCols = 2
      RowCount = 30
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      ParentColor = True
      ScrollBars = ssVertical
      TabOrder = 0
      OnKeyPress = gridNumbersKeyPress
      DisabledColor = clMaroon
      FrameColor = clWindowText
      FrameHotColor = clRed
      FixedLineColor = clRed
      LineColor = clLime
      RowHeights = (
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18
        18)
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 0
    Width = 463
    Height = 121
    Align = alTop
    ParentColor = True
    TabOrder = 1
    object Label1: TLabel
      Left = 14
      Top = 16
      Width = 23
      Height = 13
      Caption = #1052#1057#1050
    end
    object Label2: TLabel
      Left = 206
      Top = 16
      Width = 30
      Height = 13
      Caption = #1042#1089#1077#1075#1086
    end
    object Label3: TLabel
      Left = 326
      Top = 16
      Width = 29
      Height = 13
      Caption = #1060#1072#1081#1083
    end
    object VrProgressBar1: TVrProgressBar
      Left = 16
      Top = 96
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
      ParentColor = True
    end
    object Label8: TLabel
      Left = 134
      Top = 16
      Width = 53
      Height = 13
      Caption = 'ID '#1047#1072#1084#1077#1088#1072
    end
    object Label10: TLabel
      Left = 16
      Top = 72
      Width = 84
      Height = 13
      Caption = #1053#1086#1084#1077#1088' '#1082#1086#1085#1074#1077#1088#1090#1072
    end
    object Label11: TLabel
      Left = 256
      Top = 72
      Width = 79
      Height = 13
      Caption = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100
    end
    object edtMSK: TRzEdit
      Left = 16
      Top = 36
      Width = 97
      Height = 21
      Color = clBlack
      DisabledColor = clBlack
      FrameColor = clLime
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ParentColor = True
      TabOrder = 0
      OnKeyPress = edtMSKKeyPress
    end
    object edtAll: TRzEdit
      Left = 200
      Top = 36
      Width = 57
      Height = 21
      Color = clBlack
      DisabledColor = clBlack
      FrameColor = clRed
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ParentColor = True
      TabOrder = 1
    end
    object edtFile: TRzEdit
      Left = 272
      Top = 36
      Width = 161
      Height = 21
      Color = clBlack
      DisabledColor = clBlack
      FrameColor = clRed
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ParentColor = True
      TabOrder = 2
    end
    object edtM: TRzComboBox
      Left = 392
      Top = 4
      Width = 49
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
      TabOrder = 3
      Text = '0'
      Visible = False
      Items.Strings = (
        '0'
        '1'
        '2'
        '3'
        '4'
        '5'
        '6'
        '7')
      ItemIndex = 0
    end
    object edtID: TRzEdit
      Left = 128
      Top = 36
      Width = 65
      Height = 21
      Color = clBlack
      DisabledColor = clBlack
      FrameColor = clRed
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ReadOnly = True
      ReadOnlyColor = clBlack
      TabOrder = 4
    end
    object edtKonvert: TRzEdit
      Left = 128
      Top = 64
      Width = 121
      Height = 21
      Color = clBlack
      FrameColor = clLime
      FrameVisible = True
      TabOrder = 5
    end
    object edtFactory: TRzComboBox
      Left = 344
      Top = 64
      Width = 89
      Height = 21
      Color = clBlack
      Ctl3D = False
      FlatButtonColor = clLime
      FlatButtons = True
      FrameColor = clYellow
      FrameHotTrack = True
      FrameVisible = True
      ItemHeight = 13
      ParentCtl3D = False
      TabOrder = 6
    end
  end
  object RzPanel3: TRzPanel
    Left = 265
    Top = 121
    Width = 198
    Height = 645
    Align = alRight
    ParentColor = True
    TabOrder = 2
    object Label4: TLabel
      Left = 14
      Top = 8
      Width = 31
      Height = 13
      Caption = #1057#1077#1088#1080#1103
    end
    object Label5: TLabel
      Left = 14
      Top = 128
      Width = 92
      Height = 13
      Caption = #1053#1072#1095#1072#1083#1100#1085#1099#1081' '#1085#1086#1084#1077#1088
    end
    object Label6: TLabel
      Left = 14
      Top = 224
      Width = 100
      Height = 13
      Caption = #1053#1072#1095#1072#1083#1100#1085#1072#1103' '#1087#1086#1079#1080#1094#1080#1103
    end
    object Label7: TLabel
      Left = 14
      Top = 312
      Width = 93
      Height = 13
      Caption = #1050#1086#1085#1077#1095#1085#1072#1103' '#1087#1086#1079#1080#1094#1080#1103
    end
    object edtFirstPosition: TRzComboBox
      Left = 12
      Top = 248
      Width = 109
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
      TabOrder = 0
    end
    object edtEndPosition: TRzComboBox
      Left = 12
      Top = 344
      Width = 109
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
      TabOrder = 1
    end
    object edtSerial: TRzEdit
      Left = 12
      Top = 32
      Width = 109
      Height = 21
      Color = clBlack
      DisabledColor = clBlack
      FrameColor = clYellow
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ParentColor = True
      TabOrder = 2
    end
    object edtBegin: TRzEdit
      Left = 12
      Top = 152
      Width = 109
      Height = 21
      Color = clBlack
      DisabledColor = clBlack
      FrameColor = clYellow
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ParentColor = True
      TabOrder = 3
    end
    object btnSerial: TRzButton
      Left = 136
      Top = 32
      Width = 41
      Height = 21
      FrameColor = clRed
      Caption = '<<'
      HighlightColor = clMaroon
      HotTrack = True
      HotTrackColor = clMaroon
      HotTrackColorType = htctComplement
      ParentColor = True
      TabOrder = 4
      OnClick = btnSerialClick
    end
    object btnNumber: TRzButton
      Left = 136
      Top = 152
      Width = 41
      Height = 21
      FrameColor = clRed
      Caption = '<<'
      HighlightColor = clMaroon
      HotTrack = True
      HotTrackColor = clMaroon
      HotTrackColorType = htctComplement
      ParentColor = True
      TabOrder = 5
      OnClick = btnNumberClick
    end
    object btnClose: TAdvGlassButton
      Left = 32
      Top = 600
      Width = 137
      Height = 30
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
      TabOrder = 6
      Version = '1.2.3.0'
      OnClick = btnCloseClick
    end
    object btnClear: TAdvGlassButton
      Left = 32
      Top = 536
      Width = 137
      Height = 30
      BackColor = clAqua
      Caption = #1054#1095#1080#1089#1090#1080#1090#1100
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
      TabOrder = 7
      Version = '1.2.3.0'
      OnClick = btnClearClick
    end
    object btnSet: TAdvGlassButton
      Left = 32
      Top = 392
      Width = 137
      Height = 30
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
      TabOrder = 8
      Version = '1.2.3.0'
      OnClick = btnSetClick
    end
    object btnLoad: TAdvGlassButton
      Left = 32
      Top = 496
      Width = 137
      Height = 30
      BackColor = clAqua
      Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100
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
      OnClick = btnLoadClick
    end
    object btnCurrent: TAdvGlassButton
      Left = 32
      Top = 456
      Width = 137
      Height = 30
      BackColor = clAqua
      Caption = #1058#1077#1082#1091#1097#1080#1077
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
      OnClick = btnCurrentClick
    end
    object iiBox: TCheckBox
      Left = 12
      Top = 72
      Width = 121
      Height = 17
      Caption = #1042#1093#1086#1076#1085#1086#1081' '#1082#1086#1085#1090#1088#1086#1083#1100
      TabOrder = 11
    end
  end
  object ActionList1: TActionList
    Left = 280
    Top = 216
    object BarCode_MSK: TAction
      Caption = 'BarCode_MSK'
      OnExecute = BarCode_MSKExecute
    end
    object Get_MSK_NUMBERS: TAction
      Caption = 'Get_MSK_NUMBERS'
      OnExecute = Get_MSK_NUMBERSExecute
    end
    object SetNumbers: TAction
      Caption = 'SetNumbers'
      OnExecute = SetNumbersExecute
    end
  end
end
