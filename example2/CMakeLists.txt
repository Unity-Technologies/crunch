set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
  ${CMAKE_SOURCE_DIR}/inc
  ${CMAKE_SOURCE_DIR}/crnlib
)


# Defines the source code for the library
set(EXAMPLE2_SRCS
	${CMAKE_CURRENT_SOURCE_DIR}/example2.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/timer.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/timer.h
)

 add_executable(example2 ${EXAMPLE2_SRCS})
 target_link_libraries(example2 ${CRUNCH_LIBRARY_NAME})

