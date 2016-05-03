object FDiagram: TFDiagram
  Left = 213
  Top = 401
  Width = 487
  Height = 405
  Caption = 'MIDPS 1-C'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 240
    Top = 24
    Width = 90
    Height = 13
    Caption = 'Data si ora curenta'
  end
  object Label2: TLabel
    Left = 136
    Top = 80
    Width = 326
    Height = 20
    Caption = 'Resurse grafice ale mediului C++Builder '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object PaintBox1: TPaintBox
    Left = 208
    Top = 112
    Width = 209
    Height = 209
    OnPaint = PaintBox1Click
  end
  object Edit1: TEdit
    Left = 232
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Start: TButton
    Left = 32
    Top = 128
    Width = 81
    Height = 41
    Caption = 'Start'
    TabOrder = 1
    OnClick = StartClick
  end
  object Stop: TButton
    Left = 32
    Top = 184
    Width = 81
    Height = 41
    Caption = 'Stop'
    TabOrder = 2
    OnClick = StopClick
  end
  object Exit: TButton
    Left = 32
    Top = 240
    Width = 81
    Height = 41
    Caption = 'Exit'
    TabOrder = 3
    OnClick = ExitClick
  end
  object Panel1: TPanel
    Left = 144
    Top = 112
    Width = 41
    Height = 209
    Color = clBackground
    TabOrder = 4
  end
  object Panel2: TPanel
    Left = 144
    Top = 112
    Width = 41
    Height = 81
    Color = clGray
    TabOrder = 5
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 16
    Top = 24
  end
  object Timer2: TTimer
    Interval = 500
    OnTimer = Timer2Timer
    Left = 16
    Top = 72
  end
end
