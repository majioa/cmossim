//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "cmosunit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
  : TForm(Owner)
{
  Lx = 8;
  Ly = 8;
  Lphdx = 7;
  Lphdy = 3;
//  lp = 0.5;
  Z2 = 2;
  Z3 = 1.5;
  Jst = 5;
  E = 3.3;

//  F = 50;
//  Nv = 1024;
  tint = 100;

//  Lch = lp;
  Z1 = 2 * Z2;
  Z4 = Z3;

//  MathVariant q(bounds, 2, mvExtended), q1, q2;
/*AnsiString l;
  l = "1234567890";
  l = L"1234567890";
//  FBuf = new char[10000];
/*  int bounds[4] = {0,Grid->RowCount,0,Grid->ColCount}, i, j;
  FMath = new MathVariant (bounds, 2, mvExtended);
  for(i = 0; i < Grid->RowCount; i++)
    for(j = 0; j < Grid->ColCount; j++)
      Grid->Cells[j][i] = AnsiString((double)(j + i * Grid->ColCount + 1)/10);*/
}
//---------------------------------------------------------------------------
__fastcall TForm1::~TForm1()
{
/*  delete FMath;
  delete[] FBuf;*/
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SaveClick(TObject *Sender)
{
/*  MathVariant v;
  int i, j;
  long double l;
  for(i = 0; i < Grid->ColCount; i++)
    for(j = 0; j < Grid->RowCount; j++)
      {
      l = (Grid->Cells[i][j].ToDouble());
      v = l;
      FMath->Put(v,2,j,i);
      }
  FMath->SaveData(FBuf);*/
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LoadClick(TObject *Sender)
{
/*  int i, j;
  long double l;
  FMath->LoadData(FBuf);
  for(i = 0; i < Grid->ColCount; i++)
    for(j = 0; j < Grid->RowCount; j++)
      {
      l = FMath->Get(2,j,i);
      Grid->Cells[i][j] = AnsiString((double)l);
      }*/
}
//---------------------------------------------------------------------------



void __fastcall TForm1::TestClick(TObject *Sender)
{
/*  dword bounds[2] = {0,2};
  MathVariant q = MathVariant(bounds,1,mvInteger);
  int z[3], i;
  q.Put(1,0);
  q.Put(2,1);
  q.Put(3,2);
  z[0] = q.Get(0);
  z[1] = q.Get(1);
  z[2] = q.Get(2);
  q.ChangeType(mvStack);
  for(i = 0; i <= 2; i++)
    q.Push(i*i);
  for(i = 0; i <= 2; i++)
    z[i] = q.Pop();
  q.ChangeType(mvQueue);
  for(i = 0; i <= 2; i++)
    q.Push(i*i);
  for(i = 0; i <= 2; i++)
    z[i] = q.Pop();
  for(i = 0; i <= 2; i++)
    q.Push(i*i);
  q.Clear();
  */
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Ф=5e+11 см-2*с-1";
  Chart1->Series[1]->Title = "Ф=2e+12 см-2*с-1";
  Chart1->Series[2]->Title = "Ф=5e+12 см-2*с-1";
  Chart1->BottomAxis->Title->Caption = "Ширина нагрузочного транзистора Z3, мкм";
  Chart1->LeftAxis->Title->Caption = "Время считывания tout, мкс";
  for(double x = 0.5; x <= 4.01; x+=.02)
    {
    Chart1->Series[0]->AddXY(x,tout(x,5,Nv,lp),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tout(x,20,Nv,lp),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tout(x,50,Nv,lp),"",clTeeColor);
    }
/*  OleContainer1->AutoVerbMenu = true;
  OleContainer1->CreateObjectFromFile("c:\\test.doc",false);
  char* *value[34][3];
/*  TSupervisor *supv = new TSupervisor(this);
  TSaveLoad *file = new TSaveLoad(this);
  TCCDObjectContainer *objs = new TCCDObjectContainer(this);
  TProject *prj = new TProject(this);
  file->Supervisor = supv;
  objs->Supervisor = supv;
  prj->Supervisor = supv;
  prj->ObjectContainer = objs;
  prj->Parent = this;
  prj->Hide();
  file->Save();
  file->Load();
  delete prj;
  delete objs;
  delete file;
  delete supv;*/

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Nv=256";
  Chart1->Series[1]->Title = "Nv=512";
  Chart1->Series[2]->Title = "Nv=1024";
  Chart1->BottomAxis->Title->Caption = "Ширина нагрузочного транзистора Z3, мкм";
  Chart1->LeftAxis->Title->Caption = "Время считывания tout, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 0.5; x <= 4.01; x+=.02)
    {
    Chart1->Series[0]->AddXY(x,tout(x,F,256,lp),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tout(x,F,512,lp),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tout(x,F,1024,lp),"",clTeeColor);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5, E = 5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "alpha = 0.9";
  Chart1->Series[1]->Title = "alpha = 0.99";
  Chart1->Series[2]->Title = "alpha = 0.995";
//  Chart1->Series[3]->Title = "alpha = 0.999";
  Chart1->BottomAxis->Title->Caption = "Ширина транзистора восстановления Z2, мкм";
  Chart1->LeftAxis->Title->Caption = "Время восстановления tres, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 0.5; x <= 4.01; x+=.02)
    {
    Chart1->Series[0]->AddXY(x,tres(x,Z3,0.9,lp,E),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tres(x,Z3,0.99,lp,E),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tres(x,Z3,0.995,lp,E),"",clTeeColor);
//    Chart1->Series[2]->AddXY(x,tres(x,Z3,0.999,lp,E),"",clTeeColor);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.9, lp = 0.5, E = 5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Z3 = 1 мкм";
  Chart1->Series[1]->Title = "Z3 = 1,5 мкм";
  Chart1->Series[2]->Title = "Z3 = 2 мкм";
  Chart1->BottomAxis->Title->Caption = "Ширина транзистора восстановления Z2, мкм";
  Chart1->LeftAxis->Title->Caption = "Время восстановления tres, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 0.5; x <= 4.01; x+=.02)
    {
    Chart1->Series[0]->AddXY(x,tres(x,1,alpha,lp,E),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tres(x,1.5,alpha,lp,E),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tres(x,2,alpha,lp,E),"",clTeeColor);
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "lp=0.8 мкм";
  Chart1->Series[1]->Title = "lp=0.5 мкм";
  Chart1->Series[2]->Title = "lp=0.25 мкм";
  Chart1->BottomAxis->Title->Caption = "Ширина нагрузочного транзистора Z3, мкм";
  Chart1->LeftAxis->Title->Caption = "Время считывания tout, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 0.5; x <= 2.01; x+=.02)
    {
    Chart1->Series[0]->AddXY(x,tout(x,F,1024,0.8),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tout(x,F,1024,0.5),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tout(x,F,1024,0.25),"",clTeeColor);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn6Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Ф=1e+11 см-2*с-1";
  Chart1->Series[1]->Title = "Ф=1e+12 см-2*с-1";
  Chart1->Series[2]->Title = "Ф=5e+12 см-2*с-1";
  Chart1->BottomAxis->Title->Caption = "Количество элементов по вертикали Nv";
  Chart1->LeftAxis->Title->Caption = "Время считывания tout, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(int x = 128; x <= 4096; x++)
    {
    Chart1->Series[0]->AddXY(x,tout(2,1,x,lp),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tout(2,10,x,lp),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tout(2,50,x,lp),"",clTeeColor);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn7Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Nv=256";
  Chart1->Series[1]->Title = "Nv=512";
  Chart1->Series[2]->Title = "Nv=1024";
  Chart1->BottomAxis->Title->Caption = "Проектная норма lp, мкм";
  Chart1->LeftAxis->Title->Caption = "Время считывания tout, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 1; x >= 0.33; x-=.01)
    {
    Chart1->Series[0]->AddXY(x,tout(4*x,F,256,x),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tout(4*x,F,512,x),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tout(4*x,F,1024,x),"",clTeeColor);
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn8Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5, E = 5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Z2 = 1 мкм";
  Chart1->Series[1]->Title = "Z2 = 1,5 мкм";
  Chart1->Series[2]->Title = "Z2 = 2 мкм";
  Chart1->BottomAxis->Title->Caption = "Степень восстановления alpha";
  Chart1->LeftAxis->Title->Caption = "Время восстановления tres, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 0.9; x <= 0.9991; x+=.001)
    {
    Chart1->Series[0]->AddXY(x,tres(2,1.5,x,lp,E),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tres(2,1.5,x,lp,E),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tres(2,1.5,x,lp,E),"",clTeeColor);
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn9Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5, E = 5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Z2 = lp";
  Chart1->Series[1]->Title = "Z2 = 1,5 * lp";
  Chart1->Series[2]->Title = "Z2 = 2 * lp";
  Chart1->BottomAxis->Title->Caption = "Проектная норма lp, мкм";
  Chart1->LeftAxis->Title->Caption = "Время восстановления tres, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 0.8; x >= 0.09; x-=.01)
    {
    Chart1->Series[0]->AddXY(x,tres(2*x,4*x,alpha,x,E),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tres(3*x,4*x,alpha,x,E),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tres(4*x,4*x,alpha,x,E),"",clTeeColor);
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn10Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5, E = 5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "alpha = 0.99";
  Chart1->Series[1]->Title = "alpha = 0.995";
  Chart1->Series[2]->Title = "alpha = 0.999";
  Chart1->BottomAxis->Title->Caption = "Напряжение питания E, В";
  Chart1->LeftAxis->Title->Caption = "Время восстановления tres, мкс";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 1; x <= 5.01; x+=.05)
    {
    Chart1->Series[0]->AddXY(x,tres(1.5,2,0.99,lp,x),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,tres(1.5,2,0.995,lp,x),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,tres(1.5,2,0.999,lp,x),"",clTeeColor);
    }

}
//---------------------------------------------------------------------------






void __fastcall TForm1::BitBtn11Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5, E = 5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "lp = 0,8 мкм";
  Chart1->Series[1]->Title = "lp = 0,5 мкм";
  Chart1->Series[2]->Title = "lp = 0,25 мкм";
  Chart1->BottomAxis->Title->Caption = "Световой поток Ф, мкм-2*мс-1";
  Chart1->LeftAxis->Title->Caption = "Коэффициент сигнал/шуи Ksn";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 1; x <= 50.01; x+=.05)
    {
    Chart1->Series[0]->AddXY(x,ksn(0.8 * 3,0.8 * 4,x,0.8,E),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,ksn(0.5 * 3,0.5 * 4,x,0.5,E),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,ksn(0.25 * 3,0.25 * 4,x,0.25,E),"",clTeeColor);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn12Click(TObject *Sender)
{
  double F = 50, Nv = 1024, alpha = 0.99, lp = 0.5, E = 5;
  Chart1->Series[0]->Clear();
  Chart1->Series[1]->Clear();
  Chart1->Series[2]->Clear();
  Chart1->Series[0]->Title = "Z1 = 2 * lp";
  Chart1->Series[1]->Title = "Z1 = 3 * lp";
  Chart1->Series[2]->Title = "Z1 = 4 * lp";
  Chart1->BottomAxis->Title->Caption = "Проектная норма lp, мкм";
  Chart1->LeftAxis->Title->Caption = "Коэффициент сигнал/шуи Ksn";
  Chart1->LeftAxis->Logarithmic = false;
  for(double x = 0.8; x >= 0.09; x-=.01)
    {
    Chart1->Series[0]->AddXY(x,ksn(2*x,4*x,10,x,E),"",clTeeColor);
    Chart1->Series[1]->AddXY(x,ksn(3*x,4*x,10,x,E),"",clTeeColor);
    Chart1->Series[2]->AddXY(x,ksn(4*x,4*x,10,x,E),"",clTeeColor);
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
  if(!SaveDialog1->Execute())
    return;
  Chart1->SaveToBitmapFile(SaveDialog1->FileName);
}
//---------------------------------------------------------------------------



double __fastcall TForm1::tout(double z3,double F,double Nv, double lp)
{
  double z4 = z3,
  Lch = lp,
  Sphd = Lphdx * Lphdy,
  Ccol = (2 * Ly * lp + 2 * pow(lp,2)) * Nv * Coxi,
  K3 = K0 * z3 / Lch,
  K4 = K0 * z4 / Lch,
  K34 = K3 * K4 / (K3 + K4),
  dUfn = dUphd(8*lp,z3,F,Sphd,tint,Lch,eta,E);
//  dUfn = dUphd(Z1,z3,F,Sphd,tint,Lch,eta,E);
//  Qphd = q * F * tint * Sphd;
//  dUphd = Qphd / Cfn(Z1,Z3,Sphd,Lch,eta);
//  return dUfn;
//  return (E - dUfn - U0);
//  return (E - dUfn - U0) * sqrt (K34 * (1 + eta) / Jst);
//  return Ccol / sqrt(Jst * K34 * pow(1 + eta,3)) * atan((E - dUfn - U0) * sqrt (K34 * (1 + eta) / Jst));


  return Ccol / (2 * sqrt(Jst * K34 * (1 + eta))) * log(abs(1 + 2 / ((E - dUfn - U0) * sqrt (K34 / (Jst * (1 + eta))) - 1)));
//  return log(abs(1 - 2 / ((E - dUfn - U0) * sqrt (K34 / (Jst * (1 + eta))) + 1)));
//  return abs(1 - 2 / ((E - dUphd1 - 2 * U0) * sqrt (K34 / (Jst * (1 + eta))) + 1));
//  return 1 - 2 / ((E - dUphd1 - 2 * U0) * sqrt (K34 / (Jst * (1 + eta))) + 1);
//  return (E - dUphd1 - 2 * U0) * sqrt (K34 / (Jst * (1 + eta)))+1;
//  return sqrt (K34 / (Jst * (1 + eta)));
}

double __fastcall TForm1::tres(double z2, double z3, double alpha, double lp, double E)
{


/*  K0 = 10.;
  Lch = 0.5;
  q = 1.6e-7;
  eta = 0.1;
  U0 = 0.6;
  Coxi = 5.91e-5;*/
  double z4 = z3,
  z1 = 2 * z2,
  Sphd = Lphdx * Lphdy,
  Lch = lp,
//  Qphd = q * F * tint * Sphd;
  K2 = K0 * z2 / Lch,
  Cfn = this->Cfn(z1, z3, Sphd, Lch, eta),
  F = 22.5,
//  dUphd = Qphd / Cfn(Z1,Z3,Sphd);
//  %out = Qphd / Cfn;
  dUfn = dUphd(z1,z3,F,Sphd,tint,Lch,eta,E);

//  return Cfn * (1 / ((E - U0) * (1 - alpha)) - 1 / (dUfn * (1 + eta))) / (K3 * (1 + eta));
  return Cfn / K2 * (1 / ((E - U0) * (1 - alpha)) - 1 / ((1 + eta) * dUfn));

//  (1 / ((E - U0) * (1 - alpha)) - 1 / (dUfn * (1 + eta))) / (K3 * (1 + eta));


/*  double z4 = z3,
  Sphd = Lphdx * Lphdy,
  Ccol = (2 * Ly * lp + 2 * pow(lp,2)) * Nv * Coxi,
  K3 = K0 * z3 / Lch,
  K4 = K0 * z4 / Lch,
  K34 = K3 * K4 / (K3 + K4),
  dUfn = dUphd(Z1,z3,F,Sphd,tint,Lch,eta);
//  Qphd = q * F * tint * Sphd;
//  dUphd = Qphd / Cfn(Z1,Z3,Sphd,Lch,eta);
//  return dUfn;

  return Ccol / sqrt(Jst * K34 * pow(1 + eta,3)) * atan((E - dUfn - U0) * sqrt (K34 * (1 + eta) / Jst));

  */
//  return Ccol / (2 * sqrt(Jst * K34 * (1 + eta))) * log(1 - 2 / ((E - dUfn - U0) * sqrt (K34 / (Jst * (1 + eta))) + 1));
//  return log(abs(1 - 2 / ((E - dUfn - U0) * sqrt (K34 / (Jst * (1 + eta))) + 1)));
//  return abs(1 - 2 / ((E - dUphd1 - 2 * U0) * sqrt (K34 / (Jst * (1 + eta))) + 1));
//  return 1 - 2 / ((E - dUphd1 - 2 * U0) * sqrt (K34 / (Jst * (1 + eta))) + 1);
//  return (E - dUphd1 - 2 * U0) * sqrt (K34 / (Jst * (1 + eta)))+1;
//  return sqrt (K34 / (Jst * (1 + eta)));
}

double __fastcall TForm1::ksn(double z1, double z3, double F, double lp, double E)
{
/*  Cfn = Cfd + Cgd1 + Cg4 + Cm + Cphd + Cg1 * (1 + eta);
  a1 = tint * Sphd;
  dn2ph = F * a1;
  dn2th = Jth / 16 * a1;
  dn2fn = 16e4 * Cfn;
  dn = sqrt(dn2ph + dn2th + dn2fn);
  Qphd = q * dn2ph;
  dUphd = Qphd / Cfn;*/
//  %K3 = K0 * Z3 / Lch;
//  %Unoise = dn * 1.6e-7 / Cfn;
  double Lch = lp,
  Sphd = Lphdx * Lphdy;
  return dUphd(z1,z3,F,Sphd,tint,Lch,eta,E) / Unoise(z1, z3, Lch, Sphd, F, Jst);
}

double __fastcall TForm1::Unoise(double z1, double z3, double Lch, double Sphd, double F, double Jst)
{
  double Cfn = this->Cfn(z1, z3, Sphd, Lch, eta),
  a1 = tint * Sphd,
  dn2ph = F * a1,
  dn2th = Jst / 16 * a1,
  dn2fn = 16e4 * Cfn;
  return sqrt(dn2ph + dn2th + dn2fn) * q / Cfn;
}

double __fastcall TForm1::dUphd(double Z1, double Z3, double F, double Sphd, double tint, double Lch, double eta, double E)
{
  double Qphd = q * F * tint * Sphd, dUfn = Qphd / Cfn(Z1,Z3,Sphd,Lch,eta);
  if(dUfn > E - U0)
    dUfn = E - U0;
  return dUfn;
}


double __fastcall TForm1::Cfn(double Z1, double Z3, double Sphd, double Lch, double eta)
{
  double Xg = 0.09,
  Xpnphd = 1,
  Sfd = 5,
  Cphd0 = 11.7 * 8.86e-6 / Xpnphd,
  Cpn = 5 * Cphd0,
  Cg = 4 * 8.86e-6 / Xg,
  Cfd = Sfd * Cpn,
  Cgd1 = Cg * Z1 * Lch * 0.5,
  Cg3 = Cg * Z3 * Lch,
  Cm = 0,
  Cphd = Cphd0 * Sphd,
  Cg1 = Cg * Z1 * Lch;
  return Cfd + Cphd + Cgd1 + Cg3 + Cm + Cg1 * (1 + eta);
}



double __fastcall TForm1::abs(double val)
{
  if(val < 0)
    return -val;
  return val;
}


