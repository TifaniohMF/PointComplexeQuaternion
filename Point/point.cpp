#include "point.hpp"
#include <iostream>
#include <cmath>
using namespace std;

point::point(double x, double y) : x(x), y(y) {}

void point::setX(double x) {
    this->x = x;
}

void point::setY(double y) {
    this->y = y;
}

double point::getX() const {
    return x;
}

double point::getY() const {
    return y;
}

double point::distance(const point &A) const {
    double dx = x - A.x;
    double dy = y - A.y;
    return sqrt(dx * dx + dy * dy);
}

point point::milieu(const point &A) const {
    return point((x + A.x) / 2, (y + A.y) / 2);
}

ostream &operator<<(ostream &out, const point &A) {
    out << "\tAbscisse du point : " << A.x << endl;
    out << "\tOrdonnée du point : " << A.y << endl;
    return out;
}

istream &operator>>(istream &in, point &A) {
    cout << "\tTapez l'abscisse : ";
    in >> A.x;
    cout << "\tTapez l'ordonnée : ";
    in >> A.y;
    return in;
}
