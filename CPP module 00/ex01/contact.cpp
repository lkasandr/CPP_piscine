#include "phonebook.hpp"

void Contact::setName(std::string str)
{
	this->name = str;
}

void Contact::setLastName(std::string str)
{
	this->lastname = str;
}

void Contact::setNickName(std::string str)
{
	this->nickname = str;
}

void Contact::setTelNumb(std::string str)
{
	this->telephone_number = str;
}

void Contact::setSecret(std::string str)
{
	this->secret = str;
}

std::string Contact::getName(int flag)
{
	flag = 0;
	if (this->name.length() > 10)
        return(this->name.substr(0, 9).append("."));
	return(this->name);
}

std::string Contact::getLastName(int flag)
{
	flag = 0;
	if (this->lastname.length() > 10)
        return(this->lastname.substr(0, 9).append("."));
	return (this->lastname);
}

std::string Contact::getNickName(int flag)
{
	flag = 0;
	if (this->nickname.length() > 10)
        return (this->nickname.substr(0, 9).append("."));
	return (this->nickname);
}

std::string Contact::getName(void)
{
	return(this->name);
}

std::string Contact::getLastName(void)
{
	return (this->lastname);
}

std::string Contact::getNickName(void)
{
	return (this->nickname);
}

std::string Contact::getTelNumb(void)
{
	return (this->telephone_number);
}

std::string Contact::getSecret(void)
{
	return (this->secret);
}