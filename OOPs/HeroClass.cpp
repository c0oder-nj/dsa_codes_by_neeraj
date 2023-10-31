#include<bits/stdc++.h>
using namespace std;

class Hero{
    // private variables are only accessible inside the class 
    // private data members are limited to class scope
    int health;
    char level;


    protected:
        int protect_var_ToCheck = 100;
        // protected variables are also not accessible outside the class scope


    public:
        string name;

        void getHealth(){
            cout<<"The health is "<<health<<endl;
        }

        void getLevel(){
            cout<<"The level is "<<level<<endl;
        }

        void setHealth(){
            cout<<"Enter the health to set: ";
            cin>>health;
        }

        void setLevel(){
            cout<<"Enter the level to set: ";
            cin>>level;
        }

        
        // constructor
        Hero(){
            cout<<"Default constructor called"<<endl;
        }

        Hero(int health,char level){
            this->health = health;
            this->level = level;
        }


        // creating copy constructor
        // Hero(Hero &tempObj){
        //     // this->level --> jo bhi object copy constructor ko call krega uska level
        //     // this current object ka address
        //     // this works as pointer
        //     cout<<"Mera banaya hua copy constructo"<<endl;
        //     this->level = tempObj.level;
        //     this->health = tempObj.health;
        // }


        // destructor
        ~Hero(){
            cout<<"Destructor Called"<<endl;
        }
    

    // static member
    static int timeTocomple;

    // static function
    static int dummy();
};

// intializing static memebr
int Hero::timeTocomple = 5;

int Hero::dummy(){
    return timeTocomple;
}

int main(){
    // Hero ramesh; // static allocation 
    // ramesh.name = "Ramesh"; // you can only set public variables outside the class
    // for setting private variables we shoudl use getter and setter function
    // getter --> get private variables
    // setter --> set value to the private variable
    // ramesh.setHealth();
    // ramesh.setLevel();


    // ramesh.protect_var_ToCheck<<endl; // protected variables are also similar to the private varibles we can't access them outside the class



    // dynamically creating object of class in heap
    /*
    Hero *newHero = new Hero; // dynamic allocation
    // de-referencing the pointer
    (*newHero).name = "Shakti Man";
    (*newHero).setHealth();

    newHero->getHealth();
    cout<<endl;
    cout<<newHero->name<<endl;
    */


//    Hero *h = new Hero; // dynamic allocation
//    h->name = "Mathur";
//    (*h).setHealth();
//    (*h).getHealth();

//    delete h;




    // constructors --> used to initialize object at the time of creation

    // constructor should be created in public scope since if we create it in private then when we create object the construct isn't able toh call itself because of the boundation of private access specifier

    // Hero *h1 = new Hero; 
    // h1->name = "NITIN";


    Hero *h1 = new Hero(85,'B'); // inorder to use parameterized constructor with dynamically allocated objects
    h1->getHealth();
    h1->getLevel();
    delete h1;


    // parameterized constructo
    // Hero h1(85,'A');
    // h1.getHealth();
    // h1.getLevel();


    // Copy Constructor
    // Hero Suresh(85,'B');
    // Suresh.getHealth();
    // Suresh.getLevel();

    // Hero Ritesh(Suresh); // calling default copy constructor that will copy values from Suresh --> ritesh
    // Ritesh.getHealth();
    // Ritesh.getLevel();



    // Copy Constructor
    Hero Suresh(85,'B');
    Suresh.getHealth();
    Suresh.getLevel();

    cout<<endl<<"Suresh is created now creating Ramesh from suresh then see the addresses"<<endl;

    // Hero Ritesh(Suresh); // Now our construct will going to call since mene khud se copy constructor bana liya toh default wala hat jayega
    // Ritesh.getHealth();
    // Ritesh.getLevel();


    Hero Ramesh(Suresh);
    Ramesh.getHealth();
    Ramesh.getLevel();

    Suresh.setHealth();
    cout<<endl<<"Suresh health has been changed"<<endl;
    Suresh.getHealth();
    Ramesh.getHealth();

    cout<<endl<<"Address of Ramesh is "<<&Ramesh<<endl;
    cout<<endl<<"Addres of Suresh is "<<&Suresh<<endl;






    // Hero obj; // construct will call 1 || destruct will called 3

    // Hero *obj2 = new Hero; // construct will call 2 || destructor will not called

    // so jo objects ap static allocation ke through allocate krwate ho uske liye hi destructor automatically call hota hai dynamically allcoated objects ke liye destructor call nahi hota hai 


    // delete obj2;


    // accessing static member without the object initialization
    // cout<<Hero::timeTocomple<<endl;
    // cout<<Hero::name<<endl; // cause error says invalid use of non static data member


    // cout<<Hero::dummy()<<endl; // static function can only access static member


    return 0;
}