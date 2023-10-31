#include<bits/stdc++.h>
using namespace std;

// Multiple inheritance --> multiple parnets class
// a class is derived from more than one base class

class Human{
    public:
        void speak(){
            cout<<"HUman is speaking"<<endl;
        }
};

class Animal{
    public:
        void bark(){
            cout<<"Animal barks"<<endl;
        }
};


class Hybrid:public Human, public Animal{
    public:
        void hybridSpec(){
            cout<<"I am hybird I have both characteristics"<<endl;
        }
};

int main(){
    Hybrid h1;
    h1.speak();
    h1.bark();
    h1.hybridSpec();
    return 0;
}