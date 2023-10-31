#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++){
        if((i == n-1) && (i%2==0)){
        cin>>arr[i];
        }
        else{
            if(i%2==0){
                cin>>arr[i+1];
            }else{
                cin>>arr[i-1];
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}