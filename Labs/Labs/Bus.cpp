#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class Bus {
	string		carDriverName;
	string		model;
	int			busNumber;
	int			routNumber;
	int			startExpYear;
	int			mileage;

public:
	Bus() {
		carDriverName = "Unkown";
		model = "Unkown";
		busNumber = 0;
		routNumber = 0;
		startExpYear = 0;
		mileage = 0;
	}
	Bus( string	a, string b, int c, int d, int e, int f) {
		carDriverName = a;
		model = b;
		busNumber = c;
		routNumber = d;
		startExpYear = e;
		mileage = f;
	}
	~Bus() {}

	void SetDriverName(string s) {
		carDriverName = s;
	}
	void SetModel(string s) {
		model = s;
	}
	void SetBusNumber(int a) {
		busNumber = a;
	}
	void SetRoutNumber(int a) {
		routNumber = a;
	}
	void SetStartExpYear(int a) {
		startExpYear = a;

	}
	void SetMileage(int a) {
		mileage = a;
	}

	string GetDriverName(){
		return carDriverName;
	}
	string GetModel() {
		return model;
	}
	int GetBusNumber() {
		return busNumber;
	}
	int GetRoutNumber() {
		return routNumber;
	}
	int GetStartExpYear() {
		return startExpYear;
	}
	int GetMileage() {
		return mileage;
	}

	void Show(){
		cout << setw(26) << "ФИО водителя: " << setw(20) << carDriverName << endl;
		cout << setw(26) << "Марка автобуса: " << setw(20) << model << endl;
		cout << setw(26) << "Номер автобуса: " << setw(20) << busNumber << endl;
		cout << setw(26) << "Номер маршрута: " << setw(20) << routNumber << endl;
		cout << setw(26) << "Лет эксплуатации: " << setw(20) << startExpYear << endl;
		cout << setw(26) << "Пробег: " << setw(17) << mileage << " км" << endl;
		
	}
	
};

int main() {
	setlocale(LC_ALL, "Russian");

	vector<Bus> busArray;

	Bus first("Артасов Б.Г.", "Mercedes", 10, 145, 5, 13000);
	Bus	second("Джиганов А.С.", "Mazda", 13, 140, 7, 11000);
	Bus	third("Клиенко Ц.Б.", "Lexus", 44, 120, 13, 7);
	Bus	fourth("Аладин Х.В.", "Tetris", 1, 1, 1, 1000);

	busArray.push_back(first);
	busArray.push_back(second);
	busArray.push_back(third);
	busArray.push_back(fourth);

	for (int i = 0; i < busArray.size(); i++) {
		if (busArray[i].GetRoutNumber() == 145) {
			busArray[i].Show();
			cout << endl;
		}
		else if (busArray[i].GetStartExpYear() > 10) {
			busArray[i].Show();
			cout << endl;
		}
		else if (busArray[i].GetMileage() > 10000) {
			busArray[i].Show();
			cout << endl;
		}
	}
	return 0;
}