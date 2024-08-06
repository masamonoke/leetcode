cmake_minimum_required(VERSION 3.23.2)

set(NAME test)
project(${NAME})

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(deps/gtest)

# include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
# include_directories(../)

add_executable(length_of_last_word_test
	length_of_last_word_test.cpp
	../length_of_last_word.cpp
)

if (${CMAKE_BUILD_TYPE} MATCHES Debug)
	if (NOT WIN32)
		target_link_options(length_of_last_word_test PRIVATE -fsanitize=address,undefined,null,bounds)
	endif()
endif()
