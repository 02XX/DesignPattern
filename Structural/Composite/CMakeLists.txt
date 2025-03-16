file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(composite ${SOURCES})
target_include_directories(composite PRIVATE include)