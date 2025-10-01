#include<iostream>
using namespace std;
class Calculator{
private:
   int a;
   int b;
public:
    int addition(int a,int b){
        return a+b;
    }
    int substract(int a,int b){
        return a-b;
    }
    int multiply(int a,int b){
        return a*b;
    }
    int divide(int a,int b){
        if(b!=0){
           return a/b;
        }
        else{
            cout<<"Division is not possible"<<endl;
        }
        return 0;
    }
};
int main(){
    Calculator c1;
    cout<<c1.addition(3,4)<<endl;
    cout<<c1.substract(9,3)<<endl;
    cout<<c1.multiply(4,5)<<endl;
    cout<<c1.divide(8,2)<<endl;

    return 0;

}