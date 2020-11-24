#include <iostream>
#include <cstring>
#include <vector>

//Specify other library files you need to include here

using namespace std;

void backwardsToken() {
    char sentence[] = "I am sure there is a solution to this problem"; //The char array to be stored as separate strings into a vector
    char* tokenPtr;
    vector<string> v1;

    tokenPtr = strtok(sentence, " ");

    while (tokenPtr != NULL) {
        v1.push_back(tokenPtr);
        tokenPtr = strtok(NULL, " ");

    }



    for (int i = v1.size() - 1; i < v1.size(); --i)
    {

        cout << v1.at(i) << " ";
    }
    cout << endl;


    //Your code here

    //Declare the vector
    //Break the given sentence[] array into different strings
    //Store these strings into the vector

    //Output the vector in reverse order

    
}
