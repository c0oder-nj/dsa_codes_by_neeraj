// find pivot element in sorted rotated array 
// [6,7,8,1,2,3,4]

#include<bits/stdc++.h>
using namespace std;

int findPivot(int *arr,int size){
    int low = 0; 
    int high = size-1;
    while(low<high){
        int mid = low + (high-low)/2;

        // condition to find pivot element

        // cout<<endl<<endl<<"low "<<arr[low]<<" mid "<<arr[mid]<<" high "<<arr[high]<<endl<<endl;
        if(arr[mid]>arr[mid+1]){ // mid uske next element se bada hai means yaha se rotation start hua hai 

            return arr[mid+1];
        }

        else if(arr[mid]<arr[0]){ // jab left subarray me rotation hua hoga toh usi case me arr[mid], arr[low] se chhota hoga
            // left subarray me rotation hua hai toh pivot bhi vahi hoga so reduce the search space
            high = mid-1;
        }

        else{ 
            // arr[mid] > arr[low] --> left sub array is in sorted order
            // arr[mid]>arr[high] --> since rotation occur in right subarray
            // so rotation right me hua toh search spcae ko kam krke right me le jaunga
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter the sorted rotated array to find pivot: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Pivot element from which rotation is start is "<<findPivot(arr,n);
    return 0;
}