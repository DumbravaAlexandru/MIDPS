//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFCronometru : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TTimer *Timer2;
        TLabel *Label1;
        TEdit *Edit1;
        TLabel *Label2;
        TEdit *Edit2;
        TButton *START;
        TButton *STOP;
        TButton *ZERO;
        TButton *Exit;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ExitClick(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall STARTClick(TObject *Sender);
        void __fastcall STOPClick(TObject *Sender);
        void __fastcall ZEROClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFCronometru(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFCronometru *FCronometru;
//---------------------------------------------------------------------------
#endif
