#include<bits/stdc++.h>
using namespace std;

int getLenght(char* name){
    int len=0;
    for(int i=0; name[i]!='\0'; i++){
        len++;
    }
    return len;
}

int main(){
    char name[20];
    cin>>name;
    cout<<getLenght(name);
    return 0;
}