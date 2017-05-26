#include "VolumeMemento.h"

VolumeMemento::VolumeMemento(int volume)
{
	this->_volume = volume;
}

int VolumeMemento::volume() const
{
	return this->_volume;
}