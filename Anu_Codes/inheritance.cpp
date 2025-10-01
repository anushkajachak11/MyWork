#include<iostream>
using namespace std;

class Father{
    protected:
    string surname="Jachak";
};
class Daughter1:public Father{
    string name="Anushka";
    public:
    void show(){
        cout<<name<<" "<<surname<<endl;
    }
};
class Daughter2:public Father{
    string name="Alia";
    public:
    void display(){
        cout<<name<<" "<<surname;
    }
};

int main(){
    Daughter1 d1;
    d1.show();

    Daughter2 d2;
    d2.display();
}