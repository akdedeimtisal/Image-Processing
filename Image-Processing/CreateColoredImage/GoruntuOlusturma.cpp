// BosGoruntuOlusturma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main()
{ 
	/*
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
	}*/
	const int JPEG_QUALITY = 80;
	const int PNG_QUALITY = 8;
	Mat res(720, 1280, CV_8UC3, Scalar(0, 255, 255));

	if (res.empty()) {
		cout << "görüntü oluşturulamadı" << endl;
		system("pause");
	}
	vector<int> sparam; //sıkıştırma parametresi oluşturuldu.
	//sparam.push_back(cv::IMWRITE_JPEG_QUALITY); //sıkıştırma parametresinin jpeg uzantılı olmasını sağlar. jpeg qualitiy değeri 0-100 aralığında olur.
	sparam.push_back(cv::IMWRITE_PNG_COMPRESSION); // png uzantılı olmasını sağlar. png quality değeri 0-9 aralığında olur.
	sparam.push_back(PNG_QUALITY);
	bool control = imwrite("D:/goruntu.png", res, sparam); //yazdırabilirse true, yazdıramazsa false.
	if (!control) {
		cout << "görüntü kaydedilemedi" << endl;
		system("pause");
	}
	namedWindow("kaydedilen görüntü", cv::WINDOW_AUTOSIZE);
	imshow("kaydedilen görüntü", res);
	waitKey(0);
	destroyWindow("kaydedilen görüntü");
	



	return 0;




}
