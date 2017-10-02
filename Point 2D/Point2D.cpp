#include "Point2D.h"
#include<iostream>

Point2d::Point2d()
{
	mX = 0;
	mY = 0;

}

Point2d::Point2d(float X, float Y)
{
	mX = X;
	mY = Y;
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

Point2d Point2d::operator*(float& other)
{
	return Point2d(mX * other, mY * other);
	
}

float Point2d::GetX()
{
	return mX;
}

float Point2d::GetY()
{
	return mY;
}

void Point2d::PrintPoint2d()
{
	std::cout << mX;
	std::cout << mY;
}

bool Point2d::operator==(const Point2d & other)
{
	if (mX == other.mX && mY == other.mY)
		return true;
	else
		return false;
}

