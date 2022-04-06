#pragma once
using namespace std;
class Triangle
{
private:
	int x1, x2, x3, y1, y2, y3;
	int a;
	double perimetr = 0;
	double area = 0;
	double radius = 0;
	double Radius = 0;
public:
	Triangle(void);
	Triangle(int, int, int, int, int, int);
	~Triangle(void);
	void Input();
	void Out();
	void Type();
	double getPerimetr(void);
	double getArea(void);
	double getInscribedRadius(void);
	double getDescribedRadius(void);
};
