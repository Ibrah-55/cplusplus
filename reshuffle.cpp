#include <bits/stdc++.h> 

using namespace std; 

  

int randomfunc(int j) 
{ 

    return rand() % j; 
} 

  

int main() 
{ 

    srand(unsigned(time(0))); 

    vector<int> arr; 

  


    for (int j = 1; j < 31; ++j) 

        arr.push_back(j); 

        

    random_shuffle(arr.begin(), arr.end()); 

  


    random_shuffle(arr.begin(), arr.end(), randomfunc); 

  


    cout << "arr contains:"; 

    for (auto i = arr.begin(); i != arr.end(); ++i) 
        cout << ' ' << *i; 

  

    cout << endl; 

  

    return 0; 
} 