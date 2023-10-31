#include<bits/stdc++.h>
using namespace std;

void showArray(int *arr,int n){

    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergeFunc(int* arr,int low,int mid,int high){
    int tempArr[high+1];
    int i = low;
    int k = low;
    int j = mid+1;

    while(i<=mid && j<=high){ // <= since mujhe mid tak jaa kr compare krna hai
        if(arr[i]<arr[j]){
            tempArr[k] = arr[i];
            i++;
            k++;
        }
        else{
            tempArr[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        tempArr[k] = arr[i];
        i++;k++;
    }

    while(j<=high){
        tempArr[k] = arr[j];
        j++;k++;
    }

    for(int i=low; i<=high; i++){
        arr[i] = tempArr[i];
    }

}


void mergeSort(int* arr,int low, int high){
    if(low<high){
        int mid = low + (high-low) / 2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        mergeFunc(arr,low,mid,high);
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

    mergeSort(arr,0,n-1);
    showArray(arr, n);
    
    return 0;
}