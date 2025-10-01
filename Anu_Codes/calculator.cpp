#include<iostream>
using namespace std;

class Calculator{
    int n1;
    char grade;
    public:
       Calculator(){
          n1=100;
          grade='A';
          }
         void display(){
            cout<<"first data member:"<<n1<<endl;
            cout<<"second data member:"<<grade<<endl;
         }

};

int main(){
    Calculator c1;
    c1.display();
}