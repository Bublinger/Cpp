@echo off
REM -- Zuerst Zuordnungsdatei der mit Microsoft Visual C++ erzeugten resource.h erstellen
echo // Von MAKEHELP.BAT erzeugte Hilfe-Zuordnungsdatei. Wird verwendet von EX11D.HPJ. >"hlp\ex11d.hm"
echo. >>"hlp\ex11d.hm"
echo // Befehle (ID_* und IDM_*) >>"hlp\ex11d.hm"
makehm ID_,HID_,0x10000 IDM_,HIDM_,0x10000 resource.h >>"hlp\ex11d.hm"
echo. >>"hlp\ex11d.hm"
echo // Eingabeaufforderungen (IDP_*) >>"hlp\ex11d.hm"
makehm IDP_,HIDP_,0x30000 resource.h >>"hlp\ex11d.hm"
echo. >>"hlp\ex11d.hm"
echo // Ressourcen (IDR_*) >>"hlp\ex11d.hm"
makehm IDR_,HIDR_,0x20000 resource.h >>"hlp\ex11d.hm"
echo. >>"hlp\ex11d.hm"
echo // Dialogfelder (IDD_*) >>"hlp\ex11d.hm"
makehm IDD_,HIDD_,0x20000 resource.h >>"hlp\ex11d.hm"
echo. >>"hlp\ex11d.hm"
echo // Rahmen-Steuerelemente (IDW_*) >>"hlp\ex11d.hm"
makehm IDW_,HIDW_,0x50000 resource.h >>"hlp\ex11d.hm"
REM -- Hilfe erstellen für Projekt EX11D


echo Erstelle Win32-Hilfedateien
start /wait hcw /C /E /M "hlp\ex11d.hpj"
if errorlevel 1 goto :Error
if not exist "hlp\ex11d.hlp" goto :Error
if not exist "hlp\ex11d.cnt" goto :Error
echo.
if exist Debug\nul copy "hlp\ex11d.hlp" Debug
if exist Debug\nul copy "hlp\ex11d.cnt" Debug
if exist Release\nul copy "hlp\ex11d.hlp" Release
if exist Release\nul copy "hlp\ex11d.cnt" Release
echo.
goto :done

:Error
echo hlp\ex11d.hpj(1) : Fehler: Problem beim Erstellen der Hilfedatei festgestellt

:done
echo.
