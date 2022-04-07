add_library(raytracinglib vec3.cpp)
add_executable(app main.cpp)
target_link_libraries(app raytracinglib)