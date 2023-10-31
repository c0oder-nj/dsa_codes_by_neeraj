#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1; // why n= since (n>>1) likhne se vo right shift toh ho jayega but vo n me value assign nhi hogi that is why we need to write it as n = (n>>1)
    }

    cout<<count<<endl;


    return 0;
}