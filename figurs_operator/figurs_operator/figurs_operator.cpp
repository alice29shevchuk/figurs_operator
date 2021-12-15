#include <iostream>
#include"Circle.h"
int main()
{
	setlocale(0, "");
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
	std::cout << circle;
	std::cout << "Введите новый радиус: ";
	std::cin >> circle;
	std::cout << circle;
	std::cout << *cube2;
	std::cout << "Введите новый размер квадрата: ";
	std::cin >> *cube2;
	std::cout << *cube2;
}
