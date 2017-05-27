#include "Square.h"

#include <iostream>

using namespace std;
using namespace Adapter;

void Square::draw(int x, int y) const
{
	cout << "Drawing " << this->_name << " at point: ("
		<< x << ", " << y << ")"
		<< endl;
}
