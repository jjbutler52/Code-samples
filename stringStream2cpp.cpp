#include <iostream>
#include <sstream> // string stream library file
using namespace std;

void stringStream2() {

	string str = "123";
	stringstream inSS(str);// passing in string into object of string stream named inSS
	int num1 = 0;
	inSS >> num1;
	cout << "Value of num1: " << num1 << "    num1 + 10= " << num1 + 10;
	//stoi() string to integer

}
