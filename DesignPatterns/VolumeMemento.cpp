#include "VolumeMemento.h"

using namespace Memento;

VolumeMemento::VolumeMemento(int volume)
{
	this->_volume = volume;
}

int VolumeMemento::volume() const
{
	return this->_volume;
}
