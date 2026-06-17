#include <iostream>

//task_1
#include "calculator.h"
//task_2
#include "counter.h"
//task_3
#include "triangle.h"
#include "rectangular_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"

void run() {
	int x{ 0 }, y{ 0 }, choise{ 0 };
	std::cout << "Введите первое число: ";
	std::cin >> x;
	std::cout << "Введите второе число: ";
	std::cin >> y;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> choise;
	switch (choise) {
	case 1:
		std::cout << my_namespace::add(x, y);
		break;
	case 2:
		std::cout << my_namespace::subtract(x, y);
		break;
	case 3:
		std::cout << my_namespace::multiply(x, y);
		break;
	case 4:
		std::cout << my_namespace::divide(x, y);
		break;
	case 5:
		std::cout << my_namespace::exponentiation(x, y);
		break;
	default:
		std::cout << "Неизвестная операция. Запустите программу снова и повторите ввод.";
		break;
	}
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	//task_1
	run(); 
	std::cout << "\n";

	//task_2
	my_namespace::Counter c;
	c.run();
	std::cout << "\n";

	//task_3
	my_namespace::Triangle triangle(10, 20, 30, 50, 60, 70);
	my_namespace::RectangularTriangle rectTriangle(10, 20, 30, 50, 60);
	my_namespace::IsoscelesTriangle isosTriangle(10, 20, 50, 60);
	my_namespace::EquilateralTriangle eqTriangle(30);

	my_namespace::Quadrangle quad(10, 20, 30, 40, 50, 60, 70, 80);
	my_namespace::Rectangle rectangle(10, 20);
	my_namespace::Square square(20);
	my_namespace::Parallelogram parallelogram(20, 30, 30, 40);
	my_namespace::Rhomb rhomb(30, 30, 40);

	triangle.printInfo(&triangle);
	rectTriangle.printInfo(&rectTriangle);
	isosTriangle.printInfo(&isosTriangle);
	eqTriangle.printInfo(&eqTriangle);

	quad.printInfo(&quad);
	rectangle.printInfo(&rectangle);
	square.printInfo(&square);
	parallelogram.printInfo(&parallelogram);
	rhomb.printInfo(&rhomb);

	return EXIT_SUCCESS;
}