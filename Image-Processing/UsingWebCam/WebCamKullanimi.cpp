// BosGoruntuOlusturma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main()
{
	VideoCapture vid(0);
	if (!vid.isOpened()){
		cout << "kamera yüklenemedi" << endl;
		system("pause");
		return -1;
	}
	vid.set(CAP_PROP_POS_MSEC, 300);
	namedWindow("webcam", 300);

	while (1) {
		Mat frame;
		bool kont = vid.read(frame);
		if (!kont) {
			cout << "webcam frame yüklenemedi" << endl;
			system("pause");
			break;
		}
		imshow("webcam", frame);
		if (waitKey(30) == 27) {
			cout << "esc ile çıktınız" << endl;
			system("pause");
			break;
		}
	}
	return 0;




}
