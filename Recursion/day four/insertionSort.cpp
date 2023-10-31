#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr,int start,int end, int n){
    if(n == 0 || n == 1){
        return;
    }
    else{
        int j = start;
        int key = arr[start+1];

        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;

        // recursive call
        insertionSort(arr,start+1,end,n-1);
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertionSort(arr,0,n-1,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    delete []arr;
    return 0;
}