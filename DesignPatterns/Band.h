#pragma once

#include "Guitarist.h"
#include "Vocalist.h"

namespace Facade
{
	class Band
	{
	private:
		Guitarist _leadGuitarist;
		Guitarist _rhytmGuitarist;
		Vocalist _vocalist;

	public:
		void playSong() const;
	};
}
