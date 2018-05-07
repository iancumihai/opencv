// test_opencv.cpp : Defines the entry point for the console application.
//
#include "opencv2\opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	Mat x(500, 500, CV_8UC3, Scalar(255, 255, 255));

	Point a(100, 100);
	Point b(250, 250);
	Point c(110, 100);
	Point d(260, 250);
	line(x, a, b, Scalar(0,0,0), 1, 8);
	line(x, c, d, Scalar(0, 0, 0), 1, 4);

	Point centru;
	centru.x = 50;
	centru.y = 40;
	circle(x, centru, 30, Scalar(255, 0, 0));

	rectangle(x, a, d, Scalar(0, 0, 255));

	putText(x, "salut", a, FONT_HERSHEY_SIMPLEX, 1, Scalar(0, 255, 0));

	cvNamedWindow("prima");
	imshow("prima", x);


	waitKey(0);
	getchar();
}

