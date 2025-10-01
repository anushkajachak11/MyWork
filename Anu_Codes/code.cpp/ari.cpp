// #include<iostream>
// using namespace std;

// int main(){

//     int a = 5;
//     int b = 3;

//     cout<< "+" << (a+b) <<endl; //8
//     cout<< "-" << (a-b) <<endl; //2
//     cout<< "*" << (a*b) <<endl; //15
//     cout<< "/" << (a/b) <<endl; //1
//     cout<< "%" << (a%b) <<endl; //2

//     return 0;

// }


//Arithematic Operators
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 8;
//     int b = 5;

//     cout<<"+"<<(a+b)<<endl;
//     cout<<"/"<<(a/b)<<endl;
//     cout<<"-"<<(a-b)<<endl;
//     cout<<"*"<<(a*b)<<endl;
//     cout<<"%"<<(a%b)<<endl;

//     return 0;
// }

//Unary Ariethmetic Operator
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 3;
//     int b = --a;

//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
    
//     return 0;

// }

//Assignment Operator
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int a = 20;
//     a+=5;
//     cout<<a<<endl;
//     a/=5;
//     cout<<a<<endl;
//     a*=5;
//     cout<<a<<endl;
//     a-=5;
//     cout<<a<<endl;

//     return 0;

//  }


// //Relational operators->true /false
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int b = 8;
//     cout<<(a<=b)<<endl; //->true
//     cout<<(a==b)<<endl; //->false
//     cout<<(a!=b)<<endl; //->true
//     return 0;
//}


#include<iostream>
using namespace std;
  int main(){
     cout<<(20<10 || 9<3)<<endl;
     cout<<((20==10) || 9>3)<<endl;
     cout<<(20<10 && (9==3))<<endl;
     cout<<(20>10 && 9>3)<<endl;
     cout<<(20>10||9<3)<<endl;
     cout<<(!(20!=10))<<endl;


    return 0;
}