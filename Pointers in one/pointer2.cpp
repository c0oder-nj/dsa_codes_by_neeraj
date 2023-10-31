#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Base address of your array is : "<<arr<<endl; // 0x61fee8 base addres of my array
    cout<<"Base address of your array is : "<<&arr[0]<<endl; // 0x61fee8 base addres of my array


    int i = 0;
    while(i<10){
        cout<<*(arr+i)<<" "; // printing array values without using [] or at operator
        // by only using pointer and and address incremention
        i++;
    }cout<<endl;


    // *arr
    // * value at arr
    // so since arr mera ek pointer tha jo array ke base address ko point kr raha tha ab uske saath me *arr use krunga toh arr ke base address par jo value hogi that is 1 since base addres means starting value 1 print hogi

    // cout<<*arr<<endl; // value at arr || arr ke base address par jo value hai 

    int idx = 2;

    // cout<<idx[arr]<<endl; // it will work as arr[idx] || or we can say || *(arr+i) || prints 3
    // cout<<arr[idx]<<endl; // 3
    // cout<<*(arr+idx)<<endl; // 3

    // above three are same



    // printing the base address
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<&arr<<endl;

    // int *ptr = &arr[0];

    // cout<<"Array base address in pointer: "<<ptr<<endl;
    // cout<<"Address of pointer ptr that holds array base address is "<<&ptr<<endl;

    cout<<arr<<endl; // array ka base addres 
    // so kya me is base address ko update kr skta hu just like
    // arr = arr + 1; // so that it points to next address block 
    // no we can't do this why
    // becuase ye value meri symbol table me store ho gai hai jisko me update nhi kr skta

    // instead I can do something like this 

    int *p = arr;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;

    return 0;
}