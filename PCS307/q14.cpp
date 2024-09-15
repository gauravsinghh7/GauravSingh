/*
14 & 15. Develop a class Score that tracks a player's score in a game. Implement the 
following:
1. Data Member:
o An int data member to store the score.
2. Constructors:
o A default constructor to initialize the score to 0.
o A parameterized constructor to initialize the score to a specific value.
3. Overloaded Operators:
o Overload the pre-increment (++) operator to increase the score by 10 points 
and return the updated object.
o Overload the post-increment (++) operator to increase the score by 10 points 
but return the original object before the increment.
4. Main Function:
o Create a Score object, demonstrate the use of both pre-increment and postincrement operators, and display the score after each operation
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Score {
private:
    int score;
ṇpublic:
    Score() : score(0) {}
    Score(int s) : score(s) {}

    friend Score& operator++(Score&);
    friend Score operator++(Score&, int);

    void display() const {
        cout << "Score: " << score << endl;
    }
};

Score& operator++(Score& obj) {
    obj.score += 10;
    return obj;
}

Score operator++(Score& obj, int) {
    Score temp = obj;
    obj.score += 10;
    return temp;
}

int main() {
    Score playerScore(50);

    cout << "Initial ";
    playerScore.display();

    ++playerScore;
    cout << "After pre-increment ";
    playerScore.display();

    playerScore++;
    cout << "After post-increment ";
    playerScore.display();
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}

