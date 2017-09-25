#include <iostream>
#include "Point2D.h"
int main()
{	
	Point2d *A = new Point2d(1,1);
	Point2d *B = new Point2d(2,2);
	Point2d C = *A + *B;
	Point2d D = *A - *B;
	Point2d E = *A * *B;


	system("pause");
}