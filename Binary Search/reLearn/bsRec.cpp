#include<bits/stdc++.h>
using namespace std;

bool bs(int *arr,int low,int high,int ele){
    // base case
    if(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid] == ele){
            return true;
        }

        else if(arr[mid]<ele){
            return bs(arr,mid+1,high,ele);
        }
        else{
            return bs(arr,low,mid-1,ele);
        }
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int * arr = new int[n];

    cout<<"Enter array elements in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to be searched in the array: ";
    int ele;
    cin>>ele;

    int low = 0;
    int high = n-1;

    if(bs(arr,low,high,ele)){
        cout<<"Element is present in the arra"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
    return 0;
}