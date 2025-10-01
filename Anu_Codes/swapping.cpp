 #include<iostream>
 using namespace std;
 
      //function to swap two integers
      void swap(int &a,int &b){
          int temp=a;
          a=b;
          b=temp;
      }
      //function to swap two float
      void swap(float &a,float &b){
          float temp=a;
          a=b;
          b=temp;
      }
      //function to swap two characters
      void swap(char &a,char &b){
          char temp=a;
          a=b;
          b=temp;
      }
int main(){
    
   int int1=1,int2=2;
   float float1=1.1f,float2=2.2f;
   char char1='A',char2='B';
   
   //swapping two integers
   
   cout<<"Before swapping integers:"<<int1<<" "<<int2<<endl;
   swap(int1,int2);
   cout<<"After swapping integers:"<<int1<<" "<<int2<<endl;
   
   //swapping two float
   
   cout<<"Before swapping floats:"<<float1<<" "<<float2<<endl;
   swap(float1,float2);
   cout<<"After swapping floats:"<<float1<<" "<<float2<<endl;
   
   //swapping two char
   
   cout<<"Before swapping characters:"<<char1<<" "<<char2<<endl;
   swap(char1,char2);
   cout<<"After swapping characters:"<<char1<<" "<<char2<<endl;
   
   return 0;
}   
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      