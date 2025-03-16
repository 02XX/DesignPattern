file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(facade ${SOURCES})
target_include_directories(facade PRIVATE include)