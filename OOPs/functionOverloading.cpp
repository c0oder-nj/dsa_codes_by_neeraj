#include<bits/stdc++.h>
using namespace std;

class Hello{
    public:
        void greet(){
            cout<<"Hello user greetings";
        }

        int greet(){ // cannot overload funciton distinguisehd by just return type since vo function signatrue me nahi aata hai for more copy dekho 
            cout<<"Hello user greetings";
            return 1;
        }
};

int main(){
    
    return 0;
}