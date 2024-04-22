#include <iostream>
#include "Rectangle.h"

using namespace std;

void Rectangle::getInputs() {
    cout << "Enter b and h" << endl;
    cin >> b >> h;
}

float Rectangle::showArea() {
    getInputs();
    return (b * h);
}
