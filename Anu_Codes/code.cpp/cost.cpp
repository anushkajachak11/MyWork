#include<iostream>
using namespace std;

int main(){
    float pen;
    float pencil;
    float eraser;

    //input the cost of the items
    cout<<"enter the cost of pen:"<<endl;
    cin>>pen;
    cout<<"enter the cost of pencil:"<<endl;
    cin>>pencil;
    cout<<"enter the cost of eraser:"<<endl;
    cin>>eraser;

    //calculate total Cost
    float totalCost = pen + pencil + eraser;

    //calculate gst (18%)
    float gst = totalCost * 0.18;

    //calculate finalBill with GST
    float finalBill = totalCost + gst;
    
    //output the results 
    cout<<"Total Cost:"<<totalCost<<endl;
    cout<<"GST (18%):"<<gst<<endl;
    cout<<"Final Bill (including gst):"<<finalBill<<endl;

    return 0;
}