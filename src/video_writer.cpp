// test_opencv.cpp : Defines the entry point for the console application.
//
#include "opencv2\opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cam;
	if (!cam.open(0)) {
		cout << "nu am putut deschide camera" << endl;
		getchar();
		return 0;
	}
	VideoWriter video("C:/Users/iancu/Documents/GitHub/opencv/data/film.avi", CV_FOURCC('D', 'I', 'V', 'X'), 10, Size(cam.get(3), cam.get(4)));
	if (!video.isOpened()) {
		cout << "Nu am putut deschide fisier video" << endl;
		getchar();
		return 0;
	}
	cvNamedWindow("prima");

	Mat imagine;
	while (1) {
		cam >> imagine;

		video.write(imagine);

		imshow("prima", imagine);
		int tasta = waitKey(1);
		if (tasta == 27)
			break;
	}
	cam.release();
	video.release();
	getchar();
	return 0;
}

