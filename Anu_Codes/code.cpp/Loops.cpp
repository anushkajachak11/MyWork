//for loop
// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     for(num=1;num<=7;num++){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     cout<<"las value of num "<<num;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 1; i<=12 ; i++){
//         cout<<"Apna College"<<endl;
//     }
// }


//print numbers n to 1
// #include<iostream>
// using namespace std;

// int main(){
//      int n = 8;
//     // cout<<"enter the number:";
//     // cin>>n;
//     for(int i =n; i>=1 ; i--){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;

//     int sum = 0;
    
    
//     for(int i=1; i<=n ; i++){
//         sum=sum+i;
//     }
//     cout<<"sum="<<sum<<endl;

//     return 0;
// }



//while loop
// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"enter your n:";
//     cin>>n;

//     int sum = 0;
//     int i=1;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     cout<<"sum="<<sum<<endl;
// }



//square pattern using for loop
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=6; i++ ){
//         cout<<"******"<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     do{
//         cout<<i<<" ";
//         i++;
//     }while(i<=9);

//     cout<<endl;
//     return 0;
// }


//difference bet while and do-while
// #include<iostream>
// using namespace std;

// int main(){
//     int val = 1;
//     do{
//         cout<<"Apna college in do-while loop:"<<endl;
//     }while(val>5);

//     while(val>5){
//         cout<<"Apna college in while loop:"<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int  n=10829;
//     while(n>0){
//         int lastDig=n%10;
//         cout<< lastDig <<" ";
//         n=n/10;

//     }
//     cout<<endl;
// }

//print sum of digit numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int n=542789;
//     int digsum=0;
//     while(n>0){
//         int lastDig=n%10;
//         digsum+=lastDig;
//         n=n/10;
//     }
//     cout<<"sum="<<digsum<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n=10829;
//     int digsum=0;
//     while(n>0){
//         int lastDig=n%10;
//         if(lastDig % 2!=0){
//            digsum+=lastDig ;
//         }
//         n=n/10;
//     }
//     cout<<"sum="<<digsum<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 45842689;
//     while(n>0){
//         int lastdig=n%10;
//         cout<<lastdig<<" ";
//         n/=10;
//     }
//     cout<<endl;
// }



// #include<iostream>
// using namespace std;

// void sayHello(){
//     cout<<"Hello :) \n";
// }
// int main(){
//     sayHello(); //function call
//     sayHello();
//     sayHello();
//     sayHello();
//     sayHello();
//     return 0;
// }



