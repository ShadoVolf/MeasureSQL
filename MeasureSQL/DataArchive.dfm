object ArchiveForm: TArchiveForm
  Left = 190
  Top = 61
  Width = 1092
  Height = 621
  Caption = #1040#1088#1093#1080#1074
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
  object PanelData: TPanel
    Left = 425
    Top = 0
    Width = 147
    Height = 544
    Align = alLeft
    Color = clBlack
    TabOrder = 0
    object Label5: TLabel
      Left = 7
      Top = 8
      Width = 26
      Height = 13
      Caption = #1044#1072#1090#1072
    end
    object viewDate: TRzCheckList
      Left = 1
      Top = 161
      Width = 145
      Height = 382
      ItemFillColor = clYellow
      ItemFocusColor = clSkyBlue
      TransparentColor = clBlack
      Align = alBottom
      Color = clBlack
      FrameColor = clLime
      FrameHotColor = clRed
      FrameHotTrack = True
      FrameVisible = True
      HorzExtent = 21
      HorzScrollBar = True
      ItemHeight = 17
      ParentColor = True
      Sorted = True
      TabOrder = 0
      UseGradients = False
    end
    object btnSortByDate: TRzButton
      Left = 96
      Top = 8
      Width = 41
      Height = 17
      FrameColor = clLime
      Caption = '<<'
      HighlightColor = clMaroon
      HotTrack = True
      HotTrackColor = clMaroon
      HotTrackColorType = htctComplement
      ParentColor = True
      TabOrder = 1
      OnClick = btnSortByDateClick
    end
  end
  object MskPanel: TPanel
    Left = 0
    Top = 0
    Width = 185
    Height = 544
    Align = alLeft
    Color = clBlack
    TabOrder = 1
    object Label1: TLabel
      Left = 16
      Top = 8
      Width = 23
      Height = 13
      Caption = #1052#1057#1050
    end
    object viewMSK: TRzCheckList
      Left = 1
      Top = 161
      Width = 183
      Height = 382
      ItemFillColor = clYellow
      ItemFocusColor = clSkyBlue
      TransparentColor = clBlack
      Align = alBottom
      Color = clBlack
      FrameColor = clLime
      FrameHotColor = clRed
      FrameHotTrack = True
      FrameVisible = True
      HorzExtent = 21
      HorzScrollBar = True
      ItemHeight = 17
      ParentColor = True
      Sorted = True
      TabOrder = 0
      UseGradients = False
      OnClick = viewMSKClick
    end
    object btnMSK: TRzButton
      Left = 128
      Top = 8
      Width = 41
      Height = 17
      FrameColor = clLime
      Caption = '<<'
      HighlightColor = clMaroon
      HotTrack = True
      HotTrackColor = clMaroon
      HotTrackColorType = htctComplement
      ParentColor = True
      TabOrder = 1
      OnClick = btnMSKClick
    end
    object edtSearch: TRzEdit
      Left = 8
      Top = 32
      Width = 105
      Height = 21
      Color = clBlack
      FrameColor = clRed
      FrameHotColor = clRed
      FrameVisible = True
      TabOrder = 2
      OnKeyPress = edtSearchKeyPress
    end
    object btnSeacrh: TRzButton
      Left = 8
      Top = 64
      Width = 49
      Caption = #1055#1086#1080#1089#1082
      Color = clBlack
      HotTrack = True
      TextShadowColor = clGradientActiveCaption
      TabOrder = 3
      OnClick = btnSeacrhClick
    end
  end
  object TypePanel: TPanel
    Left = 185
    Top = 0
    Width = 240
    Height = 544
    Align = alLeft
    Color = clBlack
    TabOrder = 2
    object Label2: TLabel
      Left = 8
      Top = 8
      Width = 75
      Height = 13
      Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
    end
    object viewType: TRzCheckList
      Left = 1
      Top = 161
      Width = 238
      Height = 382
      ItemFillColor = clYellow
      ItemFocusColor = clSkyBlue
      TransparentColor = clBlack
      Align = alBottom
      Color = clBlack
      FrameColor = clLime
      FrameHotColor = clRed
      FrameHotTrack = True
      FrameVisible = True
      HorzExtent = 21
      HorzScrollBar = True
      ItemHeight = 17
      ParentColor = True
      Sorted = True
      TabOrder = 0
      UseGradients = False
      OnClick = viewTypeClick
    end
    object btnType: TRzButton
      Left = 168
      Top = 8
      Width = 41
      Height = 17
      FrameColor = clLime
      Caption = '<<'
      HighlightColor = clMaroon
      HotTrack = True
      HotTrackColor = clMaroon
      HotTrackColorType = htctComplement
      ParentColor = True
      TabOrder = 1
      OnClick = btnTypeClick
    end
  end
  object FilePanel: TPanel
    Left = 572
    Top = 0
    Width = 155
    Height = 544
    Align = alLeft
    Color = clBlack
    TabOrder = 3
    object Label3: TLabel
      Left = 12
      Top = 8
      Width = 29
      Height = 13
      Caption = #1060#1072#1081#1083
    end
    object viewFile: TRzCheckList
      Left = 1
      Top = 161
      Width = 153
      Height = 382
      ItemFillColor = clYellow
      ItemFocusColor = clSkyBlue
      TransparentColor = clBlack
      Align = alBottom
      Color = clBlack
      FrameColor = clLime
      FrameHotColor = clRed
      FrameHotTrack = True
      FrameVisible = True
      HorzExtent = 21
      HorzScrollBar = True
      ItemHeight = 17
      ParentColor = True
      Sorted = True
      TabOrder = 0
      UseGradients = False
      OnClick = viewFileClick
    end
    object RzButton3: TRzButton
      Left = 104
      Top = 8
      Width = 41
      Height = 17
      Hint = #1042#1099#1074#1086#1076' '#1074#1089#1077#1093' '#1092#1072#1081#1083#1086#1074
      FrameColor = clLime
      Caption = '<<'
      HighlightColor = clMaroon
      HotTrack = True
      HotTrackColor = clMaroon
      HotTrackColorType = htctComplement
      ParentColor = True
      TabOrder = 1
      OnClick = RzButton3Click
    end
  end
  object NumbersPanel: TPanel
    Left = 727
    Top = 0
    Width = 185
    Height = 544
    Align = alLeft
    Color = clBlack
    TabOrder = 4
    object Label4: TLabel
      Left = 9
      Top = 8
      Width = 40
      Height = 13
      Caption = #1053#1086#1084#1077#1088#1072
    end
    object viewNumbers: TRzCheckList
      Left = 1
      Top = 161
      Width = 183
      Height = 382
      ItemFillColor = clYellow
      ItemFocusColor = clSkyBlue
      TransparentColor = clBlack
      Align = alBottom
      Color = clBlack
      FrameColor = clLime
      FrameHotColor = clRed
      FrameHotTrack = True
      FrameVisible = True
      HorzExtent = 21
      HorzScrollBar = True
      ItemHeight = 17
      ParentColor = True
      Sorted = True
      TabOrder = 0
      UseGradients = False
      OnClick = viewNumbersClick
    end
  end
  object OptionsPanel: TPanel
    Left = 912
    Top = 0
    Width = 145
    Height = 544
    Align = alLeft
    Color = clBlack
    TabOrder = 5
    object Label9: TLabel
      Left = 14
      Top = 104
      Width = 75
      Height = 13
      Caption = #1053#1086#1084#1077#1088' '#1079#1072#1084#1077#1088#1072
    end
    object btnSearch: TVrShadowButton
      Left = 24
      Top = 376
      Width = 97
      Height = 30
      Pen.Color = clYellow
      Caption = #1055#1086#1080#1089#1082
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clYellow
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      OnClick = btnSearchClick
    end
    object btnDelete2: TVrShadowButton
      Left = 24
      Top = 312
      Width = 97
      Height = 30
      Pen.Color = clPurple
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1085#1086#1084#1077#1088#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clPurple
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      OnClick = btnDelete2Click
    end
    object btnDelete: TVrShadowButton
      Left = 24
      Top = 344
      Width = 97
      Height = 30
      Pen.Color = clPurple
      Caption = 'Delete'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clPurple
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      OnClick = btnDeleteClick
    end
    object btnClose: TVrShadowButton
      Left = 24
      Top = 443
      Width = 97
      Height = 30
      Pen.Color = clRed
      Caption = 'Close'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      OnClick = btnCloseClick
    end
    object btnTable: TVrShadowButton
      Left = 24
      Top = 275
      Width = 97
      Height = 30
      Caption = #1058#1072#1073#1083#1080#1094#1072
      ParentFont = True
      OnClick = btnTableClick
    end
    object Label6: TLabel
      Left = 6
      Top = 160
      Width = 121
      Height = 13
      Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
    end
    object btnSort: TRzMenuButton
      Left = 16
      Top = 24
      Width = 113
      FrameColor = clMaroon
      Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1082#1072
      HotTrack = True
      ParentColor = True
      TextHighlightColor = clMaroon
      TabOrder = 0
      DropDownMenu = PopupMenu1
    end
    object edtAnomal: TRzCheckBox
      Left = 14
      Top = 56
      Width = 115
      Height = 17
      Caption = #1041#1077#1079' '#1072#1085#1086#1084#1072#1083#1100#1085#1099#1093
      State = cbUnchecked
      TabOrder = 1
    end
    object edtM: TRzComboBox
      Left = 12
      Top = 128
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
      TabOrder = 2
    end
    object chkDeleteNumbers: TRzCheckBox
      Left = 22
      Top = 248
      Width = 115
      Height = 17
      Caption = #1059#1076#1072#1083#1077#1085#1080#1077' '#1085#1086#1084#1077#1088#1086#1074
      State = cbUnchecked
      TabOrder = 3
    end
    object cmb_ID: TRzComboBox
      Left = 12
      Top = 184
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
      TabOrder = 4
    end
    object allMeasureChk: TRzCheckBox
      Left = 14
      Top = 80
      Width = 115
      Height = 17
      Caption = #1042#1089#1077' '#1079#1072#1084#1077#1088#1099' '#1052#1057#1050
      State = cbUnchecked
      TabOrder = 5
    end
  end
  object edtSearchType: TRzEdit
    Left = 192
    Top = 32
    Width = 209
    Height = 21
    Color = clBlack
    FrameColor = clRed
    FrameHotColor = clRed
    FrameVisible = True
    TabOrder = 6
    OnKeyPress = edtSearchTypeKeyPress
  end
  object btnSearchType: TRzButton
    Left = 192
    Top = 64
    Width = 49
    Caption = #1055#1086#1080#1089#1082
    Color = clBlack
    HotTrack = True
    TextShadowColor = clGradientActiveCaption
    TabOrder = 7
    OnClick = btnSearchTypeClick
  end
  object edtSearchData: TRzEdit
    Left = 432
    Top = 32
    Width = 129
    Height = 21
    Color = clBlack
    FrameColor = clRed
    FrameHotColor = clRed
    FrameVisible = True
    TabOrder = 8
    OnKeyPress = edtSearchDataKeyPress
  end
  object btnSearchData: TRzButton
    Left = 432
    Top = 64
    Width = 49
    Caption = #1055#1086#1080#1089#1082
    Color = clBlack
    HotTrack = True
    TextShadowColor = clGradientActiveCaption
    TabOrder = 9
    OnClick = btnSearchDataClick
  end
  object edtSearchFile: TRzEdit
    Left = 584
    Top = 32
    Width = 105
    Height = 21
    Color = clBlack
    FrameColor = clRed
    FrameHotColor = clRed
    FrameVisible = True
    TabOrder = 10
    OnKeyPress = edtSearchFileKeyPress
  end
  object btnSearchFile: TRzButton
    Left = 584
    Top = 64
    Width = 49
    Caption = #1055#1086#1080#1089#1082
    Color = clBlack
    HotTrack = True
    TextShadowColor = clGradientActiveCaption
    TabOrder = 11
    OnClick = btnSearchFileClick
  end
  object edtSearchNumber: TRzEdit
    Left = 736
    Top = 32
    Width = 105
    Height = 21
    Color = clBlack
    FrameColor = clRed
    FrameHotColor = clRed
    FrameVisible = True
    TabOrder = 12
    OnKeyPress = edtSearchNumberKeyPress
  end
  object btnSearchNumber: TRzButton
    Left = 736
    Top = 64
    Width = 49
    Caption = #1055#1086#1080#1089#1082
    Color = clBlack
    HotTrack = True
    TextShadowColor = clGradientActiveCaption
    TabOrder = 13
    OnClick = btnSearchNumberClick
  end
  object Panel1: TPanel
    Left = 0
    Top = 544
    Width = 1076
    Height = 38
    Align = alBottom
    Color = clBlack
    TabOrder = 14
    object ProgressBar: TProgressBar
      Left = 16
      Top = 13
      Width = 1001
      Height = 17
      Min = 0
      Max = 100
      Step = 1
      TabOrder = 0
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 1168
    Top = 32
    object menuDate: TMenuItem
      Caption = #1044#1072#1090#1077
      OnClick = menuDateClick
    end
    object menuMSK: TMenuItem
      Caption = #1052#1057#1050
      Checked = True
      OnClick = menuMSKClick
    end
    object menuType: TMenuItem
      Caption = #1058#1080#1087' '#1088#1077#1079#1086#1085#1072#1090#1086#1088#1072
      OnClick = menuTypeClick
    end
    object menuFile: TMenuItem
      Caption = #1060#1072#1081#1083
      OnClick = menuFileClick
    end
  end
end
