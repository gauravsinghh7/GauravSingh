#include <iostream>
using namespace std;

class MyClass {
public:
    int data1;
    float data2;

    MyClass(int d1, float d2) : data1(d1), data2(d2) {}

    void display() const {
        cout << "data1: " << data1 << endl;
        cout << "data2: " << data2 << endl;
    }
};

int main() {
    MyClass* ptr = nullptr;
    
    ptr = new MyClass(10, 15.5f);

    ptr->display();

    delete ptr;

    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}
