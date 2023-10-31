#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int *index = new int; // allocationg memeory in heap
    // new int; 
    // new keyword is used to allocate memory in heap 
    // it returns the address of the memory block in heap
    *index = 500;

    cout<<*index<<endl;
    */

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n]; // creates new int[n] array of integers of size n in heap and returns the base address
    // then we store that base address in arr pointer variable

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout<<sum<<endl;
    return 0;
}