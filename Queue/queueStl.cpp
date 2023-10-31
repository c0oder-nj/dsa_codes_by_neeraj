#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(15);
    q.push(20);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl; // back is equivalanet to rear or deletion end

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Not empty"<<endl;
    }
    return 0;
}