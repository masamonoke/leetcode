cmake_minimum_required(VERSION 3.23.2)

set(NAME leetcode)
project(${NAME})

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(test)
# include_directories(test/deps/gtest/googletest/include)

enable_testing()
target_link_libraries(length_of_last_word_test gtest gtest_main)
add_test(length_of_last_word test/length_of_last_word_test)
