# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
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
CMAKE_COMMAND = C:\Users\Nate\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Nate\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Nate\CLionProjects\C867

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Nate\CLionProjects\C867\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\C867.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\C867.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\C867.dir\flags.make

CMakeFiles\C867.dir\main.cpp.obj: CMakeFiles\C867.dir\flags.make
CMakeFiles\C867.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nate\CLionProjects\C867\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C867.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\C867.dir\main.cpp.obj /FdCMakeFiles\C867.dir\ /FS -c C:\Users\Nate\CLionProjects\C867\main.cpp
<<

CMakeFiles\C867.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C867.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\C867.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nate\CLionProjects\C867\main.cpp
<<

CMakeFiles\C867.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C867.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\C867.dir\main.cpp.s /c C:\Users\Nate\CLionProjects\C867\main.cpp
<<

CMakeFiles\C867.dir\student.cpp.obj: CMakeFiles\C867.dir\flags.make
CMakeFiles\C867.dir\student.cpp.obj: ..\student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nate\CLionProjects\C867\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/C867.dir/student.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\C867.dir\student.cpp.obj /FdCMakeFiles\C867.dir\ /FS -c C:\Users\Nate\CLionProjects\C867\student.cpp
<<

CMakeFiles\C867.dir\student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C867.dir/student.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\C867.dir\student.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nate\CLionProjects\C867\student.cpp
<<

CMakeFiles\C867.dir\student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C867.dir/student.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\C867.dir\student.cpp.s /c C:\Users\Nate\CLionProjects\C867\student.cpp
<<

CMakeFiles\C867.dir\roster.cpp.obj: CMakeFiles\C867.dir\flags.make
CMakeFiles\C867.dir\roster.cpp.obj: ..\roster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nate\CLionProjects\C867\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/C867.dir/roster.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\C867.dir\roster.cpp.obj /FdCMakeFiles\C867.dir\ /FS -c C:\Users\Nate\CLionProjects\C867\roster.cpp
<<

CMakeFiles\C867.dir\roster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C867.dir/roster.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\C867.dir\roster.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nate\CLionProjects\C867\roster.cpp
<<

CMakeFiles\C867.dir\roster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C867.dir/roster.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\C867.dir\roster.cpp.s /c C:\Users\Nate\CLionProjects\C867\roster.cpp
<<

# Object files for target C867
C867_OBJECTS = \
"CMakeFiles\C867.dir\main.cpp.obj" \
"CMakeFiles\C867.dir\student.cpp.obj" \
"CMakeFiles\C867.dir\roster.cpp.obj"

# External object files for target C867
C867_EXTERNAL_OBJECTS =

C867.exe: CMakeFiles\C867.dir\main.cpp.obj
C867.exe: CMakeFiles\C867.dir\student.cpp.obj
C867.exe: CMakeFiles\C867.dir\roster.cpp.obj
C867.exe: CMakeFiles\C867.dir\build.make
C867.exe: CMakeFiles\C867.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Nate\CLionProjects\C867\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable C867.exe"
	C:\Users\Nate\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\C867.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\ENTERP~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\C867.dir\objects1.rsp @<<
 /out:C867.exe /implib:C867.lib /pdb:C:\Users\Nate\CLionProjects\C867\cmake-build-debug\C867.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\C867.dir\build: C867.exe

.PHONY : CMakeFiles\C867.dir\build

CMakeFiles\C867.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C867.dir\cmake_clean.cmake
.PHONY : CMakeFiles\C867.dir\clean

CMakeFiles\C867.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Nate\CLionProjects\C867 C:\Users\Nate\CLionProjects\C867 C:\Users\Nate\CLionProjects\C867\cmake-build-debug C:\Users\Nate\CLionProjects\C867\cmake-build-debug C:\Users\Nate\CLionProjects\C867\cmake-build-debug\CMakeFiles\C867.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\C867.dir\depend
