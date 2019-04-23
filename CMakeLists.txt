# cmake version requirment
cmake_minimum_required(VERSION 3.14)

# project info
project(mhttpd C)

# C11 standard
set(CMAKE_C_STANDARD 11)

#添加子目录
add_subdirectory(server)
add_subdirectory(config_manager)

#包含目录
include_directories(config_manager server)


# output
add_executable(mhttpd main.c)

# link lib
target_link_libraries(mhttpd server config_manager)

