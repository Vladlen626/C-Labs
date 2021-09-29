#include <iostream>;
using namespace std;

class Goods {
	string name;
	string date;
	int cost;
	int num;
	int id;
public:
	Goods(string _name, string _date, int _cost, int _num, int _id) {
		name = _name;
		date = _date;
		cost = _cost;
		num = _num;
		id = _id;
		cout << "Counstructor" << endl;
	}	
	Goods() {
		name = "Unkown";
		date = "0000-00-00";
		cost = 0;
		num = 0;
		id = 0;
		cout << "Default constructor" << endl;
	}
	~Goods() {
		cout << "Destructor"<< endl;
	};



};



int main() {

	return 0;
}

