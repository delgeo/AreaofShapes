#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

void Circle::getInputs() {
    cout << "Enter radius" << endl;
    cin >> r;
}

float Circle::showArea() {
    getInputs();
    return (M_PI * r * r);;
}
