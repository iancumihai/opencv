// test_opencv.cpp : Defines the entry point for the console application.
//
#include "opencv2\opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	Mat x(2, 2, CV_32FC1, Scalar(1));
	Mat y(2, 2, CV_32FC1, Scalar(2));

	Mat c(2, 2, CV_32FC1);
	c = x * y;
	cout << y;

    return 0;
}

