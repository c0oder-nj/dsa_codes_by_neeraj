#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        void greet(){
            cout<<"Hello Human"<<endl;
        }
};

class Man: public Human{
    public:
        void greet(){
            cout<<"Hello Man "<<endl;
        }
};

class indianMale : public Man{
    public:
        void level(){
            cout<<" very high "<<endl;
        }
};

int main(){

    indianMale *newObj = new indianMale;
    newObj->greet(); // hello human
    
    return 0;
}