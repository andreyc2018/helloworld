#include "lib.h"
#include <iostream>

int main(int argc, char** argv)
{
    if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'v')
        std::cout << "HelloWorld version " << otus::HelloWorld::version() << "\n";
    otus::HelloWorld hello_world;
    std::cout << hello_world() << "\n";
    return 0;
}