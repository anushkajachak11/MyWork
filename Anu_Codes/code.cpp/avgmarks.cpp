#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double eng;
    double sci;
    double math;

    cout<<"enter english marks:"<<endl;
    cin>>eng;
    cout<<"enter science marks:"<<endl;
    cin>>sci;
    cout<<"enter math marks:"<<endl;
    cin>>math;

    double avg=(eng+sci+math)/3;
    cout<<setprecision(8)<<"avg="<<avg<<endl;

    return 0;


}