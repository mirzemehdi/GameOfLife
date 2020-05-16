# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/340/bin/cmake

# The command to remove a file.
RM = /snap/cmake/340/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/snap/cmake/340/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/snap/cmake/340/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/snap/cmake/340/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/snap/cmake/340/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/snap/cmake/340/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/snap/cmake/340/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/snap/cmake/340/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target test
test:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running tests..."
	/snap/cmake/340/bin/ctest --force-new-ctest-process $(ARGS)
.PHONY : test

# Special rule for the target test
test/fast: test

.PHONY : test/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/snap/cmake/340/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/CMakeFiles /home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named mytest

# Build rule for target.
mytest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 mytest
.PHONY : mytest

# fast build rule for target.
mytest/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/build
.PHONY : mytest/fast

#=============================================================================
# Target rules for targets named gameoflife

# Build rule for target.
gameoflife: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gameoflife
.PHONY : gameoflife

# fast build rule for target.
gameoflife/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/build
.PHONY : gameoflife/fast

#=============================================================================
# Target rules for targets named cover

# Build rule for target.
cover: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cover
.PHONY : cover

# fast build rule for target.
cover/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cover.dir/build.make CMakeFiles/cover.dir/build
.PHONY : cover/fast

#=============================================================================
# Target rules for targets named cover_html

# Build rule for target.
cover_html: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cover_html
.PHONY : cover_html

# fast build rule for target.
cover_html/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cover_html.dir/build.make CMakeFiles/cover_html.dir/build
.PHONY : cover_html/fast

#=============================================================================
# Target rules for targets named game

# Build rule for target.
game: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 game
.PHONY : game

# fast build rule for target.
game/fast:
	$(MAKE) $(MAKESILENT) -f game/CMakeFiles/game.dir/build.make game/CMakeFiles/game.dir/build
.PHONY : game/fast

#=============================================================================
# Target rules for targets named cellTable

# Build rule for target.
cellTable: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cellTable
.PHONY : cellTable

# fast build rule for target.
cellTable/fast:
	$(MAKE) $(MAKESILENT) -f game/cellTable/CMakeFiles/cellTable.dir/build.make game/cellTable/CMakeFiles/cellTable.dir/build
.PHONY : cellTable/fast

#=============================================================================
# Target rules for targets named arena

# Build rule for target.
arena: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 arena
.PHONY : arena

# fast build rule for target.
arena/fast:
	$(MAKE) $(MAKESILENT) -f game/cellTable/arena/CMakeFiles/arena.dir/build.make game/cellTable/arena/CMakeFiles/arena.dir/build
.PHONY : arena/fast

#=============================================================================
# Target rules for targets named cell

# Build rule for target.
cell: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cell
.PHONY : cell

# fast build rule for target.
cell/fast:
	$(MAKE) $(MAKESILENT) -f game/cellTable/cell/CMakeFiles/cell.dir/build.make game/cellTable/cell/CMakeFiles/cell.dir/build
.PHONY : cell/fast

#=============================================================================
# Target rules for targets named cellList

# Build rule for target.
cellList: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cellList
.PHONY : cellList

# fast build rule for target.
cellList/fast:
	$(MAKE) $(MAKESILENT) -f game/cellTable/cellList/CMakeFiles/cellList.dir/build.make game/cellTable/cellList/CMakeFiles/cellList.dir/build
.PHONY : cellList/fast

#=============================================================================
# Target rules for targets named drawer

# Build rule for target.
drawer: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 drawer
.PHONY : drawer

# fast build rule for target.
drawer/fast:
	$(MAKE) $(MAKESILENT) -f console/CMakeFiles/drawer.dir/build.make console/CMakeFiles/drawer.dir/build
.PHONY : drawer/fast

#=============================================================================
# Target rules for targets named mySDLDrawer

# Build rule for target.
mySDLDrawer: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 mySDLDrawer
.PHONY : mySDLDrawer

# fast build rule for target.
mySDLDrawer/fast:
	$(MAKE) $(MAKESILENT) -f sdl/CMakeFiles/mySDLDrawer.dir/build.make sdl/CMakeFiles/mySDLDrawer.dir/build
.PHONY : mySDLDrawer/fast

console/board_drawer.o: console/board_drawer.c.o

.PHONY : console/board_drawer.o

# target to build an object file
console/board_drawer.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/console/board_drawer.c.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/console/board_drawer.c.o
.PHONY : console/board_drawer.c.o

console/board_drawer.i: console/board_drawer.c.i

.PHONY : console/board_drawer.i

# target to preprocess a source file
console/board_drawer.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/console/board_drawer.c.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/console/board_drawer.c.i
.PHONY : console/board_drawer.c.i

console/board_drawer.s: console/board_drawer.c.s

.PHONY : console/board_drawer.s

# target to generate assembly for a file
console/board_drawer.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/console/board_drawer.c.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/console/board_drawer.c.s
.PHONY : console/board_drawer.c.s

game/cellTable/arena/arena.o: game/cellTable/arena/arena.c.o

.PHONY : game/cellTable/arena/arena.o

# target to build an object file
game/cellTable/arena/arena.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/arena/arena.c.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/arena/arena.c.o
.PHONY : game/cellTable/arena/arena.c.o

game/cellTable/arena/arena.i: game/cellTable/arena/arena.c.i

.PHONY : game/cellTable/arena/arena.i

# target to preprocess a source file
game/cellTable/arena/arena.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/arena/arena.c.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/arena/arena.c.i
.PHONY : game/cellTable/arena/arena.c.i

game/cellTable/arena/arena.s: game/cellTable/arena/arena.c.s

.PHONY : game/cellTable/arena/arena.s

# target to generate assembly for a file
game/cellTable/arena/arena.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/arena/arena.c.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/arena/arena.c.s
.PHONY : game/cellTable/arena/arena.c.s

game/cellTable/cell/cell.o: game/cellTable/cell/cell.c.o

.PHONY : game/cellTable/cell/cell.o

# target to build an object file
game/cellTable/cell/cell.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cell/cell.c.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cell/cell.c.o
.PHONY : game/cellTable/cell/cell.c.o

game/cellTable/cell/cell.i: game/cellTable/cell/cell.c.i

.PHONY : game/cellTable/cell/cell.i

# target to preprocess a source file
game/cellTable/cell/cell.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cell/cell.c.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cell/cell.c.i
.PHONY : game/cellTable/cell/cell.c.i

game/cellTable/cell/cell.s: game/cellTable/cell/cell.c.s

.PHONY : game/cellTable/cell/cell.s

# target to generate assembly for a file
game/cellTable/cell/cell.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cell/cell.c.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cell/cell.c.s
.PHONY : game/cellTable/cell/cell.c.s

game/cellTable/cellList/cellList.o: game/cellTable/cellList/cellList.c.o

.PHONY : game/cellTable/cellList/cellList.o

# target to build an object file
game/cellTable/cellList/cellList.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cellList/cellList.c.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cellList/cellList.c.o
.PHONY : game/cellTable/cellList/cellList.c.o

game/cellTable/cellList/cellList.i: game/cellTable/cellList/cellList.c.i

.PHONY : game/cellTable/cellList/cellList.i

# target to preprocess a source file
game/cellTable/cellList/cellList.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cellList/cellList.c.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cellList/cellList.c.i
.PHONY : game/cellTable/cellList/cellList.c.i

game/cellTable/cellList/cellList.s: game/cellTable/cellList/cellList.c.s

.PHONY : game/cellTable/cellList/cellList.s

# target to generate assembly for a file
game/cellTable/cellList/cellList.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cellList/cellList.c.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cellList/cellList.c.s
.PHONY : game/cellTable/cellList/cellList.c.s

game/cellTable/cellTable.o: game/cellTable/cellTable.c.o

.PHONY : game/cellTable/cellTable.o

# target to build an object file
game/cellTable/cellTable.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cellTable.c.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cellTable.c.o
.PHONY : game/cellTable/cellTable.c.o

game/cellTable/cellTable.i: game/cellTable/cellTable.c.i

.PHONY : game/cellTable/cellTable.i

# target to preprocess a source file
game/cellTable/cellTable.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cellTable.c.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cellTable.c.i
.PHONY : game/cellTable/cellTable.c.i

game/cellTable/cellTable.s: game/cellTable/cellTable.c.s

.PHONY : game/cellTable/cellTable.s

# target to generate assembly for a file
game/cellTable/cellTable.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/cellTable/cellTable.c.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/cellTable/cellTable.c.s
.PHONY : game/cellTable/cellTable.c.s

game/game.o: game/game.c.o

.PHONY : game/game.o

# target to build an object file
game/game.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/game.c.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/game.c.o
.PHONY : game/game.c.o

game/game.i: game/game.c.i

.PHONY : game/game.i

# target to preprocess a source file
game/game.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/game.c.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/game.c.i
.PHONY : game/game.c.i

game/game.s: game/game.c.s

.PHONY : game/game.s

# target to generate assembly for a file
game/game.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/game/game.c.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/game/game.c.s
.PHONY : game/game.c.s

main.o: main.c.o

.PHONY : main.o

# target to build an object file
main.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/main.c.o
.PHONY : main.c.o

main.i: main.c.i

.PHONY : main.i

# target to preprocess a source file
main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/main.c.i
.PHONY : main.c.i

main.s: main.c.s

.PHONY : main.s

# target to generate assembly for a file
main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/main.c.s
.PHONY : main.c.s

sdl/draw_sdl.o: sdl/draw_sdl.c.o

.PHONY : sdl/draw_sdl.o

# target to build an object file
sdl/draw_sdl.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/sdl/draw_sdl.c.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/sdl/draw_sdl.c.o
.PHONY : sdl/draw_sdl.c.o

sdl/draw_sdl.i: sdl/draw_sdl.c.i

.PHONY : sdl/draw_sdl.i

# target to preprocess a source file
sdl/draw_sdl.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/sdl/draw_sdl.c.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/sdl/draw_sdl.c.i
.PHONY : sdl/draw_sdl.c.i

sdl/draw_sdl.s: sdl/draw_sdl.c.s

.PHONY : sdl/draw_sdl.s

# target to generate assembly for a file
sdl/draw_sdl.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/sdl/draw_sdl.c.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/gameoflife.dir/build.make CMakeFiles/gameoflife.dir/sdl/draw_sdl.c.s
.PHONY : sdl/draw_sdl.c.s

unit_tests.o: unit_tests.c.o

.PHONY : unit_tests.o

# target to build an object file
unit_tests.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/unit_tests.c.o
.PHONY : unit_tests.c.o

unit_tests.i: unit_tests.c.i

.PHONY : unit_tests.i

# target to preprocess a source file
unit_tests.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/unit_tests.c.i
.PHONY : unit_tests.c.i

unit_tests.s: unit_tests.c.s

.PHONY : unit_tests.s

# target to generate assembly for a file
unit_tests.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mytest.dir/build.make CMakeFiles/mytest.dir/unit_tests.c.s
.PHONY : unit_tests.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... test"
	@echo "... cover"
	@echo "... cover_html"
	@echo "... arena"
	@echo "... cell"
	@echo "... cellList"
	@echo "... cellTable"
	@echo "... drawer"
	@echo "... game"
	@echo "... gameoflife"
	@echo "... mySDLDrawer"
	@echo "... mytest"
	@echo "... console/board_drawer.o"
	@echo "... console/board_drawer.i"
	@echo "... console/board_drawer.s"
	@echo "... game/cellTable/arena/arena.o"
	@echo "... game/cellTable/arena/arena.i"
	@echo "... game/cellTable/arena/arena.s"
	@echo "... game/cellTable/cell/cell.o"
	@echo "... game/cellTable/cell/cell.i"
	@echo "... game/cellTable/cell/cell.s"
	@echo "... game/cellTable/cellList/cellList.o"
	@echo "... game/cellTable/cellList/cellList.i"
	@echo "... game/cellTable/cellList/cellList.s"
	@echo "... game/cellTable/cellTable.o"
	@echo "... game/cellTable/cellTable.i"
	@echo "... game/cellTable/cellTable.s"
	@echo "... game/game.o"
	@echo "... game/game.i"
	@echo "... game/game.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... sdl/draw_sdl.o"
	@echo "... sdl/draw_sdl.i"
	@echo "... sdl/draw_sdl.s"
	@echo "... unit_tests.o"
	@echo "... unit_tests.i"
	@echo "... unit_tests.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

