#include "Event.hpp"
#include "EventName.hpp"
#include "EventBus.hpp"
#include <iostream>

// START IMPLEMENTING HERE
int EventBus::AddListener(EventName name, std::function<void (Event)>)
{
	std::cout << "Adding listener" << std::endl;
}

void EventBus::InvokeListener(EventName name) 
{
	std::cout << "Invoking listener" << std::endl;
}

void EventBus::RemoveListener(int listenerID) 
{
	std::cout << "Removing listener" << std::endl;
}