# String split library
add_library(string_split string_split.cpp)
target_include_directories(string_split PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)

# String trim library
add_library(string_trim string_trim.cpp)
target_include_directories(string_trim PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)

# Tests
add_executable(string_split_test string_split_test.cpp)
target_link_libraries(string_split_test PRIVATE string_split gtest gtest_main)
target_include_directories(string_split_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)

add_executable(string_trim_test string_trim_test.cpp)
target_link_libraries(string_trim_test PRIVATE string_trim gtest gtest_main)
target_include_directories(string_trim_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)

add_test(NAME StringSplitTest COMMAND string_split_test)
add_test(NAME StringTrimTest COMMAND string_trim_test)
