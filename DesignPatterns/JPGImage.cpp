#include "JPGImage.h"
#include <iostream>

using namespace std;

JPGImage::JPGImage(string filename)
{
	this->_filename = filename;
}

void JPGImage::show()
{
	cout << "Image: " + this->_filename;
}