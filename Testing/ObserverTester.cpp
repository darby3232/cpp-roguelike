#include "ObserverTester.hpp"

TestObserver::TestObserver(std::string name)
{
	this->name = name;
}

void TestObserver::onNotify(const std::any& data, const std::string eventName) 
{	
	std::cout << "I " << this->name << " have been informed of event named: " << eventName << std::endl;
}

void ObserverTester::doTest()
{
	// Create my observers
	TestObserver* observer1 = new TestObserver("paul");
	TestObserver* observer2 = new TestObserver("ringo");

	TestObserver observer3 { "john" };

	this -> addObserver(observer1);
	this -> addObserver(observer2);
	this -> addObserver(&observer3);

	this -> notify(this, "hello");

	this -> removeObserver(observer1);

	this -> notify(this, "hello 2");


}