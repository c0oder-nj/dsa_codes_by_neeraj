#include<bits/stdc++.h>
using namespace std;

int size;

bool isPresent(int ele,int *arr){
    for(int i=0; i<size; i++){
        if(arr[i] == ele){
            return true;
        }
    }
    return false;
}

int main(){
    
    cin>>size;

    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }


    int ele;
    cout<<"Enter ele you want to search: ";
    cin>>ele;
    if(isPresent(ele,arr)){
        cout<<"Desired Element is present"<<endl;
    }else{
        cout<<"Desired Element is not present"<<endl;
    }
    return 0;
}