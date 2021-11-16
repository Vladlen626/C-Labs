#include <iostream>

using namespace std;

class Figure {
	virtual double area() {};
	virtual void show() {};
};

class Circle {
	int radius;
public:
	
	Circle(int _R) {
		if (_R > 0) {
			radius = _R;
		}
		else {
			cout << "Радиус меньше 0";
			abort;
		}
	}

};

class Rectangle {
	int a;
	int b;
public:
	Rectangle() {

	}

};