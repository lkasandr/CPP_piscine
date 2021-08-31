#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int fixedPointValue;
		static const int ractionalBits = 8;
	public:
		Fixed(const int value);
		Fixed(const float value);
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed& operator= (const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

#endif