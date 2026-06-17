#include "triangle.h"

my_namespace::Triangle::Triangle(int l1, int l2, int l3, int c1, int c2, int c3) :       //публичный конструктор для создания объектов обычного треугольника (вызывает протектед конструктор, но с именем треуг)
	Triangle(l1, l2, l3, c1, c2, c3, "Треугольник") {
}

my_namespace::Triangle::Triangle(int l1, int l2, int l3, int c1, int c2, int c3, const std::string name) :
	Figure(name) {
	len1 = l1; len2 = l2; len3 = l3;
	cor1 = c1; cor2 = c2; cor3 = c3;
}
std::string my_namespace::Triangle::getLengths() const { return "a = " + std::to_string(len1) + " b = " + std::to_string(len2) + " c = " + std::to_string(len3); }

std::string my_namespace::Triangle::getCorners() const { return "A = " + std::to_string(cor1) + " B = " + std::to_string(cor2) + " C = " + std::to_string(cor3); }
