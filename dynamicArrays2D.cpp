# include<iostream>
# include<cmath> 

using namespace std;

void dynamicArrays2D()
{
	int* arr{ new int[3]{19, 2, 7} };// another way to declare and init a 1-d array dynamically

	int rows, cols;
	cout << "Enter the values for rows and columns: ";
	cin >> rows >> cols;

	int** arr2 = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr2[i] = new int[cols];
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << "Enter element [" << i << "][" << j << "] and then press enter: ";
			cin >> arr2[i][j];
		}
	}
   
	cout << "Array2 successfully stored.  The values are..." << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	//ideal way to clear memory
	for (int i = 0; i < rows; ++i)
	{
		delete[]arr2[i];
	}
	delete[] arr2;

}