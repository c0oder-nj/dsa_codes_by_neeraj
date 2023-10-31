#include<bits/stdc++.h>
using namespace std;

// single inheritance --> a derived class with only one base class.

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

int main(){

    Dog d;
    d.type = "mammel";
    d.weight = 25;
    d.barK();
    
    return 0;
}