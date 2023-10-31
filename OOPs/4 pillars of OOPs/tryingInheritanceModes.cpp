#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
        int privateMem;
    protected:
        int height;
        int weight;
        int age;

    public:

        int publicHeight = 125;

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

class Male:protected Human{
    private:
        // checking private member inherit hua ya nahi 
        // int privateNum = privateMem; // we cannnot access since private member inherit hi nahi hota kabhi 
    public:
        string name;
        int testLevel;

    void male(){
        cout<<"Function inside male class"<<endl;
    }

    void accessBaseClassMember(){
        cout<<"Height is "<<height<<" Age is "<<age<<" weight is "<<weight<<endl;
        // cout<<"Public height of base class that worked as private height of derived is "<<publicHeight<<endl;
    }
};

int main(){
    
    // creating object of child class
    Male m1;
    // m1.setWandAge(52,23);
    // m1.setHeight(6);
    // m1.print();

    

    m1.male();
    m1.accessBaseClassMember();

    return 0;
}