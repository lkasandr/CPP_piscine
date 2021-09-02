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
		Fixed(const Fixed &fixed);
		~Fixed(void);
		int getRawBits( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		bool operator> (const Fixed &fixed) const;
		bool operator< (const Fixed &fixed) const;
		bool operator>= (const Fixed &fixed) const;
		bool operator<= (const Fixed &fixed) const;
		bool operator== (const Fixed &fixed) const;
		bool operator!= (const Fixed &fixed) const;
		Fixed& operator= (const Fixed &fixed);
		Fixed operator+ (const Fixed &fixed) const;
		Fixed operator- (const Fixed &fixed) const;
		Fixed operator* (const Fixed &fixed) const;
		Fixed operator/ (const Fixed &fixed) const;
		Fixed& operator++ ();
		Fixed operator++ (int);
		Fixed& operator-- ();
		Fixed operator-- (int);
		static Fixed const &min(const Fixed &a, const Fixed &b);
		static Fixed const &max(const Fixed &a, const Fixed &b);
		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
};

std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

#endif