#include <iostream>
#include <vector>
#include <limits>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    string course;
    float marks;

    Student(string n,int r,string c,float m)
        : name(n),rollNumber(r),course(c),marks(m) {}
};

class StudentDatabase {
private:
    vector<Student*> students;

public:
    void addStudent(string name,int rollNumber,string course,float marks) {
        students.push_back(new Student(name,rollNumber,course,marks));
    }

    void deleteStudent(int rollNumber) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if ((*it)->rollNumber == rollNumber) {
                delete *it; // Free memory
                students.erase(it); // Remove from vector
                cout << "Student with roll number " << rollNumber << " has been deleted.\n";
                return;
            }
        }
        cout << "Student with roll number " << rollNumber << " not found.\n";
    }

    void viewStudents() const {
        if (students.empty()) {
            cout << "No student records available.\n";
            return;
        }
        for (const auto& student : students) {
            cout << "Name: " << student->name
                 << ", Roll Number: " << student->rollNumber
                 << ", Course: " << student->course
                 << ", Marks: " << student->marks << endl;
        }
    }

    void displayAverageMarks() const {
        if (students.empty()) {
            cout << "No student records available to calculate average marks.\n";
            return;
        }
        float totalMarks=0;
        for (const auto& student : students) {
            totalMarks+=student->marks;
        }
        float averageMarks=totalMarks/students.size();
        cout << "Average Marks: " << averageMarks << endl;
    }

    void findHighestMarks() const {
        if (students.empty()) {
            cout << "No student records available to find the highest marks.\n";
            return;
        }
        Student* topStudent=students[0];
        for (const auto& student : students) {
            if (student->marks>topStudent->marks) {
                topStudent=student;
            }
        }
        cout << "Student with highest marks: " << topStudent->name
             << ", Roll Number: " << topStudent->rollNumber
             << ", Course: " << topStudent->course
             << ", Marks: " << topStudent->marks << endl;
    }
    ~StudentDatabase() {
        for (auto student : students) {
            delete student;
        }
    }
};

int main() {
    StudentDatabase db;
    db.addStudent("Alice",101,"Computer Science",85.5);
    db.addStudent("Bob",102,"Mathematics",90.0);
    db.addStudent("Charlie",103,"Physics",88.5);

    cout << "All Students:\n";
    db.viewStudents();

    cout << "\nAverage Marks:\n";
    db.displayAverageMarks();

    cout << "\nFinding Student with Highest Marks:\n";
    db.findHighestMarks();

    cout << "\nDeleting Student with roll number 102:\n";
    db.deleteStudent(102);

    cout << "\nAll Students:\n";
    db.viewStudents();
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}
