#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    // Read the image file into img using imread()
    // The second argument specifies how to read the image:
    // IMREAD_UNCHANGED: read the image as is
    // IMREAD_GRAYSCALE: convert the image to grayscale
    // IMREAD_COLOR: convert the image to color (default)
    // IMREAD_ANYDEPTH: return 16-bit/32-bit image when input has corresponding depth, otherwise convert it to 8-bit
    // IMREAD_ANYCOLOR: return colored image when input is color, otherwise convert it to grayscale
    Mat img = imread("/home/matheuscosta/Documents/coding-stuff/lang-c-related/c_exercises/show_image/cube.jpg", IMREAD_COLOR);

    if (img.empty()) {
        // Print an error message and exit
        std::cout << "Could not read the image." << std::endl;
        return 1;
    }

    imshow("My Image", img);
    waitKey(0);

    return 0;
}