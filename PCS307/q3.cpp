#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    string name;
    int units;
    double totalAmt=0.0;
    
    cout<<"Enter the name of the users :";
    getline(cin,name);
    cout<<"Enter units consumed :";
    cin>>units;

    if(units<100){
        totalAmt=units*0.60;
    }else if(units<=200){
        totalAmt=100*0.60+(units-100)*0.80;
    }else{
        totalAmt=100*0.60+200*0.80+(units-300)*0.90;
    }
    if(totalAmt<50){
        totalAmt=50;
    }
    if(totalAmt>300){
        totalAmt+=totalAmt*0.15;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Users :"<<name<<endl;
    cout<<"Unit consumed :"<<units<<endl;
    cout<<"Total Amount: Rs "<<totalAmt<<endl;
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}