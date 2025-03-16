file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(singleton ${SOURCES})
target_include_directories(singleton PRIVATE include)