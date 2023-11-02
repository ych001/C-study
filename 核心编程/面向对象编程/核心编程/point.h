#pragma once
#include<iostream>
using namespace std;

class point
{
public:
	void setX(float x);
	
	float getX();
	
	void setY(float y);
	
	float getY();


private:
	float m_X;
	float m_Y;
};
