object LoadNumbersForm: TLoadNumbersForm
  Left = 355
  Top = 139
  BorderStyle = bsNone
  Caption = 'LoadNumbersForm'
  ClientHeight = 499
  ClientWidth = 583
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
    Left = 464
    Top = 460
    Width = 113
    Height = 30
    Pen.Color = clRed
    ShadowColor = clSilver
    Caption = 'Close'
    ParentFont = True
    OnClick = btnCloseClick
  end
  object Label1: TLabel
    Left = 40
    Top = 8
    Width = 59
    Height = 13
    Caption = #1042#1099#1073#1086#1088' '#1052#1057#1050
  end
  object Label2: TLabel
    Left = 176
    Top = 8
    Width = 71
    Height = 13
    Caption = #1042#1099#1073#1086#1088' '#1060#1072#1081#1083#1072
  end
  object Label3: TLabel
    Left = 328
    Top = 8
    Width = 44
    Height = 13
    Caption = #1055#1086#1079#1080#1094#1080#1080
  end
  object Label4: TLabel
    Left = 448
    Top = 8
    Width = 40
    Height = 13
    Caption = #1053#1086#1084#1077#1088#1072
  end
  object btnLoad: TVrShadowButton
    Left = 159
    Top = 460
    Width = 113
    Height = 30
    Pen.Color = clYellow
    ShadowColor = clSilver
    Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100
    ParentFont = True
    OnClick = btnLoadClick
  end
  object btnDelete: TVrShadowButton
    Left = 287
    Top = 460
    Width = 113
    Height = 30
    Pen.Color = clYellow
    ShadowColor = clSilver
    Caption = #1059#1076#1072#1083#1080#1090#1100
    ParentFont = True
    OnClick = btnDeleteClick
  end
  object viewLoad: TRzCheckList
    Left = 8
    Top = 32
    Width = 137
    Height = 457
    ItemFillColor = clYellow
    ItemFocusColor = clSkyBlue
    TransparentColor = clBlack
    Color = clBlack
    FrameColor = clLime
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 17
    ParentColor = True
    Sorted = True
    TabOrder = 0
    UseGradients = False
    OnClick = viewLoadClick
  end
  object btnSort: TRzMenuButton
    Left = 160
    Top = 224
    Width = 121
    FrameColor = clMaroon
    Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1082#1072
    HotTrack = True
    ParentColor = True
    TabOrder = 1
    DropDownMenu = AdvPopupMenu1
  end
  object viewLoad1: TRzCheckList
    Left = 152
    Top = 32
    Width = 129
    Height = 177
    Color = clBlack
    FrameColor = clLime
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 17
    ParentColor = True
    TabOrder = 2
    OnClick = viewLoad1Click
  end
  object viewPosition: TRzListBox
    Left = 287
    Top = 32
    Width = 114
    Height = 177
    Color = clBlack
    FrameColor = clLime
    FrameHotColor = clYellow
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    TabOrder = 3
  end
  object viewNumbers: TRzCheckList
    Left = 408
    Top = 32
    Width = 169
    Height = 417
    ItemFillColor = clYellow
    ItemFocusColor = clSkyBlue
    TransparentColor = clBlack
    Color = clBlack
    FrameColor = clLime
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 17
    ParentColor = True
    Sorted = True
    TabOrder = 4
    UseGradients = False
  end
  object AdvPopupMenu1: TAdvPopupMenu
    Version = '2.5.3.1'
    Left = 168
    Top = 264
    object menuMSK: TMenuItem
      Caption = #1052#1057#1050
      Checked = True
      OnClick = menuMSKClick
    end
    object menuFile: TMenuItem
      Caption = #1060#1072#1081#1083
      OnClick = menuFileClick
    end
  end
end
