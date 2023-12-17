object AddMskForm: TAddMskForm
  Left = 396
  Top = 237
  BorderStyle = bsNone
  Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1087#1088#1086#1090#1086#1082#1086#1083#1072
  ClientHeight = 290
  ClientWidth = 586
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 0
    Width = 586
    Height = 290
    Align = alClient
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object Label2: TLabel
      Left = 16
      Top = 160
      Width = 75
      Height = 13
      Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
    end
    object Label1: TLabel
      Left = 16
      Top = 24
      Width = 94
      Height = 20
      Caption = #1055#1088#1086#1090#1086#1082#1086#1083' '#8470
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clLime
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Protokol_Spc: TLabel
      Left = 332
      Top = 24
      Width = 4
      Height = 20
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object Label4: TLabel
      Left = 48
      Top = 72
      Width = 124
      Height = 13
      Caption = #1052#1089#1082'  ('#1053#1086#1084#1077#1088'/'#1064#1090#1088#1080#1093' '#1082#1086#1076')'
    end
    object Protokol_ID: TLabel
      Left = 140
      Top = 24
      Width = 54
      Height = 20
      Caption = '136797'
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object btnClose: TAdvGlassButton
      Left = 456
      Top = 242
      Width = 121
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
    object edtFile: TRzEdit
      Left = 13
      Top = 100
      Width = 212
      Height = 29
      Color = clBlack
      DisabledColor = clBlack
      FrameColor = clRed
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ParentColor = True
      TabOrder = 1
      OnKeyPress = edtFileKeyPress
    end
    object edtSpcN: TRzEdit
      Left = 13
      Top = 180
      Width = 340
      Height = 21
      DisabledColor = clBlack
      Enabled = False
      FrameColor = clLime
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ParentColor = True
      TabOrder = 2
    end
    object AdvGlassButton1: TAdvGlassButton
      Left = 368
      Top = 176
      Width = 97
      Height = 26
      BackColor = clBlue
      Caption = #1042#1099#1073#1088#1072#1090#1100
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
      OnClick = AdvGlassButton1Click
    end
    object SaveButton: TAdvGlassButton
      Left = 8
      Top = 242
      Width = 121
      Height = 32
      BackColor = clLime
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
      TabOrder = 4
      Version = '1.2.3.0'
      OnClick = SaveButtonClick
    end
    object ReSaveButton: TAdvGlassButton
      Left = 136
      Top = 242
      Width = 121
      Height = 32
      BackColor = clLime
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
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
      Visible = False
      OnClick = ReSaveButtonClick
    end
  end
  object ActionList1: TActionList
    Left = 304
    Top = 24
    object NewMSK_RQ: TAction
      Caption = 'NewMSK_RQ'
      OnExecute = NewMSK_RQExecute
    end
    object DelMSK_RQ: TAction
      Caption = 'DelMSK_RQ'
      OnExecute = DelMSK_RQExecute
    end
    object AddMSK_RQ: TAction
      Caption = 'AddMSK_RQ'
      OnExecute = AddMSK_RQExecute
    end
    object TestMSK_RQ: TAction
      Caption = 'TestMSK_RQ'
      OnExecute = TestMSK_RQExecute
    end
    object Get_Default_Spc_RQ: TAction
      Caption = 'Get_Default_Spc_RQ'
      OnExecute = Get_Default_Spc_RQExecute
    end
    object BarCode_MSK_RQ: TAction
      Caption = 'BarCode_MSK_RQ'
      OnExecute = BarCode_MSK_RQExecute
    end
    object Journal: TAction
      Caption = 'Journal'
      OnExecute = JournalExecute
    end
  end
end
