#pragma once

#include "IPerson.h"

class Townsman : public IPerson
{
public:
	std::string name() override;
};