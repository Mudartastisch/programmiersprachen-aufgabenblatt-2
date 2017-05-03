#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"


TEST_CASE()
{
	REQUIRE(gcd(2, 4) == 2);

}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
