# define CATCH_CONFIG_RUNNER
# include <catch.hpp >
# include < cmath >
# include < algorithm >
#include "circlecopy.hpp"


TEST_CASE(" sort circle "," [ erase ] ")
{
	std::vector<Circle> container(5);
	std::vector<Circle> container_two(5);
	Vec2 oneOne{ 1,1 };
	
	Circle one{oneOne,1.0f};
	Circle two{ oneOne,2.0f };
	Circle five{ oneOne,5.0f };
	Circle ten{ oneOne,10.0f };
	Circle ten_copy{ oneOne,10.0f };

	container.at(0) = one; 
	container.at(1) = ten_copy;
	container.at(2) = five;
	container.at(3) = two;
	container.at(4) = ten;

	container_two.at(0) = ten_copy;
	container_two.at(1) = five;
	container_two.at(2) = two;
	container_two.at(3) = ten;
	container_two.at(4) = one;

	std::sort(container.begin(), container.end(), [](Circle a, Circle b) {
		if (a.getRadius() < b.getRadius()) return true;
		if (a.getRadius() > b.getRadius()) return false;
		return false;
	});

	std::sort(container_two.begin(), container_two.end());


REQUIRE(std::is_sorted(container.begin(), container.end()));
REQUIRE(std::is_sorted(container_two.begin(), container_two.end()));
}
int main (int argc , char * argv [])
{
return Catch :: Session (). run(argc , argv );
}