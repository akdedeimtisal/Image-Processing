//WebCam'den görüntü alıp frame'de gösterir.

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main()
{
	VideoCapture vid(0); //videcapture sınıfından bir vid değişkeni oluştururuz eğer içine 0 yazarsak bilgisayarın kendi webcamini, 1 yazarsak ilk harici webcami algılar.
	if (!vid.isOpened()){
		cout << "kamera yüklenemedi" << endl;
		system("pause");
		return -1;
	}
	vid.set(CAP_PROP_POS_MSEC, 300); //300 milisaniye sonra işlemeye başlar.
	namedWindow("webcam", 300);

	while (1) {
		Mat frame;
		bool kont = vid.read(frame); //frame'in içine aldığımız görüntüyü yerleştiriyoruz.
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
