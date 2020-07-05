//Kodu yazmadan önce Visual Studio'ya OpenCV kütüphanesini dahil etmemiz gerekiyor. 


#include <iostream>
#include <opencv2\opencv.hpp>
using namespace std;
using namespace cv;
int main()
{   // Mat sınıfı, görüntü işleme yapacağımız görseli matris haline getirir.
    Mat img = imread("C:/Users/ASUS/Desktop/akinci.jpg"); // buraya görselin adını eğer projeyle aynı dosyadaysa direkt yazabiliriz, değilse burada yazdığım gibi yolunu yazmamız gerekiyor.
    if (img.empty()) {
        cout << "görsel yüklenmedi" << endl;
        system("pause");
        return -1;
    }
    namedWindow("deneme", 40);  //namedWindow ile deneme adında bir pencere açıyoruz, boyutunu 40 olarak belirledim, ama istediğimiz boyutu görsele göre girebiliriz.
    imshow("deneme", img); //deneme penceresine img görselini imshow ile yerleştiriyoruz.
    waitKey(0);
    destroyWindow("deneme");
    return 0;
}

