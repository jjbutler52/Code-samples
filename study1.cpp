#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>

using namespace std;

// Function replaces spaces with hyphens
void study1() {
    cout << fixed << setprecision(2);
    vector<double> vec1;
    for (int i = 0; i < 4; ++i) {
        vec1.push_back((i + 10) * 1.5);
        cout << vec1.at(i) << " ";
    }
    cout << endl;

    vec1.back();
    for (int i = 0; i < vec1.size(); ++i) {
        cout << vec1.at(i) << " ";
    }
    cout << endl;
    vec1.pop_back();
    for (int i = 0; i < vec1.size(); ++i) {
        cout << vec1.at(i) << " ";
    }

}
