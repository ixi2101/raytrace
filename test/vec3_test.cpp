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

TEST(Vec3Overloads, ADD){
    auto v = vec3{2,3,4};
    auto v1 = vec3{1,1,1};
    auto v3 = v1 + v;
    EXPECT_EQ(v3.x(), 3);
    EXPECT_EQ(v3.y(), 4);
    EXPECT_EQ(v3.z(), 5);
}

TEST(Vec3Overloads, SUBTRACT){
    auto v = vec3{2,3,4};
    auto v1 = vec3{1,1,1};
    auto v3 = v1 - v;
    EXPECT_EQ(v3.x(), -1);
    EXPECT_EQ(v3.y(), -2);
    EXPECT_EQ(v3.z(), -3);
}

TEST(Vec3Overloads, MULTIPLY){
    auto v = vec3{2,3,4};
    auto v3 = v * v;
    EXPECT_EQ(v3.x(), 4);
    EXPECT_EQ(v3.y(), 9);
    EXPECT_EQ(v3.z(), 16);
}

TEST(Vec3Overloads, SCALEMULTIPLY){
    auto v = vec3{2,3,4};
    double sf = 2.00;
    auto v3 = v * sf;
    EXPECT_EQ(v3.x(), 4);
    EXPECT_EQ(v3.y(), 6);
    EXPECT_EQ(v3.z(), 8);
}

TEST(Vec3Overloads, SCALEMULTIPLY2){
    auto v = vec3{2,3,4};
    double sf = 2.00;
    auto v3 = sf * v ;
    EXPECT_EQ(v3.x(), 4);
    EXPECT_EQ(v3.y(), 6);
    EXPECT_EQ(v3.z(), 8);
}

TEST(Vec3Overloads, DIVIDE){
    auto v = vec3{2,3,4};
    double sf = 2.00;
    auto v3 = v / sf;
    EXPECT_EQ(v3.x(), 1);
    EXPECT_EQ(v3.y(), 1.5);
    EXPECT_EQ(v3.z(), 2);
}

TEST(Vec3Util, dot){
    auto v = vec3{1,1,1};
    auto v2 = vec3{2,2,2};
    auto res = vec3::dot(v, v2);
    EXPECT_EQ(res,6);
}

TEST(Vec3Util, cross){
    auto v = vec3{1,1,1};
    auto v2 = vec3{2,2,2};
    auto res = vec3::cross(v, v2);
    EXPECT_EQ(res.x(), 0);
    EXPECT_EQ(res.y(), 0);
    EXPECT_EQ(res.z(), 0);
}

TEST(Vec3Util, unitvector){
    auto v = vec3{3,4,5};
    auto res = vec3::unit_vector(v);
    EXPECT_NEAR(res.x(), 0.424, 0.001);
    EXPECT_NEAR(res.y(), 0.565, 0.001);
    EXPECT_NEAR(res.z(), 0.707, 0.001);
    EXPECT_DOUBLE_EQ(res.length(), 1);
}

TEST(Vec3Util, equality){
    auto v = vec3{0,0,0};
    auto v2 = vec3{0,0,0};
    auto v3 = vec3{1,1,2};

    EXPECT_TRUE(v==v2);
    EXPECT_FALSE(v==v3);
}
TEST(Vec3Util, NEquality){
    auto v = vec3{0,0,0};
    auto v2 = vec3{0,0,0};
    auto v3 = vec3{1,1,2};

    EXPECT_FALSE(v!=v2);
    EXPECT_TRUE(v!=v3);
}