cmake_minimum_required(VERSION 2.8)

project(DynamicLoadingTest)
add_library(Func1 SHARED IFunc.cpp IFunc.h func1.h func1.cpp)
add_library(Func2 SHARED IFunc.cpp IFunc.h func2.h func2.cpp)
add_executable(${PROJECT_NAME} "main.cpp" DynamicLoading.h DynamicLoading.cpp IFunc.cpp IFunc.h)
