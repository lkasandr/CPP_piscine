#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	this->fixedPointValue = (value << this->ractionalBits);
}

Fixed::Fixed(const float value)
{
	this->fixedPointValue = roundf(value * (1 << this->ractionalBits));
}

Fixed::Fixed(void)
{
	this->fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &fixed) : fixedPointValue(fixed.fixedPointValue)
{
	*this = fixed;
}

Fixed::~Fixed(void)
{
}

Fixed& Fixed::operator= (const Fixed &fixed)
{
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

bool Fixed::operator> (const Fixed &fixed) const
{
	return (this->fixedPointValue > fixed.fixedPointValue);
}

bool Fixed::operator< (const Fixed &fixed) const
{
	return (this->fixedPointValue < fixed.fixedPointValue);
}

bool Fixed::operator>= (const Fixed &fixed) const
{
	return (this->fixedPointValue >= fixed.fixedPointValue);
}

bool Fixed::operator<= (const Fixed &fixed) const
{
	return (this->fixedPointValue <= fixed.fixedPointValue);
}

bool Fixed::operator== (const Fixed &fixed) const
{
	return (this->fixedPointValue == fixed.fixedPointValue);
}

bool Fixed::operator!= (const Fixed &fixed) const
{
	return (this->fixedPointValue == fixed.fixedPointValue);
}

Fixed Fixed::operator+ (const Fixed &fixed)
{
	Fixed obj(*this);

	obj.setRawBits(this->fixedPointValue + fixed.fixedPointValue);
	return (obj);
}

Fixed Fixed::operator- (const Fixed &fixed)
{
	Fixed obj(*this);

	obj.setRawBits(this->fixedPointValue - fixed.fixedPointValue);
	return (obj);
}

Fixed Fixed::operator* (const Fixed &fixed)
{
	Fixed obj(*this);

	obj.setRawBits((float)(this->fixedPointValue * fixed.fixedPointValue) / (float)(1 << this->ractionalBits));
	return (obj);
}

Fixed Fixed::operator/ (const Fixed &fixed)
{
	Fixed obj(*this);

	obj.setRawBits(this->fixedPointValue / fixed.fixedPointValue * (float)(1 << this->ractionalBits));
	return (obj);
}

Fixed& Fixed::operator++ ()
{
	this->fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed prev = *this;
	++*this;
	return (prev);
}

Fixed& Fixed::operator-- ()
{
	this->fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed prev = *this;
	--*this;
	return (prev);
}

static Fixed& min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	else
		return a;
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return b;
	else
		return a;
}

static Fixed& max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}



// Fixed &minFunction(Fixed &a, Fixed &b)
// {
// 	Fixed val;
// 	val = fixed.min(a, b);
// 	return (val);
// }

// Fixed &minFunction(Fixed &a, Fixed &b);