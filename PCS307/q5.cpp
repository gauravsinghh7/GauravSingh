/*Create a C++ program to perform survey on four different model of Maruti 
(Maruti -K10, Zen-Astelo, Wagnor, Maruti- SX4) owned by person living in four 
metro cities(Delhi, Mumbai, Chennai & Kolkatta). Display tabulated report like 
format given below:*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    string cities[] = {"Delhi", "Mumbai", "Kolkata", "Chennai"};   // Define the cities
    string cars[] = {"Maruti-K10", "Zen Astelo", "Wagnor", "SX4"};

    int survey[4][4] = {0};
    int cityCode, carCode;

    char choice = 'y';
    do {
        cout << "******Main Menu********" << endl;
        cout << "Press 0 for Delhi" << endl;
        cout << "Press 1 for Mumbai" << endl;
        cout << "Press 2 for Kolkata" << endl;
        cout << "Press 3 for Chennai" << endl;
        cout << "Enter City Code: ";
        cin >> cityCode;
        cout << "Press 0 for Maruti K10" << endl;
        cout << "Press 1 for Zen Astelo" << endl;
        cout << "Press 2 for Wagnor" << endl;
        cout << "Press 3 for SX4" << endl;
        cout << "Enter Car Code: ";
        cin >> carCode;
        survey[cityCode][carCode]++;
        cout << "Do You Want To Continue?? y/n : ";
        cin >> choice;
    } while (choice != 'n');

    cout << "********** Survey Report **********" << endl;
    cout << setw(12) << " ";
    for (int i = 0; i < 4; i++) {
        cout << setw(12) << cars[i];
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        cout << setw(12) << cities[i];
        for (int j = 0; j < 4; j++) {
            cout << setw(12) << survey[i][j];
        }
        cout << endl;
    }
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}
