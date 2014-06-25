# Install script for directory: /Users/andres/github/volk_gnsssdr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/volk")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "volk_gnsssdr_devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/Users/andres/github/volk_gnsssdr/build/volk_gnsssdr.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "volk_gnsssdr_devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/andres/github/volk_gnsssdr/kernels/volk_gnsssdr" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "volk_gnsssdr_devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/volk_gnsssdr" TYPE FILE FILES
    "/Users/andres/github/volk_gnsssdr/include/volk_gnsssdr/volk_gnsssdr_prefs.h"
    "/Users/andres/github/volk_gnsssdr/include/volk_gnsssdr/volk_gnsssdr_complex.h"
    "/Users/andres/github/volk_gnsssdr/include/volk_gnsssdr/volk_gnsssdr_common.h"
    "/Users/andres/github/volk_gnsssdr/build/include/volk_gnsssdr/volk_gnsssdr.h"
    "/Users/andres/github/volk_gnsssdr/build/include/volk_gnsssdr/volk_gnsssdr_cpu.h"
    "/Users/andres/github/volk_gnsssdr/build/include/volk_gnsssdr/volk_gnsssdr_config_fixed.h"
    "/Users/andres/github/volk_gnsssdr/build/include/volk_gnsssdr/volk_gnsssdr_typedefs.h"
    "/Users/andres/github/volk_gnsssdr/include/volk_gnsssdr/volk_gnsssdr_malloc.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "volk_gnsssdr_devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/volk_gnsssdr" TYPE FILE FILES "/Users/andres/github/volk_gnsssdr/cmake/VolkConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/andres/github/volk_gnsssdr/build/lib/cmake_install.cmake")
  include("/Users/andres/github/volk_gnsssdr/build/apps/cmake_install.cmake")
  include("/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "/Users/andres/github/volk_gnsssdr/build/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "/Users/andres/github/volk_gnsssdr/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()
