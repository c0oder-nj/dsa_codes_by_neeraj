#include<bits/stdc++.h>
using namespace std;

// a class is derived from a base class, which is also derived from another class
// just like animal derives --> dog, dog derives --> german shephered
// or just like grandfater --> father --> you

// deriving a class from already derived class


class Animal{
    public:
        int weight;
        string type;
};


class Dog:public Animal{
    public:
        void barK(){
            cout<<"Dog barks";
        }
};

class GermanShephered : public Dog{
    public:
        void Gspeaks(){
            cout<<"i am jerman shpehred"<<endl;
        }
};

int main(){

    GermanShephered g1;
    g1.Gspeaks();
    g1.type = "Mammel";
    
    return 0;
}