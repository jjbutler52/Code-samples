#include <iostream>
# include<cmath> 
#include<string>

using namespace std;

void strings2()
{
	string name = "John", str1 = "I am invincible!!";
	string str2(name);
	string str3(7, '%');
	string str4 = str1;
	cout << str1 << " " << str2 << " " << str3 << " " << str4 << endl;
	//find(), replace, length(), at()
	//clear()
	str4.clear();
	cout << str1 << " " << str2 << " " << str3 << " " << str4 << endl;

	//front() and back()
	cout << str1.front() << " " << str1.back() << endl;

	//append
	str1.append(" Yes!!");
	cout << str1 << endl;

	//substr()
	cout << str1.substr(5) << endl;
	cout << str1.substr(5, 10) << endl;

	//erase()
	cout << str1.erase(2, 3); //erases 3 characters starting at position 2
	cout << str1 << endl;
	//cout << str1.erase(2, 3) << endl;
	cout << str1.erase(14) << endl;

}