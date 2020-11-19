# include<iostream>
# include<cmath> 

using namespace std;

void arrays2()
{
	bool boolArr[] = {1, 0, 1, 1, 0, 0, 0, 1};
	for (int i = 0; i < 8; ++i) {
		cout << boolArr[i] << " ";
	}

	/*
	int sizeS, sizeM; //sizes
	char myArr[] = {'B', 'e', ' ', 'H', 'a', 'p', 'p', 'y'};
	sizeM = sizeof(myArr) / sizeof(char); // will tell me how many characters when printerd

	cout << sizeM << endl;
	
	char string1[] = "Be Good";
	sizeS = sizeof(string1) / sizeof(char);
	
	cout << sizeS << endl;
	for (int i = 0; i < sizeS; ++i) {
		cout << string1[i] << " ";
	}
	*/
}