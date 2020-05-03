# Install script for directory: /home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/game/cellTable

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcellTable.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcellTable.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcellTable.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/game/cellTable/libcellTable.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcellTable.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcellTable.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcellTable.so"
         OLD_RPATH "/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/game/cellTable/arena:/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/game/cellTable/cell:/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/game/cellTable/cellList:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcellTable.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/game/cellTable/arena.h"
    "/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/game/cellTable/cell.h"
    "/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/game/cellTable/cellList.h"
    "/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/game/cellTable/cellTable.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/game/cellTable/arena/cmake_install.cmake")
  include("/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/game/cellTable/cell/cmake_install.cmake")
  include("/home/mirzemehdi/Desktop/UFAZ/DevelopmentTechniques/gameOfLife/build/game/cellTable/cellList/cmake_install.cmake")

endif()
