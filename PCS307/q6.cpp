#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    string cities[] = {"Delhi", "Mumbai", "Kolkata", "Chennai", "Dehradun"};
    int temperature[31][5] = {0};
    int dayCode, cityCode;
    int maxTemp = -1000, minTemp = 1000;
    int maxDay = 0, maxCity = 0, minDay = 0, minCity = 0;

    char choice = 'y';
    do {
        cout << "******Main Menu********" << endl;
        cout << "Press 0 for Delhi" << endl;
        cout << "Press 1 for Mumbai" << endl;
        cout << "Press 2 for Kolkata" << endl;
        cout << "Press 3 for Chennai" << endl;
        cout << "Press 4 for Dehradun" << endl;
        cout << "Enter City Code: ";
        cin >> cityCode;

        cout << "Enter Day (1 to 31): ";
        cin >> dayCode;

        cout << "Enter the temperature for " << cities[cityCode] << " on Day " << dayCode << ": ";
        cin >> temperature[dayCode - 1][cityCode];

        
        if (temperature[dayCode - 1][cityCode] > maxTemp) {
            maxTemp = temperature[dayCode - 1][cityCode];  // Check for maximum temperature
            maxDay = dayCode - 1;
            maxCity = cityCode;
        }

        if (temperature[dayCode - 1][cityCode] < minTemp) {  // Check for minimum temperature
            minTemp = temperature[dayCode - 1][cityCode];
            minDay = dayCode - 1;
            minCity = cityCode;
        }

        cout << "Do You Want To Continue? (y/n): ";
        cin >> choice;
    } while (choice != 'n');

    cout << "********** Temperature Report **********" << endl;
    cout << setw(12) << " ";
    for (int i = 0; i < 5; i++) {
        cout << setw(12) << cities[i];
    }
    cout << endl;

    for (int day = 0; day < 31; day++) {
        cout << setw(12) << "Day " << (day + 1);
        for (int city = 0; city < 5; city++) {
            cout << setw(12) << temperature[day][city];
        }
        cout << endl;
    }
    cout << "\nHighest temperature: " << maxTemp << "°C on Day " << (maxDay + 1) << " in " << cities[maxCity] << endl;
    cout << "Lowest temperature: " << minTemp << "°C on Day " << (minDay + 1) << " in " << cities[minCity] << endl;
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 

    return 0;
}
