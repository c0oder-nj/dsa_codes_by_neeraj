#include<bits/stdc++.h>
using namespace std;

class software{
    int s_no;
    string series_value;
    public:
        void software_func(){
            cout<<"Sofware functionallity is this "<<endl;
        }

        void demo(){
            cout<<" demo function inside software"<<endl;
        }
};

class Hardware{
    string mac_add;
    public:
        void hardware_version(){
            cout<<"Hardware version is this "<<endl;
        }

        void demo(){
            cout<<"Demo function inside hardware"<<endl;
        }
};


class laptop : public software, public Hardware{
    public:
        void intro(){
            cout<<" Hello I am laptop I need hardware and software both "<<endl;
        }

        void demo(){
            // software::demo();
            cout<<"demo function inside derived class "<<endl;
            // pehle ye run hoga ye override kr dega software or hardware ke demo ko 
        }
};

int main(){
    
    laptop lap;
    lap.hardware_version();
    lap.software_func();
    lap.intro();
    
    // lap.demo(); // lap.demo() is ambiguos usko nahi pata kiska run kre 
    // lap.software::demo(); // in this way we can remove ambiguity using scop resolution operator
    // lap.Hardware::demo();

    lap.demo(); // it will run software class demo function
    return 0;
}