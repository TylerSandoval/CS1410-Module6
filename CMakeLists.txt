cmake_minimum_required(VERSION 3.8)
project(OctoberThird)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES Arrays.cpp)
#set(SOURCE_FILES multiDarray.cpp)
#set(SOURCE_FILES funcArray.cpp)
set(SOURCE_FILES structArray.cpp)
add_executable(OctoberThird ${SOURCE_FILES})