#include "RubberDuck.h"
#include "NotFlying.h"

#include <iostream>

using namespace std;

RubberDuck::RubberDuck()
{
	this->flyStrategy(make_shared<NotFlying>());
}

void RubberDuck::showMe()
{
	cout << "I am a rubber duck. Quack Quack." << endl;
}