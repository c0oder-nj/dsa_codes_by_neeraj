#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(ch >= 97 && ch <= 122){ // ascii range for lower letters
        cout<<"Lower Case";
    }
    else if(ch>=65 && ch<=91){ // ascii range for capital letters
        cout<<"Upper Case1";
    }
    return 0;
}