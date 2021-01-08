#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int marks[6]={7, 43, 56, 67, 87, 45};
    cout <<"The numbers are: ";
    for (const int& n : marks){
        cout<<n << endl;
                             
    }
    return 0;
}