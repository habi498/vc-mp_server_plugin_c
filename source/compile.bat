gcc -m32 -shared vcmpsrvr.c -o "../plugins/vcmpsrvr86.dll"

@echo off
IF %errorlevel% NEQ 0 GOTO FAILED

setlocal
:PROMPT
SET /P AREYOUSURE=Run server32.exe now? Y/N
IF /I "%AREYOUSURE%" NEQ "Y" GOTO END
start ../server32
:END
endlocal
exit
:FAILED
set /p DUMMY=Hit ENTER to continue...