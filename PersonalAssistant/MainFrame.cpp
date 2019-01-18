#include "MainFrame.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PersonalAssistant::MainFrame form;
	Application::Run(%form);
	return 0;
}