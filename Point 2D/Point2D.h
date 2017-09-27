#pragma once
class Point2d
{
private:
	float mX;
	float mY;
public:
	Point2d();
	Point2d(float X, float Y);
	Point2d operator + (const Point2d&other);//Adds two Point2D objects together.
	Point2d operator - (const Point2d&other);//subtracts the value of one from Point2D objects another. 
	Point2d operator* (const Point2d&other);//finds the product of two Point2D objects.
	Point2d operator*(float&other);//Scales the value of a Point2D by the value passed in.
	float GetX();
	float GetY();
	void PrintPoint2d();
	bool operator==(const Point2d &other);

};
