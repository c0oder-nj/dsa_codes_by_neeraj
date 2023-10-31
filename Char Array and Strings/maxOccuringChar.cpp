#include<bits/stdc++.h>
using namespace std;

char maxOccurChar(string s){ // input string would always be of lowercase english alphabets
    int arr[26] = {0};
    int idx;
    for(int i=0; i<s.length(); i++){
        idx = s[i] - 'a';
        arr[idx]++;
    }

    int repeatCount = 0;
    int repeatingIndex = -1;
    for(int i=0; i<26; i++){
        if(arr[i]>repeatCount){
            repeatCount = arr[i];
            repeatingIndex = i;
        }
    }

    char ch = 'a' + repeatingIndex; // it will work since 'a' me jis bhi number ki index hai vo jodunga jaise maan lo mere arr[26] size me meri index aayi 25 par toh 'a' +25 vo de dega mujhe 'z' or since mene ye result ek char ch variabe me store kiya hai toh mera kaam isse ho jayega
    return ch;
}

int main(){
    string s;
    cin>>s;

    cout<<maxOccurChar(s)<<endl;
    return 0;
}