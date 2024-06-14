#include<bits/stdc++.h>
using namespace std;


// inheritance is class property in which one class inherits some properties from other class. 
// the class which inherits the property from other class is known as child class and the class from which the properties are being inherited is known as parent class
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

class Female: public Male{
    int preetinessLevel; // out of 10
    public:
        void setPreetiNessLevel(int level){
            this->preetinessLevel = level;
        }

        int getPreetinessLevel(){
            return this->preetinessLevel;
        }
};

int main(){
    
    // creating object of child class
    Male m1;
    m1.setWandAge(52,23);
    m1.setHeight(6);
    m1.print();

    m1.male();

    Female f;
    f.setHeight(5);
    f.setWandAge(55,23);
    f.setPreetiNessLevel(9);

    f.print();
    cout<<endl;
    cout<<"Preetiness is "<<f.getPreetinessLevel();


    return 0;
}