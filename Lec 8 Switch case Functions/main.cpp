#include<bits/stdc++.h>
using namespace std;

int main(){
    // we can use switch inside switch how

    char ch = '1';
    int num = 1;
    switch(ch){
        case 'a':
            cout<<"My character is a"<<endl;
            break;
        case '1':
            switch(num){
                case 1:
                    cout<<"The value of character variable is "<<num<<endl;
            }
        default:
            cout<<"Default case is not necessary"<<endl;
    }
    return 0;
}