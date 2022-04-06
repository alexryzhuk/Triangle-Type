// Triangle Type.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle Triangle1(0, 0, 1, 1, 0, 1);
	int a;
	cout << "Натисніть 1 для введення даних вручну" << endl;
	cout << "Натисніть 2 для виведення стандартних даних" << endl;
	cout << "Натисніть 0 для виходу з програми" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		Triangle1.Input();
		Triangle1.Out();
		Triangle1.Type();
		cout << endl;
		cout << "Периметр = " << Triangle1.getPerimetr() << endl;
		cout << "Площа = " << Triangle1.getArea() << endl;
		cout << "Радіус вписаного кола = " << Triangle1.getInscribedRadius() << endl;
		cout << "Радіус описаного кола = " << Triangle1.getDescribedRadius() << endl;
		break;
	}
	case 2:
	{
		Triangle1.Out();
		Triangle1.Type();
		cout << endl;
		cout << "Периметр = " << Triangle1.getPerimetr() << endl;
		cout << "Площа = " << Triangle1.getArea() << endl;
		cout << "Радіус вписаного кола = " << Triangle1.getInscribedRadius() << endl;
		cout << "Радіус описаного кола = " << Triangle1.getDescribedRadius() << endl;
		break;
	}
	case 0:
	{
		return 0;
	}
	default:
		break;
	}
}