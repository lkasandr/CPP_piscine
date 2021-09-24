#include "iter.hpp"

class Awesome
{
	public:
		Awesome(void): _n( 42 ) { return; }
		int get(void) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<(std::ostream& o, Awesome const & rhs) 
{ 
    o << rhs.get(); return o; 
}

template <typename T>
void print(T const & x) 
{ 
    std::cout << x << std::endl;
	return; 
}

int main() 
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	std::cout << "_____________" << std::endl;
	iter(tab2, 5, print);
	std::cout << "_____________" << std::endl;
	char charArray[5];
	charArray[0] = 'a';
	charArray[1] = 'b';
	charArray[2] = 'c';
	charArray[3] = 'd';
	charArray[4] = 'e';
	iter(charArray, 5, print);
	std::cout << "_____________" << std::endl;
	float floatArray[3];
	floatArray[0] = 0.1234;
	floatArray[1] = 10.4354;
	floatArray[2] = 45.4354;
	iter(floatArray, 3, print);
    return 0;
}