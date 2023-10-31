#include<bits/stdc++.h>
using namespace std;

void showArray(int *arr,int n){

    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int findMin(int* arr,int start,int end){
    int min = INT_MAX;
    int minIndex = -1;

    for(int i=start; i<end; i++){
        if(arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}   

void selectionSort(int* arr,int n){
    int minIndex;
    for(int i=0; i<n-1; i++){
        minIndex = findMin(arr,i,n);
        swap(arr[i],arr[minIndex]);
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

    selectionSort(arr,n);
    showArray(arr, n);
    
    return 0;
}