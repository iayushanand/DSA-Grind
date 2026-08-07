@echo off

if "%~1"=="" (
    echo Usage: new_problem FolderName
    exit /b
)

mkdir "%~1"

copy NUL "%~1\input.txt" >NUL
copy NUL "%~1\output.txt" >NUL

(
echo #include ^<bits/stdc++.h^>
echo using namespace std;
echo.
echo int main^(^) {
echo     ios::sync_with_stdio^(false^);
echo     cin.tie^(nullptr^);
echo.
echo.
echo     return 0;
echo }
) > "%~1\main.cpp"

echo Created %~1