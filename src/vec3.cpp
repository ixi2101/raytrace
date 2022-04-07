#include "vec3.hpp"

vec3::vec3(){
    this->e = {0,0,0};
} 

vec3::vec3(double e0, double e1, double e2){
    this->e = {e0, e1, e2};
}
