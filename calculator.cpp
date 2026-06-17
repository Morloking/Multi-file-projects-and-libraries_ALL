#include <cmath>

#include "calculator.h"

namespace my_namespace {
	std::string add(int x, int y) {
		return std::to_string(x) + " прибавить к " + std::to_string(y) + " = "
			+ std::to_string(x + y) + "\n";
	}
	std::string subtract(int x, int y) {
		return std::to_string(x) + " вычесть " + std::to_string(y) + " = "
			+ std::to_string(x - y) + "\n";
	}
	std::string multiply(int x, int y) {
		return std::to_string(x) + " умножить на " + std::to_string(y) + " = "
			+ std::to_string(x * y) + "\n";
	}
	std::string divide(int x, int y) {
		return std::to_string(x) + " разделить на " + std::to_string(y) + " = "
			+ std::to_string(static_cast<double> (x) / y) + "\n";
	}
	std::string exponentiation(int x, int power) {
		return std::to_string(x) + " в степени " + std::to_string(power) + " = "
			+ std::to_string(static_cast<int>(std::pow(x, power))) + "\n";
	}		//по условию, подразумеваются только неотрицательные значения степени, если верно понял, поэтому так
}
