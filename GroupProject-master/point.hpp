#ifndef POINT_H
#define POINT_H


class Point 
{
    private:

    double x, y;


    public:

    Point(double _x=0,double _y=0);

    void setX(double );
    void setY(double );
    void set(double _x, double _y);

    double getX()const;
    double getY()const;

    void movement(double dx=0, double dy=0);

};

#endif