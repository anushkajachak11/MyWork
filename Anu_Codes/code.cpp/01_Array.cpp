#include<iostream>
using namespace std;

int main(){
   //declare
   int number[15];
   cout<<"Everything is Fine:"<<endl;
   cout <<"value at 3 index:" <<number[3] <<endl;
   cout <<"value at 7 index:" <<number[7] <<endl;

   //initializing array
   int second[5] = {2,8,9,10,3};
   cout <<"value at 1 index:" <<second[1] <<endl;


   int third[10] = {0};
   int n = 10;
   cout<<"printing an array"<<endl;
   for(int i=0; i<n; i++){
      cout<<third[i]<<" ";
   }


   //initializing all locations with 0
   int fourth[17] = {2,5};
   n = 17;
   cout<<"printing an array"<<endl;
   for(int i=0; i<n; i++){
      cout<<fourth[i]<<" ";
   }


   //initializing all locations with 1(not possible with below line)
   int fifth[6] = {1};
   n = 6;
   cout<<"printing an array"<<endl;
   for(int i=0; i<n; i++){
      cout<<fifth[i]<<" ";
   }
   return 0;

}

