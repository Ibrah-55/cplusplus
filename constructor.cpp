#include<iostream>

using namespace std;

class Car{
    public:
    string brand;
    string name;
    int year;

    Car(string x, string y , int z);

};
Car :: Car(string x, string y, int z){
    brand = x;
    name = y;
    year = z;
}
int main(){
    Car carObj1("BMW", "X5", 2020);
    Car carObj2("Lexus", "Q7", 2019);


cout << carObj1.brand << " " << carObj1.name << " " << carObj1.year << "\n";
cout<< carObj2.brand << " " << carObj1.name<< " " << carObj1.year << "\n";

}