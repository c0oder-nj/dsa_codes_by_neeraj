#include<bits/stdc++.h>
using namespace std;




int findPivot(vector<int> arr,int size){
    // pivot find krna binary search ka logic
    // [7,8,1,3,5] --> pivot 1
    int low = 0;
    int high = size-1;

    while(low<high){
        int mid = low + (high-low)/2;

        if(arr[mid]>arr[mid+1]){ // pivot ke pehle wala element
            return mid+1;
        }

        else if(arr[mid]<arr[low]){
            // rotation occur in left subarray so reduce the search space
            high = mid-1;
        }
        else{
            // arr[mid] > arr[low]
            low = mid+1;
        }
    }
}









int bs(vector<int> arr,int low,int high,int ele){
    static int iter = 1;
    cout<<endl<<"In "<<iter<<" iteration. Value for low is "<<low<<" value for high is "<<high;
    if(low<=high){
        int mid = low + (high-low)/2;
        cout<<" Value of mid is "<<mid<<endl;
        cout<<endl<<endl<<" Size of array is "<<arr.size()<<endl<<endl;
        if(arr[mid] == ele){
            cout<<mid<<endl;
            return mid;
        }

        else if(arr[mid]>ele){
            iter++;
            bs(arr,low,mid-1,ele);
        }
        else{
            iter++;
            bs(arr,mid+1,high,ele);
        }
    }else{
        return -1;
    }
}


int search(vector<int>& arr, int n, int k)
{
    // [7,8,1,3,5] --> pivot 1
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivotIndex = findPivot(arr,n);
    // cout<<endl<<endl<<pivotIndex<<endl;
    int low = 0;
    int high = n-1;
    int leftPart = bs(arr, low, pivotIndex-1, k);
    int rightPart = bs(arr,pivotIndex,high,k);

    // cout<<endl<<endl<<leftPart<<"\t"<<rightPart<<endl<<endl;
    // if(leftPart == rightPart){
    //     return leftPart;
    // }
    // else if(leftPart ==-1){
    //     return rightPart;
    // }
    // else if(rightPart == -1){
    //     return leftPart;
    // }

    cout<<rightPart<<endl;
    return rightPart;

}


int main(){

    vector<int> arr = {10,11,1,2,3,4,5,6,9};
    int n = 9; 
    int k = 9;

    // int ans = search(arr,n,k);
    // cout<<ans<<endl;


    vector<int> narr = {1,2,3,4,5,6,7,8,9};
    int ans = search(narr,n,k);
    cout<<ans<<endl;
    
    return 0;
}