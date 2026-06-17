#include "quadrangle.h"

my_namespace::Quadrangle::Quadrangle(int l1, int l2, int l3, int l4, int c1, int c2, int c3, int c4) :
	Quadrangle(l1, l2, l3, l4, c1, c2, c3, c4, "Четырёхугольник") {
}

my_namespace::Quadrangle::Quadrangle(int l1, int l2, int l3, int l4, int c1, int c2, int c3, int c4, const std::string name) :
	Figure(name) {
	len1 = l1; len2 = l2; len3 = l3; len4 = l4;
	cor1 = c1; cor2 = c2; cor3 = c3; cor4 = c4;
}

std::string my_namespace::Quadrangle::getLengths() const { return "a = " + std::to_string(len1) + " b = " + std::to_string(len2) + " c = " + std::to_string(len3) + " d = " + std::to_string(len4); }

std::string my_namespace::Quadrangle::getCorners() const { return "A = " + std::to_string(cor1) + " B = " + std::to_string(cor2) + " C = " + std::to_string(cor3) + " D = " + std::to_string(cor4); }