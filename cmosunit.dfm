object Form1: TForm1
  Left = 332
  Top = 120
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Form1'
  ClientHeight = 416
  ClientWidth = 592
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 528
    Top = 352
    Width = 57
    Height = 57
    Caption = 'Export'
    OnClick = SpeedButton1Click
  end
  object BitBtn1: TBitBtn
    Left = 8
    Top = 352
    Width = 75
    Height = 25
    Caption = 'tout(z3,F)'
    TabOrder = 0
    OnClick = BitBtn1Click
  end
  object Chart1: TChart
    Left = 8
    Top = 8
    Width = 577
    Height = 337
    BackWall.Brush.Color = clWhite
    Title.Text.Strings = (
      'ÊÌÎÏ-ÿ÷åéêà 4Ò')
    LeftAxis.AxisValuesFormat = '#,##0.#####'
    RightAxis.Visible = False
    TopAxis.Visible = False
    View3D = False
    Color = clWhite
    TabOrder = 1
    object Series1: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clBlue
      Title = 'Series1111'
      ValueFormat = '#,##0.#####'
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
    object Series2: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clLime
      ValueFormat = '#,##0.#####'
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
    object Series3: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clRed
      ValueFormat = '#,##0.#####'
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
  end
  object BitBtn2: TBitBtn
    Left = 88
    Top = 352
    Width = 75
    Height = 25
    Caption = 'tout(z3,Nv)'
    TabOrder = 2
    OnClick = BitBtn2Click
  end
  object BitBtn3: TBitBtn
    Left = 8
    Top = 384
    Width = 75
    Height = 25
    Caption = 'tres(z2,alpha)'
    TabOrder = 3
    OnClick = BitBtn3Click
  end
  object BitBtn4: TBitBtn
    Left = 88
    Top = 384
    Width = 75
    Height = 25
    Caption = 'tres(z2,z3)'
    TabOrder = 4
    OnClick = BitBtn4Click
  end
  object BitBtn5: TBitBtn
    Left = 168
    Top = 352
    Width = 75
    Height = 25
    Caption = 'tout(z3,lp)'
    TabOrder = 5
    OnClick = BitBtn5Click
  end
  object BitBtn6: TBitBtn
    Left = 248
    Top = 352
    Width = 75
    Height = 25
    Caption = 'tout(Nv,F)'
    TabOrder = 6
    OnClick = BitBtn6Click
  end
  object BitBtn7: TBitBtn
    Left = 328
    Top = 352
    Width = 75
    Height = 25
    Caption = 'tout(lp[z3],Nv)'
    TabOrder = 7
    OnClick = BitBtn7Click
  end
  object BitBtn8: TBitBtn
    Left = 168
    Top = 384
    Width = 75
    Height = 25
    Caption = 'tres(alpha,z2)'
    TabOrder = 8
    OnClick = BitBtn8Click
  end
  object BitBtn9: TBitBtn
    Left = 248
    Top = 384
    Width = 75
    Height = 25
    Caption = 'tres(lp,z2)'
    TabOrder = 9
    OnClick = BitBtn9Click
  end
  object BitBtn10: TBitBtn
    Left = 328
    Top = 384
    Width = 75
    Height = 25
    Caption = 'tres(E,alpha)'
    TabOrder = 10
    OnClick = BitBtn10Click
  end
  object BitBtn11: TBitBtn
    Left = 408
    Top = 352
    Width = 75
    Height = 25
    Caption = 'ksn(F,z3)'
    TabOrder = 11
    OnClick = BitBtn11Click
  end
  object BitBtn12: TBitBtn
    Left = 408
    Top = 384
    Width = 75
    Height = 25
    Caption = 'ksn(lp,F)'
    TabOrder = 12
    OnClick = BitBtn12Click
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'bmp'
    Filter = 'Bitmap files (*.bmp)|*.bmp|All files (*.*)|*.*'
    Left = 16
    Top = 16
  end
end
