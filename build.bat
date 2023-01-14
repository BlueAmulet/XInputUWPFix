@cl /O1 XInputUWPFix.c /link /nodefaultlib /subsystem:windows /entry:EntryPoint /debug:none /emitpogophaseinfo /emittoolversioninfo:no /merge:.pdata=.rdata kernel32.lib user32.lib
