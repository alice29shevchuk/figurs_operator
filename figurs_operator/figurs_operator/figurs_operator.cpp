#include <iostream>
#include"Circle.h"
int main()
{
	Cube cube(5);
	Line line;
	Rectangle rectangle;
	Rectangle rez = cube - line;
	rez.Print();

	Coin coin;
	Circle circle(10);
	Coin rez2 = circle + cube;
	rez2.Print();

	Cube* cube2 = new Cube(5);
	Washing_machine washmach;
	Washing_machine rez3 = circle + cube2;
	rez3.Print();
}
