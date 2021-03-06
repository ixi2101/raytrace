#include "ray.hpp"
#include "vec3.hpp"


point3 ray::origin() const {
    return orig;
}

vec3 ray::direction() const{
    return dir;
}

point3 ray::at(double t) const {
    
    return orig + (dir * t);

}