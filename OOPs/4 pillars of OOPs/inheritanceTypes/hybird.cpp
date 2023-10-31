#include<bits/stdc++.h>
using namespace std;

class Animals{
    public:
        virtual void animal(){
            cout<<"Animal is an umbreall term base class 1"<<endl;
        }
};

class Mammals:public Animals{
    public:
        void mammal(){
            cout<<"Mammal are part of animal "<<endl;
        }
};


class Herbivourous:public Animals{
    public:
        void herbi(){
            cout<<"Herbivourous are part of animals"<<endl;
        }
};

class Cow:public Herbivourous,public Mammals{
    public:
        void cow(){
            cout<<"Cow is a type of both herbivouros and mammals"<<endl;
        }
};



int main(){

    Cow c;
    c.Mammals::animal(); // resolving ambiguity using scopre resolution opeator
    c.mammal();
    c.herbi();
    c.cow();
    
    return 0;
}