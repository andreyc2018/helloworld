#pragma once

#include "version.h"
#include <string>

namespace otus
{
class HelloWorld
{
    public:
        HelloWorld();
        HelloWorld(const char* hello, const char* world);

        std::string hello() const;
        std::string world() const;

    private:
        std::string hello_;
        std::string world_;
};
}
