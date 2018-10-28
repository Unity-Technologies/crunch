set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
  ${CMAKE_SOURCE_DIR}/inc
  ${CMAKE_SOURCE_DIR}/crnlib
)

# Defines the source code for the library
set(CRUNCH_SRCS
	${CMAKE_CURRENT_SOURCE_DIR}/corpus_gen.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/corpus_gen.h
	${CMAKE_CURRENT_SOURCE_DIR}/corpus_test.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/corpus_test.h
	${CMAKE_CURRENT_SOURCE_DIR}/crunch.cpp

)

 add_executable(${CRUNCH_EXE_NAME} ${CRUNCH_SRCS})
 target_link_libraries(${CRUNCH_EXE_NAME} ${CRUNCH_LIBRARY_NAME})

