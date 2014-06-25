# Install script for directory: /Users/andres/github/volk_gnsssdr/python/volk_gnsssdr_modtool

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "volk_gnsssdr")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/site-packages/volk_gnsssdr_modtool" TYPE FILE FILES
    "/Users/andres/github/volk_gnsssdr/python/volk_gnsssdr_modtool/__init__.py"
    "/Users/andres/github/volk_gnsssdr/python/volk_gnsssdr_modtool/cfg.py"
    "/Users/andres/github/volk_gnsssdr/python/volk_gnsssdr_modtool/volk_gnsssdr_modtool_generate.py"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "volk_gnsssdr")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/site-packages/volk_gnsssdr_modtool" TYPE FILE FILES
    "/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/__init__.pyc"
    "/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/cfg.pyc"
    "/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/volk_gnsssdr_modtool_generate.pyc"
    "/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/__init__.pyo"
    "/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/cfg.pyo"
    "/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/volk_gnsssdr_modtool_generate.pyo"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "volk_gnsssdr")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "volk_gnsssdr_modtool" FILES "/Users/andres/github/volk_gnsssdr/build/python/volk_gnsssdr_modtool/volk_gnsssdr_modtool.exe")
endif()

