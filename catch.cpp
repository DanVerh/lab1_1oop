#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "lab1_1oop/FloatPower.cpp"
#include "lab1_1oop/FloatPower.hpp"

TEST_CASE( "Arguments initialized") {
    FloatPower test;
    REQUIRE( test.Init(3.5, 1.5) == true);
    REQUIRE( test.Init(0, 1) == false);
}
