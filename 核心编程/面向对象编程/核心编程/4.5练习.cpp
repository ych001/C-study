#include<iostream>
using namespace std;


/*class cube
{
public:

	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}

	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}

	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	bool isSameByClass(cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;


};

bool isSame(cube &C1,cube &C2)
{
	if (C1.getL() == C2.getL() && C1.getH() == C2.getH() && C1.getW() == C2.getW())
	{
		return true;
	}
	return false;
}

int main()
{
	cube C1;
	C1.setL(10);
	C1.setW(10);
	C1.setH(10);
	cout << "面积为：" << C1.calculateS() << endl;
	cout << "体积为:" << C1.calculateV() << endl;
	
	cube C2;
	C2.setL(10);
	C2.setW(10);
	C2.setH(10);

	//利用全局函数判断
	bool ret = isSame(C1, C2);
	if (ret)
	{
		cout << "利用全局函数判断结果：相等" << endl;
	}
	else
	{
		cout << "利用全局函数判断结果：不相等" << endl;
	}

	ret = C1.isSameByClass(C2);
		if (ret)
		{
			cout << "利用成员函数判断结果：相等" << endl;
		}
		else
		{
			cout << "利用成员函数判断结果：不相等" << endl;
		}

	system("pause");
	return 0;

};*/