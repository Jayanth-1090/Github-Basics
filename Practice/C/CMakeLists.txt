# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(C_Practice)

# Set the output Directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY $(CMAKE_BINARY_DIR)/Output)

# Get all .c files in the current directory
file(GLOB SOURCES "*.c")

# Add executable for each .c file
foreach(source_file ${SOURCES})
	get_filename_component(EXECUTABLE_NAME ${source_file} NAME_WE)
	add_executable(${EXECUTABLE_NAME} ${source_file})
endforeach()
