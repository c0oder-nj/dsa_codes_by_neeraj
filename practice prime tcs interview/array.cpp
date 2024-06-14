#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[5] = {1,2,3,4,5}; // static array declaration

    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    int *arr = new int[5]; // dynamic array declaration

    *arr = 1; // value at first index or base address location
    *(arr + 1) = 2; // value at second index of the array
    *(arr +2) = 3; // value at third index of the array
    *(arr+3) = 4; // value at fourth index of the array
    *(arr + 4) = 5; // value at last element of the array

    cout<<*arr<<endl; // it will show me the base address of arr
    // cout<<*(arr + 4)<<endl;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" " ;
    }


    delete []arr;   





    return 0;
}