#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student:public Person{
public:
   int rollno;
};

class Teacher:public Person{
public:
   string subject;
};

int main(){
    Student s1;
    s1.name="Arjuu";
    s1.age=24;
    s1.rollno=78;

    Teacher t1;
    t1.name="Gayuu";
    t1.age=67;
    t1.subject="Mathematics";

    cout<<"Student Details:"<<endl;
    cout<<"name:"<<s1.name<<endl;
    cout<<"age:"<<s1.age<<endl;
    cout<<" rollno:"<<s1.rollno<<endl;

    cout<<"Teacher Details:"<<endl;
    cout<<"name:"<<t1.name<<endl;
    cout<<"age:"<<t1.age<<endl;
    cout<<"subject:"<<t1.subject<<endl;
}
