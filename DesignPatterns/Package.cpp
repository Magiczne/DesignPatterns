#include "Package.h"

using namespace std;

Package::Package(int itemsInside)
{
	this->_itemsInside = itemsInside;
}

shared_ptr<IItem> Package::clone()
{
	auto package = make_shared<Package>(*this);
	return static_pointer_cast<IItem>(package);
}

int Package::itemsInside()const
{
	return this->_itemsInside;
}
