#include<bits/stdc++.h>
using namespace std;

// Binding data member and functions in same entity knowns as class
// data memeber --> properties or state
// functions --> methods or behavious

class Student{
    int age;
    float height;
    string name; // string ka color different kyu hai kyuki string bhi ek class hi hai 

    public:
        int getHeigh(){
            return height;
        }

        void print(){
            cout<<"age is "<<age<<" height is "<<height<<" name is "<<name<<endl;
        }

        Student(string name,int age,int height){
            this->name = name;
            this->age = age;
            this->height = height;
        }
};

int main(){

    Student s("Niraj",21,5.6);
    cout<<s.getHeigh()<<endl; // 5
    s.print();

    // so with the above class student we achieved encapsulation we bind data memebers and function in one entity called student class
    
    return 0;
}