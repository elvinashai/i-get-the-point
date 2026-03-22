#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Point.hpp"

TEST_CASE("Distance works") {
    Point p1(0, 0);
    Point p2(3, 4);

    REQUIRE((p1 - p2) == 5);
}

TEST_CASE("Equality works") {
    Point p1(1, 2);
    Point p2(1, 2);

    REQUIRE(p1 == p2);
}

TEST_CASE("Midpoint works") {
    Point p1(0, 0);
    Point p2(2, 2);

    Point mid = p1 / p2;
    REQUIRE(mid.getX() == 1);
    REQUIRE(mid.getY() == 1);
}

TEST_CASE("Multiplication works") {
    Point p(2, 3);

    Point result = p * 2;
    REQUIRE(result.getX() == 4);
    REQUIRE(result.getY() == 6);
}