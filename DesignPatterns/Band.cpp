#include "Band.h"

using namespace Facade;

void Band::playSong() const
{
	_leadGuitarist.play();
	_rhytmGuitarist.play();
	_vocalist.sing();
}