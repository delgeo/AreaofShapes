#include <iostream>
#include "Triangle.h"

using namespace std;

void Triangle::getInputs() {
    cout << "Enter b and h" << endl;
    cin >> b >> h;
}

float Triangle::showArea() {
    getInputs();
    return (b * h)/2;
}
