#ifndef RAYTRACINGINAWEEKEND_RTWEEKEND_H
#define RAYTRACINGINAWEEKEND_RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180;
}

#include "ray.h"
#include "vec3.h"

#endif //RAYTRACINGINAWEEKEND_RTWEEKEND_H
