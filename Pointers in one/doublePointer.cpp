#include<bits/stdc++.h>
using namespace std;

// void update(int **ptr){
//     // ptr = ptr + 1;
    

//     *ptr = *ptr + 1;

//     // **ptr = **ptr + 1;
// }

void updateLove(int **p2) {

    // cout<<endl<<endl;
    // cout<<"Before updating p2 in update function: "<<p2<<endl;
    // p2 = p2 + 1;
    //kuch change hoga  - NO -- why since ye ek naya pointer banega jiska memory address alg hoga or vo alg address update hoga
    // cout<<"After updating p2 in update function: "<<p2<<endl;
    // but jab function ka execution khatam hoga toh iska stack delete ho jayega jisse ye copied p2 udhar affect nahi dalega

    // *p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}

int main(){
    int val = 5;
    int *ptr = &val;

    int **p2 = &ptr;

    /*
    cout<<*(ptr)<<endl; // de-referencing the pointer

    int **double_pointer = &ptr; // ** --> double level pointer or double pointer
    cout<<**double_pointer<<endl; // * --> double_pointer par jis pointer ka address hai pehle vaha jao 
    // then jis pointer par gaye us par jo address hai vaha ki value de do


    int ***tripplePointer = &double_pointer;
    cout<<***tripplePointer<<endl; // 5


    // printing addresses

    cout<<&ptr<<endl;
    cout<<double_pointer<<endl; // holds address of ptr
    cout<<*tripplePointer<<endl; // tripple pointer ko sirf ek baar de-reference krna mtlb ki
    // tripple pointer par jo address pada hai vaha jao 
    // since us pr double pointer ak address pada hua hai toh me vaha gaya toh 
    // uski value thi ptr ka address
    // so above three lines will print ptr pointer address
    

    cout<<val<<endl;
    cout<<ptr<<endl; // prints the address it holds that is address of val or &val
    // cout<<*ptr<<endl; // value at adddress it holds
    cout<<**p2<<endl; // p2 is my double pointer
    cout<<p2<<endl;
    // holds the address of antoher pointer
    // p2 par jo address pada hai dusre pointer ka vaha jao
    // fir us pointer that is ptr par aa gaye toh vaha jo address pada hai us par jao 
    // then us address ki value ko print kr do 

    update(p2);
    // cout<<val<<endl;
    cout<<ptr<<endl; // prints the address it holds that is address of val or &val
    cout<<*ptr<<endl; // value at adddress it holds
    cout<<**p2<<endl; // p2 is my double pointer
    cout<<p2<<endl;

    */

    cout << endl << endl;
    cout<< "before " << val << endl;
    cout<< "before " << ptr << endl;
    cout<< "before " << p2 << endl;
    updateLove(p2);
    cout<< "after " << val << endl;
    cout<< "after " << ptr << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;

    return 0;
}