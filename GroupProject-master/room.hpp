#ifndef ROOM_H
#define ROOM_H

class Room
{
private:
    int x, y, w, h;

public:
    Room(int _x = 0, int _y = 0, int _w = 0, int _h = 0);
    void set(int _x, int _y, int _w, int _h);
    void setY(int _y);
    void setX(int _x);

    void setW(int _w);
    void setH(int _h);

    int getX() const;
    int getY() const;
    int getW() const;
    int getH() const;


    
};

#endif
