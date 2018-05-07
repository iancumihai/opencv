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
		imshow("prima", imagine);
		int tasta = waitKey(1);
		if (tasta == 27)
			break;
	}

	getchar();
	return 0;
}

