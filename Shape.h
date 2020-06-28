#pragma once
#include<iostream>
#include <fstream>
using namespace std;

class Shape
{
protected:

public:
	Shape() { }
	virtual void Show()const = 0;
	
	virtual void Save()const = 0;
	
	virtual void Load() = 0;
	

};
