// test_opencv.cpp : Defines the entry point for the console application.
//
#include "opencv2\opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	Mat x(100, 100, CV_8UC3, Scalar(255, 0, 255));
	
	Mat a(2, 2, CV_8UC1, Scalar(65));

	unsigned char k = 66;
	a.at<unsigned char>(0, 0) = 3;
	
	unsigned char *y = a.ptr<unsigned char>(0);

	//cout << y[1];

	Mat b(2, 2, CV_8UC3, Scalar(65, 255, 0));
	//cout << b;

	Vec3b c = b.at<Vec3b>(0, 0);
	Vec3b d;
	d[0] = 5;
	d[1] = 3;
	d[2] = 6;
	b.at<Vec3b>(0, 0) = d;
	cout << b;

	//cvNamedWindow("prima");
	//imshow("prima", x);
	getchar();
}

