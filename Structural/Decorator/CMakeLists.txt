file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(decorator ${SOURCES})
target_include_directories(decorator PRIVATE include)