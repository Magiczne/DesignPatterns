#include "Square.h"

#include <iostream>

using namespace std;

void Square::draw(int x, int y) const
{
	cout << "Drawing " << this->_name << " at point: ("
		<< x << ", " << y << ")"
		<< endl;
}
