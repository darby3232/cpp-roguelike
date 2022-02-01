#include "ObserverSubject.hpp"


void ObserverSubject::addObserver(Observer* observer)
{
	observers.push_back(observer);
}


void ObserverSubject::removeObserver(Observer* observer)
{

	auto i = std::begin(observers);

	while(i != std::end(observers))
	{
		auto currObserver = *i;
		if(currObserver == observer)
		{
			i = observers.erase(i);
		}
		else
		{
			i++;
		}
	}

}

void ObserverSubject::notify(const std::any& data, std::string eventName)
{

	auto i = std::begin(observers);

	while(i != std::end(observers))
	{
		auto o = *i;
		o -> onNotify(data, eventName);
		i++;
	}

}

