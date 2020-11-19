
#include <iostream>
#include <ios>
#include <iomanip>
#include <sstream>
using namespace std;

void stringStream() {
	string salutation, fName, lName, qual;
	string info = "Dr. John Watson MD";
	istringstream inSS(info);

	inSS >> salutation >> fName >> lName >> qual;
	cout << setw(15) << left << "Salutation: " << salutation << endl;
	cout << setw(15) << left << "First Name: " << fName << endl;
	cout << setw(15) << left << "Last Name: " << lName << endl;
	cout << setw(15) << left << "Qualification: " << qual << endl;

}
