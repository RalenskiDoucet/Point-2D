#include "Point2D.h"
#include"Player.h"
#include <iostream>

int main()

{
	Point2d *A= new Point2d(1,1);
	Point2d *B = new Point2d(3, 2);
	Point2d C = *A + *B;

	Point2d *D = new Point2d(4, 3);
	Point2d *E = new Point2d(8, 4);
	Point2d F = *D * *E;

	Point2d *G = new Point2d(2, 5);
	Point2d *H = new Point2d(8, 16);
	Point2d I = *G - *H;
	
	Point2d *J = new Point2d(1, 2);
	Point2d *K = new Point2d(3, 4);
	Point2d L = 
	system("pause");
}