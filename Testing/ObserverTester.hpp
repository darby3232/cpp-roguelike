#ifndef OBSERVER_TESTER
#define OBSERVER_TESTER

#include "Observer.hpp"
#include "ObserverSubject.hpp"
#include <iostream>

class TestObserver : public Observer 
{

public:
	TestObserver(std::string observerName);
	void onNotify(const std::any& data, const std::string eventName) override;

private:
	std::string name;
};

class ObserverTester : public ObserverSubject
{
public:
	void doTest();
};


#endif