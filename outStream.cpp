#include <iostream>
#include<fstream>
using namespace std;

void outStreamFile() {

    ofstream outFS;
    outFS.open("data.csv");

        if (!outFS.is_open()) {
            cout << "Could not open data.csv" << endl;
            return;
        }

    outFS << "7, 3, 51" << endl;
    outFS << "1, 2, 3" << endl;
    outFS << "23.123, 45612345, 78.1245" << endl;
    outFS << "C, $, q" << endl;
    outFS << "Hello, how, are" << endl;

    cout << "Written, now closing file" << endl;
    outFS.close();
   
}