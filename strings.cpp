#include<iostream>
#include<cstring> 
#include<string.h>

using namespace std;

void strings()
{

    // '\0'
    char string1[15] = "James Bond";
    char string2[15] = "Bond";
    char string3[15];
    char string4[15];
    char string5[15];
    char string6[15];

    char* subStr = nullptr;
    char* subStr2 = nullptr;
    char* subStr3 = nullptr;
    char* subStr4 = nullptr;

    subStr = &string1[7];
    if (strcmp(subStr, string2) == 0) {
        cout << "strings are same" << endl;
    }
   // strcpy()
    strcpy(string3, subStr);
    cout << "String 3 is: " << string3 << endl;

    //strchr()
    if (strchr(string1, 'J') != NULL) {
        subStr2 = strchr(string1, 'J');
   //     strcpy(string4, subStr2);
    }
    cout << "String 4 is: " << string4 << endl;
    //strrchr()
    if (strrchr(string1, 'J') != NULL) {
        subStr3 = strrchr(string1, 'J');
    //    strcpy(string5, subStr3);
    }
    cout << "String 5 is: " << string5 << endl;




    //strstr()
    char string7[35] = "tThe name is Bond, James Bond!";
    subStr4 = strstr(string7, "d");
    if (subStr4 != NULL) {
      //  strcpy(string6, subStr4);
    }

    cout << "String 6 is: " << string6 << endl;

    
}