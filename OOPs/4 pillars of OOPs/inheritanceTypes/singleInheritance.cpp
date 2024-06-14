#include<bits/stdc++.h>
using namespace std;

// single inheritance --> a derived class with only one base class.

class Animal{
    public:
        string type;
        int weight;
};


// class child_class_name : mode_of_inheritance Parent_class_name{}
class Dog: public Animal{
    public:
        void bark(){
            cout<<"dOG  bARKS"<<endl;
        }
};

int main(){

    Dog d;
    d.type = "mammel";
    d.weight = 25;
    d.bark();
    return 0;
}