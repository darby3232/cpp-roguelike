// Using SDL and standard IO 

#include <iostream>
#include "GameManager.hpp"

// Screen dimension constraints

int main(int argc, char* args[])
{
    std::cout << "Hello" << std::endl;
    
    GameManager* manager = new GameManager();
    manager->start();

    return 0;
    
}