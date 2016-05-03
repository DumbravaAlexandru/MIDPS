object FCronometru: TFCronometru
  Left = 267
  Top = 128
  Width = 484
  Height = 405
  BiDiMode = bdLeftToRight
  Caption = 'MIDPS 1-B'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  ParentBiDiMode = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 72
    Top = 32
    Width = 282
    Height = 19
    Caption = 'Realizarea unui cronometru in C++Builder'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 184
    Top = 208
    Width = 235
    Height = 24
    Caption = 'C++ Builder CRONOMETRU'
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -19
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 184
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 184
    Top = 256
    Width = 153
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object START: TButton
    Left = 80
    Top = 216
    Width = 75
    Height = 25
    Caption = 'START'
    TabOrder = 2
    OnClick = STARTClick
  end
  object STOP: TButton
    Left = 80
    Top = 256
    Width = 75
    Height = 25
    Caption = 'STOP'
    TabOrder = 3
    OnClick = STOPClick
  end
  object ZERO: TButton
    Left = 80
    Top = 296
    Width = 75
    Height = 25
    Caption = 'ZERO'
    TabOrder = 4
    OnClick = ZEROClick
  end
  object Exit: TButton
    Left = 288
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 5
    OnClick = ExitClick
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 32
    Top = 136
  end
  object Timer2: TTimer
    Interval = 100
    OnTimer = Timer2Timer
    Left = 32
    Top = 184
  end
end
