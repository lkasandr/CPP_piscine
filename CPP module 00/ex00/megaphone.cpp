#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            if (std::islower(argv[i][j]))
                argv[i][j] = std::toupper(argv[i][j]);
            j++;
        }
        std::cout << argv[i];
        i++;
    }
    std::cout << std::endl;
    return (0);
}
