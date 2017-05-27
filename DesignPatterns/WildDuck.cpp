#include "WildDuck.h"
#include "BasicFlying.h"

#include <iostream>

using namespace std;
using namespace Strategy;

WildDuck::WildDuck()
{
	this->flyStrategy(make_shared<BasicFlying>());
}

void WildDuck::showMe()
{
	cout << "I am a wild duck. Quack Quack" << endl;
}
