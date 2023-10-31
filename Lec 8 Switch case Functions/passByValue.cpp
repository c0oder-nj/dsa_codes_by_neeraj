#include<bits/stdc++.h>
using namespace std;

void dummy(int n){ // yaha pr jo value pass hui hai uski ek copy banegi jo ki mere naye variabel int n me store ho javegi this is known as passByValue()
    n++;
    cout<<"n is "<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    dummy(n); // value pass hui hai toh upar uski ek copy banegi

    cout<<"The value of n is "<<n<<endl;
    return 0;
}