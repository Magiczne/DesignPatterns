#include "JPGImageProxy.h"

using namespace std;

JPGImageProxy::JPGImageProxy(string filename)
{
	this->_filename = filename;
}

void JPGImageProxy::show()
{
	if(this->_image == nullptr)
	{
		this->_image = make_shared<JPGImage>(this->_filename);
	}

	this->_image->show();
}