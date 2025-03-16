file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(factory_method ${SOURCES})
target_include_directories(factory_method PRIVATE include)