#pragma once
#include<iostream>
#include"Coin.h"
#include"Cube.h"
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
	void Print()
	{
		std::cout << "Circle\n";
	}
	Coin operator+(Cube& other)
	{
		return Coin();
	}
};

