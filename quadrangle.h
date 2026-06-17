#pragma once
#include <iostream>
#include <string>

#include "figure.h"

namespace my_namespace {
	class Quadrangle :
		public Figure {
	public:
		Quadrangle(int l1, int l2, int l3, int l4, int c1, int c2, int c3, int c4);
	protected:
		Quadrangle(int l1, int l2, int l3, int l4, int c1, int c2, int c3, int c4, const std::string name);

		std::string getLengths() const override;
		std::string getCorners() const override;
	protected:
		int len1{ 0 }, len2{ 0 }, len3{ 0 }, len4{ 0 };
		int cor1{ 0 }, cor2{ 0 }, cor3{ 0 }, cor4{ 0 };
	};
}
