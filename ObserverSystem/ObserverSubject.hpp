#ifndef OBSERVER_SUBJECT
#define OBSERVER_SUBJECT

#include "Observer.hpp"

#include <vector>
#include <any>
#include <string>

class ObserverSubject
{
private:
	std::vector<Observer*> observers;

public:
	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);

protected:
	void notify(const std::any& data, std::string eventName);

};

#endif