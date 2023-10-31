#include<bits/stdc++.h>
using namespace std;

// void swap_me(string &s,int i){
//     char temp = '@40';
//     s[i] = temp;
// }

int main(){
    string s;
    // char temp = '@40';
    
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            s.replace(i,1,"@40");
        }
    }

    cout<<s<<endl;

    return 0;
}