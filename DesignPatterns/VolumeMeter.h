#pragma once

#include "VolumeMemento.h"

#include <memory>

class VolumeMeter
{
private:
	int _volume = 0;

public:
	void volume(int value);

	void restoreState(const VolumeMemento& state);
	std::shared_ptr<VolumeMemento> saveState();
};