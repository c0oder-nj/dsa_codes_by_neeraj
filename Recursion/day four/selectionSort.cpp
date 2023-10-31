#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr,int start,int end,int n){
    // static int iteration = 1;
    // cout<<"You are at "<<iteration<<" iteration."<<endl;
    // iteration++;
    // base case
    if(n == 0 || n == 1){
        return;
    }else{
        int min = INT_MAX;
        int minIndex = -1;
        for(int i=start; i<=end; i++){
            // cout<<"  index i-> "<<i; // for seeing iterations with each function call
            if(arr[i]<min){
                min = arr[i];
                minIndex = i;
            }
        }cout<<endl;
        swap(arr[start],arr[minIndex]);
        selectionSort(arr,start+1,end,n-1);
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr,0,n-1,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    delete []arr;
    return 0;
}