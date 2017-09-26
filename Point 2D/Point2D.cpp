#include "Point2D.h"

Point2d::Point2d()
{
	  mX=1;
	  mY=2;
}

Point2d::Point2d(float X, float Y)
{
	mX=X;
	mY =Y;
}

Point2d Point2d::operator+(const Point2d & other)
{
	return Point2d(mX + other.mX, mY + other.mY);
	
}

Point2d Point2d::operator-(const Point2d & other)
{
	return Point2d(mX -other.mX ,mY - other.mY);
}

Point2d Point2d::operator*(const Point2d & other)
{
	return Point2d(mX * other.mX,mY * other.mY);
}

Point2d Point2d::operator*(float & other)
{
	return Point2d(mY * other.mY ,mX * other.Mx);
}

float Point2d::GetX()
{
	return 0.0f;
}

float Point2d::GetY()
{
	return 0.0f;
}

void Point2d::PrintPoint2d()
{
 mX=2, mY=1;
}

bool Point2d::operator==(const Point2d & other)
{
	return false (mX==mY);
}
