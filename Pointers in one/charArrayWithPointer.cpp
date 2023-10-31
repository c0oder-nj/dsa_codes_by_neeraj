#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout<<arr<<endl; // here arr holds the base addres and prints the base address in the case of integer array
    cout<<ch<<endl; // in the case of char array ch does hold address but it present all elements until it found null character that is '\0'

    // thsi means integer array or character array ke liye cout function different behaviour deta hai 

    char *c = &ch[0];
    cout<<c<<endl; // prints entire string since mera pointer ek char type ke address ko point kr raha hai or character array ke case ke liye cout ki impelementation hi kuchh is tarah se ho rakhi hai 


    char temp = 'n';
    char *cp = &temp;

    // cout<<temp<<endl;
    cout<<*(cp+1)<<endl; // ☺ memory se mili emoji
    return 0;
}