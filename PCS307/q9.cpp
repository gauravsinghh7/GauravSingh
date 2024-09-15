/* Write a C++ program to find the maximum occurring character in a string*/
#include<iostream>
using namespace std;

char maxOccuringChar(string s){
    int freq[256]={0};
    for(auto x:s)
        freq[x]++;
    char maxChar='\0';
    int maxCnt=0;

    for(int i=0;i<256;i++){
        if(freq[i]>maxCnt){
            maxCnt=freq[i];
            maxChar=(char)i;
        }
    }
    return maxChar;
}

int main(){
    string s;
    cout<<"Enter String :";
    getline(cin,s);
    char ch=maxOccuringChar(s);
    cout<<"Maximum occuring character is :"<<ch<<endl;
    cout<<endl;
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
}