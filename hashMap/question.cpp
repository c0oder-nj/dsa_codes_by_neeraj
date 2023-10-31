#include<bits/stdc++.h>
using namespace std;



int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    pair<int,int> ans(INT_MIN,INT_MIN); // first is my value second is its occurence

    map<int,int> :: iterator it = m.begin();

    while(it!=m.end()){
        // if(it->second > ans.second){
        //     ans.second = it->second;
        //     ans.first = it->first;
        // }
        // it++;

        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return ans.first;
}


int main(){
    vector<int> v= {4,-5,1};
    int size = v.size();

    cout<<maximumFrequency(v,size);

    
    return 0;
}