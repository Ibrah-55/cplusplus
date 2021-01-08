#include <iostream>

using namespace std;
void func(void);

static int count= 10;

int main()
{
    while (count--){
        func();
    }
    return 0;
}
void func(void){
    static int i = 5;
    i++;
    std::cout<< "i is: "<< i;
    std::cout<<" And count is: "<<count<<std::endl;
}