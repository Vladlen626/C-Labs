#include <iostream>;
using namespace std;

class Date {
protected:
	int day, month, year;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
public:
	Date() {
		day = 0;
		month = 0;
		year = 0;
	}
	Date(int _day, int _month, int _year) {
		day = _day;
		month = _month;
		year = _year;
	}
	~Date() {};

	friend ostream& operator<<(ostream& out,Date& ob);
	Date operator+(Date& ob);
	Date operator-(Date& ob);
	Date operator+(int day);
	Date operator+(Date& ob);

};

Date Date::operator+(int _day) {
	Date temp;
	temp.day = day + _day;
	temp.month = month;
	temp.year = year;
	if (temp.month == 1 or temp.month == 3 or temp.month == 4 or temp.month == 5 or temp.month == 6 or temp.month == 7 or temp.month == 8) {
		if (temp.day > 31) {
			temp.day - 31;
			temp.month++;
		}
	}
	else if (temp.month == 2) {
		if (temp.day > 28) {
			temp.day - 28;
			temp.month++;
		}
	}
	else {
		if (temp.day > 30) {
			temp.day = 30;
			temp.month++;
		}
	}

	while (temp.month > 12) {
		temp.month - 12;
		temp.year++;
	}
	return temp;
}

Date Date::operator+(Date& ob) {
	Date temp;

	temp.month = month + ob.month;

	temp.day = day + ob.day;
	if (temp.month == 1 or temp.month == 3 or temp.month == 4 or temp.month == 5 or temp.month == 6 or temp.month == 7 or temp.month == 8) {
		if (temp.day > 31) {
			temp.day - 31;
			temp.month++;
		}
	}else if (temp.month == 2) {
		if (temp.day > 28) {
			temp.day - 28;
			temp.month++;
		}
	}
	else {
		if (temp.day > 30) {
			temp.day = 30;
			temp.month++;
		}
	}
	
	while (temp.month > 12) {
		temp.month - 12;
		temp.year++;
	}
	temp.year += year + ob.year;
	return temp;
}

Date Date::operator-(Date& ob) {
	Date temp;
	temp.month = month - ob.month;

	temp.day = day - ob.day;
	if (temp.month == 2 or temp.month == 4 or temp.month == 5 or temp.month == 6 or temp.month == 7 or temp.month == 8 or temp.month == 9) {
		if (temp.day < 1) {
			31+temp.day;
			temp.month--;
		}
	}
	else if (temp.month < 1) {
		if (temp.day > 28) {
			28 + temp.day;
			temp.month--;
		}
	}
	else {
		if (temp.day < 1) {
			30 + temp.day;
			temp.month--;
		}
	}

	while (temp.month < 1) {
		temp.year--;
		temp.month + 12;
	}
	temp.year = year - ob.year;
	return temp;
}

ostream& operator<<(ostream& out, Date& ob){
	out << ob.day << "." << ob.month<<"."<< ob.year;
}

int maint() {
	
	return 0;
}