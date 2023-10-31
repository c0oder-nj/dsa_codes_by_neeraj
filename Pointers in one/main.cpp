#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    num = 5;

    // & --> address of operator used to show address of any variable
    cout<<&num<<endl; // 0x61ff0c

    // pointer --> variable to store address of other variables
    // datatype *pointer_name = NULL;
    // a good approach
    // a bad approach includes declaration but intialization with null so apna pointer aisi memory garbage memory address ko point kra de  jo ki exist hi nhi krti memory me

    // how we read pointers
    // ptr is pointer that points to int datatype


    int *ptr = &num;  // it is the syntax to declare and use pointers 
    // lets break this
    // int *ptr --> means mene ek pointer banaya jo ki ek int dataype ke address ko hold krega
    // now = ke baad me vo address likhunga ya retreive krunga jo mujhe apne pointer me store krana hai
    // in our case address of o/p se apn ne &num ka address le liya or use *ptr ke memory block me store kra diya

    cout<<ptr<<endl; // if i print ptr only so it prints the address it holds || address of num

    cout<<*ptr<<endl; // * --> here * represents de-referencing operator means ki 
    // ptr par jo address pada hai us address par jao or vaha jo value hai vo do 
    // if we print only ptr so it will only give as the address
    // so for printing value at address we use * operator

    // *ptr --> value at pointer ptr --> value at address, that stored in pointer ptr


    // doing some bad practice
    // int *p;
    // cout<<*p<<endl; // 6422404 garbage value
    // cout<<p<<endl; // 0x61ff54 address of garbage value


    // for above bad practice 
    // int *p = 0;
    // cout<<*p<<endl; // both the lines will not execute run krke dekh lo 
    // cout<<p<<endl; // 


    // int *p = nullptr;
    // cout<<*p<<endl; // both the lines will not execute run krke dekh lo 
    // cout<<p<<endl; // 


    int *p = 0;
    p = &num;

    // int *p = &num; // above two lines and this line is same

    // cout<<p<<endl;
    // cout<<*p<<endl;


    // incrementing value using pointer
    // *p++ pointer ko badha degi pehle p++ hojayega then * hoga so we should need to use ()
    //  (*p) gives value
    (*p)++;
    cout<<num<<" "<<*p<<endl;


    // copying a pointer
    int *q = 0;
    q = p; // so I assinged a pointer to another pointer

    cout<<p<<endl; // 0x61ff00
    q = q + 1; // by this my q points to the next address since yaha int hai toh uski size hoti hai 4 byte toh 4 se increment hoga
    cout<<q<<endl; // 0x61ff04

    // cout<<*q<<endl;



    return 0;
}