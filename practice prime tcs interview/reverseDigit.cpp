#include<bits/stdc++.h>
using namespace std;

int reverse_digit(int n){
    int last_digit;
    int reversed_digit = 0;
    while (n!=0)
    {
        last_digit = n%10;
        n = n/10;
        reversed_digit = reversed_digit*10 + last_digit;
    }

    return reversed_digit;
    
}

int main(){
    int n;
    cin>>n;

    cout<<reverse_digit(n)<<endl;
    return 0;
}