
#ifndef RAY_H
#define RAY_H

#include "vec3.hpp"

class ray {
    public:
        ray() = default;
        ray(const point3& origin, const vec3& direction)
            : orig(origin), dir(direction)
        {}

        point3 origin() const;
        vec3 direction() const;

        point3 at(double t) const;

    public:
        point3 orig;
        vec3 dir;
};

#endif