/*11. Design a class to represent bank account. Includes the following members:
• Name of depositor
• Account number
• Type of account
• Balance amount in the account
Methods:
• To assign initial values
• To deposit an amount
• To withdraw an amount after checking balance.
• To display the name and balance.
Write a program to incorporate the constructor to provide initial values.*/
#include<iostream>
#include<iomanip>
using namespace std;

class BankAccount{
private:
    string name;
    int accNo;
    string accType;
    double bal;
public:
    // constructors
    BankAccount(){
        name="NULL";
        accNo=000000;
        accType="NULL";
        bal=0;
    }
    BankAccount(string Custname,int accNum,string acType,double balance):name(Custname),accNo(accNum),accType(acType),bal(balance){}
    //Methods
    void deposit(double amount){
        bal+=amount;
        cout<<"Deposited Rs."<<amount<<" Updated balance Rs."<<bal<<endl;
    }

    void withdraw(int amount){
        if(amount<=bal){
            bal-=amount;
            cout<<"Withdrew Rs."<<amount<<" Updated balance: Rs."<<bal<<endl;
        }else{
            cout<<"Insufficient balance."<<endl;
        }
    }

    void display()const{
        cout<<left<<setw(25)<<"Acc Holder Name :"<<name<<endl;
        cout<<left<<setw(25)<<"Account Number :"<<accNo<<endl;
        cout<<left<<setw(25)<<"Account Type   :"<<accType<<endl;
        cout<<left<<setw(25)<<"Balance :"<<"Rs."<<bal<<endl;
    } 
};

int main(){
    BankAccount A("Gaurav Singh",21000145,"Saving Account",1000.00);
    cout<<" Accounts details :"<<endl;
    A.display();
    A.deposit(7000);
    A.withdraw(500);
    A.display();
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
}