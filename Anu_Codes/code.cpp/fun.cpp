// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     int sum=a+b;
//     return sum;
// }
// int diff(int a, int b){
//     int diff=a-b;
//     return diff;
// }
// int main(){
//     int s=sum(4,6);
//     cout<<"sum="<<s<<endl;
//     int d=diff(7,6);
//     cout<<"diff="<<d<<endl;
// }


// #include<iostream>
// using namespace std;
// int sum(int a, int b=1){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//     int s=sum(4);
//     cout<<"sum="<<s<<endl;
// }


#include<iostream>
using namespace std;
void sayHello();
void assistent();
void professor();

void sayHello(){
    professor();
    cout<<"Hello world :)"<<endl;
}
void professor(){
    cout<<"Good Morning:)"<<endl;
}
void assistent(){
    cout<<"work done:)"<<endl;
}
int main(){
   sayHello();
   assistent();

   return 0;
}
