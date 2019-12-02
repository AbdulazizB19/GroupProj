#ifndef OBJECTS_H
#define OBJECTS_H


class Objects {

    private:

    int x,y,w,h;

    public:

    Objects(int _x = 0, int _y = 0, int _w = 0, int _h = 0);
    void set(int _x, int _y, int _w, int _h);
    void setY(int );
    void setX(int );

    void setW(int );
    void setH(int );

    int getX() const;
    int getY() const;
    int getW() const;
    int getH() const;

};

#endif