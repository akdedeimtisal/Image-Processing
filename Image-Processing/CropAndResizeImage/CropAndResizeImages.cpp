#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	string path = "C:/Users/ASUS/Desktop/akinci.jpg";
	Mat img = imread(path);
	Mat imgResize, imgCrop;
	//1600 1066

	cout << img.size() << endl;

	//resize(img, imgResize, Size(640, 480));
	
	//resize with scaling
	resize(img, imgResize, Size(), 0.5, 0.5);

	Rect roi(500, 500, 400, 250); //rectangle

	imgCrop = img(roi);


	imshow("Image", img);
	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);

	waitKey(0);



}