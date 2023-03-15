#include<bits/stdc++.h>
using namespace std;

void reverse(char *name, int n){
    int s=0;
    int end = n-1;
    while(s<=end){
        // swap(name[s++],name[end--]); // more optimized way doesn't need to mention explicitly pehle name[s],name[e] swap hoga then + and - hoga kyoki mene post increment use kiya hai 
        swap(name[s],name[end]);
        s++;
        end--;
    }
}

int main(){
    char name[20];
    cout<<"Enter name";
    cin>>name;

    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    cout<<"Length is "<<i<<endl;
    reverse(name,i);
    cout<<"Reversed name is "<<name<<endl;
    return 0;
}