#include<bits/stdc++.h>
using namespace std;


class human{

    int age;
    string name;

    public:

        human(int age, string name){
            this->age = age;
            this->name = name;
        }

        void getDetails(){
            cout<<"The name of human is "<<this->name<<" age is "<<this->age<<endl;
        }

};

int main(){
    human h(22,"Neeraj");
    h.getDetails();

    
    return 0;
}