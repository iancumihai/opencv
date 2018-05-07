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


	Mat imagine;
	while (1) {
		cam >> imagine;

		
		cvtColor(imagine, imagine, CV_BGR2GRAY);
		blur(imagine, imagine, Size(3, 3));
		Canny(imagine, imagine, 1, 50);
		imshow("prima", imagine);
		int tasta = waitKey(1);
		if (tasta == 27)
			break;
	}
	cam.release();

	getchar();
	return 0;
}

