#include "Middleware.h"

#include <iostream>

using namespace std;

bool Middleware::canHandle(const Request& request)
{
	return request.data() == "Magic";
}

void Middleware::next(shared_ptr<Middleware> value)
{
	this->_next = value;
}

void Middleware::handle(const Request& request)
{
	if(this->canHandle(request))
	{
		cout << "I'm handling request" << endl;
		cout << "Request data: " << request.data() << endl;
	}
	else
	{
		if(this->_next != nullptr)
		{
			this->_next->handle(request);
		}
	}
}