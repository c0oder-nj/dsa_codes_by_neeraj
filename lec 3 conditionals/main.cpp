#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    // cin>>a; // cin won't read escape sequence characters like \n, \t etc
    // if(a){
    //     cout<<"a has a +ve value"<<endl;
    // }
    // else{
    //     cout<<"NO has value";
    // }

    // in order to read space we can use cin.get() method 
    a = cin.get(); // so it will read my integer value as character so if i give 1 so it assumes it as 1 character and the value of character 1 is 49 in ascii table so it will print 49
    // what if we give int value out of single character range


    // cout<<"The value of a is --> "<<a<<endl;
    // cout<<sizeof(a)<<endl;

    // checking cin>> kaha se read krna start krta basically left to right hi krta hai mingw me shayad;

    // char ch;
    // cin>>a;
    cout<<"value of a --> "<<a<<endl;
    
    return 0;
}