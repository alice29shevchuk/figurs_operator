#pragma once
#include<iostream>
#include"Rectangle.h"
#include"Line.h"
class Cube
{
	int size;
public:
	Cube(int size)
	{
		this->size = size;
	}
	int getSize()
	{
		return this->size;
	}
	void Print()
	{
		std::cout << "Cube\n";
	}
	Rectangle operator+(Line& other)
	{
		return Rectangle();
	}
	Rectangle operator-(Line& other)
	{
		return Rectangle();
	}
};

