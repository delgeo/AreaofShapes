#include <iostream>
#include "Square.h"

using namespace std;

void Square::getInputs() {
    cout << "Enter b" << endl;
    cin >> b;
}

float Square::showArea() {
    getInputs();
    return (b * b);
}
