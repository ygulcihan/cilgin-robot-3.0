#include "pch.h"
#include <iostream>
#include <stdio.h>



using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Robot 3.0.h"

using namespace System::Windows::Forms;

[STAThread]
int main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form1()); 
}
