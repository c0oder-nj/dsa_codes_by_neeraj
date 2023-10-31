#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string op;

    stack<char> st;
    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }

    while(!st.empty()){
        op.push_back(st.top());
        st.pop();
    }

    cout<<op<<endl;
    return 0;
}