#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<(i+1)<<endl;
    // }

    int i=0;
    // for(;i<n;){
    //     cout<<(++i)<<endl;
    // }

    // for(;;){
    //     if(i<n){
    //     cout<<(++i)<<endl;
    //     }
    //     else{
    //         break;
    //     }

    // }


    // multipel variable in for loop

    for(int i=1,j=1; i<=n&&j<=(n); i++,j++){
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}