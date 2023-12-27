#ifndef RAYTRACINGINAWEEKEND_COLOR_H
#define RAYTRACINGINAWEEKEND_COLOR_H

#include "vec3.h"
#include <iostream>

using color = vec3;

void write_color(std::ofstream& out, color pixel_color) {
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif //RAYTRACINGINAWEEKEND_COLOR_H
