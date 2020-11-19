# include<iostream>
# include <climits>
using namespace std;

void dataTypeLimit()
{
	cout << "CHAR_BIT: " << CHAR_BIT << endl;  //#bits in a ch
	cout << "SCHAR_MIN: " << SCHAR_MIN << endl;
	cout << "SCHAR_MAX: " << SCHAR_MAX << endl;
	cout << "CHAR_MIN: " << CHAR_MIN << endl;
	cout << "CHAR_MAX: " << CHAR_MAX << endl;

	//try MB_LEN_MAX (max # bytes in multibyte char), SHRT_MIN
	//INT_MIN, INT_MAX, LONG_MIN, LONG_MAX,
	//LLONG_MIN, LLONG_MAX,

	cout << "UCHAR_MAX: " << UCHAR_MAX << endl;
	cout << "USHRT_MAX: " << USHRT_MAX << endl;
	cout << "ULONG_MAX: " << ULONG_MAX << endl;
	cout << "ULLONG_MAX: " << ULLONG_MAX << endl;
	cout << "UINT_MAX: " << UINT_MAX << endl;
	//cout << "UINT_MIN: " << UINT_MIN << endl;

}