#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <catch.hpp>
#include "vec2.hpp"


TEST_CASE()
{
	Vec2 vec_zero_zero{};
	Vec2 vec_one_zero{ 1.0,0.0 };
	Vec2 vec_one_one{ 1.0,1.0 };
	Vec2 vec_prove_one_zero{};
	vec_prove_one_zero.operator+=(vec_one_zero);
	REQUIRE(vec_prove_one_zero.x == 1.0);
	REQUIRE(vec_prove_one_zero.y == 0.0);

}
int main(int argc, char *argv[])
{
	Vec2 vec_zero_zero{};
	Vec2 vec_one_zero{ 1.0,0.0 };
	Vec2 vec_one_one{ 1.0,1.0 };
	std::cout << vec_zero_zero.x;
	std::cout << vec_zero_zero.y;
	std::cout << vec_one_one.x;
	std::cout << vec_one_one.y;
    return Catch::Session().run(argc, argv);
}
