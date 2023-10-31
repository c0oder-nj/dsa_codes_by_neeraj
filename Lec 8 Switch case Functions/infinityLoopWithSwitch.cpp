#include<bits/stdc++.h>
using namespace std;

int main(){
    int choice;
    while(1){
        cout<<"1 - Good Morning"<<endl;
        cout<<"2 - Good Evening"<<endl;
        cout<<"3 - Good Night"<<endl;
        cout<<"4 - Exit Koi Greeting Nahi"<<endl;
        cout<<"/nSelect Your choices: ";
        
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Good Morning Sir"<<endl;
                break;
            case 2:
                cout<<"Good Evening sir "<<endl;
                // break;
                continue;
            case 3:
                cout<<"Good Night sir"<<endl;
                break;
            case 4:
                exit(0); // exit(exit_value) exit value could be 0 or any other number 0 represent successfull termination of program and other numbers represent termination with some error
        }


    }
    return 0;
}