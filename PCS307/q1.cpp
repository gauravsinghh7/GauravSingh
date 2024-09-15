/* Write a program in C++ to display the multiplication table vertically from 1 to n.*/
#include<iostream>
using namespace std;

void table(int n){
    cout<<"Multiplication table from 1 to "<<n<<endl;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<"X"<<i<<"="<<j*i<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Input the number upto:";
    cin>>n;
    table(n);
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) , Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}