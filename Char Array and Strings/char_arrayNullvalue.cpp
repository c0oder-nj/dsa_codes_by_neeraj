#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[20];
    string s_name;
    cout<<"Enter your name: ";
    // cin>>name;
    // cin.getline(name,20); // in the case of char array we should use cin.getline() function for giving full input
    // if we save name value in a string obj then we don't need to specify the buffer size as the second parameter of getline() function
    // in the case of charArray's we need to specify buffer size
    // name = cin.get(); .get() can only be used with integers

    // cin>>s;
    // getline(cin,s); we can also use this the above one will not take space in input | space tab newline
    cout<<"\nYour name is "<<name<<endl;
    cout<<"Putting the null character"<<endl;
    name[2] = '\0';
    cout<<"your name is "<<name<<endl;
    return 0;
}