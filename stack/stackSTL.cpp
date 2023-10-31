#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<s.empty()<<endl; // 0
    s.emplace(25);
    cout<<s.top()<<endl;

    cout<<"Size of stack is "<<s.size()<<endl;
    
    return 0;
}