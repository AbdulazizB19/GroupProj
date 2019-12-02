#include "room.hpp"
#include <graphics.h>

Room::Room(int _x, int _y, int _w, int _h)
{
    set(_x,_y,_w,_h);
}
void Room::set(int _x, int _y, int _w, int _h)
{
    x = _x;
    y = _y;
    h = _h;
    w = _w;
}
void Room::setY(int _y)
{
    y = _y;
}
void Room::setX(int _x){

    x = _x;
}
void Room::setW(int _w)
{
    w = _w;
}
void Room::setH(int _h){

    h = _h;
}

int Room::getX() const { return x;}
int Room::getY() const{ return y;}
int Room::getW() const { return w;}
int Room::getH() const { return h;}