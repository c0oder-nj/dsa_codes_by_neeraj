#include<bits/stdc++.h>
using namespace std;

int getSum(int* arr,int size){
    static int sum = 0;

    // base case 
    if(size == 0){
        return 0;
    }

    else{
        sum += *arr;
        getSum(arr+1,size-1);
        return sum;
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = getSum(arr,n);

    cout<<"Sum of array elements is "<<sum<<endl;

    return 0;
}