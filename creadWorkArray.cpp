# include<iostream>
# include<cmath> 

using namespace std;
void print(int* arr, int rowLength, int colLength)
{
    for (int r = 0; r < rowLength; r++)
    {
        for (int c = 0; c < colLength; c++)
        {
            int spot = r * rowLength + c;
            cout << arr[spot] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void creadWorkArray()
{
    constexpr int rowLength = 4;
    constexpr int colLength = 4;

    int rowToVisit = 2;
    int arr[rowLength * colLength] = {};
    print(arr, rowLength, colLength);
    
 

    for (int c = 0; c < colLength; c++)
    {
        int spot = rowToVisit * rowLength + c;
        arr[spot] = 1;
    }
    print(arr, rowLength, colLength);

   // for (int c = 0; c < colLength;  c++)
    //    cout << rowToVisit << ", " << c << endl;
    
}