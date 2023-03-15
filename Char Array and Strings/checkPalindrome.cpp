#include <bits/stdc++.h> 
using namespace std;

char transform(char ch){
    if(ch>= 'a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    // transform(s.begin(),s.end(),s.begin(),::tolower); // isko jaha space milega saala vahi ruk jaega
    int len = s.length();
    cout<<"length is "<<len<<endl;
    cout<<s<<endl;
    bool flag = true;
    int start = 0;
    int end = len -1 ;
    while(start<=end){
        s[start] = transform(s[start]);
        s[end] = transform(s[end]);
        if(((s[start] >= 'a' && s[start] <= 'z') || (s[start] >= '0' && s[start] <= '9')) &&  ((s[end] >= 'a' && s[end] <= 'z') || (s[end] >= '0' && s[end] <= '9'))){
            if(s[start] == s[end]){
                flag = true;
            }
            else{
                flag = false;
            }
            start++;
            end--;
        }
        else{
            if((s[start] >= 'a' && s[start] <= 'z') || (s[start] >= '0' && s[start] <= '9')){
                end --;
            }
            else if((s[end] >= 'a' && s[end] <= 'z') || (s[end] >= '0' && s[end] <= '9')){
                start++;
            }
            else{
                start ++;
                end --;
            }
        }
    }
    return flag;

}

int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    if(checkPalindrome(s)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }
    return 0;
}