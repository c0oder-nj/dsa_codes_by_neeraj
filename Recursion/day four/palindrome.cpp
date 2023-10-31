#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i,int j){
    // base case 
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        // i++;j--;
        return isPalindrome(s,++i,--j); // if we want to pass variable here so make sure you use pre increment
    }
}

int main(){
    string s;
    cin>>s;

    cout<<isPalindrome(s,0,s.length()-1);
    return 0;
}