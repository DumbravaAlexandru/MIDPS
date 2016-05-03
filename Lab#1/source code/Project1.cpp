//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", FMeniu);
USEFORM("Unit2.cpp", FContor);
USEFORM("Unit3.cpp", FCronometru);
USEFORM("Unit4.cpp", FDiagram);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TFMeniu), &FMeniu);
                 Application->CreateForm(__classid(TFContor), &FContor);
                 Application->CreateForm(__classid(TFCronometru), &FCronometru);
                 Application->CreateForm(__classid(TFDiagram), &FDiagram);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
