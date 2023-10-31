#include<bits/stdc++.h>
using namespace std;

int firstOccur(int* arr,int size,int key){
    int low = 0;
    int high = (size-1);

    int ans = -1;

    while(low<=high){
        int mid = (low+(high-low))/2;

        if(arr[mid] == key){
            ans = mid;
            high = mid-1;
        }

        else if(arr[mid]>key){
            high = mid-1;
        }

        else{
            low = mid+1;
        }
    }

    return ans;
}


int lastOccur(int* arr,int size,int key){
    int low = 0;
    int high = size-1;

    int ans = -1;

    while(low<=high){
        int mid = (low+(high-low))/2;

        if(arr[mid] == key){
            ans = mid;
            low = mid+1;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }

        else{
            low = mid+1;
        }

    }

    return ans;
}
int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<"The first occurence "<<firstOccur(arr,n,key)<<" and last occurence "<<lastOccur(arr,n,key)<<" of key --> "<<key<<endl;
    return 0;
}