#include "PhotosStock.h"

#include <iostream>

using namespace std;
using namespace Command;

void PhotosStock::buy() const
{
	cout << "Photos stock(" << this->_quantity << " items) has been bought" << endl;
}

void PhotosStock::sell() const
{
	cout << "Photos stock(" << this->_quantity << " items) has been sold" << endl;
}
