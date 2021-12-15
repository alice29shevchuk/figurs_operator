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


	//Washing_machine washmach;
	//Washing_machine rez3 = cube + circle;
	//rez3.Print();
}
