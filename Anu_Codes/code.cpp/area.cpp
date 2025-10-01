#include<iostream>
using namespace std;

int main(){
    //declared variable
    float pi;
    float radius;

    //input values for  pi and radius
    cout<<"enter value of pi:";
    cin>>pi;
    cout<<"enter radius of a circle:";
    cin>>radius;

    //calculate area
    float area = pi*radius*radius;

    //output the results
    cout<<"pi="<<pi<<endl;
    cout<<"Radius="<<radius<<endl;
    cout<<"Area="<<area<<endl;

    return 0;

}