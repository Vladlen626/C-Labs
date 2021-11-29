#include <iostream>
#include "figure.h"

using namespace std;



int* Circle::GetRadiusAdress() {
	return &radius;
}

Circle::Circle(int _R) {
	if (_R > 0) {
		radius = _R;
	}
	else {
		cout << "Радиус меньше 0";
		abort;
	}
}

double Circle::area() {
	return 3.14 * radius * radius;
}


void Circle::show() {
	cout << "Круг" << endl;
	cout << "Радиус: "<< radius << endl;
	cout << "Площадь: "<< Circle::area() << endl;
}


Rectangle::Rectangle(int _a, int _b) {
	a = _a;
	b = _b;
}

Rectangle::Rectangle(int _a) {
	a = _a;
}

int* Rectangle::GetAAdress() {
	return &a;
}

int* Rectangle::GetBAdress() {
	return &b;
}

double Rectangle::area() {
	if (b <= 0) {
		return (a * a);
	}
	else {
		return (a * b);
	}	
}

void Rectangle::show() {
	if (b <= 0) {
		cout << "Квадрат" << endl;
		cout << "Сторона: " << a << endl;
	}
	else {
		cout << "Прямоугольник" << endl;
		cout << "Высота: " << a << endl;
		cout << "Ширина: " << b << endl;
	}
		
	cout << "Площадь: " << area() << endl;
}
