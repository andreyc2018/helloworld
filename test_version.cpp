#include "lib.h"
#define BOOST_TEST_MODULE Test_HelloWorld
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( hello_world )
{
    otus::HelloWorld test_object("qwerty", "йцукенг" );

    BOOST_CHECK_EQUAL(test_object.hello(), "qwerty");
    BOOST_CHECK_EQUAL(test_object.world(), "йцукенг");
}