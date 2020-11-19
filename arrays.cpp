# include<iostream>
# include<cmath> 

using namespace std;

void arrays()
{
    const int size = 5;
    int points[size];

    // read the values
    cout << "Enter " << size << "values for the array: ";

    // iterating through all the elements in an array using a loop
    for (int i = 0; i < size; ++i) {
        cout << "Enter the next value: " << endl;
        cin >> points[i];

    }
    // iterating through all the elements in an arrary for displaying them
    cout << "The values are: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << points[i] << "  ";
    }

    // initializing an array - method 2
    int num1[] = { 34, 56, 43 };
    cout << "\nThe values are: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << num1[i] << "  ";
    }



    //partially init an array - the below code doesn't work in VS but worked on codiva
    /*
    float data[20] = { 1.5f, 2.3f, -5.6f, 7.8f };
    float data1[10] = {[1] = 4.5f, [4] = 7.8f, [8] = 2.3f };
    */
}