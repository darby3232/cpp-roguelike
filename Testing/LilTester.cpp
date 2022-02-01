#include "LilTester.hpp"

void LilTester::doTest() {
	
	std::cout << "Doing Testing: " << std::endl;

	ObserverTester* observerTester = new ObserverTester();

	observerTester -> doTest();

}