#include <iostream>;
using namespace std;
class Test {
protected:
	int W;
	void Z() {
		cout << "Это закрытая функция класса Test" << endl;
	}
public:
	Test() {
		W = 1;
	}
	Test(int _W);
	~Test() {};

	friend void Fun(Test _ob);
};

Test::Test(int _W) {
	W = _W;
}

void Fun(Test _ob) {
	cout << _ob.W << endl;
	_ob.Z();
}

void main() {
	setlocale(LC_ALL, "Russian");
	Test ob;
	Fun(ob);
}