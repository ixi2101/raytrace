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

        double x();
        double y();
        double z();

        vec3 operator-();
        double operator[](int i) const;
        double& operator[](int i);

        vec3& operator+=(const vec3 &v);
        vec3& operator*=(const double t);
        vec3& operator/=(const double t);

        double length() const;
        double length_squared() const;

        std::array<double, 3> e;

};

using point3 = vec3;
using color = vec3;

#endif