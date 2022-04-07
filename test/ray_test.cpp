#include <gtest/gtest.h>
#include "ray.hpp"
#include "vec3.hpp"


TEST(Ray, ctor){
    
    auto orig = point3{0,0,0};
    auto dir = vec3{1,0,0};
    auto r = ray(orig,dir);    
    auto exp = orig.x();
    auto found = r.direction();
    EXPECT_TRUE(r.origin() == orig);
    EXPECT_TRUE(r.direction() == dir);
    
}

TEST(Ray, ray_at){
    auto orig = point3{0,0,0};
    auto dir = vec3{1,0,0};
    auto r = ray(orig,dir); 
    auto expected = point3{4,0,0};
    EXPECT_TRUE(r.at(4) == expected);
    
    }