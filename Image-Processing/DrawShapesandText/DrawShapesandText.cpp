#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

	circle(img,Point(256,256), 155, Scalar(0,69,255),FILLED);

	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);

	line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);

	putText(img, "Text", Point(137, 262), FONT_HERSHEY_DUPLEX, 0.7, Scalar(0, 69, 255), 2);

	imshow("Image", img);
	

	waitKey(0);



}