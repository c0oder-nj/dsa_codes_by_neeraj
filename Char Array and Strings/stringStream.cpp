#include<bits/stdc++.h>
#include<sstream>

// sstream --> it stands for stringStream | with the help of this class stringstream we can use string as stream
// streams are like our input stream and output stream
// in the case of i/p stream like operator '>>' we can read data (word) from string
// in the case of o/p stream like operator '<<' we can write data (word) to string

// 4 basic sstream class methods
// clear() --> clears the stream
// str()
// operator '<<' --> get data from string
// operator '>>' --> put data (word) into string


using namespace std;

int main(){

    string s;
    getline(cin,s);


    // creatin stringstream class and it's object
    stringstream ss; // creating stringstream class object with default construcut
    stringstream ss1(s); // creating stringstream class object with copy constructor


    // input and output operations
    // like any other stream you can perfom Like any other stream, you can perform input and output operations using the << (output) and >> (input) operators.

    string word;
    // ss1 >> word; // ss1 se output redirect ya daal do using outpt operator >> in word
    // cout<<word<<endl;

    // now printing every word from a string
    // while(ss1 >> word){ // ss1 stream me jab tak words hai tab tak usko word me daalte jao using output operator
    //     cout<<word<<" ";
    // }


    // using the methods clear 
    // if we want to clear our stream we can simply use 

    ss1.clear(); // it will clear error flags and other type of metadata from our class
    // ss1.str(); // it will take new string to pass as parameter | new string will become the buffer string for our stream

    // in order to empty buffer we use 
    ss1.str("");

    while(ss1 >> word){ // the loop will not executes since our ss1 stream is empty now
        cout<<word<<" ";
    }
    return 0;
}