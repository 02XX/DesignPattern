file(GLOB_RECURSE SOURCES CMAKE_CONFIGURE_DEPENDS "src/*.cpp")
add_executable(prototype ${SOURCES})
target_include_directories(prototype PRIVATE include)