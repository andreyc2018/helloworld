#include "lib.h"
#include <string>

using namespace otus;

HelloWorld::HelloWorld()
    : hello_("Hello,")
    , world_("world!")
{}

HelloWorld::HelloWorld(const char* hello, const char* world)
    : hello_(hello)
    , world_(world)
{}

std::string HelloWorld::hello()
{
    return hello_;
}

std::string HelloWorld::world()
{
    return world_;
}