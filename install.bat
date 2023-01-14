@echo off
reg add HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run /v XInputUWPFix /d "\"%~dp0\XInputUWPFix.exe\"" /f
pause
