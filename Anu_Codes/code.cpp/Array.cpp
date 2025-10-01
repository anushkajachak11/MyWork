// #include<iostream>
// using namespace std;
// int main(){
//     int marks[50]={0};  //0 to 49 index

//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl; 
//     cout<<marks[2]<<endl;  
//     cout<<marks[3]<<endl; 
//     cout<<marks[4]<<endl; 
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int marks[50]={1,2,3,4,5};  
//     cout<<marks[0]<<endl; 
//     cout<<marks[1]<<endl; 
//     cout<<marks[2]<<endl;  
//     cout<<marks[3]<<endl; 
//     cout<<marks[4]<<endl; 
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5];  
//     cout<<sizeof(marks)<<endl;
//     cout<<sizeof(marks)/sizeof(int)<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//      int marks[]={1,2,3,4};
//      cout<<marks[0]<<endl; 
//      cout<<marks[1]<<endl; 
//      cout<<marks[2]<<endl;  
//      cout<<marks[3]<<endl; 
//      return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){

//     int arr[6]={8,5,9,4,2,6};
//     int len=sizeof(arr)/sizeof(int);

//     for(int idx=0;idx<=len-1;idx++){
//         cout<<arr[idx]<<" ";  // idx = 0,1,2,3,4,5
//     }
//     cout<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[6]={8,5,9,4,2,6};
//     int n = sizeof(arr)/sizeof(int);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";  // idx = 0,1,2,3,4,5
//     }
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[5];
//     int n = sizeof(arr)/sizeof(int);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";  
//     }
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[15]={5,6,7,9,2};
//     int n = sizeof(arr)/sizeof(int);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";  
//     }
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[4];
//     int n = sizeof(arr)/sizeof(int);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";  
//     }
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,9,7,11,2};
//     int n=sizeof(arr)/sizeof(int);

//     int max=arr[0];
//     int min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//           max=arr[i];
//         }
//         if(arr[i]<min){
//           min=arr[i];
//         }
//     }
//     cout<<"largest val="<<max<<endl;
//     cout<<"smallest val="<<min<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int linearSearch(int*arr,int n,int key){
//     for(int i=0; i<n; i++){
//        if(arr[i]==key){
//           return i;
//        }
        
//     }
//     return -1;
// }
// int main(){
//     int arr[]={2,4,6,8,10,12,14,16};
//     int n=sizeof(arr)/sizeof(int);

//     cout<<linearSearch(arr,n,16)<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;

int binarySearch(int*arr,int n,int key){
    int st=0,end=n-1;

    while(st<=end){
        int mid=(st+end)/2;

        if(arr[mid]==key){
            return mid;    //key found
        } else if(arr[mid]<key){ //2nd half
            st=mid+1;
        } else{
            //1st half
            end=mid-1;
        }
    }
    return -1;   //key not found
} 
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);

    cout<<binarySearch(arr,n,98)<<endl;
    return 0;

}
     



















