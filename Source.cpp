#include<iostream>
#include <fstream>
#include"Shape.h"
#include"Square.h"
#include"Rectangle.h"
#include"Circle.h"
#include"Ellipse.h"
using namespace std;

void main()
{
	 Square s1(4, 4, 12);
	 Rectangle r1(5, 5, 8, 14);
	 Circle c1(6, 6, 17);
	 Ellipse e1(7, 7, 11, 16);


	Shape* arrShape[4]
	{
		new Square(4, 4, 12),
		new Rectangle(5, 5, 8, 14),
		new Circle(6, 6, 17),
		new Ellipse(7, 7, 11, 16)
	};

	for (int i = 0; i < 4; i++)
	{
		arrShape[i]->Save();
	}

	Shape* arr2[4]
	{
		&s1,
		&r1,
		&c1,
		&e1
	};

	for (int i = 0; i < 4; i++)
	{
		arr2[i]->Load();
	}

	for (int i = 0; i < 4; i++)
	{
		arr2[i]->Show();
	}

	system("pause");
}