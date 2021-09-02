#include "Point.hpp"

int main( void )
{
    Point const a(0, 5);
    Point const b(5, 0);
    Point const c(0, 0);

    Point const point(5, 5);
    Point const point2(0, 1);
    
    std::cout << "Ne prinadlejit: " << bsp(a, b, c, point) << std::endl;
    std::cout << "Prinadlejit: " << bsp(a, b, c, point2) << std::endl;
    
    return 0;
}