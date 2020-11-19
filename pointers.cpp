#include<iostream>
using namespace std;

void pointers() {

    const int arrSize = 5;
    int arr[arrSize] = { 15, 3, 7, 19, 1 };
    int* arrPtr1 = arr;  // will point to element 0 of the array
    int* arrPtr2 = &arr[0];

    cout << "Array pointer 1 points to: " << arrPtr1 << endl;
    cout << "Array pointer 2 points to: " << arrPtr2 << endl;

    cout << "Array pointer 1 has a value: " << *arrPtr1 << endl; //dereferencing use * to pull value of pointer
    cout << "Array pointer 2 has a value: " << *arrPtr2 << endl;

    cout << "Using the name of the array as a pointer, [0] has a value: " << *arr << endl;

    cout << "Array pointer 1 points to: " << arrPtr1 + 2 << endl;
    cout << "Array pointer 2 points to: " << arrPtr2 + 2 << endl; //points to the reference location for element 3

    cout << "Array pointer 1 + 2 has a value: " << *(arrPtr1 + 2) << endl;
    cout << "Array pointer 2 + 2 has a value: " << *(arrPtr2 + 2) << endl;


    }
