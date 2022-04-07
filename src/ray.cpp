#include "ray.hpp"
#include "vec3.hpp"


point3 ray::origin() const {
    return this->orig;
}

vec3 ray::direction() const{
    return this->dir;
}

point3 ray::at(double t) const {
    point3 ans;
    ans = orig + t*dir;
    return ans;
}