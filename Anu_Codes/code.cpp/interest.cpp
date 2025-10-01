#include<iostream>
using namespace std;

int main(){
    //Declared variable 
    float principal;
    float rate;
    float time;
 
    //input values for principal,rate and time 
    cout<<"enter the principal amount:";
    cin>>principal;
    cout<<"enter rate of interest(%):";
    cin>>rate;
    cout<<"enter time(in years):";
    cin>>time;
 
    //calculate simpleinterest
    float simpleInterest = (principal*rate*time)/100;

    //output the results
    cout<<"Principal="<<principal<<endl;
    cout<<"Rate="<<rate<<"%"<<endl;
    cout<<"Time="<<time<<"years"<<endl;
    cout<<"Simple Interest="<<simpleInterest<<endl;

    return 0;

}