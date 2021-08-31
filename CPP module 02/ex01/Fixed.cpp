#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	this->fixedPointValue = (value << this->ractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->fixedPointValue = roundf(value * (1 << this->ractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(void)
{
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : fixedPointValue(fixed.fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	fixedPointValue = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return (this->fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
	float floatValue;

	floatValue = (float)this->fixedPointValue / (float)(1 << this->ractionalBits);
	return (floatValue);
}

int Fixed::toInt( void ) const
{
	int intValue;

	intValue = this->fixedPointValue >> this->ractionalBits;
	return (intValue);
}

std::ostream& operator<< (std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}