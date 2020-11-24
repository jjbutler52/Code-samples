
#include <iostream>
#include <fstream>
using namespace std;

void stringFunctions() {

    string str1 = "What";
    str1.push_back('?');
    cout << str1;

    string str2 = "Really?!! ";
    cout << str2 << endl;

    str2 = str2 + str1;
    cout << str2 << endl;

    str2 = str2 + '!';
    cout << str2 << endl;
    str2 = str2 + '!' + " " + "Is thsat so?";
    cout << str2 << endl;

}