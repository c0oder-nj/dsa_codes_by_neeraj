#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mul=1,sum=0;
    while(n>0){
        // 224
        int digit = (n%10);
        n = n/10;
        mul *= digit;
        sum += digit;
    }

    cout<<mul-sum<<endl;
    return 0;
}