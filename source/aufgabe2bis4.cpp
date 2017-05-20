# include < cstdlib > // std :: rand ()
# include < vector > // std :: vector < >
# include < list > // std :: list < >
# include < iostream > // std :: cout
# include < iterator > // std :: ostream_iterator < >
# include < algorithm > // std :: reverse , std :: generate
# include <set>
#include <time.h>
int main(int argc, char *argv[])
{
	srand(time (NULL));
	std::list<int> rndint;
	for (int i = 0; i < 100; i++) {
		//int random = rand()%(max-min+1)+min
		rndint.push_back(rand() % (100 - 1 + 1) + 1);
	}
	std::cout << "Testing size of random int list: " << rndint.size() << '\n';

	std::vector<int> rndvec;
	rndvec.reserve(rndint.size());
	std::copy(std::begin(rndint), std::end(rndint), std::back_inserter(rndvec));

	std::cout << "Testing size of random int vec: " << rndvec.size() << '\n';
	
	std::set<int> insidelist (rndint.begin(),rndint.end());
	for (int i = 0; i <= rndint.size(); i++) {
		if (insidelist.count(i)!=1) {
			std::cout << i << " is not an element of insidelist.\n";
		}
	}
	std::cout << "There are " << insidelist.size() << " elementsnin the set";
	
} 