#include <iostream>
#include "Area.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main() {
	int choice;
	int b, h;
	do {
		cout << "Choose shape\n1. Triangle\n2. Square\n3. Rectangle\n4. Circle\n5. Quit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			Triangle t;
			cout << "Area = " << t.showArea() << endl << endl;
			break;
		}
		case 2:
		{
			Square s;
			cout << "Area = " << s.showArea() << endl << endl;
			break;
		}
		case 3:
		{
			Rectangle r;
			cout << "Area = " << r.showArea() << endl << endl;
			break;
		}
		case 4:
		{
			Circle c;
			cout << "Area = " << c.showArea() << endl << endl;
			break;
		}
		case 5:
			cout << "Goodbye";
			break;
		default:
			cout << "Invalid selection!\nTry again!!" << endl << endl;
			break;
		}
	} while (choice != 5);
}

