#include "WindowManager.h"

using namespace std;

WindowManager::WindowManager() {}

shared_ptr<WindowManager> WindowManager::getInstance()
{
	// Static creates field on the first time method is used
	// Next time it it getting value of the static field instead
	// of creating it again
	static shared_ptr<WindowManager> instance{ new WindowManager };

	return instance;
}