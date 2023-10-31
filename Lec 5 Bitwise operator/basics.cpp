#include<bits/stdc++.h>
using namespace std;

int main(){
    int a =4;
    int b =6;

    // cout<<(a&b)<<endl;
    // cout<<~a<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;

    int8_t num = 148;
    cout<<(num<<1)<<endl;

    // char ch = 'J';
    // cout<<(int(ch)<<1)<<endl;


    // Right shift operator

    cout<<(15>>2)<<endl;


    // 17>>1 
    // 17>>2 
    // 19<<1
    // 19<<2

    // cout<<(17>>1)<<endl; // 8
    // cout<<(17>>2)<<endl; // 4
    // cout<<(17>>4)<<endl; // 1
    cout<<(17>>5)<<endl; // ?
    



    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    
    cout<<endl<<endl;

    int a_ = 3, i=2;
    int sum = a_ + (i++);
    cout<<sum<<" "<<i<<endl;


    
    return 0;
}