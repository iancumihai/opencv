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

	CascadeClassifier clasificator("D:/opencv/sources/data/haarcascades/haarcascade_frontalface_alt.xml");

	vector <Rect> fete;
	cvNamedWindow("imagine");

	Mat imagine;
	while (1) {
		cam >> imagine;
		cvtColor(imagine, imagine, CV_BGR2GRAY);
		clasificator.detectMultiScale(imagine, fete);

		for (int i = 0; i < fete.size(); i++) {
			rectangle(imagine, Rect(Point(fete[i].x, fete[i].y), Point(fete[i].x + fete[i].width, fete[i].y + fete[i].height)), Scalar(0, 0, 255));
		}

		imshow("prima", imagine);
		int tasta = waitKey(1);
		if (tasta == 27)
			break;
	}
	cam.release();

	getchar();
	return 0;
}

