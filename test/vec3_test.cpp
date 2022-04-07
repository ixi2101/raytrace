#include <cmath>
#include <gtest/gtest.h>
#include "vec3.hpp"


TEST(Vec3Tests, empty_constructor){
    auto v = vec3{};
    EXPECT_EQ(v.e[0], 0);
    EXPECT_EQ(v.e[1], 0);
    EXPECT_EQ(v.e[2], 0);
    EXPECT_EQ(v.e.size(), 3);
}

TEST(Vec3Tests, constructor){
    auto v = vec3{1,2,3};
    EXPECT_EQ(v.e[0], 1);
    EXPECT_EQ(v.e[1], 2);
    EXPECT_EQ(v.e[2], 3);
    EXPECT_EQ(v.e.size(), 3);
}

TEST(Vec3Tests, xyz_indexing){
    auto v = vec3{5,10,15};
    EXPECT_EQ(v.x(), 5);
    EXPECT_EQ(v.y(), 10);
    EXPECT_EQ(v.z(), 15);
}

TEST(Vec3Tests, operator_inverse){
    auto v = vec3{1,2,3};
    auto v2 = -v;

    EXPECT_EQ(v2.x(), -1);
    EXPECT_EQ(v2.y(), -2);
    EXPECT_EQ(v2.z(), -3);
}

TEST(Vec3Tests, operator_index){
    auto v = vec3{0,1,2};
    EXPECT_EQ(v[0], 0);
    EXPECT_EQ(v[1], 1);
    EXPECT_EQ(v[2], 2);
    
}

TEST(Vec3Tests, length) {
    auto v = vec3{3,4,5};
    EXPECT_EQ(v.length_squared(), 50);
    EXPECT_NEAR(v.length(), std::sqrt(50), 0.001);
    
}