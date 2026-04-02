#ifndef COMPLEXE_H
#define COMPLEXE_H
#include<iostream>
#include<cmath>
using namespace std;
class complexe
{
    friend ostream & operator << (ostream & out , const complexe &a);
    friend istream & operator >> (istream & in , complexe &a);
    public :
        complexe(double re = 0, double im = 0);
        void setR(double re);
        void setI(double im);
        double getR() const;
        double getI() const;
        complexe operator+(const complexe &a) const;
        complexe operator-(const complexe &a) const;
        complexe operator*(const complexe &a) const;
        complexe operator/(const complexe &a) const;
        double module() const;
    private:
        double re, im;
};
#endif