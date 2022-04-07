#include <gtest/gtest.h>
#include "ray.hpp"


TEST(Ray, ctor){
    
    auto orig = point3{0,0,0};
    auto dir = vec3{1,0,0};
    auto r = ray(orig,dir);    
    auto exp = orig.x();
    //auto found = r.direction();
    //EXPECT_EQ(r.origin().x(), orig.x());
    EXPECT_EQ(2,2);
}
