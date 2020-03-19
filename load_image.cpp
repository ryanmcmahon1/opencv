#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("beach.jpg", CV_LOAD_IMAGE_COLOR);

	if (!image.data) {
		cout << "image can't be loaded" << endl;
		return -1;
	}
	
	namedWindow("window", CV_WINDOW_AUTOSIZE);
	imshow("beach", image);

	imwrite("write_image.jpg", image);

	waitKey(0);
	return 0;
}