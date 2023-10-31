#include<bits/stdc++.h>
using namespace std;

int sumOfArr(int arr[],int size){
    int sum = 0 ;
    int i=0;
    while(i<size){
        sum += arr[i];
        i++;
    }
    return sum;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<sumOfArr(arr,size);
    return 0;
}