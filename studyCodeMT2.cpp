# include<iostream>
# include<cmath> 
#include<iomanip>

using namespace std;

void studyGuideMT2()
{


    const int size = 10;

    double numbers[size] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };

    double* nPtr;
    cout << fixed << setprecision(1);
    for (int i = 0; i < size; ++i)
    {

        cout << numbers[i] << " ";
    }

    cout << "<-- printing via array element" << endl;
    nPtr = numbers;
    nPtr = &numbers[0];
    //d



    for (int i = 0; i < size; ++i)
    {
        cout << *nPtr + i << " ";
    }

    cout << "<-- printing via pointer element (e)" << endl;


    for (int i = 0; i < size; ++i)
    {
        cout <<  *numbers + i << " ";
    }

    cout << "<-- printing via array name as pointer (f)" << endl;

    for (int i = 0; i < size; ++i)
    {
        std::cout << std::setprecision(2) << nPtr[i] << " ";
    }
    cout << "<-- printing via array name as pointer (g)" << endl;

    cout << numbers[3] << endl;
    cout << *numbers + 3 << endl;
    cout << nPtr[3] << endl;
    cout << *nPtr + 3 << endl;
    cout << "\n\nNOW STARTING PART II" << endl;

    double number1 = 7.3;
    double number2;

    double* fPtr = nullptr;
    fPtr = &number1;
    cout << *fPtr << " " << endl;
    cout << fPtr << " " <<&number1 << endl;


    // how to static cast a void pointer to pointer
    //number = *static_cast<int *>(sPtr);

    // *fPtr = number1;
     //cout << *fPtr << "AAAA";

}