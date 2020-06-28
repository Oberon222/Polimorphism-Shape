#pragma once
#include<iostream>
#include <fstream>
#include"Shape.h"
using namespace std;
class Square : public Shape
{
	int squareLeftCornerX;
	int squareLeftCornerY;
	int squareSideLength;
public:
	Square() : squareLeftCornerX(0), squareLeftCornerY(0), squareSideLength(0)
	{ }

	Square(int squareLeftCornerX, int squareLeftCornerY, int squareSideLength) :
		squareLeftCornerX(squareLeftCornerX), squareLeftCornerY(squareLeftCornerY), squareSideLength(squareSideLength)
	{ }

	virtual void Show()const
	{
		cout << "The X coordinate of the left corner of the square: " << squareLeftCornerX << endl;
		cout << "The Y coordinate of the left corner of the square: " << squareLeftCornerY << endl;
		cout << "Length sides of the square: " << squareSideLength << endl;
	}

	virtual void Save()const
	{
		ofstream fout;
		fout.open("Square.txt");
		bool isOpen = fout.is_open();
		if (!isOpen) cout << "Error!" << endl;
		fout<< "The X coordinate of the left corner of the square: " << squareLeftCornerX << endl;
		fout<< "The Y coordinate of the left corner of the square: " << squareLeftCornerY << endl;
		fout<< "Length sides of the square: " << squareSideLength << endl;

		fout.close();
	}
	
	virtual void Load()
	{
		ifstream fin;
		fin.open("Square.txt");
		if (!fin.is_open()) cout << "Error!" << endl;
		Square tmp;
		
		fin >> tmp.squareLeftCornerX;
		fin >> tmp.squareLeftCornerY;
		fin >> tmp.squareSideLength;

		fin.close();
	}


};
