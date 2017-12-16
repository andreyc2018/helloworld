cmake_minimum_required(VERSION 3.2)

set (lesson_VERSION_MAJOR 1)
set (lesson_VERSION_MINOR 0)
set (lesson_VERSION_BUILD $ENV{TRAVIS_BUILD_NUMBER})

project(helloworld VERSION ${lesson_VERSION_MAJOR}.${lesson_VERSION_MINOR}.${lesson_VERSION_BUILD})

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

configure_file(version.h.in version.h)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(helloworld_cli main.cpp)

add_library(helloworld lib.cpp)

add_executable(test_version test_version.cpp)

set_target_properties(helloworld_cli helloworld test_version PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)

set_target_properties(test_version PROPERTIES
    COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
    INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
)

target_link_libraries(helloworld_cli helloworld)

target_link_libraries(test_version ${Boost_LIBRARIES} helloworld)

install(TARGETS helloworld_cli RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_CONTACT "sysdos286@yahoo.com")
set(CPACK_PACKAGE_VERSION_MAJOR ${lesson_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${lesson_VERSION_MINOR})
SET(CPACK_PACKAGE_VERSION_PATCH ${lesson_VERSION_BUILD})

include(CPack)

enable_testing()

add_test(test_version test_version)

