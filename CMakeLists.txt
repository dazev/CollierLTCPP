# Author: Duarte Azevedo
# Date : 04/07/23

cmake_minimum_required(VERSION 3.13)
project(
  CollierLTCPP
  VERSION 0.0.1
  LANGUAGES CXX Fortran
  DESCRIPTION "CollierLTCPP - A C++ wrapper interface library that allow codes that call LoopTool functions to have these computed through Collier instead")

# -------------------------------- setup cmake --------------------------------
if(POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW) # use <packagename>_ROOT as search path
endif(POLICY CMP0074)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "RELEASE")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

find_package(PkgConfig)

# -------------------------------- Find Collier --------------------------------
find_package(collier 1.2.5 REQUIRED)

# -------------------------------- Source Files -----------------------
add_subdirectory(src)
