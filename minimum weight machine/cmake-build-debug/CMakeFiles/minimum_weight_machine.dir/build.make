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
CMAKE_COMMAND = "E:\clion\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Clion\minimum weight machine"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Clion\minimum weight machine\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\minimum_weight_machine.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\minimum_weight_machine.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\minimum_weight_machine.dir\flags.make

CMakeFiles\minimum_weight_machine.dir\main.cpp.obj: CMakeFiles\minimum_weight_machine.dir\flags.make
CMakeFiles\minimum_weight_machine.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Clion\minimum weight machine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/minimum_weight_machine.dir/main.cpp.obj"
	"E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\minimum_weight_machine.dir\main.cpp.obj /FdCMakeFiles\minimum_weight_machine.dir\ /FS -c "D:\Clion\minimum weight machine\main.cpp"
<<

CMakeFiles\minimum_weight_machine.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minimum_weight_machine.dir/main.cpp.i"
	"E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" > CMakeFiles\minimum_weight_machine.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Clion\minimum weight machine\main.cpp"
<<

CMakeFiles\minimum_weight_machine.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minimum_weight_machine.dir/main.cpp.s"
	"E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\minimum_weight_machine.dir\main.cpp.s /c "D:\Clion\minimum weight machine\main.cpp"
<<

# Object files for target minimum_weight_machine
minimum_weight_machine_OBJECTS = \
"CMakeFiles\minimum_weight_machine.dir\main.cpp.obj"

# External object files for target minimum_weight_machine
minimum_weight_machine_EXTERNAL_OBJECTS =

minimum_weight_machine.exe: CMakeFiles\minimum_weight_machine.dir\main.cpp.obj
minimum_weight_machine.exe: CMakeFiles\minimum_weight_machine.dir\build.make
minimum_weight_machine.exe: CMakeFiles\minimum_weight_machine.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Clion\minimum weight machine\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable minimum_weight_machine.exe"
	"E:\clion\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\minimum_weight_machine.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- "E:\visual studio\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\minimum_weight_machine.dir\objects1.rsp @<<
 /out:minimum_weight_machine.exe /implib:minimum_weight_machine.lib /pdb:"D:\Clion\minimum weight machine\cmake-build-debug\minimum_weight_machine.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\minimum_weight_machine.dir\build: minimum_weight_machine.exe

.PHONY : CMakeFiles\minimum_weight_machine.dir\build

CMakeFiles\minimum_weight_machine.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\minimum_weight_machine.dir\cmake_clean.cmake
.PHONY : CMakeFiles\minimum_weight_machine.dir\clean

CMakeFiles\minimum_weight_machine.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\Clion\minimum weight machine" "D:\Clion\minimum weight machine" "D:\Clion\minimum weight machine\cmake-build-debug" "D:\Clion\minimum weight machine\cmake-build-debug" "D:\Clion\minimum weight machine\cmake-build-debug\CMakeFiles\minimum_weight_machine.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\minimum_weight_machine.dir\depend

