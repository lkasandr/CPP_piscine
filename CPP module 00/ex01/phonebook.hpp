#ifndef PHONEBOOK_H

#define PHONEBOOK_H

#include <string>
#include <iostream>

class contact
{
    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string telephone_number;
        std::string secret;

    public:
        contact();
        void add_contact();
        void search_contact(int j);
        void print_contact();
};

#endif