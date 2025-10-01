#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    //initializ
    int arr[] = {5,7,1,2,9};

    int n = sizeof(arr) / sizeof(arr[0]);


    //sort without using any loops
    sort(begin(arr),end(arr));

    //smallest number is now at index 0
    cout<<"Smallest number:"<< arr[0] <<endl;
    cout<<"Largest number:" << arr[n-1]<<endl;

    return 0;

}