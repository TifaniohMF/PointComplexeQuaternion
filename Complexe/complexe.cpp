#include "complexe.hpp"
#include <iostream>
#include <cmath>
using namespace std;

complexe::complexe(double re, double im) : re(re), im(im) {}

void complexe::setR(double re) {
    this->re = re;
}

void complexe::setI(double im) {
    this->im = im;
}

double complexe::getR() const {
    return re;
}

double complexe::getI() const {
    return im;
}

complexe complexe::operator+(const complexe &a) const {
    return complexe(re + a.re, im + a.im);
}

complexe complexe::operator-(const complexe &a) const {
    return complexe(re - a.re, im - a.im);
}

complexe complexe::operator*(const complexe &a) const {
    return complexe(re * a.re - im * a.im, re * a.im + im * a.re);
}

complexe complexe::operator/(const complexe &a) const {
    double denom = a.re * a.re + a.im * a.im;
    return complexe((re * a.re + im * a.im) / denom, (im * a.re - re * a.im) / denom);
}

double complexe::module() const {
    return sqrt(re * re + im * im);
}

ostream &operator<<(ostream &out, const complexe &a) {
    out << "\tPartie réelle du complexe : " << a.re << endl;
    out << "\tPartie imaginaire du complexe : " << a.im << endl;
    if (a.im == 0) {
        out << "COMPLEXE : " << a.re << endl;
    } else if (a.re == 0) {
        out << "COMPLEXE : " << a.im << "i" << endl;
    } else if (a.re == 0 && a.im == 0) {
        out << "COMPLEXE : 0" << endl;
    } else {
        if (a.im > 0) {
            out << "COMPLEXE : " << a.re << " + " << a.im << "i" << endl;
        } else {
            out << "COMPLEXE : " << a.re << " - " << -a.im << "i" << endl;
        }
    }
    return out;
}

istream &operator>>(istream &in, complexe &a) {
    cout << "Tapez la partie réelle du complexe : ";
    in >> a.re;
    cout << "Tapez la partie imaginaire du complexe : ";
    in >> a.im;
    return in;
}
