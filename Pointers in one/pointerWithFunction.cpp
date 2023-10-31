#include<bits/stdc++.h>
using namespace std;

void printVal(int *ptr){
    cout<<*ptr<<endl;
}

void updatePointer(int *ptr){
    ptr = ptr + 1; //instructing to point to the next memeory location
    // cout<<ptr<<endl;

    *ptr = *ptr + 1;
}

int getSum(int arr[],int n){ // yaha hamesha ek pointer pass hota hai jo ki content krta hai apna base address 
// like int getSum(int *arr,int n)
    int sum = 0;
    cout<<"size: "<<sizeof(arr); // sizeof arr means base address par sizeof kr diya mene or since vo base address ek int type ke array ka hai that is why i get size as 4
    for(int i=0; i<n; i++){
        sum += i[arr];
    }
    return sum;
}

int main(){

    /*
    int val = 5;
    int *p = &val;

    cout<<*p<<endl;
    val += 10;

    // printVal(p);

    cout<<"before updating pointer to next "<<p<<endl; 
    cout<<"before updating pointer value at address "<<*p<<endl;

    updatePointer(p);

    cout<<"After updating the pointer to next "<<p<<endl;
    cout<<"after updating pointer value at address "<<*p<<endl;
    */

    int arr[5] = {1,2,3,4,5};
    getSum(arr,5);
    return 0;
}