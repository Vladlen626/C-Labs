#include <iostream>
#include <iomanip>

using namespace std;

class Automobile {
	string carName;
	char* carClass = new char[16];
	int power;
	float coast;

public:
	void SetCarSpec() {
		cout << "Имя автомобиля: ";
		cin >> carName;
		cout << "Модель автомобиля: ";
		cin >> carClass;
		cout << "Мощность автомобиля: ";
		cin >> power;
		cout << "Цена автомобиля: ";
		cin >> coast;
	}
	void GetCarSpec() {
		cout << endl << setw(42) << carName << endl;
		cout << setw(32) << "Модель данного автомобиля: " << setw(10) << carClass << endl;
		cout << setw(32) << "Мощность данного автомобиля: " << setw(10) << power << endl;
		cout << setw(32) << "Цена данного автомобиля: " << setw(10) << coast << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Automobile firstCar, secondCar;
	firstCar.SetCarSpec();
	secondCar.SetCarSpec();
	firstCar.GetCarSpec();
	secondCar.GetCarSpec();
	return 0;
}
