#pragma once

#include <map>
#include <string>

namespace LazyInit
{
	class Fruit
	{
	private:
		std::string _name;
		static std::map<std::string, Fruit*> _fruits;

		explicit Fruit(const std::string& name);

	public:
		static Fruit* getFruitByName(const std::string& name);
		static void showAll();

		~Fruit();
	};
}
