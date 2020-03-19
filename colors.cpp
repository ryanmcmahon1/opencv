#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("frog.jpg");
	
	if (image.empty()) {
		cout << "image can't be found" << endl;
		return -1;
	}
	
	// grayscale version of the image
	Mat grayscale;
	cvtColor(image, grayscale, CV_BGR2GRAY);

	namedWindow("Display", CV_WINDOW_AUTOSIZE);
	imshow("Display", image);

	namedWindow("Result", CV_WINDOW_AUTOSIZE);
	imshow("Result", grayscale);
	waitKey(0);

	destroyAllWindows();
	return 0;
}