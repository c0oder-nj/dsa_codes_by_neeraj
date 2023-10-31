#include<bits/stdc++.h>
using namespace std;

void showArray(int *arr,int n){

    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// at default insertion sort is adaptive because for sorted array we won't go in while loop

void insertionSort(int* arr,int n){
    int key,j;
    for(int i=0; i<n-1; i++){
        key = arr[i+1];
        j = i;

        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // showArray(arr, n);

    insertionSort(arr,n);
    showArray(arr, n);
    
    return 0;
}