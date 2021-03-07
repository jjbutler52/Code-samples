#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int SIZE = 7;
void init(vector<string>& too); //incluiding the ref"&" allows it to know to keep collecting until end
void pr(vector<string>);


void vectorString() {

    vector<string> tools(SIZE);
    init(tools);

    pr(tools);



    
}



void init(vector<string>& too) {
    too.at(0) = "Hammer";
    too.at(1) = "Drill";
    too.at(2) = "Driver";
    too.at(3) = "Hacksaw";
    too.at(4) = "Circular Saw";
    too.at(5) = "Nose Pliers";
    too.at(6) = "Wrench";

}

void pr(vector<string> t1) {
    for (int i = 0; i < SIZE; ++i) {
        cout << t1.at(i) << "\t";
    }

}