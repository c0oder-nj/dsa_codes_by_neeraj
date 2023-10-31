#include<bits/stdc++.h>
using namespace std;

int main(){
    // [1,2,3,4,5,6]

    // vector<int> v = {1,2,3,4,5,6};

    int arr[6] = {1,2,3,4,5,6};
    for(int i=0; i<6; i+=2){
        swap(arr[i],arr[i+1]);
    }

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}