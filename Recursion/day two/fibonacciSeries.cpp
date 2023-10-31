#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;
    // our base cases

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    cout<<fibonacci(8)<<endl; // complexity logn --> how recursion tree bana lo smjh jaoge
    return 0;
}