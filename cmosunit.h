//---------------------------------------------------------------------------

#ifndef cmosunitH
#define cmosunitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
/*#include <Supervisor.h>
#include <SaveLoad.h>
#include <Project.h>
#include <CCDObjectContainer.h>*/
#include <Buttons.hpp>
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Series.hpp>
#include <math.h>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
const double q = 1.6e-7;
const double K0 = 10;
const double eta = 0.1;
const double U0 = 0.6;
const double Coxi = 5.91e-5;


class TForm1 : public TForm
{
__published:	// IDE-managed Components
  TBitBtn *BitBtn1;
  TChart *Chart1;
  TLineSeries *Series1;
  TLineSeries *Series2;
  TLineSeries *Series3;
  TBitBtn *BitBtn2;
  TBitBtn *BitBtn3;
  TBitBtn *BitBtn4;
  TBitBtn *BitBtn5;
  TBitBtn *BitBtn6;
  TBitBtn *BitBtn7;
  TBitBtn *BitBtn8;
  TBitBtn *BitBtn9;
  TBitBtn *BitBtn10;
  TBitBtn *BitBtn11;
  TBitBtn *BitBtn12;
  TSpeedButton *SpeedButton1;
  TSaveDialog *SaveDialog1;
  void __fastcall SaveClick(TObject *Sender);
  void __fastcall LoadClick(TObject *Sender);
  void __fastcall TestClick(TObject *Sender);
  void __fastcall BitBtn1Click(TObject *Sender);
  void __fastcall BitBtn2Click(TObject *Sender);
  void __fastcall BitBtn4Click(TObject *Sender);
  void __fastcall BitBtn3Click(TObject *Sender);
  void __fastcall BitBtn5Click(TObject *Sender);
  void __fastcall BitBtn6Click(TObject *Sender);
  void __fastcall BitBtn7Click(TObject *Sender);
  void __fastcall BitBtn8Click(TObject *Sender);
  void __fastcall BitBtn9Click(TObject *Sender);
  void __fastcall BitBtn10Click(TObject *Sender);
  void __fastcall BitBtn11Click(TObject *Sender);
  void __fastcall BitBtn12Click(TObject *Sender);
  void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
//  MathVariant *FMath;
  char *FBuf;

  double Lx;
  double Ly;
  double Lphdx;
  double Lphdy;
//  double lp;
//  double Lch;
  double Z1;
  double Z2;
  double Z3;
  double Z4;
  double Jst;
  double E;

//  double F;
//  double Nv;
  double tint;

public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
  __fastcall ~TForm1();
  double __fastcall tout(double z3,double F,double Nv, double lp);
  double __fastcall tres(double z2, double z3, double alpha, double lp, double E);
  double __fastcall dUphd(double Z1, double Z3, double F, double Sphd, double tint, double Lch, double eta, double E);
  double __fastcall Cfn(double Z1, double Z3, double Sphd, double Lch, double eta);
  double __fastcall abs(double val);
  double __fastcall ksn(double z1, double z3, double F, double lp, double E);
  double __fastcall Unoise(double z1, double z3, double Lch, double Sphd, double F, double Jth);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
