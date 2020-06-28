#pragma once
#include<iostream>
#include <fstream>
#include"Shape.h"
using namespace std;
class Circle : public Shape
{
	int circleCenterX;
	int circleCenterY;
	int circumference;
public:
	Circle() : circleCenterX(0), circleCenterY(0), circumference(0)
	{ }
	Circle(int circleCenterX, int circleCenterY, int circumference) : circleCenterX(circleCenterX), circleCenterY(circleCenterY), circumference(circumference)
	{ }

	virtual void Show()const
	{
		cout << "X coordinate center of the circle: " << circleCenterX << endl;
		cout << "Y coordinate center of the circle: " << circleCenterY << endl;
		cout << "The length of the circumference of the circle: " << circumference << endl;
	}

	virtual void Save()const
	{
		ofstream fout;
		fout.open("Circle.txt");
		bool isOpen = fout.is_open();
		if (!isOpen) cout << "Error!" << endl;
		fout<< "X coordinate center of the circle: " << circleCenterX << endl;
		fout<< "Y coordinate center of the circle: " << circleCenterY << endl;
		fout<< "The length of the circumference of the circle: " << circumference << endl;
		fout.close();
	}
	virtual void Load()
	{
		ifstream fin;
		fin.open("Circle.txt");
		if (!fin.is_open()) cout << "Error!" << endl;
		
		Circle tmp;
		fin >> tmp.circleCenterX;
		fin >> tmp.circleCenterY;
		fin >> tmp.circumference;

		fin.close();
	}

};
