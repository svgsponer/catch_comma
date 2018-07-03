#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

TEST_CASE("Test case with a, in it", "[dummy]")
{
	REQUIRE(1 == 0);
}
