#include "Fruit.h"

#include <iostream>

using namespace std;
using namespace LazyInit;

Fruit::Fruit(string name)
{
	this->_name = name;
}

shared_ptr<Fruit> Fruit::getFruitByName(string name)
{
	if (_fruits.find(name) == _fruits.end())
	{
		_fruits[name] = make_shared<Fruit>(name);
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
