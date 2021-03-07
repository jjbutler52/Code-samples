
#include <iostream>
#include <vector>
using namespace std;
//passing vectors to functions
void revDisp(vector<int> v1)
{
    for (int i = (v1.size() - 1); i >= 0; --i) //to reverse print the vector
    {
        cout << v1.at(i) << " ";
    }
}

void vectorToFunction() {





    vector<int> vec1 = { 11, 22, 33, 44, 55, 66, 77, 88 };
    vector<int> vec2;

    vec2 = vec1; //copies vec1 into vec2 and increase the size as appropriate  

    revDisp(vec2);


   }