#pragma once

#include <map>
#include <memory>
#include <string>

namespace LazyInit
{
	class Fruit
	{
	private:
		std::string _name;
		static std::map<std::string, std::shared_ptr<Fruit>> _fruits;

		explicit Fruit(std::string name);

	public:
		static std::shared_ptr<Fruit> getFruitByName(std::string name);
		static void showAll();
	};
}
