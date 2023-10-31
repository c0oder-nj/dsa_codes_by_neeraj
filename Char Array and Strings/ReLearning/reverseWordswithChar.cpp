#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i=0;int i_init = 0;
        int ind = 0;
        int cnt = 0;
        while(s[ind]!='\0'){
            // cout<<"The value of i is "<<i<<endl;
            if(s[i] == ' ' || i == s.length()-1) {
                i++;
                int si = i_init;
                int ei = cnt;
                while(si<ei){
                    swap(s[si],s[ei]);
                    si++;ei--;
                }
                i++;
                i_init = i;
                cnt += 2;
            }
            i++; cnt++;
            ind++;
        }
        return s;
    }
};


int main(){
    Solution obj;
    string s;
    getline(cin,s);
    cout<<s<<endl;
    s = obj.reverseWords(s);
    cout<<s<<endl;
    return 0;
}