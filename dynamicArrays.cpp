# include<iostream>
# include<cmath> 

using namespace std;

void dynamicArrays()
{
    /*
  // normal array (goes to stack)
  int arr1[5];

  int arr2[]= {2, 17, 9, 5};

  int size;
  cin >> size;
  int arr3[size];

  //memory needs to be specified during runtime (dynamic)
  //use new

  //to declare and use an int(dyn)
  int *pr;
  pr = new int;  //goes to the heap

  //to declare an array dynamically
  int *arr1;
  arr1 = new int[7];
  */

    int size;
    int* arr1;
    cout << "Please enter the size of the array: ";
    cin >> size;
    arr1 = new (nothrow) int[size];
    if (arr1 == nullptr)
    {
        cout << "Dynamic memory Allocation for the array not successful." << endl;
    }


    else {
        cout << "Dynamic memory Allocation for the array successful." << endl;
        for (int i = 0; i < size; ++i)
        {
            cout << "Enter element [" << i << "] and then press enter: ";
            cin >> arr1[i];

        }
        cout << endl;
        for (int i = 0; i < size; ++i)
        {
            cout << arr1[i] << " ";
        }

        cout << "\nNow ending the program. Freeing the memory before that... ";
        delete[] arr1;
    }
}