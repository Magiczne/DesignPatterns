#include "Band.h"

void Band::playSong() const
{
	_leadGuitarist.play();
	_rhytmGuitarist.play();
	_vocalist.sing();
}