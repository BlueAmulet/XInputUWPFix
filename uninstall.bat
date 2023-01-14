@echo off
reg delete HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run /v XInputUWPFix /f
pause
