# define CATCH_CONFIG_RUNNER
# include <catch.hpp >
# include < cmath >
# include < algorithm >
#include <functional>
bool isTen(int i) {
	return i == 10;
}
TEST_CASE(" transform vector"," [ erase ] ")
{
	std::vector <int > v1{ 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 };
	std::vector <int > v2{ 9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 };
	std::vector <int > v3(9);
	std::transform(v3.begin(), v3.end(), v1.begin(), v3.begin(), std::plus<int>());
	std::transform(v3.begin(), v3.end(), v2.begin(), v3.begin(), std::plus<int>());
	REQUIRE(std::all_of(v3.begin(), v3.end(), isTen));
}
int main (int argc , char * argv [])
{
return Catch :: Session (). run(argc , argv );
}