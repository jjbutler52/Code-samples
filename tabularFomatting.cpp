
#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;
void f_to_c(double fah) {
    double cent = 0.0;
    cent = 5 * (fah - 32) / 9;
    cout << setw(15) << left << fah << " degF" << "|";
    cout << setw(16) << right << cent << " degC" << endl;
}

void tabularFormatting() {

    cout << "     Fahrenheit to Centigrade Scale" << endl << endl;
    cout << setw(20) << left << "Fahrenheit" << "|";
    cout << setw(21) << right << "Centigrade" << endl;
    cout << "-------------------------------------------" << endl;
    double fahr = 0.0;
    for (int i = 0; i < 40; i = i + 10) {
        fahr = fahr + i;
        f_to_c(fahr);
    }
    cout << "-------------------------------------------" << endl;


   
}