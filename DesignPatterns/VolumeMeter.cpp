#include "VolumeMeter.h"

using namespace std;
using namespace Memento;

void VolumeMeter::volume(int value)
{
	this->_volume = value;
}

void VolumeMeter::restoreState(const VolumeMemento& state)
{
	this->volume(state.volume());
}

shared_ptr<VolumeMemento> VolumeMeter::saveState()
{
	return make_shared<VolumeMemento>(this->_volume);
}
