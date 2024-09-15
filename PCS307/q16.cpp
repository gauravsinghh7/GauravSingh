#include <iostream>
#include <string>
using namespace std;

class Room {
public:
    int roomNumber;
    string type;
    double price;
    bool isAvail;

    Room(int rNum, string rType, double rPrice) 
        : roomNumber(rNum), type(rType), price(rPrice), isAvail(true) {}

    void displayRoomInfo() const {
        cout << "Room number: " << roomNumber
             << " Type: " << type
             << " Price: $" << price
             << " Availability: " << (isAvail ? "Available" : "Booked") << endl;
    }

    void bookRoom() {
        if (isAvail) {
            isAvail = false;
            cout << "Room " << roomNumber << " has been booked for you.\n";
        } else {
            cout << "Sorry, the room is already booked.\n";
        }
    }

    void cancelBooking() {
        if (!isAvail) {
            isAvail = true;
            cout << "Booking for room " << roomNumber << " has been canceled.\n";
        } else {
            cout << "Room " << roomNumber << " was not booked.\n";
        }
    }
};

int main() {
    const int numberOfRooms = 5;
    Room* hotelRooms[numberOfRooms];
    hotelRooms[0] = new Room(101, "Single", 50.0);
    hotelRooms[1] = new Room(102, "Single", 50.0);
    hotelRooms[2] = new Room(103, "Double", 70.0);
    hotelRooms[3] = new Room(301, "Double", 80.0);
    hotelRooms[4] = new Room(201, "Suite", 100.0);

    int choice;
    do {
        cout << "\n**************** HOTEL ROOM BOOKING SYSTEM *****************\n";
        cout << "1. Display All Rooms\n2. Book a Room\n3. Cancel Booking\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Available rooms:\n";
                for (int i = 0; i < numberOfRooms; i++) hotelRooms[i]->displayRoomInfo();
                break;

            case 2: {
                int roomNum;
                cout << "Enter the room number to book: ";
                cin >> roomNum;
                bool found = false;
                for (int i = 0; i < numberOfRooms; i++) {
                    if (hotelRooms[i]->roomNumber == roomNum) {
                        hotelRooms[i]->bookRoom();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Room " << roomNum << " not found.\n";
                break;
            }

            case 3: {
                int roomNum;
                cout << "Enter the room number to cancel booking: ";
                cin >> roomNum;
                bool found = false;
                for (int i = 0; i < numberOfRooms; i++) {
                    if (hotelRooms[i]->roomNumber == roomNum) {
                        hotelRooms[i]->cancelBooking();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Room " << roomNum << " not found.\n";
                break;
            }

            case 4:
                cout << "Exiting successfully.\n";
                break;

            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 4);

    for (int i = 0; i < numberOfRooms; i++) delete hotelRooms[i];
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}
