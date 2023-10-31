#include<bits/stdc++.h>
#include "classFile.cpp"
using namespace std;

class Empty{

};

class Hero{
    public:
        int level;
        int showLevel(){
            return level;
        }
};
int main(){
    // creating object of that class in static memory in stack
    Hero h1;
    cout<<sizeof(h1)<<endl; // 4 in the case when only I have one integer value in class definition

    Empty e1;
    cout<<sizeof(e1)<<endl; // 1 in case of empty class

    exampleOfoutsideclass *ex = new exampleOfoutsideclass; // allocating dynamic memory to class object
    cout<<sizeof(ex)<<endl;


    cout<<sizeof(h1);
    delete ex;
    return 0;
}