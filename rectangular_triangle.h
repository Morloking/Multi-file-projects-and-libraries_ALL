#pragma once
#include "triangle.h"

namespace my_namespace {
	class RectangularTriangle :
		public Triangle {
	public:
		RectangularTriangle(int l1, int l2, int l3, int c1, int c2);
	};
}
