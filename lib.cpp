#include "lib.h"
#include "version.h"
#include <string>

using namespace otus;

const std::string HelloWorld::version_ { VERSION };

const std::string& HelloWorld::version()
{
    return version_;
}

HelloWorld::HelloWorld()
    : hello_("Hello,")
    , world_("World!")
{}

HelloWorld::HelloWorld(const char* hello, const char* world)
    : hello_(hello)
    , world_(world)
{}

std::string HelloWorld::operator()() const
{
    std::string out = hello_;
    out.append(" ").append(world_);
    return out;
}

std::string HelloWorld::hello() const
{
    return hello_;
}

std::string HelloWorld::world() const
{
    return world_;
}