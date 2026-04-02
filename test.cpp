#include "Complexe/complexe.hpp"
#include "Point/point.hpp"
#include "Quaternion/quaternions_algebra.hpp"
#include <iostream>
#include <cassert>

using namespace std;

void testComplexe() {
    cout << "=== Test Complexe ===" << endl;
    complexe a(1, 2);
    complexe b(3, 4);
    complexe sum = a + b;
    assert(sum.getR() == 4 && sum.getI() == 6);
    complexe prod = a * b;
    assert(prod.getR() == -5 && prod.getI() == 10);
    cout << "Complexe tests passed." << endl;
}

void testPoint() {
    cout << "=== Test Point ===" << endl;
    point p1(0, 0);
    point p2(3, 4);
    double dist = p1.distance(p2);
    assert(abs(dist - 5.0) < 1e-6);
    point mid = p1.milieu(p2);
    assert(mid.getX() == 1.5 && mid.getY() == 2.0);
    cout << "Point tests passed." << endl;
}

void testQuaternion() {
    cout << "=== Test Quaternion ===" << endl;
    quaternion q1(1, 2, 3, 4);
    quaternion q2(1, 0, 0, 0);
    quaternion sum = q1 + q2;
    assert(sum.getR() == 2 && sum.getI() == 2 && sum.getJ() == 3 && sum.getK() == 4);
    double mod = q1.module();
    assert(abs(mod - sqrt(30)) < 1e-6);
    cout << "Quaternion tests passed." << endl;
}

int main() {
    testComplexe();
    testPoint();
    testQuaternion();
    cout << "All tests passed!" << endl;
    return 0;
}