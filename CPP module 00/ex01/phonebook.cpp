#include "phonebook.hpp"

std::string Phonebook::fill_contact_info(std::string prompt)
{
	std::string str;

	str = "\0";
	std::cout << prompt << std::endl;
    getline(std::cin, str);
	while (str == "\0")
	{
		std::cout << prompt << std::endl;
		getline(std::cin, str);
	}
	return (str);
}

void Phonebook::add_contact(int index)
{
    std::string str;

	str = fill_contact_info("ENTER NAME:");
	contacts[index].setName(str);

	str = fill_contact_info("ENTER LAST NAME:");
	contacts[index].setLastName(str);
	
	str = fill_contact_info("ENTER NICKNAME:");
	contacts[index].setNickName(str);

	str = fill_contact_info("ENTER TELEPHONE NUMBER:");
	contacts[index].setTelNumb(str);

	str = fill_contact_info("ENTER DARKEST SECRET:");
	contacts[index].setSecret(str);
}

void Phonebook::print_first_string(void)
{
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
}

bool Phonebook::check_empty_contact(int index)
{
	if (contacts[index].getName() != "\0")
		return (1);
	else
		return (0);
}

void Phonebook::print_contacts(int index)
{
	std::string str;

	if (check_empty_contact(index))
	{
		std::cout.width(10);
		std::cout << std::setw(10) << index + 1 << "|";
		std::cout.width(10);
		std::cout << std::setw(10) << contacts[index].getName(1) << "|";
		std::cout.width(10);
		std::cout << std::setw(10) << contacts[index].getLastName(1) << "|";
		std::cout.width(10);
		std::cout << std::setw(10) << contacts[index].getNickName(1) << std::endl;
	}
}

void Phonebook::display_contact_info(void)
{
	int index;
	std::string str;

	std::cout << "<<< PLEASE, ENTER THE INDEX>>>" << std::endl;
	getline(std::cin, str);
	index = std::atoi(str.c_str());
	if (index > 0 && index < 9 && check_empty_contact(index - 1))
	{
		std::cout << contacts[index - 1].getName() << std::endl
		<< contacts[index - 1].getLastName() << std::endl
		<< contacts[index - 1].getNickName() << std::endl
		<< contacts[index - 1].getTelNumb() << std::endl
		<< contacts[index - 1].getSecret() << std::endl;
	}
	else
		std::cout << "<<< YOU ENTERED THE WRONG NUMBER >>>" << std::endl;
}

int main()
{
	Phonebook phonebook;
	std::string str;
	int index_add;
	int index_search;

	index_add = 0;
	while (1)
	{
		std::cout << "<<< PLEASE, ENTER THE COMMAND (ADD/SEARCH/EXIT) >>>" << std::endl;
        getline(std::cin, str);
		if (str == "ADD")
        {
			if (index_add == 8)
			{
				std::cout << "<<< YOUR PHONEBOOK IS FULL >>>" << std::endl;
                index_add = 0;
			}
			phonebook.add_contact(index_add);
			index_add++;
		}
		else if (str == "SEARCH")
		{
			phonebook.print_first_string();
			index_search = 0;
			while(index_search < 8)
			{
				phonebook.print_contacts(index_search);
				index_search++;
			}
			phonebook.display_contact_info();
		}
		else if (str == "EXIT")
        {
            std::cout << "<<< GOOD BYE! >>>" << std::endl;
            return (1);
        }
        else
            std::cout << "<<< YOU ENTERED THE WRONG COMMAND. TRY AGAIN >>>" << std::endl;
	}
	return (0);
}