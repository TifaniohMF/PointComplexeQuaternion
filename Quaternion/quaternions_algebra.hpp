#ifndef QUATERNION_H
#define QUATERNION_H
#include<iostream>
#include<cmath>
using namespace std;
class quaternion
{
    friend ostream & operator << (ostream & out ,const quaternion &A);
    friend istream & operator >> (istream & in ,quaternion &A);
    public:
        quaternion(double re = 0, double i = 0, double j = 0, double k = 0);
        void setR(double re);
        void setI(double i);
        void setJ(double j);
        void setK(double k);
        double getR() const;
        double getI() const;
        double getJ() const;
        double getK() const;
        quaternion operator+(const quaternion &A) const;
        quaternion operator-(const quaternion &A) const;
        quaternion operator*(const quaternion &A) const;
        double module() const;
    private :
        double re, i, j, k;
};
#endif
