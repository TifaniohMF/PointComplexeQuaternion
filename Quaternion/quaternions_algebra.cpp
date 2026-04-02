#include "quaternions_algebra.hpp"
#include <iostream>
#include <cmath>
using namespace std;

quaternion::quaternion(double re, double i, double j, double k) : re(re), i(i), j(j), k(k) {}

void quaternion::setR(double re) {
    this->re = re;
}

void quaternion::setI(double i) {
    this->i = i;
}

void quaternion::setJ(double j) {
    this->j = j;
}

void quaternion::setK(double k) {
    this->k = k;
}

double quaternion::getR() const {
    return re;
}

double quaternion::getI() const {
    return i;
}

double quaternion::getJ() const {
    return j;
}

double quaternion::getK() const {
    return k;
}

quaternion quaternion::operator+(const quaternion &A) const {
    return quaternion(re + A.re, i + A.i, j + A.j, k + A.k);
}

quaternion quaternion::operator-(const quaternion &A) const {
    return quaternion(re - A.re, i - A.i, j - A.j, k - A.k);
}

quaternion quaternion::operator*(const quaternion &A) const {
    return quaternion(
        re * A.re - i * A.i - j * A.j - k * A.k,
        re * A.i + i * A.re + j * A.k - k * A.j,
        re * A.j - i * A.k + j * A.re + k * A.i,
        re * A.k + i * A.j - j * A.i + k * A.re
    );
}

double quaternion::module() const {
    return sqrt(re * re + i * i + j * j + k * k);
}

ostream &operator<<(ostream &out, const quaternion &A) {
    out << "QUATERNION : " << A.re;
    if (A.i != 0) out << (A.i > 0 ? " + " : " ") << A.i << "i";
    if (A.j != 0) out << (A.j > 0 ? " + " : " ") << A.j << "j";
    if (A.k != 0) out << (A.k > 0 ? " + " : " ") << A.k << "k";
    out << endl;
    return out;
}

istream &operator>>(istream &in, quaternion &A) {
    cout << "Tapez la partie réelle : ";
    in >> A.re;
    cout << "Tapez la partie i : ";
    in >> A.i;
    cout << "Tapez la partie j : ";
    in >> A.j;
    cout << "Tapez la partie k : ";
    in >> A.k;
    return in;
}
    
