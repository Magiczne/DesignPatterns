#include "Fruit.h"

#include <iostream>

using namespace std;
using namespace LazyInit;

map<string, Fruit*> Fruit::_fruits;

Fruit::Fruit(const string& name) : _name(name)
{
}

Fruit* Fruit::getFruitByName(const string& name)
{
	if (_fruits.find(name) == _fruits.end())
	{
		_fruits[name] = new Fruit(name);
	}

	return _fruits[name];
}

void Fruit::showAll()
{
	cout << "Already created fruits: " << endl;

	for (const auto& pair : _fruits)
	{
		cout << pair.first << endl;
	}
}
