#include "phonebook.hpp"

contact::contact()
{
    name = "\0";
    lastname = "\0";
    nickname  = "\0";
    telephone_number = "\0";
    secret  = "\0";
}

void contact::add_contact()
{
    std::cout << "ENTER NAME:" << std::endl;
    getline(std::cin, name);
    std::cout << "ENTER LASTNAME:" << std::endl;
    getline(std::cin, lastname);
    std::cout << "ENTER NICKNAME" << std::endl;
    getline(std::cin, nickname);
    std::cout << "ENTER TELEPHONE NUMBER" << std::endl;
    getline(std::cin, telephone_number);
    std::cout << "ENTER SECRET" << std::endl;
    getline(std::cin, secret);
}

void contact::search_contact(int j)
{
    std::string str;

    if (name != "\0" || lastname != "\0" || nickname != "\0")
    {
        std::cout.setf(std::ios::right);
        std::cout.width(10);
        std::cout << j << "|";
        std::cout.setf(std::ios::right);
        std::cout.width(10);
        if (name.length() > 10)
            std::cout << name.substr(0, 9).append(".") << "|";
        else
            std::cout << name << "|";
        std::cout.setf(std::ios::right);
        std::cout.width(10);
        if (lastname.length() > 10)
            std::cout << lastname.substr(0, 9).append(".") << "|";
        else
            std::cout << lastname << "|";
        std::cout.setf(std::ios::right);
        std::cout.width(10);
        if (nickname.length() > 10)
            std::cout << nickname.substr(0, 9).append(".") << std::endl;
        else
            std::cout << nickname << std::endl;
    }
}

void contact::print_contact()
{
    if (name == "\0" && lastname == "\0" && nickname == "\0" && telephone_number == "\0" && secret == "\0")
    {
        std::cout << "<<< SORRY, BUR THIS IS AN EMPTY CONTACT >>>" << std::endl;
        return ;
    }
    std::cout << name << std::endl;
    std::cout << lastname << std::endl;
    std::cout << nickname << std::endl;
    std::cout << telephone_number << std::endl;
    std::cout << secret << std::endl;
}

int main(int argc, char **argv)
{
    std::string str;
    std::string numb;
    int number;
    contact book[8];
    int i;
    int j;

    i = 0;
    j = 0;
    number = 0;
    if (argc != 1)
        return (0);
    argv = NULL;
    while (1)
    {
        std::cout << "<<< PLEASE, ENTER THE COMMAND (ADD/SEARCH/EXIT) >>>" << std::endl;
        getline(std::cin, str);
        if (str == "ADD")
        {
            if (i == 8)
            {
                std::cout << "<<< YOUR PHONEBOOK IS FULL >>>" << std::endl;
                i = 0;
            }
            book[i].add_contact();
            i++;
        }
        else if (str == "SEARCH")
        {
            j = 0;
            std::cout.setf(std::ios::right);
            std::cout.width(10);
            std::cout << "INDEX" << "|";

            std::cout.setf(std::ios::right);
            std::cout.width(10);
            std::cout << "NAME" << "|";
            
            std::cout.setf(std::ios::right);
            std::cout.width(10);
            std::cout << "LASTNAME" << "|"; 
            
            std::cout.setf(std::ios::right);
            std::cout.width(10);
            std::cout << "NICKNAME" << std::endl;
            while (j < 8)
            {
                book[j].search_contact(j + 1);
                j++;
            }
            std::cout << "<<< PLEASE, ENTER THE INDEX (1-8) >>>" << std::endl;
            getline(std::cin, numb);
            number = std::atoi(numb.c_str());
            if (number > 0 && number < 9)
                book[number - 1].print_contact();
            else
                std::cout << "<<< YOU ENTERED THE WRONG NUMBER >>>" << std::endl;
        }
        else if (str == "EXIT")
        {
            std::cout << "<<< GOOD BYE! >>>" << std::endl;
            return (1);
        }
        else
            std::cout << "<<< YOU ENTERED THE WRONG COMMAND. TRY AGAIN >>>" << std::endl;
    }
}
