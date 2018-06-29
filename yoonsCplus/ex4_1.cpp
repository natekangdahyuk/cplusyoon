#include <iostream>
#include <string>

#include "ex4_1.hpp"

//wwwxxx
Rectangle::Rectangle(int _x, int _y) {
	x = _x;
	y = _y;
}

int Rectangle::GetArea() {
	return x * y;
}

int Rectangle::GetGirth() {
	return 2 * (x + y);
}

Circle::Circle(long _r) {
	r = _r;
}
double Circle::GetArea() {
	return 3.14 * r * r;
}
double Circle::GetGirth() {
	return 2 * r *3.14;
}