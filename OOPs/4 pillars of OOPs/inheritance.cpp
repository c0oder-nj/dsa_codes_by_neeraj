#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;
    
        void setHeight(int height){
            this->height = height;
        }

        void setWandAge(int weight,int age){
            this->weight = weight;
            this->age = age;
        }

        void print(){
            cout<<height<<" Height| "<<weight<<" Weight| "<<age<<" age|"<<endl;
        }
};

class Male:public Human{
    public:
        string name;
        int testLevel;

    void male(){
        cout<<"Function inside male class"<<endl;
    }
};


int main(){
    
    // creating object of child class
    Male m1;
    m1.setWandAge(52,23);
    m1.setHeight(6);
    m1.print();

    m1.male();

    return 0;
}