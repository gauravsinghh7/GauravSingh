/*
13. Create a class Time that represents a specific time of day using hours, minutes, and seconds 
as int data members. Implement the following:
Data Members:
o Three int data members: hours, minutes, and seconds to store the time.
2. Constructors:
o A default constructor that initializes the time to 00:00:00.
o A parameterized constructor that initializes the time to specific values provided 
by the user.
3. Member Functions:
o A function void display() that displays the time in the format HH:MM:SS.
o Overload the binary + operator as a member function or a friend function to 
add two Time objects. The result should be returned as a new Time object.
4. Main Function:
o In the main() function, create three Time objects. Initialize the first two objects 
with specific values using the parameterized constructor.
o Use the overloaded + operator to add the first two Time objects, and store the 
result in the third Time object.
o Finally, display the time stored in the third object using the display() function.
Input: 
Time t1(2, 45, 30); // t1 represents 02:45:30 
Time t2(1, 20, 40); // t2 represents 01:20:40 
Output: t3.display(); // Should display 04:06:10
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Time{
private:
    int hr;
    int min;
    int sec;
public:
    Time():hr(0),min(0),sec(0){}
    Time(int h,int m,int s):hr(h),min(m),sec(s){}
    void display(){
        cout<<(hr<10?"0":"")<<hr<<":"
        <<(min<10?"0":"")<<min<<":"
        <<(sec<10?"0":"")<<sec<<endl;
    }

    Time operator+(const Time&t) const{
        Time res;
        res.sec=sec+t.sec;
        res.min=min+t.min+res.sec/60;
        res.sec%=60;
        res.hr=hr+t.hr+res.min/60;
        res.min%=60;
        res.hr%=24;
        return res;
    }

};


int main(){
    Time t1(2,45,30);
    Time t2(1,10,40);

    Time t3=t1+t2;
    t3.display();
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}