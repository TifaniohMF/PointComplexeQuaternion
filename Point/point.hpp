#ifndef POINT_H
#define POINT_H
#include<iostream>
#include<cmath>
using namespace std;
class point
{
    friend ostream & operator<<(ostream & out, const point &A);
    friend istream & operator>>(istream & in, point &A);
    public:
        point(double x = 0, double y = 0);
        void setX(double x);
        void setY(double y);
        double getX() const;
        double getY() const;
        double distance(const point &A) const;
        point milieu(const point &A) const;
    
    private:
        double x, y;      
};
#endif
