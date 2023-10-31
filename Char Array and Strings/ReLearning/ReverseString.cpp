#include<bits/stdc++.h>
using namespace std;

int getLen(string s){
    int cnt=0;
    for(int i=0; s[i]!='\0'; i++){
        cnt= (i+1);
    }
    return cnt;
}

int main(){
    string s;
    cin>>s;

    int len = getLen(s);

    // two pointer approach 
    int i=0,j=(len-1);
    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }

    cout<<s<<endl;
    return 0;
}