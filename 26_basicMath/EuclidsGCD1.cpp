#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;

    while(a!=b){
        if(a>b){
            a = a-b;
        }else{
            b = b-a;
        }
    }

    return a; // dono barabar ho jaaye toh kuchh bhi return krdo dono se 
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;

    cout<<"Highest common factor is "<<gcd(a,b)<<endl;
    // relation b/w lcm and hcf is 
    // a*b = Lcm(a,b) * hcf(a,b)
    // so we can derive one value if we have another value
    // lcm (a*b) = (a*b) / hcf(a,b)
    cout<<"LCM is "<<(a*b)/gcd(a,b);
    return 0;
}