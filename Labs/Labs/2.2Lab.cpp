#include <iostream>;
#include <time.h>;
#include <vector>;
#include <iomanip>;
using namespace std;

class Abonent {
public:
	int id;
protected:
	string sName;
	string phoneNumber;
public:
	Abonent(int _id, string _sName, string _phoneNumber) {
		id = _id;
		sName = _sName;
		phoneNumber = _phoneNumber;
	}
	~Abonent() {};
	
	friend class Notebook;
};

class Notebook {

public:
	Abonent change(Abonent _ob, string _newPhoneNumber) {
		_ob.phoneNumber = _newPhoneNumber;
		return _ob;
	}
	void show(Abonent _ob){
		cout << "|" << setw(4) << _ob.id;
		cout << "|" << setw(16)<< _ob.sName;
		cout << "|" << setw(12) << _ob.phoneNumber << "|" << endl;
	}
};

void main() {
	setlocale(LC_ALL, "Russian");
	vector<Abonent> abonentArr;
	Notebook notebook;
	abonentArr.push_back(Abonent(100, "Маслянов", "89184005916"));
	abonentArr.push_back(Abonent(101, "Колубин", "89184567181"));
	abonentArr.push_back(Abonent(102, "Рыжов", "89184514920"));
	abonentArr.push_back(Abonent(103, "Голубикин", "89184514979"));
	abonentArr.push_back(Abonent(104, "Арбузов", "89184515687"));
	for (int i = 0; i < abonentArr.size(); i++) {
		if (abonentArr[i].id == 103) {
			abonentArr[i] = notebook.change(abonentArr[i], "89990548400");
			break;
		}
	}
	cout << "|" << setw(4) << "id";
	cout << "|" << setw(16) << "sName";
	cout << "|" << setw(12) << "phoneNumber" << "|"<<endl;
	cout << setw(30) << "------------------------------------" << endl;
	for (int i = 0; i < abonentArr.size(); i++) {
		notebook.show(abonentArr[i]);
	}
}