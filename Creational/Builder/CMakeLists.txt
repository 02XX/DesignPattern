file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(builder ${SOURCES})
target_include_directories(builder PRIVATE include)