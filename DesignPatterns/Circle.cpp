#include "Circle.h"

#include <iostream>

using namespace std;

void Circle::draw(int x, int y) const
{
	cout << "Drawing " << this->_name << " at point: (" 
		<< x << ", " << y << ")" 
		<< endl;
}