#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){ // base case to stop recursion
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    // visualize kro ki 5 ke liye kaise chalega
    cout<<factorial(5)<<endl;
    return 0;
}