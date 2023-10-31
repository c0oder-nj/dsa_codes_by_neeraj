#include<bits/stdc++.h>
using namespace std;

int getLength(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

bool checkPalindrome(char* str,int len){
    int s=0;
    int e=len-1;
    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;e--;
    }
    return true;
}

int main(){
    char string[20];
    cout<<"Enter your string: ";
    cin>>string;
    int len = getLength(string);
    if(checkPalindrome(string,len)){
        cout<<"String is Palindrome"<<endl;
    }else{
        cout<<"No Palindrome"<<endl;
    }

    return 0;
}