#pragma once

#include <string>

namespace otus
{
class HelloWorld
{
    public:
        HelloWorld();
        HelloWorld(const char* hello, const char* world);

        static const std::string& version();
        std::string operator()() const;
        std::string hello() const;
        std::string world() const;

    private:
        static const std::string version_;
        std::string hello_;
        std::string world_;
};
}
