# define CATCH_CONFIG_RUNNER
# include <catch.hpp >
# include < cmath >
# include < algorithm >
#include <time.h>
 
bool is_multiple_of_3(int i) {
	if (i % 3 == 0) {
		return true;
	}
	return false;
}
bool is_not_multiple_of_3(int i) {
	if (i % 3 == 0) {
		return false;
	}
	return true;
}
void print(const std::vector<int> &vec)
{
	for (const auto& i : vec)
		std::cout << i << ' ';
	std::cout << std::endl;
}
TEST_CASE (" filter alle vielfache von drei "," [ erase ] ")
{
	srand(time(NULL));
	std::vector<int> v(100);
	for (unsigned i = 0; i < v.size(); i++) {
		v.at(i) = rand() % (100 - 1 + 1) + 1;
	}
	print(v);
	for (int i = 0; i < v.size(); i++) {
		v.erase(std::remove_if(v.begin(), v.end(), is_not_multiple_of_3), v.end());
	}
	print(v);
REQUIRE(std :: all_of (v. begin () , v.end () , is_multiple_of_3 ));
}
int main (int argc , char * argv [])
{
return Catch :: Session (). run(argc , argv );
}