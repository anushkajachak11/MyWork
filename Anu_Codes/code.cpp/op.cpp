// #include<iostream>
// using namespace std;

// int main(){
//     int x = 2;
//     int Y = 5;
//     int exp1 = (x*Y/x); //5
//     int exp2 = (x*(Y/x)); //4
//     cout<<exp1<<endl;
//     cout<<exp2<<endl;
// }


// #include<iostream>
// using namespace std; 
// int main(){
//     int x = 10;
//     int y = 5;
//     int exp1 = (y*(x/y + x/y));
//     int exp2 = (y*x/y + y*x/y);
//     cout<<exp1<<endl;
//     cout<<exp2<<endl;

//     return 0;
// }



// #include<iostream>
// using namespace std; 
// int main(){
//     int x = 200;
//     int y = 50;
//     int z = 100;
//     if(x>y && y>z){
//         cout<<"Hello world!"<<endl;
//     }
//     if(z>y && z<x){
//         cout<<"c++"<<endl;
//     }
//     if((y+200) < x && (y+150)< z) {
//          cout<<"Hello C++"<<endl;
//     }
// }


//if else statement
// #include<iostream>
// using namespace std; 
// int main(){
//     int age;
//     cout<<"Enter your age:";
//     cin>>age;

//     if(age>=18){
//         cout<<"can vote"<<endl;
//     }
//     if(age>=35){
//         cout<<"contest for elections"<<endl;
//     }
// }



// #include<iostream>
// using namespace std; 
// int main(){
//     float cgpa;
//     cout<<"Enter your cgpa:";
//     cin>>cgpa;
//     if(cgpa>=6.5){
//         cout<<"Pass"<<endl;
//     }else{
//         cout<<"fail"<<endl;
//     }
// }


// //print the largest value
// #include<iostream>
// using namespace std; 
// int main(){
//     int a = 20;
//     int b = 10;
//     if(a>b){
//         cout<<"a="<<a<<endl;
//     }else{
//         cout<<"b="<<b<<endl;;
//     }
// }

//print larger number
// #include<iostream>
// using namespace std; 
// int main(){
//     int a,b;
//     cout<<"Enter a:";
//     cin>>a;
//     cout<<"Enter b:";
//     cin>>b;

//     if(a>=b){
//         cout<<"a is larger:"<<a<<endl;
//     }else{
//         cout<<"b is larger:"<<b<<endl;
//     }
    
// }


//number is odd or even
// #include<iostream>
// using namespace std; 
// int main(){
//     int num;
//     cout<<"Enter  number:";
//     cin>>num;
//     if(num % 2 == 0){
//         cout<<"Number is even:"<<endl;
//     }else{
//         cout<<"Number is odd:"<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// //else if statements
// int main(){
//     int marks = 87;
//     if(marks>=90){
//         cout<<"first class with distinction"<<endl;
//     }else if(marks>=70){
//         cout<<"second class with distinction"<<endl;
//     }else if(marks>=40){
//         cout<<"Pass"<<endl;
//     }else{
//         cout<<"Fail"<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int income;
    float tax;
    cout<<"Enter income(in lakhs)";
    cin>>income;

    if (income<5){
        tax=0;
    } else if (income<=10){
        tax=0.2*income;
    } else {
        tax=0.3*income;
    }
    cout<<"Tax="<<(tax*100000)<<endl;
}