file(GLOB_RECURSE SOURCES "*.cpp")

add_library(HomeOS_Core STATIC ${SOURCES})

target_include_directories(HomeOS_Core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})