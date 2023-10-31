#include<bits/stdc++.h>
using namespace std;

// merge procedure using the same auxillary array
void merge(int *arr,int low,int high){
    int *temp = new int[high+1]; // temporary array to store sorted data
    int mid = low + (high-low)/2;
    // index intialization
    int i=low; // starting index of left subarray
    int k=low; // starting index of temp array
    int j=mid+1; // starting index of right sub array

    // I need to traverse left subarray from low till mid (included)
    // need to traverse right subarray till mid+1 to high (included)

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;k++;
        }
        else if(arr[j]<arr[i]){
            temp[k] = arr[j];
            j++;k++;
        }
    } // when this loop exhaust means i ya j me se koi uski end index ko reach kr gaya
    // so dusre loop ke bache huye elements ko copy kr do as it is


    while(i<=mid){
        temp[k] = arr[i];
        i++;k++;
    }

    while(j<=high){
        temp[k] = arr[j];
        j++;k++;
    }

    // now copy the temp array in original array
    for(int i=low; i<=high; i++){
        arr[i] = temp[i];
    }

    delete []temp;

}


void mergeSort(int *arr,int low,int high){
    // if(low>high){ 
    //     return;
    // }
    if(low<high){ // if i do low<=high so single element tak break down hone ke baad bhi ye loop chalta rahega and it will cause problem
        int mid = low + (high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int low = 0;
    int high = n-1;

    mergeSort(arr,low,high);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    delete []arr;
    return 0;
}