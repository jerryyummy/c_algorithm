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
CMAKE_COMMAND = "E:\clion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Clion\LCS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Clion\LCS\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\LCS.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\LCS.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\LCS.dir\flags.make

CMakeFiles\LCS.dir\main.cpp.obj: CMakeFiles\LCS.dir\flags.make
CMakeFiles\LCS.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Clion\LCS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LCS.dir/main.cpp.obj"
	"E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\LCS.dir\main.cpp.obj /FdCMakeFiles\LCS.dir\ /FS -c D:\Clion\LCS\main.cpp
<<

CMakeFiles\LCS.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LCS.dir/main.cpp.i"
	"E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" > CMakeFiles\LCS.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Clion\LCS\main.cpp
<<

CMakeFiles\LCS.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LCS.dir/main.cpp.s"
	"E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\LCS.dir\main.cpp.s /c D:\Clion\LCS\main.cpp
<<

# Object files for target LCS
LCS_OBJECTS = \
"CMakeFiles\LCS.dir\main.cpp.obj"

# External object files for target LCS
LCS_EXTERNAL_OBJECTS =

LCS.exe: CMakeFiles\LCS.dir\main.cpp.obj
LCS.exe: CMakeFiles\LCS.dir\build.make
LCS.exe: CMakeFiles\LCS.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Clion\LCS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LCS.exe"
	"E:\clion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\LCS.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- "E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\LCS.dir\objects1.rsp @<<
 /out:LCS.exe /implib:LCS.lib /pdb:D:\Clion\LCS\cmake-build-debug\LCS.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\LCS.dir\build: LCS.exe

.PHONY : CMakeFiles\LCS.dir\build

CMakeFiles\LCS.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LCS.dir\cmake_clean.cmake
.PHONY : CMakeFiles\LCS.dir\clean

CMakeFiles\LCS.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Clion\LCS D:\Clion\LCS D:\Clion\LCS\cmake-build-debug D:\Clion\LCS\cmake-build-debug D:\Clion\LCS\cmake-build-debug\CMakeFiles\LCS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\LCS.dir\depend

