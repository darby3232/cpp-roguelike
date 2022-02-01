#ifndef OBSERVER
#define OBSERVER

#include <string>
#include <any>

// Someone implements this if they want to watch for something
class Observer
{
public:
	virtual ~Observer() {}
	virtual void onNotify(const std::any& data, const std::string eventName) = 0;
};

#endif