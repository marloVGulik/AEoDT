@echo off
color 0F

:main
cls
echo Compiling server
g++ -Wall "src/main.cpp" -o "bin/AEoDT.exe"
echo.

pause
goto main