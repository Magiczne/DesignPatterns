#pragma once
#include "Guitarist.h"
#include "Vocalist.h"

class Band
{
private:
	Guitarist _leadGuitarist;
	Guitarist _rhytmGuitarist;
	Vocalist _vocalist;

public:
	void playSong() const;
};
