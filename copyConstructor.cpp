
#include <iostream>
#include <vector>

using namespace std;

class Val {
public:
    //Val(){} - creates ambiguity and errors
    Val(int n1 = 0, int n2 = 1) { ++count;  cout << "Default/Parameterized Constructor Called" << endl; num1 = n1; num2 = n2; }
    Val(const Val& r) {  ++count; cout << "Copy Constructor Called" << endl; num1 = r.num1; num2 = r.num2; }
    Val& operator = (const Val& v) {
        cout << "Copy Assignment Operator called " << endl;
        num1 = v.num1;
        num2 = v.num2;
        return *this;
    }
    ~Val() { cout << "Destructor called...." << endl; }
    void print() { cout << num1 << " " << num2 << endl; };
    void printAddr() { cout << " " << &num1 << " " << &num2 << "\n" << endl; };

   static int count;	//declared static variable

private:
    int num1, num2;

};
int Val::count = 0; //static variable outside of function or main

void copyConstructor() {
    Val a;
    cout << " a = ";
    a.print();
    cout << " For object a: ";
    a.printAddr();
    cout << "\n NUmber of Objects: " << Val::count << endl;
    cout << "\n\n" << endl;

    Val x(100, 360); //Default/Paramterized constructor called - values as specified for data members.
    cout << " x = ";
    x.print();
    cout << " For object x: ";
    x.printAddr();
    cout << "\n NUmber of Objects: " << Val::count << endl;
    cout << "\n" << endl;

    Val y(x);//this is how you call the copy constructor
    cout << " y = ";
    y.print();
    cout << " For object y: ";
    y.printAddr();
    cout << "\n NUmber of Objects: " << Val::count << endl;
    cout << "\n" << endl;

    Val z(y); // copy constructor called
    cout << "\n NUmber of Objects: " << Val::count << endl;
    cout << " z = ";
    z.print();
    cout << " For object z: ";
    z.printAddr();
    cout << "\n" << endl;

    Val u; // Default/Parameterized constuctor called - default values.
    cout << "\n NUmber of Objects: " << Val::count << endl;
    cout << " u = ";
    u.print();
    cout << " For object u: ";
    u.printAddr();
    cout << "\n" << endl;

    u = x; //copy assignment operator called
    cout << "\n NUmber of Objects: " << Val::count << endl;
    cout << " u = ";
    u.print();
    cout << " For object u: ";
    u.printAddr();
    cout << "\n" << endl;

}