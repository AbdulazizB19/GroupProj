#include "point.hpp"
#include "bullets.hpp"
#include <graphics.h>

Bullets::Bullets(Point _loc, int _w, int _h, int _dx, int _dy)
{

    set(_loc, _w, _h, _dx, _dy);
}
Bullets::Bullets(int _x ,int _y,int _w, int _h, int _dx, int _dy)
{

    set(Point (_x,_y), _w, _h, _dx, _dy);
}
void Bullets::set(Point _loc, int _w, int _h, int _dx, int _dy)
{

    loc = _loc;
    w = _w;
    h = _h;
    dx = _dx;
    dy = _dy;
}
void Bullets::setLoc(Point v)
{

    loc = v;
}
void Bullets::setLoc(int x, int y)
{

    loc.set(x, y);
}
void Bullets::setW(int _w)
{

    w = _w;
}
void Bullets::setH(int _h)
{

    h = _h;
}
void Bullets::setDx(int _dx)
{

    dx = _dx;
}
void Bullets::setDy(int _dy)
{

    dy = _dy;
}
int Bullets::getW() const
{
    return w;
}

int Bullets::getH() const
{
    return h;
}

int Bullets::getDx() const
{

    return dx;
}
int Bullets::getDy() const
{
    return dy;
}
Point Bullets::getLoc() const
{

    return loc;
}

void Bullets::setMovement(int _dx, int _dy)
{

    dx = _dx;
    dy = _dy;
}
void Bullets::draw() const
{
    int width = getmaxwidth();
    int height = getmaxheight();
	int imageWidth = 100;
	int imageHeight = 100;

	int size = imagesize(0, 0, imageWidth, imageHeight);
	void *image = new char[size];

	readimagefile("Boom.jpg", 0, 0, imageWidth, imageHeight);
	getimage(0, 0, imageWidth, imageHeight, image);
	
    setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	bar(0, 0, imageWidth+1, imageHeight+1);

    putimage(loc.getX(), loc.getY(), image, COPY_PUT);

}
void Bullets::undraw() const{

    setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	bar(loc.getX(), loc.getY(), loc.getX() + 262 + 5, loc.getY() + 263 + 5);

}

void Bullets::move() {

    undraw();
    loc.movement(dx,dy);
    
    draw();

}
