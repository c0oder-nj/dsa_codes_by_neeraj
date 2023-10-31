#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr,int n){
    // base case
    // jab mera array khali hai ya sirf ek element hai in that case array is already sorted
    if(n == 0 || n == 1){
        return;
    }
    else{
        // solve one case
        // pehle max element ko end me pahucha do baki toh recursion calls dekh lengi
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }

        // recursive call
        bubbleSort(arr,n-1);
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    delete []arr;
    return 0;
}