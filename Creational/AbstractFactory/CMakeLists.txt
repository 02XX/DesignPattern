file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(abstract_factory ${SOURCES})
target_include_directories(abstract_factory PRIVATE include)