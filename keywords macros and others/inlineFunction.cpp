#include<bits/stdc++.h>
using namespace std;

inline int getMax(int& a,int& b){
    return a>b?a:b;
}

int main(){
    int a=1,b=2;
    cout<<getMax(a,b)<<endl;

    a+=3;
    b+=1;
    cout<<getMax(a,b)<<endl;
    return 0;
}