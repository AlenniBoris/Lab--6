# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Proga for BSU\Lab--6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Proga for BSU\Lab--6\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Lab__6.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\Lab__6.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Lab__6.dir\flags.make

CMakeFiles\Lab__6.dir\main.cpp.obj: CMakeFiles\Lab__6.dir\flags.make
CMakeFiles\Lab__6.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Proga for BSU\Lab--6\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab__6.dir/main.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lab__6.dir\main.cpp.obj /FdCMakeFiles\Lab__6.dir\ /FS -c "C:\Proga for BSU\Lab--6\main.cpp"
<<

CMakeFiles\Lab__6.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab__6.dir/main.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Lab__6.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Proga for BSU\Lab--6\main.cpp"
<<

CMakeFiles\Lab__6.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab__6.dir/main.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lab__6.dir\main.cpp.s /c "C:\Proga for BSU\Lab--6\main.cpp"
<<

CMakeFiles\Lab__6.dir\functions.cpp.obj: CMakeFiles\Lab__6.dir\flags.make
CMakeFiles\Lab__6.dir\functions.cpp.obj: ..\functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Proga for BSU\Lab--6\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab__6.dir/functions.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lab__6.dir\functions.cpp.obj /FdCMakeFiles\Lab__6.dir\ /FS -c "C:\Proga for BSU\Lab--6\functions.cpp"
<<

CMakeFiles\Lab__6.dir\functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab__6.dir/functions.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Lab__6.dir\functions.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Proga for BSU\Lab--6\functions.cpp"
<<

CMakeFiles\Lab__6.dir\functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab__6.dir/functions.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lab__6.dir\functions.cpp.s /c "C:\Proga for BSU\Lab--6\functions.cpp"
<<

CMakeFiles\Lab__6.dir\FunctionsLab.cpp.obj: CMakeFiles\Lab__6.dir\flags.make
CMakeFiles\Lab__6.dir\FunctionsLab.cpp.obj: ..\FunctionsLab.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Proga for BSU\Lab--6\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Lab__6.dir/FunctionsLab.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lab__6.dir\FunctionsLab.cpp.obj /FdCMakeFiles\Lab__6.dir\ /FS -c "C:\Proga for BSU\Lab--6\FunctionsLab.cpp"
<<

CMakeFiles\Lab__6.dir\FunctionsLab.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab__6.dir/FunctionsLab.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Lab__6.dir\FunctionsLab.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Proga for BSU\Lab--6\FunctionsLab.cpp"
<<

CMakeFiles\Lab__6.dir\FunctionsLab.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab__6.dir/FunctionsLab.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lab__6.dir\FunctionsLab.cpp.s /c "C:\Proga for BSU\Lab--6\FunctionsLab.cpp"
<<

# Object files for target Lab__6
Lab__6_OBJECTS = \
"CMakeFiles\Lab__6.dir\main.cpp.obj" \
"CMakeFiles\Lab__6.dir\functions.cpp.obj" \
"CMakeFiles\Lab__6.dir\FunctionsLab.cpp.obj"

# External object files for target Lab__6
Lab__6_EXTERNAL_OBJECTS =

Lab__6.exe: CMakeFiles\Lab__6.dir\main.cpp.obj
Lab__6.exe: CMakeFiles\Lab__6.dir\functions.cpp.obj
Lab__6.exe: CMakeFiles\Lab__6.dir\FunctionsLab.cpp.obj
Lab__6.exe: CMakeFiles\Lab__6.dir\build.make
Lab__6.exe: CMakeFiles\Lab__6.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Proga for BSU\Lab--6\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Lab__6.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Lab__6.dir --rc=C:\WINDOW~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\WINDOW~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Lab__6.dir\objects1.rsp @<<
 /out:Lab__6.exe /implib:Lab__6.lib /pdb:"C:\Proga for BSU\Lab--6\cmake-build-debug\Lab__6.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Lab__6.dir\build: Lab__6.exe
.PHONY : CMakeFiles\Lab__6.dir\build

CMakeFiles\Lab__6.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab__6.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Lab__6.dir\clean

CMakeFiles\Lab__6.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Proga for BSU\Lab--6" "C:\Proga for BSU\Lab--6" "C:\Proga for BSU\Lab--6\cmake-build-debug" "C:\Proga for BSU\Lab--6\cmake-build-debug" "C:\Proga for BSU\Lab--6\cmake-build-debug\CMakeFiles\Lab__6.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Lab__6.dir\depend

