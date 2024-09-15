/*
12. Anna is competing to be the top student in her high school. She wants to know how 
many of her classmates scored higher than she did on their exams this semester.
You need to create a class named Student with the following features:
Data Members:
An array scores[5] that stores a student's scores for 5 exams.
Member Functions:
A void input() function that reads 5 exam scores and stores them in the scores array.
An int calculateTotalScore() function that calculates and returns the sum of the scores 
in the scores array.
Input Format:
The first line contains an integer n, representing the number of students in Anna's 
class.
The next n lines each contain 5 integers representing the exam scores of one student.
Output Format:
Print the number of students who have a total score higher than Anna's.
Input
The first line contains n, the number of students in Anna’s class. The n subsequent 
lines contain each student's 5 exam grades for this semester. 
3 
30 40 45 10 10 
40 40 40 10 10 
50 20 30 10 10 
Sample Output
1 
*/
#include<iostream>
#include<iomanip>
using namespace std;

class Student{
    int score[5];
public:
    void input(){
        for(int i=0;i<5;i++){
            cin>>score[i];
        }
    }
    int calculateTotalScore(){
        int total=0;
        for(auto x:score)
            total+=x;
        return total;
    }
};

int main(){
    int n;
    cin>>n;
    Student s[n];

    for(int i=0;i<n;i++){
        s[i].input();
    }
    int annaTotalScore=s[0].calculateTotalScore();
    int cnt=0;
    for(int i=1;i<n;i++){
        if(s[i].calculateTotalScore()>annaTotalScore)
            cnt++;
    }
    cout<<cnt<<endl;
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}