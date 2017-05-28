#include "Buy.h"
#include "PhotosStock.h"

using namespace std;
using namespace Command;

Buy::Buy(shared_ptr<PhotosStock> stock)
{
	this->_stock = stock;
}

void Buy::execute()
{
	this->_stock->buy();
}
