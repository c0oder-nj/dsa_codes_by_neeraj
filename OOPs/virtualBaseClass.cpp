// virtual base class we will use in hybrid inheritance jab derived class ke pass 
// same method ki do copies create ho jayengi 
// at that place we will use virtual base class
// we create our super class as virtual class
// the child intermediate class will inherit from this super class as
// virutal 


#include<bits/stdc++.h>
using namespace std;

class  super{
    public:
        void greet(){
            cout<<"Hello kaise ho ?"<<endl;
        }
};

class base1:virtual public super{

};

class base2:virtual public super{

};

class derived: public base1, public base2{

};

int main(){

    derived d;
    d.greet(); // ambiguity raise nhi hui derived class ke pass only one copy aayi greet ki or vo run ho gaya
    
    return 0;
}