#define WIN32_LEAN_AND_MEAN
#include <windows.h>

static LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	if (nCode >= 0)
	{
		PKBDLLHOOKSTRUCT p = (PKBDLLHOOKSTRUCT)lParam;
		if (p->vkCode >= 195 && p->vkCode <= 218)
		{
			return 1;
		}
	}
	return CallNextHookEx(NULL, nCode, wParam, lParam);
}

void __stdcall EntryPoint(void)
{
	// Prevent application from running multiple times
	CreateMutexA(0, FALSE, "Local\\$XInputUWPFix$");
	if (GetLastError() != ERROR_ALREADY_EXISTS)
	{
		// Add Low Level Keyboard Hook to filter keyboard messages
		HHOOK hhkLowLevelKbd = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, 0, 0);

		// Process messages so hook works
		MSG msg;
		while (GetMessage(&msg, NULL, 0, 0))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		// Cleanup
		UnhookWindowsHookEx(hhkLowLevelKbd);
	}
	ExitProcess(0);
}
