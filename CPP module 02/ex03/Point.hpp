#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		~Point();
		Point(const Point &point);
		Point(const float x, const float y);
		Point& operator= (const Point &point);
		Fixed const getX(void) const;
		Fixed const getY(void) const;
};

bool bsp (Point const a, Point const b, Point const c, Point const point);

#endif