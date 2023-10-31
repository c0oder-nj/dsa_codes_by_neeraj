#include<bits/stdc++.h>
using namespace std;

void showArray(int *arr,int n){

    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


 


int partitionFunc(int* arr,int low,int high){
    int pivot = arr[low];
    int i=low+1;
    int j = high;
    
    while(i<=j){

        while(arr[i]<= pivot){ // i me dhundho hamesha badi value barababr bhi nahi sirf badi value
            i++;
        }

        while(arr[j]>pivot){ // j me dhundho chhoti ya barabar value | badi nahi chalegi
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int* arr,int low,int high){
   

   if(low<high){ // it should low<high now low<=high since agr <= lagaya toh 1 element ka jo subArray banega uske liye bhi condition true ho jayegi

    int pivotIndex = partitionFunc(arr,low,high);
    quickSort(arr,low,pivotIndex-1);
    quickSort(arr,pivotIndex+1,high);
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

    quickSort(arr,0,n-1);
    showArray(arr, n);
    
    return 0;
}