#pragma once

#include <string>

namespace CoR
{
	class Request
	{
	private:
		std::string _data;

	public:
		std::string data() const;
		void data(std::string value);
	};
}
