#include<bits/stdc++.h>
using namespace std;

int countBit(int num){
    int count = 0;
    while(num>0){
        if(num&1){
            count++;
        }
        num = num>>1;
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<(countBit(a) + countBit(b))<<endl;
    return 0;
}