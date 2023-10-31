#include<bits/stdc++.h>
using namespace std;

// one class serves as a base class for more than one derived class

// several classes derived from only one base class 

class Employee{
    public:
        float salary;
        char grade;
};

class programmer:public Employee{
    public:
        void id(){
            cout<<"Programmer id is Binary"<<endl;
        }
};

class Manager:public Employee{
    public:
        void id(){
            cout<<"Manager id is manage krna "<<endl;
        }
};

int main(){

    Manager m;
    m.salary = 50000;
    m.grade = 'm';
    m.id();
    
    return 0;
}