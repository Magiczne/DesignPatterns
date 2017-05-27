#include "RubberDuck.h"
#include "NotFlying.h"

#include <iostream>

using namespace std;
using namespace Strategy;

RubberDuck::RubberDuck()
{
	this->flyStrategy(make_shared<NotFlying>());
}

void RubberDuck::showMe()
{
	cout << "I am a rubber duck. Quack Quack." << endl;
}
