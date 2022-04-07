#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>
#include <array>

using std::sqrt;

class vec3 {
    public:
        vec3();
        vec3(double e0, double e1, double e2);

        std::array<double, 3> e;
        
};


#endif