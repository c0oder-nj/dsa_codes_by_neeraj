#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[20];
    cin>>name;
    name[2] = '\0'; // now it only prints the first 2 character not more than that
    cout<<name;
    return 0;
}