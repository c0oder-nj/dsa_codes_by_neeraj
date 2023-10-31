#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr,int low,int high,int key){
    int mid = low + (high-low)/2;

    // base case 

    // element not found
    if(low>high){ // low badh gaya high chhota ho gaya or element abhi tak nhi mila means it doesn't exist return false
        return false;
    }

    // element found
    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid]>key){
        binarySearch(arr,low,mid-1,key);
    }
    else{
        binarySearch(arr,mid+1,high,key);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter the elements in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key to be searched using binarySearch: ";
    cin>>key;

    int low = 0;
    int high = n-1;

    if(binarySearch(arr,low,high,key)){
        cout<<"Key you entered is present in array :)"<<endl;
    }else{
        cout<<"Key you entered is not present in the array :("<<endl;
    }
    return 0;
}