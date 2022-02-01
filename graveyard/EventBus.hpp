#ifndef EVENTMANAGER
#define EVENTMANAGER

#include <functional>
#include <iostream>
#include <map>
#include <vector>

#include "Event.hpp"
#include "EventName.hpp"


struct EventData
{
    std::function<void (Event)> event;
    int listenerID;
};

class EventBus
{

public:
    // Returns the listenerID for removal
    static int AddListener(EventName name, std::function<void (Event)>);
    static void InvokeListener(EventName name);
    static void RemoveListener(int listenerID);
private:
    static std::map<EventName, std::vector<EventData>> dataMap;

};

#endif
