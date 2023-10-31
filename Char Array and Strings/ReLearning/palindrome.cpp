#include<bits/stdc++.h>
using namespace std;

bool isFaltuChar(char ch){
    if(!((ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch<= 'Z') || (ch >= '0' && ch <= '9'))){
        return true;
    }else{
        return false;
    }
}

char toLower(char ch){
    if((ch>= 'a' && ch<='z') || (ch >= '0' && ch<='9')){
        return ch;
    }else{
        ch = ch - 'A' + 'a';
        return ch;
    }
}

bool isPalindrome(string s){
    int len = s.length();
    // cout<<s<<endl;
    string temp;

    for(int i=0; i<len; i++){
        if(!isFaltuChar(s[i])){
            s[i] = toLower(s[i]);
            temp.push_back(s[i]);
        }
    }

    // cout<<temp;

    int i=0; int j=temp.length()-1;
    while(i<j){
        if(temp[i]!=temp[j]){
            return false;
        }else{
            i++;j--;
        }
    }
    return true;

}

int main(){
    string s;
    getline(cin,s);

    s[1] = '\0';

    cout<<s[1]<<endl;
    cout<<s<<endl;
    // '\0' mujhe ye, ye de dega // basically kuchh output me nhi dikhega kyu ki null character mtlb kuchh nahi 
    // normal scenarios me ye apne ko permission nhi dega us null character ko access krne ki
    
    // if(isPalindrome(s)){
    //     cout<<"Palindrome "<<endl;
    // }else{
    //     cout<<"Palindorme nahi hai"<<endl;
    // }

    return 0;
}