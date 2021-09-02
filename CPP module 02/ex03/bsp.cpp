#include "Point.hpp"

bool bsp (const Point a, Point const b, Point const c, Point const point)
{
	Fixed k;
	Fixed m;
	Fixed n;

	k= (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	m= (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	n= (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
	return ((k>=0 && m>=0 && n>=0) || (k<=0 && m<=0 && n<=0));
}