#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

 //Person(string name,int age){
    // cout<<"name"<<endl;
     //cout<<"age"<<endl;
 
};

class Student:public Person{
public:
    int rollno;

   // Student(){
        //cout<<"child constructor"<<endl;
    //s}
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }

};

int main(){
    Student s1;
    s1.name="Vaishali Jachak";
    s1.age=39;
    s1.rollno=03;

    s1.getInfo();
       
    return 0;
}