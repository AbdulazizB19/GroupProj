#ifndef BULLETS_H
#define BULLETS_H

class Bullets
{
private:
    Point loc;
    int dx, dy;
    int w, h;

public:
    Bullets(Point _loc = Point(0, 0), int _w = 0, int _h = 0, int _dx = 0, int _dy = 0);
    Bullets(int _x = 0, int _y = 0, int _w = 0, int _h = 0, int _dx = 0, int _dy = 0);
    void set(Point _loc, int _w, int _h, int _dx, int _dy);
    void setLoc(Point);
    void setLoc(int, int);
    void setDx(int);
    void setDy(int);
    void setW(int);
    void setH(int);

    int getDx() const;
    int getDy() const;
    int getW() const;
    int getH() const;
    Point getLoc() const;

    void setMovement(int, int);
    void draw() const;
    void undraw() const;
    void move();
};

#endif