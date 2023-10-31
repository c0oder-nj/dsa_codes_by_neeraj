#include<bits/stdc++.h>
using namespace std;

int score = 15;


// cout<<"Score OUtside: "<<score<<endl; // cannot print here because vo kisi function ke scope ke andr nahi hai why
// You cannot run code outside functions in C++. The compiler only expect variable declarations outside functions and, thus, expects std::cout to be a type, which it is not.

// since mera compiler sirf var declaration hi dekhega function ke bahar or agr mene cout likha since vo var nahi hai toh error milegi


void fun1(){
    cout<<"Score in function one: "<<score<<endl;
}

int main(){
    cout<<"Score in main function "<<score<<endl;
    fun1();
    
    return 0;
}