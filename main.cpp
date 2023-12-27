#include <iostream>
#include <fstream>

int main() {
    std::ofstream output("image.ppm");

    int imageHeight = 256;
    int imageWidth = 256;

    output << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

    for (int j = 0; j < imageHeight; ++j) {
        std::cout << "\rScanlines remaining: " << imageHeight - j << ' ' << std::flush;
        for (int i = 0; i < imageWidth; ++i) {
            auto r = double(i) / (imageWidth-1);
            auto g = double(j) / (imageHeight-1);
            auto b = 0;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            output << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::cout << "\rDone.              \n" << std::flush;

    return 0;
}