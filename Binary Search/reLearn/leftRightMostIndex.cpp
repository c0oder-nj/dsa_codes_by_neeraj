#include<bits/stdc++.h>
using namespace std;

int leftMostIndex(int *arr,int low,int high,int ele){
    static int index = -1;
    if(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == ele){
            index = mid;
            leftMostIndex(arr,low,mid-1,ele);
        }

        else if(arr[mid]<ele){
            leftMostIndex(arr,mid+1,high,ele);
        }

        else{
            leftMostIndex(arr,low,mid-1, ele);
        }
    }
    else{
        return index;
    }
}

int rightMostIndex(int *arr,int low,int high,int ele){
    static int index = -1;
    if(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid] == ele){
            index = mid;
            rightMostIndex(arr,mid+1,high,ele);
        }

        else if(arr[mid]<ele){
            rightMostIndex(arr,mid+1,high,ele);
        }
        else{
            rightMostIndex(arr,low,mid-1,ele);
        }
    }else{
        return index;
    }
}

int totalNumberOfOccurence(int *arr,int ele,int size){
    int low = 0; 
    int high = size-1;

    int leftOccur = leftMostIndex(arr,low,high,ele);
    int rightOccu = rightMostIndex(arr,low,high,ele);

    if(leftOccur == -1){
        return -1;
    }
    else{
        return (rightOccu - leftOccur) + 1;
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

    // cout<<leftMostIndex(arr,low,high,ele)<<" "<<rightMostIndex(arr,low,high,ele);

    cout<<"Total no. of occurenece for element "<<ele<<" is "<<totalNumberOfOccurence(arr,ele,n);
    return 0;
}