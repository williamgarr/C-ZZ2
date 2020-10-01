#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__

class Point
{
private:
    int _x;
    int _y;

public:
    static Point ORIGINE;
    Point();
    Point(int x, int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};

/* Constante ORIGINE (x = 0; y = O)
extern Point ORIGINE; */

#endif