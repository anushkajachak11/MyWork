#include<iostream>
using namespace std;

     int add(int a,int b){
        return a+b;
     }
     float add(float a,float b){
        return a+b;
     }
     double add(double a,double b){
        return a+b;
     }
int main(){
    cout<<"Addition of integers:"<<add(5,6)<<endl;
    cout<<"Addition of floats:"<<add(4.5f,6.9f)<<endl;
    cout<<"Addition of doubles:"<<add(10.25,67.88)<<endl;

    return 0;
}