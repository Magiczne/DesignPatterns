#include "Request.h"

using namespace std;

string Request::data() const
{
	return this->_data;
}

void Request::data(string value)
{
	this->_data = value;
}