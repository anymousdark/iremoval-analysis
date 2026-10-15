@echo off
rem Descompila funcoes do projeto ja analisado, sem refazer a analise.
rem
rem   decompile.cmd <minSize> [regexDeNome]
rem
rem Exemplos:
rem   decompile.cmd 400                       -> tudo com corpo >= 400 bytes
rem   decompile.cmd 200 "Activate|Erase|Driver"  -> so nomes que casam

setlocal
set "GHIDRA_INSTALL_DIR=C:\tools\ghidra\ghidra_12.1.4_PUBLIC"
set "JAVA_HOME=C:\tools\jdk21\jdk-21.0.12.1+1"
set "PATH=%JAVA_HOME%\bin;%PATH%"

set "PROJDIR=C:\tools\ghidra-work"
set "PROJ=ire"
set "PROGRAM=iremovalpro_engine.exe"
set "SCRIPTS=F:\iremoval-analysis\tools\ghidra"
set "OUT=F:\iremoval-analysis\decompiled"

set "MINSIZE=%~1"
if "%MINSIZE%"=="" set "MINSIZE=400"
set "REGEX=%~2"

if not "%REGEX%"=="" goto :withregex
"%GHIDRA_INSTALL_DIR%\support\analyzeHeadless.bat" %PROJDIR% %PROJ% -process %PROGRAM% -noanalysis -readOnly -scriptPath %SCRIPTS% -postScript DumpDecomp.java %OUT% %MINSIZE%
goto :end

:withregex
"%GHIDRA_INSTALL_DIR%\support\analyzeHeadless.bat" %PROJDIR% %PROJ% -process %PROGRAM% -noanalysis -readOnly -scriptPath %SCRIPTS% -postScript DumpDecomp.java %OUT% %MINSIZE% "%REGEX%"

:end
endlocal
