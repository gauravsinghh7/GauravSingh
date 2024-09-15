#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input number of terms:";
    cin>>n;
    int sum=1;
    int Ts=0;
    for(int i=0;i<n;i++){
        sum=sum*10;
        Ts=Ts+sum-1;
        cout<<sum-1<<" ";
    }
    cout<<"\nThe sum of the Series ="<<Ts<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}