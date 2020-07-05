// BosGoruntuOlusturma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main()
{
    Mat img(480, 640, CV_8UC3, Scalar(255, 255, 0));

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
