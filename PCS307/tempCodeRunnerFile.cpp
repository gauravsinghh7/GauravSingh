#include <iostream>
using namespace std;

int globalVar = 10;

namespace MyNamespace {
    int namespaceVar = 20;
    void displayNamespaceVar() {
        cout << "Namespace variable: " << namespaceVar << endl;
    }
    class MyClass {
    public:
        static int staticMember;
        void display() {
            cout << "Class member function: " << MyNamespace::MyClass::staticMember << endl;
        }
        void setStaticMember(int value) {
            MyNamespace::MyClass::staticMember = value;
        }
    };
}

int MyNamespace::MyClass::staticMember = 30;

class GlobalClass {
public:
    void show() {
        cout << "Global variable: " << ::globalVar << endl;
    }
};

int main() {
    cout << "Access global variable: " << ::globalVar << endl;
    cout << "Access namespace variable: " << MyNamespace::namespaceVar << endl;

    MyNamespace::displayNamespaceVar();
    
    MyNamespace::MyClass obj;
    obj.display();

    obj.setStaticMember(50);
    obj.display();
    
    GlobalClass globalObj;
    globalObj.show();
    
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}
