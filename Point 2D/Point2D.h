#pragma once
class Point2d
{
private:
	float mX;
	float mY;
public:
	Point2d();
	Point2d(float X, float Y);
	Point2d operator + (const Point2d&other);
	Point2d operator - (const Point2d&other);
	Point2d operator* (const Point2d&other);
	Point2d operator*(float&other);
	float GetX();
	float GetY();
	void PrintPoint2d();
	bool operator==(const Point2d &other);

};
