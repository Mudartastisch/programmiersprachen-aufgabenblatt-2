# define CATCH_CONFIG_RUNNER
# include <catch.hpp >
# include < cmath >
# include < algorithm >
#include <functional>
bool is_even(int n) { return n % 2 == 0; }
bool is_not_even(int n) { return n % 2 == 1; } 


void print(const std::vector<int> &vec)
{
	for (const auto& i : vec)
		std::cout << i << ' ';
	std::cout << std::endl;
}

template <class T>
T filter(T container, bool test(int i)) {
	for (int i = 0; i < container.size(); i++) {
		container.erase(std::remove_if(container.begin(), container.end(), test), container.end());
	}
	return container;
} 
template <class T>
T filter2(T container, bool test(int i)) {
	T result{};
	for (int i = 0; i < container.size(); i++) {
		if (is_even(container.at(i))) {
			result.push_back(container.at(i));
		}
	}
	return result;
}
TEST_CASE("template")
{
	std::vector <int > v{ 1 ,2 ,3 ,4 ,5 ,6 };
	std::vector <int > alleven = filter(v, is_not_even);
	std::vector <int>  allevenToo = filter2(v, is_even);
	print(v);
	print(alleven);
	print(allevenToo);
		
REQUIRE(std :: all_of (alleven.begin(), alleven.end(), is_even));
REQUIRE(std::all_of(allevenToo.begin(), allevenToo.end(), is_even));
}
int main (int argc , char * argv [])
{
return Catch :: Session (). run(argc , argv );
}