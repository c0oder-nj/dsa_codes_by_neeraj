#include<iostream>
// using std::cout;
// using std::endl;
// using std::cin;

// inorder to make above all in one's we write 
using namespace std;

int main(){
    // int d;
    // cin>>d;
    cout<<"Hello there namaste duniya :-)"<<endl;

    //variable and data type
    // variable name can start with letter and _
    int _ = 10; // _ used as variable name here 
    cout<<_<<" size of _ is since it is int --> "<<sizeof(_)<<endl; // 4 byte

    char ch = 'a';
    cout<<_<<" size of ch is since it is char --> "<<sizeof(ch)<<endl; // character 1 byte

    float f = 1.2;
    cout<<f<<" size of ch is since it is float --> "<<sizeof(f)<<endl; // 4 byte

    double d = 1.23856;
    cout<<d<<" size of ch is since it is double --> "<<sizeof(d)<<endl; // 8 byte

    bool flag = true;
    cout<<flag<<" size of ch is since it is bool --> "<<sizeof(flag)<<endl; // 1 bit

    int A = 'A';
    cout<<"The Ascii value of A is --> "<<A<<endl;


    // type casting
    int a = 'a';
    cout<<"The Ascii value of a is --> "<<a<<endl;

    char ch1 = 97;
    cout<<"mene integer ko character me type cast kiya --> "<<ch1<<endl; // a
    

    // other methods of typecasting
    int a1 = 97;
    char ch2;
    ch2 = (char) a1; // here a1 my integer value is converted into char and stored in a char type variable
    cout<<ch2<<endl;

    


}