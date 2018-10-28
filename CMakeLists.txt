cmake_minimum_required(VERSION 3.1)

set(CRUNCH_PROJECT_NAME crunch)
set(CRUNCH_LIBRARY_NAME crn)
set(CRUNCH_EXE_NAME crunch)

project(${CRUNCH_PROJECT_NAME} )

option(BUILD_SHARED_LIBS "Build crunchlib as shared library and link executables against it." OFF)
option(BUILD_EXAMPLES "Build examples." OFF)

if (BUILD_EXAMPLES)
	add_subdirectory(example1)
	add_subdirectory(example2)
	add_subdirectory(example3)
endif(BUILD_EXAMPLES)

add_subdirectory(crunch)
add_subdirectory(crnlib)


