//jpg ve png uzantılı görüntü oluşturma.

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main()
{ 
	
	const int JPEG_QUALITY = 80; //jpeg qualitiy değeri 0-100 aralığında olur.
	const int PNG_QUALITY = 8; // png quality değeri 0-9 aralığında olur.
	Mat res(720, 1280, CV_8UC3, Scalar(0, 255, 255)); //boyutunu, rengini belirliyoruz. 

	if (res.empty()) {
		cout << "görüntü oluşturulamadı" << endl;
		system("pause");
	}
	vector<int> sparam; //sıkıştırma parametresi oluşturuldu.
	//sparam.push_back(cv::IMWRITE_JPEG_QUALITY); //sıkıştırma parametresinin jpeg uzantılı olmasını sağlar. 
	sparam.push_back(cv::IMWRITE_PNG_COMPRESSION); // png uzantılı olmasını sağlar.
	sparam.push_back(PNG_QUALITY);
	bool control = imwrite("D:/goruntu.png", res, sparam); //yazdırabilirse true, yazdıramazsa false. png ve jpg değişimizi uzantımıza göre belirleriz.
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
