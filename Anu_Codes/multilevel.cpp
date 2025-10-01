#include<iostream>
using namespace std;

class Base{
    private:
    int a;
    public:
    void input(){
        cout<<"Enter value of base class:";
        cin>>a;
    }
    void show(){
        cout<<"a="<<a<<endl;
    }
};
class Derive1:public Base{
    private:
    int b;
    public:
    void input1(){
        cout<<"Enter value of derive class:";
        cin>>b;
    }
    void show1(){
        cout<<"b="<<b<<endl;
    }
};
class Derive2:public Derive1{
    private:
    int c;
    public:
    void input2(){
        cout<<"Enter value of derive2 class:";
    }
    void show2(){
        cout<<"c="<<c<<endl;
    }
};

int main(){

    Base obj;
    obj.input();
    obj.show();

    Derive1 obj1;
    obj1.input1();
    obj1.show1();

    Derive2 obj2;
    obj2.input2();
    obj2.show2();
}