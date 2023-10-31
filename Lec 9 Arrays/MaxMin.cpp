#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;
    int i=0;
    while(i<size){
        if(arr[i]>max){
            max = arr[i];
        }
        i++;
    }
    return max;
}

int getMin(int arr[], int size){
    int i=0;
    int min = INT_MAX;
    while(i<size){
        if(arr[i]<min){
            min = arr[i];
        }
        i++;
    }
    return min;
}

int main(){
    int n;
    cout<<"Enter the numbe of element in the array: ";
    cin>>n;

    int arr[1000]; // good practice according the love babbar bhaiya
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<getMax(arr,n);
    cout<<endl;
    cout<<getMin(arr,n);
    return 0;
}