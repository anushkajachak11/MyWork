#include<iostream>
using namespace std;

class A{
    private:
    int n;
    public:
    void input(){
        cout<<"Enter value :";
        cin>>n;
    }
    void show(){
        cout<<n<<endl;
    }
};
class B:public A{

};
class c:public A{

};
class D:public B,C{
     
};
int main(){
    A obj;
    B obj1;
    C obj2;
    D obj3;

    obj.input();
    obj.show();

    obj1.input1();
    obj1.show1();

    obj2.input2();
    obj2.show2();

    obj3.input3();
    obj3.show3();
}

