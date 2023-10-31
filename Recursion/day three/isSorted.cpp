#include<bits/stdc++.h>
using namespace std;

// recursive isSorted function to check whether the array is sorted or not
bool isSorted(int *arr,int size){
    cout<<size<<" ";
    
    // base case
    if(size == 0 || size == 1){
        return true;
    }

    // solving one case
    else if(arr[0]>arr[1]){ // sirf ek case ke liye solve krna hota hai baki toh vo khud kr lega 
    // that is the conecpt ko recursion
        return false;
    }

    // rest will automatically done
    else{
        // bool flag = true;
        // flag = isSorted(arr+1,size-1);
        // return flag;

        // what the below line will do ?
        // below line will work still fine because size kam hoti jaa rahi hai toh sorted hoga toh return true ho jayega as an function or agr sorted nhi hoga toh else if wala case se false return ho jayega as function return value
        isSorted(arr+1,size-1);
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<endl<<endl;
    cout<<isSorted(arr,n);

    delete []arr;
    return 0;
}