#pragma once
#include<iostream>
#include <fstream>
#include"Shape.h"
using namespace std;
class Ellipse : public Shape
{
	int ellipseTop—ornerX;
	int ellipseTop—ornerY;
	int describedRectangleLength;
	int describedRectangleHeight;
public:
	Ellipse() : ellipseTop—ornerX(0), ellipseTop—ornerY(0), describedRectangleLength(0), describedRectangleHeight(0)
	{ }
	Ellipse(int ellipseTop—ornerX, int ellipseTop—ornerY, int rectangleLength, int rectangleHeight) : 
		ellipseTop—ornerX(ellipseTop—ornerX), ellipseTop—ornerY(ellipseTop—ornerY), describedRectangleLength(rectangleLength), describedRectangleHeight(rectangleHeight)
	{ }

	virtual void Show()const
	{
		cout << "X is the coordinate of the upper corner of the ellipse: " << ellipseTop—ornerX<< endl;
		cout << "Y is the coordinate of the upper corner of the ellipse: " << ellipseTop—ornerY<< endl;
		cout << "The length of the described rectangle: " << describedRectangleLength << endl;
		cout << "The height of the described rectangle: " << describedRectangleHeight << endl;
	}

	virtual void Save()const
	{
		ofstream fout;
		fout.open("Ellipse.txt");
		bool isOpen = fout.is_open();
		if (!isOpen) cout << "Error!" << endl;
		fout<<"X is the coordinate of the upper corner of the ellipse: " << ellipseTop—ornerX << endl;
		fout<< "Y is the coordinate of the upper corner of the ellipse: " << ellipseTop—ornerY << endl;
		fout<< "The length of the described rectangle: " << describedRectangleLength << endl;
		fout<< "The height of the described rectangle: " << describedRectangleHeight << endl;
		fout.close();
	}

	virtual void Load()
	{
		ifstream fin;
		fin.open("Ellipse.txt");
		if (!fin.is_open()) cout << "Error!" << endl;

		Ellipse tmp;
		fin >> tmp.ellipseTop—ornerX;
		fin >> tmp.ellipseTop—ornerY;
		fin >> tmp.describedRectangleLength;
		fin >> tmp.describedRectangleHeight;

		fin.close();
	}

};
