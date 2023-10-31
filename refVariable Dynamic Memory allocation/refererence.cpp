#include <bits/stdc++.h>
using namespace std;

void update(int n)
{
    n++;
}

void updateByRef(int &ref)
{
    ref++;
}



int main()
{
    int val = 5;

    /*

    // creating a reference variabel that points to j
    int &j = val;
    // you can also write like int& j = val;


    cout<<val<<endl; // 5

    j++;

    cout<<val<<endl; // 6

    ----------->

   cout<<"Before updating val using update function "<<val<<endl;
   update(val); // call by value || pass by value || value pass krte hai jiski copy create ho jaati hai
    // pass by value me, memory ke andr ek naya variable create hota hai function calling ke andr
    // ek variable pass kiya toh uski ek copy ban jayegi update funciton ke andr
    // then vo copy update hogi na ki actual val
   cout<<"After updating val using update function "<<val<<endl;

   

    int &ref = val;
    cout << "Before updating val using update function " << val << endl;
    updateByRef(ref); // call by reference || pass by ref || sirf memory location ka ref pass krte hai
      //    jisse function us memory location par jaa kr variable access kr leta hai
      // isse nayi memory allocate nahi hoti passed variable ke liye
      // variable ka reference pass kiya since vo reference mere variabel ko directly point kr raha tha
      // toh mera var update ho gaya
      // same memory location hoti hai bs usko ab original name as well as reference variable ke saath bhi call kr skte hai 
    cout << "After updating val using update function " << val << endl;

    */

    return 0;
}