# include<iostream>
# include<cmath> 

using namespace std;
int rows = 3, cols = 4;
int arr3[3][4] = { {12, 22, 32, 42,}, {23, 33, 43, 53}, {34, 44, 54, 64} };

void printArray(int *arr, int rows, int cols) 
{
	cout << "The array is" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << *(arr + i * rows + cols) << " ";
		}
		cout << endl;
	}
}

void arrayFunction()
{
	
	printArray(arr3[0], 3, 4);


}