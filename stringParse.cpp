
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class A {
    int num1; //if not specified they are defaultly private
    char c;

public:
    A() { num1 = 19; c = 'W'; }//inline ctor no ; following is needed for inline 
    A(int n1, char c1) { num1 = n1; c = c1; }
    A(const A& a) { num1 = a.num1; c = a.c; }//copy ctor
    A& operator = (const A& a) { num1 = a.num1; c = a.c; return *this; }//copy assignment operator
    ~A() {}
    void pr() { cout << num1 << " " << c << endl; }
};

void stringParse() {
    // use for lab for parsing string parts into a vector of objects.
    vector<A> aVec; // created a vector of type A
    A a1;
    A a2(15, 'Q');
    A a3(a1);//copies values of a1 into a3
    A a4;
    a4 = a2; // copy assignment operator copies a2 into a4

    aVec.push_back(a1);
    aVec.push_back(a2);
    aVec.push_back(a3);
    aVec.push_back(a4);

    vector<int> v4; //created vector without known size
    v4.push_back(15);//add first value
    v4.push_back(34);
    v4.push_back(76);
    v4.push_back(95);
    for (int i = v4.size() - 1; i >= 0; --i) {
        cout << v4.at(i) << " ";// this for loop will print the items in reverse order
    }



}