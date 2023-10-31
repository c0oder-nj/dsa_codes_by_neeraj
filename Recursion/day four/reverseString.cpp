#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& s,int i,int j){
  

    // if i becomes greater than j
    if(i>j){
        return;
    }

    else{
        swap(s[i],s[j]);
        i++;j--;
        reverseStr(s,i,j);
    }
}

int main(){
    string s;
    cin>>s;


    reverseStr(s,0,s.length()-1);
    cout<<s<<endl;


    return 0;
}