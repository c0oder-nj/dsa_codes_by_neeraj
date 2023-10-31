#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }else{
        print(n-1); // example of head recursion
        cout<<n<<" ";
        // print(n-1); // example of tail recurison
    }
}

int main(){
    int n;
    cin>>n;

    print(n);
    return 0;
}