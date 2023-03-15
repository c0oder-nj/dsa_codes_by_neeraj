#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    // name = cin.get(); .get() can only be used with integers
    cout<<"\nYour name is "<<name<<endl;
    cout<<"Putting the null character"<<endl;
    name[2] = '\0';
    cout<<"your name is "<<name<<endl;
    return 0;
}