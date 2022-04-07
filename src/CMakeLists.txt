add_library(raytracinglib vec3.cpp color.cpp ray.cpp)
add_executable(app main.cpp)
target_link_libraries(app raytracinglib)