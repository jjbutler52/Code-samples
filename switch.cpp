#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void switchStatement() {

	int num = 3;

	switch (num) {

	case 0:
		cout << "0" << endl;

	case 1:
		cout << "1" << endl;

	default:
		cout << "neither 0 nor 1" << endl;
	}

	return ;
}