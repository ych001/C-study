#include<iostream>
using namespace std;
#include "4.6circle.h"
#include "point.h"
//class point
//{
//public:
//	void setX(float x)
//	{
//		m_X = x;
//	}
//	float getX()
//	{
//		return m_X;
//	}
//	void setY(float y)
//	{
//		m_Y = y;
//	}
//	float getY()
//	{
//		return m_Y;
//	}
//
//private:
//	float m_X;
//	float m_Y;
//};

//class circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(point center)
//	{
//		m_center = center;
//	}
//	point getCenter()
//	{
//		return m_center;
//	}
//private:
//	float m_R;
//	point m_center;
//};

/*void isInCircle(circle& c, point& p)
{
	//计算两点之间距离  平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径平方
	int rDistance = c.getR() * c.getR();
	
	cout << distance << endl;
	cout << rDistance << endl;

	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
	
}

int main() {

	circle c1;
	c1.setR(10);
	point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);
	
	point p1;
	p1.setX(10.0);
	p1.setY(9.0);
	isInCircle(c1, p1);

	system("pause");
	return 0;
}*/
