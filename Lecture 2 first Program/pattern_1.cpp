#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; // number of rows
    cout<<"Size of your row ";
    cin>>n;
    int i=0; 
    while(i<n){
        int j=0;
        while(j<n){
            cout<<" * ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}