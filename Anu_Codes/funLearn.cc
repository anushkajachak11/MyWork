#include<bits/stdc++.h>
using namespace std;

// abc(){  }

void add(int x, int y){  //fun defination
    int sum = x+y;
    cout << "Addition => "<< sum << endl;
}

void add(int x, int y, int z){  //fun defination
    int sum = x+y+z;
    cout << "Addition => "<< sum << endl;
}

int main(){
    
    int a,b;
    cin >> a >> b;
    add(a,b);  //calling


    int h,j,k;
    cin >> h >>j >> k;
    add(h,j,k);

    return 0;
}