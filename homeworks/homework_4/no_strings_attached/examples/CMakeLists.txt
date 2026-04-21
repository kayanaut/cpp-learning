# Split strings example
add_executable(split_strings split_strings.cpp)
target_link_libraries(split_strings PRIVATE string_split)
target_include_directories(split_strings PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)

# Trim strings example
add_executable(trim_strings trim_strings.cpp)
target_link_libraries(trim_strings PRIVATE string_trim)
target_include_directories(trim_strings PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)
