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
	friend std::ostream& operator<<(std::ostream& out, const Cube& c)
	{
		out << "Size = " << c.size << "\n";
		return out;
	}
	friend std::istream& operator>>(std::istream& in, Cube& c)
	{
		in >> c.size;
		return in;
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

