object DataForm: TDataForm
  Left = 399
  Top = 155
  BorderStyle = bsNone
  Caption = #1044#1072#1085#1085#1099#1077
  ClientHeight = 538
  ClientWidth = 822
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clYellow
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 0
    Width = 822
    Height = 491
    Align = alClient
    Color = clBlack
    TabOrder = 0
    object DataGrid: TRzDBGrid
      Left = 2
      Top = 2
      Width = 818
      Height = 487
      Align = alClient
      Color = clBlack
      DataSource = DataModule1.TransatSource
      FixedColor = clBlack
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clYellow
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      FixedLineColor = clRed
      LineColor = clLime
      Columns = <
        item
          Expanded = False
          FieldName = 'SETUPNUM'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'RINGID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'RINGPOS'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'TEMP'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'SETPOINT'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'F0_MHZ'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Q_K'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'R_OHMS'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'C0_PF'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'C1_FF'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'W_UW'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'L1_MH'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'F0L_MHZ'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'FL_MHZ'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'CLSTATUS'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'TCL_PF'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'CHAMBER'
          Visible = True
        end>
    end
    object RzDBGrid1: TRzDBGrid
      Left = 2
      Top = 2
      Width = 818
      Height = 487
      Align = alClient
      Color = clBlack
      DataSource = DataModule1.CrystalDataSource
      FixedColor = clBlack
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clYellow
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Visible = False
      FixedLineColor = clRed
      LineColor = clLime
      Columns = <
        item
          Expanded = False
          FieldName = 'nDataID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nSetupFileIndex'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strCrystalID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fSetTemperature'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fActualTemperature'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fFrequencyPPM'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strQCStatusFrequency'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fCurveFitPPM'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strQCStatusCurveFit'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fErrorPPM'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strQCStatusError'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fC0'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strQCStatusC0'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fC1'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strQCStatusC1'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fL'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strQCStatusL'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fRr'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strQCStatusRr'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'dtMeasurementTime'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nTableLineNumber'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nRepeatCounter'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Name'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Size'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Machine'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'RecordID'
          Visible = True
        end>
    end
    object RzDBGrid2: TRzDBGrid
      Left = 2
      Top = 2
      Width = 818
      Height = 487
      Align = alClient
      Color = clBlack
      DataSource = DataModule1.SetupDataSource
      FixedColor = clBlack
      TabOrder = 2
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clYellow
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Visible = False
      FixedLineColor = clRed
      LineColor = clLime
      Columns = <
        item
          Expanded = False
          FieldName = 'nDataID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nSetupFileIndex'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strCrystalID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fSetTemperature'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fActualTemperature'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue1'
          Width = 109
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue2'
          Width = 91
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue3'
          Width = 103
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue4'
          Width = 143
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue5'
          Width = 128
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue6'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue7'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue8'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue9'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue10'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue11'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue12'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue13'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue14'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue15'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue16'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue17'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue18'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fValue19'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'dtMeasurementTime'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nTableLineNumber'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nRepeatCounter'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Name'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Size'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'RecordID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Machine'
          Visible = True
        end>
    end
    object RzDBGrid3: TRzDBGrid
      Left = 2
      Top = 2
      Width = 818
      Height = 487
      Align = alClient
      Color = clBlack
      DataSource = DataModule1.PostProcessSource
      FixedColor = clBlack
      TabOrder = 3
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clYellow
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Visible = False
      FixedLineColor = clRed
      LineColor = clLime
      Columns = <
        item
          Expanded = False
          FieldName = 'nCurveFitID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nSetupFileIndex'
          Width = 32
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strCrystalID'
          Width = 45
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fReferenceFrequency'
          Width = 74
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fReferenceSetTemperature'
          Width = 57
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fReferenceActualTemperature'
          Width = 76
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fA0'
          Width = 109
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fA1'
          Width = 124
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fA2'
          Width = 125
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fA3'
          Width = 127
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fA4'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fTP1'
          Width = 124
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fTP2'
          Width = 102
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fTP3'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fIT1'
          Width = 132
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fIT2'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fCrystalCut'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fRelativeAngle'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fWCD'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fWCDTemp'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fRMin'
          Width = 108
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fRMax'
          Width = 121
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fRDelta'
          Width = 101
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fFMin'
          Width = 109
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fFMax'
          Width = 116
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'fFDelta'
          Width = 151
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nGroupNumber'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'strGroupDescription'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Name'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Size'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'RecordID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Machine'
          Visible = True
        end>
    end
    object RzDBGrid4: TRzDBGrid
      Left = 2
      Top = 2
      Width = 818
      Height = 487
      Align = alClient
      Color = clBlack
      DataSource = DataModule1.TransatConfigSource
      FixedColor = clBlack
      TabOrder = 4
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clYellow
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Visible = False
      FixedLineColor = clRed
      LineColor = clLime
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 491
    Width = 822
    Height = 47
    Align = alBottom
    BorderColor = clLime
    BorderShadow = clPurple
    Color = clBlack
    TabOrder = 1
    object AdvGlassButton1: TAdvGlassButton
      Left = 8
      Top = 8
      Width = 100
      Height = 32
      BackColor = clBlack
      Caption = 'CrystalData'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
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
      OnClick = AdvGlassButton1Click
    end
    object AdvGlassButton2: TAdvGlassButton
      Left = 112
      Top = 8
      Width = 100
      Height = 32
      BackColor = clBlack
      Caption = 'SetupData'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
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
      OnClick = AdvGlassButton2Click
    end
    object AdvGlassButton3: TAdvGlassButton
      Left = 712
      Top = 7
      Width = 100
      Height = 32
      BackColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
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
      OnClick = AdvGlassButton3Click
    end
    object AdvGlassButton4: TAdvGlassButton
      Left = 216
      Top = 8
      Width = 129
      Height = 32
      BackColor = clBlack
      Caption = 'PostProssecData'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
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
      OnClick = AdvGlassButton4Click
    end
    object AdvGlassButton5: TAdvGlassButton
      Left = 424
      Top = 7
      Width = 129
      Height = 32
      BackColor = clBlack
      Caption = 'Data'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
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
      OnClick = AdvGlassButton5Click
    end
    object AdvGlassButton6: TAdvGlassButton
      Left = 560
      Top = 7
      Width = 129
      Height = 32
      BackColor = clBlack
      Caption = 'Configuration'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
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
      OnClick = AdvGlassButton6Click
    end
  end
end
