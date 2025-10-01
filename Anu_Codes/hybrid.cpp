#include<iostream>
using namespace std;
class Vehicle{
    public:
       Vehicle()
    {
        cout<<"This is a vehicle:"<<endl;
    }
};
class Car:public Vehicle{
    public:
       car()
    {
        cout<<"This is a car:"<<endl;
    }
};
class Racing{
    public:
       racing()
    {
        cout<<"This is for racing:"<<endl;
    }
};
class Ferrari:public Car,Racing{
    public:
       Ferrari()
    {
        cout<<"Ferrari is a racing car:"<<endl;
    }
};
int main(){
    Ferrari F;

    return 0;
}