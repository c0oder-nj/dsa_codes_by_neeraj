#include <bits/stdc++.h> 
using namespace std;

bool removeFaltu(char ch){
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
    string temp;
    for(int i=0; i<s.length(); i++){
        if(removeFaltu(s[i])){
            if(!(s[i]>='0' && s[i] <= '9')){
                s[i] = toLower(s[i]);
            }
            temp.push_back(s[i]);
        }
    }
    // cout<<temp<<endl;
    int i = 0;
    int j = temp.length() -1;
    while(i<=j){
        if(temp[i++] != temp[j--]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);
    checkPalindrome(s);
    return 0;
}