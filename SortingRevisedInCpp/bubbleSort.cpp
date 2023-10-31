#include<bits/stdc++.h>
using namespace std;

void showArray(int *arr,int n){

    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// bool isSorted;
void bubbleSort(int* arr,int size){
    for(int i=0; i<(size-1); i++){ // since we perform (n-1) passes
        // isSorted = true; // for making bubble sort work in O(n) time complexity
        for(int j=0; j<(size-i)-1; j++){
            if(arr[j]>arr[j+1]){
                // isSorted = false;
                swap(arr[j],arr[j+1]);
            }
        }
        // if(isSorted){
        //     cout<<"Passes :"<<i<<endl;
        //     break;
        // }
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
    bubbleSort(arr,n);
    showArray(arr, n);
    
    return 0;
}