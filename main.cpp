#include "lib.h"
#include <iostream>

int main(int, char**)
{
    std::cout << "HelloWorld version " << Version << "\n";
    otus::HelloWorld hello_world("Привет,", "мир!");
    std::cout << hello_world.hello() << " " << hello_world.world() << "\n";
    return 0;
}