#include <iostream>
#include <vector>
using namespace std;

void decToBin()
{
    vector<int> bin;
    int dec = 255, rem;

    while (dec / 2 > 0) {
        rem = dec % 2;
        bin.push_back(rem);
        dec = dec / 2;
    }
    bin.push_back(dec);

    for (int i = (bin.size() - 1); i >= 0; --i) {
        cout << bin.at(i) << " ";
    }

}
