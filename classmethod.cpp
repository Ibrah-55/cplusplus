#include<iostream>
using namespace std;

class Car{
    public: 
        int speed(int maxspeed);
};
int Car :: speed(int maxspeed){
    return maxspeed;
}
int main(){
    Car myObj;
    cout << myObj.speed(400);
    cout<<"Kph";


}