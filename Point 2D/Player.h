#pragma once
#include"Point2D.h"
class Player
{
private:
	Point2d* mPos;
	int mHealth;
	char* mName;
public:
	Player();
	Player(char* Name);
	void Move(char Direction,int Up,int Down,int Left,int Right);
	void SetPosition(Point2d* pos);
};
