# include<iostream>
using namespace std;


void bitWise()
{
	unsigned int a = 5, b = 9;
	// a = 5(00000101), b = 9(00001001) 

	cout << "a = " << a << ", b = " << b << endl;
	cout << "a&b = " << (a & b) << endl;
	cout << "a|b = " << (a | b) << endl;
	cout << "a^b = " << (a ^ b) << endl;
	cout << "~a = " << (a = ~a) << endl;
	cout << "b<<1 = " << (b << 1) << endl;
	cout << "b>>1 = " << (b >> 1) << endl;

	
}