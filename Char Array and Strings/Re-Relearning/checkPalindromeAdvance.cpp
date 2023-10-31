#include<bits/stdc++.h>
using namespace std;

bool isFaltu(char ch){
    if((ch >= 'A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return false;
    }else{
        return true;
    }
}

char toLower(char ch){
    if(ch>='A' && ch<='Z'){
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string s){
    string temp;
    for(int i=0; i<s.length(); i++){
        // toLower(s[i]); // since strings are immutable I need to assign it like 
        if(!isFaltu(s[i])){
            s[i] = toLower(s[i]);
            temp.push_back(s[i]);
        }
    }

    int i=0;
    int j = temp.length()-1;

    cout<<temp<<endl;

    while(i<j){
        if(temp[i]!=temp[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);

    if(isPalindrome(s)){
        cout<<"String is palindrome"<<endl;
    }else{
        cout<<" not a palindrome"<<endl;
    }
    return 0;
}