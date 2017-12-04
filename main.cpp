#include "lib.h"
#include <iostream>

int main(int, char**)
{
    otus::HelloWorld hello_world("Привет,", "мир!");
    std::cout << hello_world.hello() << " " << hello_world.world() << "\n";
    return 0;
}