file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(bridge ${SOURCES})
target_include_directories(bridge PRIVATE include)