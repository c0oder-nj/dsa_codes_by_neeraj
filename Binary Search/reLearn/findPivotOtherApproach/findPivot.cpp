#include<bits/stdc++.h>
using namespace std;

// rotated sorted array 
// [7,9,1,2,3] --> pivot 1

int findPivot(int *arr,int size){
    int low = 0;
    int high = size-1;

    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[0]){
            low = mid+1;
        }else{
            // arr[mid]<arr[high]
            high = mid;
        }
    }
    return arr[high];
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int * arr = new int[n];

    cout<<"Enter array elements in sorted and rotated order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = findPivot(arr,n);

    cout<<ans<<endl;
    return 0;
}