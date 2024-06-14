#include<bits/stdc++.h>
using namespace std;


// polymorphism is the ability to take multiple forms


class A{
    public:
        int a;
        void sayHello(){
            cout<<"hello user "<<endl;
        }

        // void sayHello(){ // cannot be overloaded becuase the function signatures are ditto same
        //     cout<<"Hello user "<<endl;
        // }

        void sayHello(string name){ // function overloaded
            cout<<"Hello user " + name<<endl;
        }

        // int sayHello(){ // cannot overload function distinguish by return type alone
        //     return 1;
        // }


        // operator overloading 
        int operator-(A &objOfA){
            int firstVal = this->a;
            int secondVal = objOfA.a;

            return firstVal+secondVal;
        }
};

class Animal{
    public:
        void speak(){
            cout<<"Speaking ...."<<endl;
        }
};

class Dog:public Animal{
    public:
        void speak(){
            cout<<"Barking "<<endl;
        }
};

int main(){
    A obj1;
    // a.sayHello("Ramesh");
    obj1.a = 10;
    
    A obj2;
    obj2.a = 5;


    cout<<obj1-obj2<<endl; // - se + krwayega tumhara bhai 

    // cout<<obj1 + obj2; // jo pehla argument hoga uske corresponding call jayegi mere + operator ko toh mera this uska address store krega since vo perfrom krega as an current obj
    // so it will give me 5 
    // so + wale operator se subtraction krwa diya


    // function overriding
    Dog d;
    d.speak();
    
    return 0;
}