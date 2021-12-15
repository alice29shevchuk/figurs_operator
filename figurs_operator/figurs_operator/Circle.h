#pragma once
#include<iostream>
#include"Coin.h"
#include"Cube.h"
#include"Washing_machine.h"
class Circle
{
	int rad;
public:
	Circle(int rad)
	{
		this->rad = rad;
	}
	int getRad()
	{
		return this->rad;
	}
	friend std::ostream& operator<<(std::ostream& out, const Circle& c)
	{
		out << "Radius = "<<c.rad << "\n";
		return out;
	}
	friend std::istream& operator>>(std::istream& in, Circle& c)
	{
		in >> c.rad;
		return in;
	}
	void Print()
	{
		std::cout << "Circle\n";
	}
	Coin operator+(Cube& other)
	{
		return Coin();
	}
	Washing_machine operator+(Cube* other)
	{
		return Washing_machine();
	}
};

