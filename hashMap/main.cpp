#include<bits/stdc++.h>
using namespace std;

// https://www.tutorialspoint.com/data_structures_algorithms/hash_data_structure.htm

int main(){

    // map --> we have two types of map 
    // map stores data in key value format you have unique keys for every value and not two values can contain the same key
    // ordererd --> map<key dt,val dt> map_name; --> stores data in ordered
    map<string,int> m;

    m["Niraj"] = 2; // map m ke andr key banao "Niraj" uski value krdo 2

    // way for insertion pair bana kr insert krna
    pair<string,int> p = make_pair("Harsh",3);
    m.insert(p);

    pair<string,int> pair2("sahil",3);
    m.insert(pair2);
    cout<<m.at("sahil")<<endl;

    // cout<<m.at("NITIN1")<<endl; // it will aboart the program
    // terminate called after throwing an instance of 'std::out_of_range'
//   what():  map::at
    cout<<m["NITIN"]<<endl; // it creates a new entry for corresponding key and intialize its value with 0


    cout<<m.size()<<endl;

    auto it = m.find("Niraj");
    // cout<<(*it).first<<endl;
    cout<<it->first<<endl;

    cout<<m.size()<<endl;
    m.erase("sahil");
    cout<<m.size()<<endl;

    return 0;
}