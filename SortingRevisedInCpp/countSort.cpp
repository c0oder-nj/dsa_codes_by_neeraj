#include<bits/stdc++.h>
using namespace std;

int getMax(int *arr,int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}


void showArray(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void countSort(int *arr,int n){

    int max = getMax(arr,n);
    int newArr[max+1] = {0};

    for(int i=0; i<n; i++){
        newArr[arr[i]]++;
    }

    showArray(newArr,(max+1));

    int result[n];
    int j = 0;
    for(int i=0; i<=max; i++){
        while(newArr[i]>0){
            newArr[i]--;
            result[j] = i;
            j++;
        }
    }

    showArray(result,n);

}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    

    countSort(arr,n);
    // showArray(arr,n);
    return 0;
}