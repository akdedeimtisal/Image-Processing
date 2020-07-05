// BosGoruntuOlusturma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main()
{
    Mat img(480, 640, CV_8UC3, Scalar(255, 255, 0)); //480 satır 640 sütun,  8UC3 = 8 bitlik Unsigned (görseller pozitif olduğu için negatif değere ihtiyacımız yok o yüzden unsigned)
                                                     //C3 = 3 Renk olduğunu (Red Green Blue) gösterir, scalar ile de renkgini ayarlıyoruz. 0 en koyu 255 en açık.
    if (img.empty()) {
        cout << "görsel yüklenemedi" << endl;
        system("pause");
        return -1;
    }
    namedWindow("deneme", 100);
    imshow("deneme", img);
    waitKey(0);
    destroyWindow("deneme");
    return 0;



}
