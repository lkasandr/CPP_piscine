#ifndef PHONEBOOK_H

#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string telephone_number;
        std::string secret;
    public:
        Contact(void)
        {}
        void setName(std::string str);
        void setLastName(std::string str);
        void setNickName(std::string str);
        void setTelNumb(std::string str);
        void setSecret(std::string str);
        std::string getName(int flag);
        std::string getLastName(int flag);
        std::string getNickName(int flag);
        std::string getName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getTelNumb(void);
        std::string getSecret(void);
};

class Phonebook
{
  private:
    Contact contacts[8];
  public:
    Phonebook(void)
    {}
    void print_first_string(void);
    void add_contact(int index);
    void print_contacts(int index);
    void display_contact_info();
    bool check_empty_contact(int index);
    std::string fill_contact_info(std::string prompt);
};

#endif