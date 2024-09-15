/*Write C++ program to reverse each word of string. 
 e.g. Input- I love my India Output – I evol ym aidnI)*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"INPUT :";
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<"OUTPUT :"<<s<<endl;
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}