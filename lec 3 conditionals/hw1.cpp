#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int ascii;
    ascii = (int) ch;
    if(ascii >= 97 && ascii <= 122){
        cout<<"LowerCase"<<endl;
    }
    else if(ascii >= 65 && ascii <= 90){
        cout<<"UpperCase"<<endl;
    }
    else{
        cout<<"Number"<<endl;
    }
    return 0;
}