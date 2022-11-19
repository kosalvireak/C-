#include <cv.h>
#include <highgui.h>

using namespace cv;

int main()
{

    Mat im = imread("IMG_1326.jpg", CV_LOAD_IMAGE_COLOR);
    namedWindow("image");
    imshow("image", im);
    waitKey(0);
}