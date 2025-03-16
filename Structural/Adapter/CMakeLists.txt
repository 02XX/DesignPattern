file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(adapter ${SOURCES})
target_include_directories(adapter PRIVATE include)