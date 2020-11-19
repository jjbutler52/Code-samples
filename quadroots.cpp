# include<iostream>
# include<cmath> 
using namespace std;


void quadRoots()
{
	int a = 0;
	int b = 0;
	int c = 0;

	double x1 = 0.0;
	double x2 = 0.0;
	double root = 0.0;
	double divisor = 0.0;

	//input
	cout << "Please enter integer values for a, b, & c of the quadratic equation: ";
	cin >> a >> b >> c;
	cout << endl;

	// processing
	root = sqrt((pow(b, 2)) - (4 * a * c));
	divisor = 2 * a;

	x1 = (-b + root) / divisor;
	x2 = (-b - root) / divisor;

	//output

	cout << "The x1 value is: " << x1 << endl;
	cout << "The x2 value is: " << x2 << endl;




}