// find sum of even numbers untill n;
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Number upto which you want sum of even numbers: ";
    cin>>n;
    int i=2;
    int sum = 0;
    while(i<=n){
        if(i%2==0){
            sum += i;
        }
        i++;
    }
    cout<<"sum is --> "<<sum<<endl;
    return 0;
}