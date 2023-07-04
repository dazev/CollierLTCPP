# Author: Duarte Azevedo
# Date : 04/07/23

cmake_minimum_required(VERSION 3.13)
project(
  CollierLTCPP
  VERSION 0.0.1
  LANGUAGES CXX Fortran
  DESCRIPTION "CollierLTCPP - A C++ wrapper interface library that allow codes that call LoopTool functions to have these computed through Collier instead")

# -------------------------------- Find Collier --------------------------------
find_package(collier 1.2.5 REQUIRED)

# -------------------------------- Source Files -----------------------
add_subdirectory(src)
