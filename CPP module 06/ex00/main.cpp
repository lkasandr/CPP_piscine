#include "cast.hpp"

int main(int argc, char *argv[])
{
    double changeValue;
    std::string value;
    int coutInt;

    if (argc != 2)
    {
        std::cout << "Wrong number of arguments!" << std::endl;
        return (-1);
    }
    value = argv[1];
    //print char and get changeValue
    if (value.length() == 1 && !std::isdigit(value[0]))
        changeValue = static_cast<int>(value[0]);
    else if (value == "+inf" || value == "+inff" || value == "-inf" || value == "-inff" || value == "nan" || value == "nanf" )
        changeValue = std::atof(argv[1]);
    else if (value.length() != 1 && !std::isdigit(value[0]))
    {
        changeValue = static_cast<int>(value[0]);
    }
    else
        changeValue = std::atof(argv[1]);
    if (std::isnan(changeValue) || std::isinf(changeValue) || changeValue < 0 || changeValue > 127)
		std::cout << "char: impossible" << std::endl;
    else if (changeValue < 127 && changeValue > 31)
        std::cout << "char: '" << static_cast<char>(changeValue) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;

    //print int:
    if (value != "nan" && value != "-inf" && value != "+inf" && value != "-inff" && value != "+inff" && value != "nanf")
    {
        if (changeValue > std::numeric_limits<int>::max() || changeValue < std::numeric_limits<int>::min())
            std::cout << "int: impossible" << std::endl;
        else
        {
            coutInt = static_cast<int>(changeValue);
            std::cout << "int: " << coutInt << std::endl;
        }
    }
    else
        std::cout << "int: impossible" << std::endl;
    
    //print float:
    if (value == "nan" || value == "nanf")
        std::cout << "float: nanf" << std::endl;
    else if (value == "+inf" || value == "+inff")
        std::cout << "float: +inff" << std::endl;
    else if (value == "-inf" || value == "-inff")
        std::cout << "float: -inff" << std::endl;
    else
    {
        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(changeValue);
        std::cout << "f" << std::endl;
    }

    //print double:
    if (value == "nan" || value == "nanf")
        std::cout << "double: nan" << std::endl;
    else if (value == "+inf" || value == "+inff")
        std::cout << "double: +inf" << std::endl;
    else if (value == "-inf" || value == "-inff")
        std::cout << "double: -inf" << std::endl;
    else
    {
        std::cout << "double: " << std::setprecision(1) << std::fixed << changeValue << std::endl;
    }

    return 0;
}