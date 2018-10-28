set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
  ${CMAKE_SOURCE_DIR}/inc
  ${CMAKE_SOURCE_DIR}/crnlib
)


# Defines the source code for the library
set(EXAMPLE1_SRCS
	${CMAKE_CURRENT_SOURCE_DIR}/example1.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/stb_image.h
)

 add_executable(example1 ${EXAMPLE1_SRCS})
 target_link_libraries(example1 ${CRUNCH_LIBRARY_NAME})

