#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int size,int start = 0){ // default argument setting will always starts from rightmost pehle right ke variables ko default banao then it would allowed to set left variables a default value
    for(int i=start; i<size; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    print(arr,size);
    print(arr,size,2);
    return 0;
}