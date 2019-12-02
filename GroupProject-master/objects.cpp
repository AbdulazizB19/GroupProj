#include "objects.hpp"
#include "room.hpp"
#include <graphics.h>


Objects::Objects(int _x, int _y, int _w, int _h)
{
    set(_x,_y,_w,_h);
}
void Objects::set(int _x, int _y, int _w, int _h)
{
    x = _x;
    y = _y;
    h = _h;
    w = _w;
}
void Objects::setY(int _y)
{
    y = _y;
}
void Objects::setX(int _x){

    x = _x;
}
void Objects::setW(int _w)
{
    w = _w;
}
void Objects::setH(int _h){

    h = _h;
}

int Objects::getX() const { return x;}
int Objects::getY() const{ return y;}
int Objects::getW() const { return w;}
int Objects::getH() const { return h;}

