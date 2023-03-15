#include<bits/stdc++.h>
using namespace std;

void maxOccurence(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        int num = 0;
        if(s[i] >= 'a' && s[i] <='z'){
            num = s[i] - 'a';
        }
        else{
            num = s[i] - 'A';
        }
        
            arr[num]++;
            cout<<num<<" "<<arr[num]<<endl;
    }
    int max = -1;
    // int max = *max_element(arr,arr+26);
    int occur = 0;
    for(int i=0; i<26; i++){
        if(arr[i]>max){
            max = arr[i];
            occur = i;
        }
    }

    cout<<max<<endl;
    // char ans = 'a' + occur;
    // occur = (char) occur;
    // occur = occur + 96;
    cout<<"Max Element is "<<(char)(occur+97)<<" Occured as "<<max<<" times."<<endl; // occur + 96 inorder to convert my index value into lowercase characters ascii value
    // cout<<ans<<endl;
}
int main(){
    string s;
    getline(cin,s);
    maxOccurence(s);
    return 0;
}