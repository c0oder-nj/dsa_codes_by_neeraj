#include<bits/stdc++.h>
using namespace std;


// functions --> program that have well defined task basically jo chij ham baar baar return kr rahe hai usko function ke andr bound kr do jisse bs us function ko call krne se vo task perform ho jaye har jagah

/*
function declration
return_type function_name(parameter);
int pow(int a,int b);


function declaration with definition
return_Type function_name(parameter){
    // code you want to write
}

int power(int a,int b){
    // code
}

*/

int power(int a,int b){
    int ans = 1;
    int i=1;
    while(i<=b){
        ans *= a;
        i++;
    }
    return ans;
}

// function signature
bool isEven(int num){
    // function body
    if(num%2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // cout<<power(2,10)<<endl;
    // cout<<power(2,5)<<endl;
    // cout<<power(3,2)<<endl;

    cout<<isEven(5)<<endl;
    cout<<isEven(6)<<endl;
    return 0;
}