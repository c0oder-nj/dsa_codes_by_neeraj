#include<bits/stdc++.h>
using namespace std;

class Hello{
    public:
        void greet(){
            cout<<"Hello user greetings";
        }


        // compile time polymorphism ya fir function overloading me signature alg alg hona chahiye fucntions ka with same name
        // signature -> function_name(param1, param2, param3....)

        int greet(){ // cannot overload funciton distinguisehd by just return type since vo function signatrue me nahi aata hai for more copy dekho 
            cout<<"Hello user greetings";
            return 1;
        }
};

int main(){
    
    return 0;
}