#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2; i<=(n/2); i++){
        if(n%i==0){
            cout<<"Non Prime";
            break;
        }
        if(i==(n/2)){
            cout<<"Prime Number";
        }
    }

    return 0;
}