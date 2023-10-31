#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    // checking iterations
    static int iteration = 1;
    cout<<"You are at "<<iteration<<" iteration."<<endl;
    iteration++;

    // base case
    // kisi bhi number ki power 0 hogi toh uski value one hoti hai 
    if(b==0){
        return 1;
    }
    if(b == 1){ // e.g. 2^1 --> 2 || a^1 --> a
        return a;
    }
    else{

        int ans = power(a,b/2);

        if(b&1){ // b&1 --> 1 dega odd ke case me since odd digits ki rightmost bit always hoti hai or even digit ki rightmost bit alway 0 hoti hai
            return a*ans*ans; // since mujhe dono jagah same value use hogi so i stored it in variable 
            // if I do like return a*power(a,b/2)*power(a,b/2); 
            // it will work but doubles the number of function calls
        }
        else{
            return ans*ans;
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"the valeu of "<<a<<"^"<<b<<" is: "<<power(a,b)<<endl;
    return 0;
}