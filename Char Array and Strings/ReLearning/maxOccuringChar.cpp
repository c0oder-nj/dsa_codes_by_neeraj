#include<bits/stdc++.h>
using namespace std;



// approach using stl but what could be simple approach think isko bolte hai naive (nausikhiya ya beginner bachha approach)
// bool cmp(pair<char,int> &a,pair<char,int> &b){
//     return a.second>b.second;
// }

// char getMax(string s){
//     unordered_map<char,int> m;
//     for(int i=0; i<s.length(); i++){
//         m[s[i]]++;
//     }
//     vector<pair<char,int>> v;
//     for(auto tup:m){
//         v.push_back(tup);
//     }

//     sort(v.begin(),v.end(),cmp);

//     return v[0].first;

// }

  
// another approach (approach of a good programmer)
char getMax(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        arr[(s[i]-'a')]++;
    }
    int max_val = 0;
    int index = -1;
    for(int i=0; i<26; i++){
        if(arr[i]>max_val){
            max_val = arr[i];
            index = i;
        }
    }

    char ch = 'a' + index;
    return ch;
}

int main(){
    string s;
    cin>>s;

    char ch = getMax(s);
    cout<<ch<<endl;
    return 0;
}