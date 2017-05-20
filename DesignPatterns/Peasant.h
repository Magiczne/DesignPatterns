#pragma once

#include "IPerson.h"

class Peasant : public IPerson
{
public:
	std::string name() override;
};