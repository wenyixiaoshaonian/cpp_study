cmake_minimum_required(VERSION 3.4.1)

project(demo)

#指定编译器的使用版本
set(CMAKE_CXX_STANDARD 11)  #指定为C++11 版本
set(CMAKE_CXX_STANDARD_REQUIRED ON) #设置为True，则必须使用指定的版本 反之为首选版本

aux_source_directory(. SRC_LIST) # 搜索当前目录下的所有.cpp文件

include(GNUInstallDirs)

add_executable(demo ${SRC_LIST}) # 生成可执行文件
#add_library(common STATIC util.cpp) # 生成静态库
#add_library(common SHARED util.cpp) # 生成动态库或共享库


#add_subdirectory #添加子目录，要求子目录里头必须要CMakeList.txt文件
#add_subdirectory(celebi)
