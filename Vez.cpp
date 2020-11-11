#include <Windows.h>
#include <iostream>
#include <tchar.h>
#include <intrin.h>
using namespace std;


int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	while (true)
	{
		Sleep(1);

		if (GetAsyncKeyState(VK_XBUTTON2))
		{


			Sleep(24);
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(32);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(rand() % 30);
		}


		if (GetAsyncKeyState(0x73)) //F4
		{
			Sleep(100);
			exit(0);
		}
	}
}