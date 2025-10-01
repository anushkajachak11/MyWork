#include<iostream>
using namespace std;

//functions to swap two integers
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
//functions to swap two floats
void swap(float &a,int &b){
     float temp=a;
     a=b;
     b=temp;
}
//functions to swap two characters
void show(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}
int main(){
    int int1=1,int2=2;
    float float1=1.1f,float2=2.2f;
    char char1='A',char2='B';

    //swapping integer
    cout<<"Before swapping integers"<<int1<<" "<<int2<<endl;
    swap(int1,int2);
    cout<<"After swapping integers"<<int1<<" "<<int2<<endl;

    //swapping floats
    cout<<"Before swapping floats"<<float1<<" "<<float2<<endl;
    swap(float1,float2);
    cout<<"After swapping floats"<<float1<<" "<<float2<<endl;

    //swapping chararacters 
    cout<<"Before swapping characters"<<char1<<" "<<char2<<endl;
    swap(char1,char2);
    cout<<"After swapping characters"<<char1<<" "<<char2<<endl;

    return 0;
}