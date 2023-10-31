#include<bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    uint64_t neu = 1;
    int deno = 1;
    int n_demo = n;
    for(int i=0,j=0; i<(n-(n-r)) || j<r; i++,j++ ){
        if(i<(n-(n-r))){
            neu *= n_demo;
            n_demo -= 1;
        }
        if(j<r){
            deno *= (j+1);
        }
    }
    cout<<"neuminator "<<neu<<endl;
    cout<<"denominator "<<deno<<endl;
    int result = neu/deno;
    return result;

}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}