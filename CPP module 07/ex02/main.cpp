#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

	for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    //SCOPE
	std::cout << "Numbers's size: " << numbers.size() << std::endl;
    {
        Array<int> tmp = numbers;
		std::cout << "Tmp's size: " << tmp.size() << std::endl;
        std::cout << "Tmp's value: " << tmp[100] << std::endl;
        std::cout << "numbers's value: " << numbers[100] << std::endl;
        Array<int> test(tmp);
		std::cout << "test's size: " << test.size() << std::endl;
        std::cout << "Tmp's value: " << tmp[100] << std::endl;
        std::cout << "test's value: " << test[100] << std::endl;
    }

	Array<int> tmp2;

	std::cout << "tmp2's size: " << tmp2.size() << std::endl;
	
    try
    {
       std::cout << "test wrong index: " << std::endl;
	   numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        // std::cout << "test wrong index: " << std::endl;
		numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	try
    {
        // numbers[10] = 0;
		std::cout << "test for right index: " << std::endl;
        std::cout << numbers[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

    Array<std::string> strings(2);

    strings[0] = "odin dva";
    strings[1] = "tri chetire";
    std::cout << "test for strings: " << std::endl;
    std::cout << strings[1] << std::endl;

    return 0;
}