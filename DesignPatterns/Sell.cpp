#include "Sell.h"
#include "PhotosStock.h"

using namespace std;
using namespace Command;

Sell::Sell(shared_ptr<PhotosStock> stock)
{
	this->_stock = stock;
}

void Sell::execute()
{
	this->_stock->sell();
}
