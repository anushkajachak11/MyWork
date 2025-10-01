#include<iostream>
using namespace std;

class Animal{
public:
     virtual void sound()=0 ; //pure virtual function
};

class Dog:public Animal{
public:
      void sound()override{
        cout<<"Dog barks:"<<endl;
      }
};

class Cat:public Animal{
public:
      void sound()override{
         cout<<"Cat meows:"<<endl;
      }
};

int main(){
    Dog d;
    Cat c;
     
    d.sound();
    c.sound();

    return 0;
}
