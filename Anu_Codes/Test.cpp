#include<iostream>
using namespace std;

class Test{
    public:
       Test()
       { 
          cout<<"I am constructor"<<endl;
          cout<<"I am automatically gets called when object of class is created"<<endl;
       }
}; 

int main(){
    Test t1;
}