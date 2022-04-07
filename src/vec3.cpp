#include "vec3.hpp"
#include <ostream>

vec3::vec3(){
    this->e = {0,0,0};
} 

vec3::vec3(double e0, double e1, double e2){
    this->e = {e0, e1, e2};
}

auto vec3::x() const -> double { return this->e[0]; }
auto vec3::y() const -> double { return this->e[1]; }
auto vec3::z() const -> double { return this->e[2]; }

vec3 vec3::operator-() {
    return vec3{-x(), -y(), -z()};
}

double vec3::operator[](int i) const {
    return e.at(i);
}

double& vec3::operator[](int i) {
    return e.at(i);
}

vec3& vec3::operator+=(const vec3 &v){
    e[0] += v.e[0];
    e[1] += v.e[1];
    e[2] += v.e[2];
    return *this;
}

vec3& vec3::operator*=(const double t){
    e[0] *= t;
    e[1] *= t;
    e[2] *= t;
    return *this;
}

vec3& vec3::operator/=(const double t){
    return *this *= 1/t;
}

double vec3::length() const {
    return std::sqrt(this->length_squared());
}

double vec3::length_squared() const {
    return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
}

inline std::ostream& operator<<(std::ostream &out, const vec3 &v){
    return out << v.e[0] << ' ' << v.e[1] << ' ' << v.e[2];
}

vec3 vec3::operator+(const vec3 &v) const {
    return vec3(e[0] + v.e[0], e[1] + v.e[1], e[2] + v.e[2]);
}

vec3 vec3::operator-(const vec3 &v) const{
    return vec3(e[0] - v.e[0], e[1] - v.e[1], e[2] - v.e[2]);
}

vec3 vec3::operator*(const vec3 &v) const{
    return vec3(e[0] * v.e[0], e[1] * v.e[1], e[2] * v.e[2]);
}

vec3 vec3::operator*(double t) const {
    return vec3(t*e[0], t*e[1], t*e[2]);
}

vec3 vec3::operator/(double t) const {
    return vec3(e[0]/t, e[1]/t, e[2]/t);
}

vec3 operator*(double t, const vec3& v){
    return v*t;
}

double vec3::dot(const vec3 &u, const vec3 &v) {
    return u.e[0] * v.e[0]
         + u.e[1] * v.e[1]
         + u.e[2] * v.e[2];
}

vec3 vec3::cross(const vec3 &u, const vec3 &v) {
    return vec3(u.e[1] * v.e[2] - u.e[2] * v.e[1],
                u.e[2] * v.e[0] - u.e[0] * v.e[2],
                u.e[0] * v.e[1] - u.e[1] * v.e[0]);
}

vec3 vec3::unit_vector(vec3 v) {
    return v / v.length();
}