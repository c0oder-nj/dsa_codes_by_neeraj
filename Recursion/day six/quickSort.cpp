#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int low, int high){
    int pivot = arr[low];
    int i=low+1;
    int j=high;

    while(i<=j){
        while(arr[i]<=pivot){ // i me hamesha dhundho pivot se bada element
            i++;
        }

        while(arr[j]>pivot){ // j me hamesha dhundho pivot se chhota element
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int *arr,int low,int high){
    if(low<high){
        int partitionIndex = partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int low=0;
    int high = n-1;
    
    quickSort(arr,low,high);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    delete []arr;
    return 0;
}