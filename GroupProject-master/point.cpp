#include "point.hpp"
#include <graphics.h>
#include <cmath>

Point::Point(double _x, double _y) { set(_x, _y); }

void Point::setX(double _x) { x = _x; }
void Point::setY(double _y) { y = _y; }
void Point::set(double _x, double _y)
{

    x = _x;
    y = _y;
}

double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;
}

void Point::movement(double dx, double dy)
{
    // x = x + dx;
    // y = y + dy;

    
    x = x + (dx - 200 * cos(90));
    
    if (y >= 100)
    {
    y = y + (dy - 200 * sin(90));
    }

    if ( y <= 100);
    {
        //x = x + (dx - 200 * cos(90));
        y = -y;
    }
}