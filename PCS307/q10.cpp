/*. A class Telcall calculates the monthly phone bill of a consumer. Some of the 
members of the class are given below:
Class name: 
Data members/instance variable : phno(phone Number), sname(subscriber Name ) 
n(number of calls made) and amt (bill amount).
Member function/methods: 
TelCall() : Parameterized constructor to assign values to data 
members.
Void compute( ) : to calculate the phone bill amount base on the slabs 
given below.
Void display( ) : to display the details in the specified format.
Number of calls Rate
1 – 100 Rs. 500/- rental charge only
101 – 200 Rs 1.00 per call + rental charge
201-300 Rs. 1.20 per call + rental charge
Above 300 Rs. 1.50 per call + rental charge*/
#include<iostream>
#include<iomanip>
using namespace std;

class Telcall{
public:
    string phno;
    string sname;
    int n;
    double amt;

    Telcall(string phno,string sname, int n){
        this->phno=phno;
        this->sname=sname;
        this->n=n;
    }
    /*
    TelCall(string phoneNumber,string subscriberName,int numberOfCalls):phno(phoneNumber),sname(subscriberName),n(numberOfCalls) {amt = 0.0;}
    */
    void compute(){
        if(n<=100){
            amt=500;
        }else if(n<=200){
            amt=500+1.0*(n-100);
        }else if(n<=300){
            amt=500+1.20*(n-200);
        }else{
            amt=500+1.50*(n-300);
        }
    }
    void display() const{
        cout<<left<<setw(25)<<"Subscriber Name :"<<setw(10)<<sname<<endl;
        cout<<left<<setw(25)<<"Phone Number :"<<setw(10)<<phno<<endl;
        cout<<left<<setw(25)<<"Number of Calls Made :"<<setw(10)<<n<<endl;
        cout<<left<<setw(25)<<"Bill Amount :Rs."<<setw(10)<<amt<<endl;
    }
};

int main(){
    string phno,sname;
    int n;
    cout<<"Enter Phone Number :";
    getline(cin,phno);
    cout<<"Enter Subscriber Name :";
    getline(cin,sname);
    cout<<"Enter Number of Calls Made :";
    cin>>n;
    Telcall call(phno,sname,n);
    call.compute();
    call.display();
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
}