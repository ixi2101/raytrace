add_executable(vec3_test vec3_test.cpp)
target_include_directories(vec3_test PUBLIC ../src)
target_link_libraries(vec3_test gtest_main raytracinglib)

add_executable(ray_test ray_test.cpp)
target_include_directories(ray_test PUBLIC ../src)
target_link_libraries(ray_test gtest_main raytracinglib)

include(GoogleTest)
gtest_discover_tests(vec3_test)
gtest_discover_tests(ray_test)