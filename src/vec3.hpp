#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>
#include <array>
#include <ostream>


class vec3 {
    public:
        vec3();
        vec3(double e0, double e1, double e2);

        double x() const;
        double y() const;
        double z() const;

        vec3 operator-();
        double operator[](int i) const;
        double& operator[](int i);

        vec3& operator+=(const vec3 &v);
        vec3& operator*=(const double t);
        vec3& operator/=(const double t);

        double length() const;
        double length_squared() const;

        std::array<double, 3> e;

        // Utility functions


};



using point3 = vec3;
using color = vec3;

std::ostream& operator<<(std::ostream &out, const vec3 &v);
vec3 operator-(const vec3 &u, const vec3 &v);
vec3 operator+(const vec3 &u, const vec3 &v);
vec3 operator*(const vec3 &u, const vec3 &v);
vec3 operator*(double t, const vec3 &v);
vec3 operator*(const vec3 &v, double t);
vec3 operator/(vec3 v, double t);
double dot(const vec3 &u, const vec3 &v);
vec3 cross(const vec3 &u, const vec3 &v);
vec3 unit_vector(vec3 v);


#endif