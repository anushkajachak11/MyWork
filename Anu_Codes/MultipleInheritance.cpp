#include<iostream>
using namespace std;

class Base1{
    private:
    int a,b,c;
    public:
    void input(){
        cout<<"Enter value of base1 class:";
        cin>>a>>b;
    }
    void show(){
        c=a+b;
        cout<<"sum="<<c<<endl;
    }
};
class Base2{
    private:
    int a,b,c;
    public:
    void input1(){
        cout<<"Enter value of base2 class:";
        cin>>a>>b;
    }
    void show1(){
        c=a-b;
        cout<<"Substraction="<<c<<endl;
    }
};
class Derive:public Base1,Base2{
    private:
    int a,b,c;
    public:
    void input2(){
        cout<<"Enter value of derive class:";
        cin>>a>>b;
    }
    void show2(){ 
        c=a*b;
        cout<<"Multiplication="<<c<<endl;
    }
};
int main(){
    Base1 obj;
    obj.input();
    obj.show();

    Base2 obj1;
    obj1.input1();
    obj1.show1();

    Derive obj2;
    obj2.input2();
    obj2.show2();
    
}