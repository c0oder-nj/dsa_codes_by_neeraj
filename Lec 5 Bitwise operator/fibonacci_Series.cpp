#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 1, b = 1;
    int n;
    cout<<"Enter the total no. of terms in fibonacci series: ";
    cin>>n;

    int term = 0;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n-2; i++){
        term = a+b;
        cout<<term<<" ";
        a=b;
        b=term;
    }
    return 0;
}