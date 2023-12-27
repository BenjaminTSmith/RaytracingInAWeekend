#include <iostream>
#include <fstream>
#include "vec3.h"
#include "color.h"

int main() {
    std::ofstream output("image.ppm");

    int imageHeight = 256;
    int imageWidth = 256;

    output << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

    for (int j = 0; j < imageHeight; ++j) {
        std::cout << "\rScanlines remaining: " << imageHeight - j << ' ' << std::flush;
        for (int i = 0; i < imageWidth; ++i) {
            auto pixel_color = color((double)i / (imageWidth - 1), (double)j / (imageHeight - 1), 0);
            write_color(output, pixel_color);
        }
    }

    std::cout << "\rDone.              \n" << std::flush;

    return 0;
}