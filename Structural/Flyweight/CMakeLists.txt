file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(flyweight ${SOURCES})
target_include_directories(flyweight PRIVATE include)