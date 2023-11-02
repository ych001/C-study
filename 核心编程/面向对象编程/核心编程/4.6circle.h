#pragma once
#include<iostream>
using namespace std;
#include "point.h"

class circle
{
public:
	void setR(int r);

	int getR();
	
	void setCenter(point center);
	

	point getCenter();
	
private:
	float m_R;
	point m_center;
};
