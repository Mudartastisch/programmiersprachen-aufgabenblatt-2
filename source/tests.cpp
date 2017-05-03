#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <catch.hpp>
#include "vec2.hpp"


TEST_CASE()
{
	//Test Vektoren
	//Werte sind im namen
	//vec_prove.... sind die Ziehlvektoren die ich erwarte
	Vec2 vec_zero_zero{};
	Vec2 vec_zero_one{ 0.0,1.0 };
	Vec2 vec_one_zero{ 1.0,0.0 };
	Vec2 vec_one_one{ 1.0,1.0 };
	Vec2 vec_five_two{ 5.0,2.0 };
	Vec2 vec_seven_one{ 7.0,1.0 };
	

	//operator+
	Vec2 vec_prove_one_zero{};
	vec_prove_one_zero.operator+=(vec_one_zero);
	REQUIRE(vec_prove_one_zero.x == 1.0); //Test 0+1=1
	REQUIRE(vec_prove_one_zero.y == 0.0); //Test 0+0=0

	Vec2 vec_prove_two_one{1.0,1.0};
	vec_prove_two_one.operator+=(vec_one_zero);
	REQUIRE(vec_prove_two_one.x == 2.0); //Test 1+1=0
	REQUIRE(vec_prove_two_one.y == 1.0); //Test 1+0=0

	Vec2 vec_prove_two_two{};
	vec_prove_two_two.operator+=(vec_one_one);
	vec_prove_two_two.operator+=(vec_one_one);
	REQUIRE(vec_prove_two_two.x == 2.0); //Test 0+1+1=2
	REQUIRE(vec_prove_two_two.y == 2.0); //Test 0+1+1=2


	//operator-
	Vec2 vec_prove_zero_zero{1.0,1.0};
	vec_prove_zero_zero.operator-=(vec_one_one);
	REQUIRE(vec_prove_zero_zero.x == 0.0); //Test 1-1=0
	REQUIRE(vec_prove_zero_zero.y == 0.0); //Test 1-1=0

	Vec2 vec_prove_nTwo_zero{ 5.0,2.0 };
	vec_prove_nTwo_zero.operator-=(vec_seven_one);
	vec_prove_nTwo_zero.operator-=(vec_zero_one);
	REQUIRE(vec_prove_nTwo_zero.x == -2.0); //Test 5-7-0=-2
	REQUIRE(vec_prove_nTwo_zero.y == 0.0); //Test 2-1-1=0

	Vec2 vec_prove_one_one{ 5.0,2.0 };
	vec_prove_one_one.operator-=(vec_five_two);
	vec_prove_one_one.operator+=(vec_one_one);
	REQUIRE(vec_prove_one_one.x == 1.0); //Test 5-5+1=1
	REQUIRE(vec_prove_one_one.y == 1.0); //Test 2-2+1=1

	//operator*
	Vec2 vec_prove_tenFive_threeFive{ 7.0,2.0 };
	vec_prove_tenFive_threeFive.operator*=(1.5);
	REQUIRE(vec_prove_tenFive_threeFive.x == 10.5); //Test 7*1.5=10.5
	REQUIRE(vec_prove_tenFive_threeFive.y == 3.5); //Test 2*1.5=3.5

	Vec2 vec_prove_nFive_nTwo{ 5.0,2.0 };
	vec_prove_nFive_nTwo.operator*=(-1.0);
	REQUIRE(vec_prove_nFive_nTwo.x == -5.0); //Test 5*-1=-5
	REQUIRE(vec_prove_nFive_nTwo.y == -2.0); //Test 2*-1=-2

	Vec2 vec_prove_fourOFive_sixSevenFive{ 3.0,5.0 }; 
	vec_prove_fourOFive_sixSevenFive.operator*=(1.35);
	REQUIRE(vec_prove_fourOFive_sixSevenFive.x == 4.05); //Test 3*1.35=4.05
	REQUIRE(vec_prove_fourOFive_sixSevenFive.y == 6.75); //Test 5*1.35=6.75

	//operator/
	Vec2 vec_prove_five_zeroSix{ 25.0,3.0 };
	vec_prove_five_zeroSix.operator/=(0.5);
	REQUIRE(vec_prove_five_zeroSix.x == 5.0); //Test 25/5=5
	REQUIRE(vec_prove_five_zeroSix.y == 0.6); //Test 3/6=0.6

	Vec2 vec_prove_nOne_nineSix{ 5.0,48.0 };
	vec_prove_nOne_nineSix.operator/=(-0.2);
	REQUIRE(vec_prove_nOne_nineSix.x == -1.0); //Test 5*-0.2=-1
	REQUIRE(vec_prove_nOne_nineSix.y == -9.6); //Test 48*-0.2=-9.6

	Vec2 vec_prove_error_divZero{ 1.0,1.0 };
	vec_prove_error_divZero.operator/=(0);
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
