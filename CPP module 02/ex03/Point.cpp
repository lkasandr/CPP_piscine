#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::~Point()
{

}

Point::Point(const Point &point) : x(point.x), y(point.y)
{

}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Fixed const Point::getX(void) const
{
	return (this->x);
}

Fixed const Point::getY(void) const
{
	return (this->y);
}

Point& Point::operator= (const Point &point)
{
	if (&point == this)
		return *this;
	return *this;
}