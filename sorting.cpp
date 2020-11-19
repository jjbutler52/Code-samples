# include<iostream>
# include<cmath> 

using namespace std;

void sorting()
{
    const int ARR_SIZE = 8;
    int arr1[ARR_SIZE] = { 88, 35, 59, 76, 23, 61, 47, 12 };


    for (int i = 0; i < ARR_SIZE; ++i) {

        // Find index of smallest remaining element
        int min = i;
        for (int j = i + 1; j < ARR_SIZE; ++j) {

            if (arr1[j] < arr1[min]) {
                min = j;
            }
        }

        // Swap numbers[i] and numbers[min]
        int temp = arr1[i];
        arr1[i] = arr1[min];
        arr1[min] = temp;
        cout << arr1[i] << endl;
    }
}