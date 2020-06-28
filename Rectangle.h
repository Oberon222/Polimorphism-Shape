#pragma once
#include<iostream>
#include <fstream>
#include"Shape.h"
using namespace std;
class Rectangle : public Shape
{
	int rectangleLeftCornerX;
	int rectangleLeftCornerY;
	int rectangleLength;
	int rectangleHeight;
public:
	Rectangle() : rectangleLeftCornerX(0), rectangleLeftCornerY(0), rectangleLength(0), rectangleHeight(0)
	{ }

	Rectangle(int rectangleLeftCornerX, int rectangleLeftCornerY, int rectangleLength, int rectangleHeight) :
		rectangleLeftCornerX(rectangleLeftCornerX), rectangleLeftCornerY(rectangleLeftCornerY), rectangleLength(rectangleLength), rectangleHeight(rectangleHeight)
	{ }

	virtual void Show()const
	{
		cout << "The X coordinate of the left corner of the rectangle: " << rectangleLeftCornerX << endl;
		cout << "The Y coordinate of the left corner of the rectangle: " << rectangleLeftCornerY << endl;
		cout << "The length of the rectangle: " << rectangleLength << endl;
		cout << "The height of the rectangle: " << rectangleHeight << endl;
	}

	virtual void Save()const
	{
		ofstream fout;
		fout.open("Rectangle.txt");
		bool isOpen = fout.is_open();
		if (!isOpen) cout << "Error!" << endl;
		fout<< "The X coordinate of the left corner of the rectangle: " << rectangleLeftCornerX << endl;
		fout<< "The Y coordinate of the left corner of the rectangle: " << rectangleLeftCornerY << endl;
		fout<< "The length of the rectangle: " << rectangleLength << endl;
		fout<< "The height of the rectangle: " << rectangleHeight << endl;
		fout.close();
	}
	virtual void Load()
	{
		ifstream fin;
		fin.open("Rectangle.txt");
		if (!fin.is_open()) cout << "Error!" << endl;
		Rectangle tmp;
		fin >> tmp.rectangleLeftCornerX;
		fin >> tmp.rectangleLeftCornerY;
		fin >> tmp.rectangleLength;
		fin >> tmp.rectangleHeight;

		fin.close();
	}
};
