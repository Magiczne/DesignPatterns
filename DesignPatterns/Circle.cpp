#include "Circle.h"

#include <iostream>

using namespace std;
using namespace Adapter;

void Circle::draw(int x, int y) const
{
	cout << "Drawing " << this->_name << " at point: ("
		<< x << ", " << y << ")"
		<< endl;
}
