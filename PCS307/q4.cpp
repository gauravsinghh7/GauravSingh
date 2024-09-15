/*Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put 
all 0s first, then all 1s and all 2s in last.
*/
#include<iostream>
using namespace std;
void sortArray(int arr[], int n) {
    int low=0,mid=0,high=n-1;
    while (mid<=high) {
        switch(arr[mid]) {
            case 0:
                swap(arr[low],arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high]);
                high--;
                break;
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={0,1,2,1,0,2,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array :";
    display(arr,n);
    sortArray(arr,n);

    cout<<"Sorted Array :";
    display(arr,n);
    cout << "*********************************************" << endl; 
    cout << "Program Prepared & Executed by: GAURAV SINGH, CSE(A1) ,Class Roll no: 32" << endl; 
    cout << "*********************************************" << endl; 
    
}