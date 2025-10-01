// #include<iostream>
// using namespace std;

// int main(){
//     int a=12;
//     int* ptr=&a;

//     float pi=3.14;
//     float *ptr2=&pi;

//     char dig='A';
//     char * ptr3=&dig;

//     cout<<&a<<"="<< ptr << endl;
//     cout<<&pi<<"="<< ptr2 << endl;
//     cout<<(void*)&dig<<"="<< ptr3 <<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=12;
//     int* ptr=&a;
//     float pi=3.14;
//     float *ptr2=&pi;

//     cout<<sizeof(ptr)<<"\n"; 
//     cout<<sizeof(ptr2)<<endl; 

//     //cout<<&a<<"="<< ptr << endl;
//     //cout<<&pi<<"="<< ptr2 << endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int b= 67899;
//     cout<<&b<<endl;
//     cout<<*(&b)<<endl;
// }
    

// #include<iostream>
// using namespace std;
// int main(){
//     int a= 34;
//     int *ptr = &a;
//     cout<<ptr<<"\n";
//     cout<<*ptr<<"\n";

//     *ptr=56;
//     cout<<a<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr=NULL;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int x=34;
    int *ptr=&x;

    int y=56;
    ptr=&y;
    cout<<*ptr<<"\n";
    return 0;
}