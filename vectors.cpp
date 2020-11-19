# include<iostream>
# include<cmath> 
# include<vector>

using namespace std;

void vectors()
{
    /*
  //Auto Initialization
  vector<int> v1(5);
  cout << "Init values for the vector v1: ";
  for (int i=0; i < 5; ++i){
    cout << v1.at(i) << " ";
  }


  // Init to a specific value
  vector<int> v2(3, 75);
    cout << "Init values for the vector v2: ";
  for (int i=0; i < v2.size(); ++i){
    cout << v2.at(i) << " ";
  }


  // yet another way to init a vector
  vector<int> v3 = {34, 45, 56, 67};
  cout << "Init values for the vector v3: " << endl;
  for (int i=0; i < v3.size(); ++i){
    cout <<  "The elmenat at v3 (" << i << "): " << v3.at(i) << endl;
  }



  // yet another way to init a vector using the at() function
 vector<float> f1(3);

  f1.at(0) = 1.5f;
  f1.at(1) = 2.3f;
  f1.at(2) = 4.5f;
  cout << "Init values for the vector f1: " << endl;
  for (int i=0; i < f1.size(); ++i){
    cout <<  "The elmenat at v3 (" << i << "): " << f1.at(i) << endl;
  }
*/
    vector<int> v4 = { 4, 8, 10, 9 };
    // cout << v4.at(2) << endl;
    // cout << v4.at((12*3 - 20)%5 -1) << endl;
     //(36-20)%5 - 1
     //16%5-1
     //1-1
     //0 -----at(0)
    cout << " The size of vector v4 is: " << v4.size() << endl;
    // cout << v4.at(8) << endl;

     /*
     //resizing a vector
     v4.resize(9);
      for (int i=0; i < v4.size(); ++i){
       cout <<  "The elmenat at v4 (" << i << "): " << v4.at(i) << endl;
     }
      */
      // dynamic resizing by adding elments - push_back()
    v4.push_back(55);
    v4.push_back(66);
    v4.push_back(77);
    cout << " The size of vector v4 is: " << v4.size() << endl;
    for (int i = 0; i < v4.size(); ++i) {
        cout << "The elmenat at v4 (" << i << "): " << v4.at(i) << endl;
    }


    // void pop_back()
    v4.pop_back();
    for (int i = 0; i < v4.size(); ++i) {
        cout << v4.at(i) << " ";
    }

    
}
