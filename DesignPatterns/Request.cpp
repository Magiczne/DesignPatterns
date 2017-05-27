#include "Request.h"

using namespace std;
using namespace CoR;

string Request::data() const
{
	return this->_data;
}

void Request::data(string value)
{
	this->_data = value;
}
