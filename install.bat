@echo off
reg add HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run /v XInputUWPFix /d "\"%~dp0XInputUWPFix.exe\"" /f
pause
