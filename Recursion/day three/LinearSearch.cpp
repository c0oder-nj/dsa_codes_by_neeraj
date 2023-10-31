#include<bits/stdc++.h>
using namespace std;

// print array using recursive function
void print(int *arr,int n){
    if(n == 0){
        return;
    }else{
        cout<<arr[0]<<" ";
        print(arr+1,n-1);
    }
}

bool linearSearch(int *arr,int n,int key){
    print(arr,n);
    cout<<endl;
    // base case
    // when array is empty that is it has no elements so simply jab khali hai toh key ho hi nahi sakti return false
    if(n == 0){
        return false;
    }

    // solve for one case remaining will done automatically using recursive calls
    if(arr[0] == key){
        return true;
    }else{
        bool remainingPart = linearSearch(arr+1,n-1,key); // since ho skta hai first index par na ho toh remaining part check kr lo or ye check hote hote ya toh milega toh true return krega ya fir nahi milega toh false return krega
        return remainingPart;

        // return linearSearch(arr+1,n-1,key);
    }
}

int main(){

    int arr[5] = {8,5,6,4,7};

    int n = 5;

    int key = 24;

    cout<<linearSearch(arr,n,key);
    return 0;
}