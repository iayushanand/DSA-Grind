@echo off

if "%~1"=="" (
    echo Usage: new_problem FolderName
    exit /b
)

mkdir "%~1"

copy NUL "%~1\input.txt" >NUL
copy NUL "%~1\output.txt" >NUL
copy NUL "%~1\question.txt" >NUL

(
echo #include ^<bits/stdc++.h^>
echo using namespace std;
echo.
echo int main^(^) {
echo     // start here
echo.
echo.
echo     return 0;
echo }
) > "%~1\main.cpp"

echo Created %~1