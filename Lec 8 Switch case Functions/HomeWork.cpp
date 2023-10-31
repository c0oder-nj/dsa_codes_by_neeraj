#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    cin>>amount;

    // 100 50 20 1
    int hundred_notes = amount/100;
    amount = amount%100; // 1330 % 100 -> 30
    int fifty_notes = amount/50;
    amount = amount%50; // 30%50 --> 30
    int twenty_notes = amount/20;
    amount = amount%20; // 10
    int one_notes = amount;

    cout<<"You need total "<<hundred_notes<<" notes of Hundred "<<fifty_notes<<" notes of fifty "<<twenty_notes<<" notes for twenty and "<<one_notes<<" notes for one."<<endl;
    return 0;
}